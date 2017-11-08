namespace Vuforia {
    using System.Collections.Generic;
    using UnityEngine;

    public class DrawTrajectory : MonoBehaviour {
        public GameObject parentObject;
        public Material transparent;

        //public
        public float speed = 18.0f; // the initial speed
        public float angle = 45.0f;// give an initial angle

        private Vector3 start; // start points
        private Vector3 end; // end points

        private float angle_r = 0.0f;// angle_r in radiant
        private float timeResolution = 0.02f;
        private float maxTime = 0.0f;
        public GameObject startPoint;
        public List<GameObject> dot = new List<GameObject>();

        public GameObject dott; //creating dots
        public int addDot = 0;

        //private
        private Vector3 Velocity_Vector;
        private Vector3 scaleVector = new Vector3(0.05f, 0.05f, 0.05f);     // found through testing and observation (can be changed)

        //private Sphere sphere;
        private float Velocity_Y = 0.0f;
        private float Velocity_X = 0.0f;
        private int index = 0;
        private float gravity = Physics.gravity.magnitude;

        //draw path variables
        private List<Vector3> positions = new List<Vector3>();
        private LineRenderer trajectory;
        public GameObject path;

        // determine whether to start drawing dots
        public bool startDrawing;

        // Use this for initialization
        void Start() {
            start = startPoint.transform.position;
            //first get the radiant
            angle_r = (angle / 180.0f) * Mathf.PI;
            Velocity_X = speed * Mathf.Cos(angle_r);
            Velocity_Y = speed * Mathf.Sin(angle_r);

            maxTime = (2.0f * Velocity_Y) / 9.81f;
            startPoint.transform.rotation = Quaternion.Euler(angle, 0.0f, 0.0f);
            startDrawing = true;
        }

        void Update() {
            if (startDrawing)
                drawDots(); // checks if startDrawing is true
        }

        void drawDots() {
            //int maxIndex = 9 * (int)(maxTime / timeResolution);    // draw dots from 0-9 (10 in total)
                                                                   //Debug.Log (maxIndex);
            timeResolution += 0.25f;

            float dx = speed * timeResolution * Mathf.Cos(angle * Mathf.Deg2Rad);
            float dy = speed * timeResolution * Mathf.Sin(angle * Mathf.Deg2Rad) - (gravity * timeResolution * timeResolution / 2.0f);

            Vector3 currentPosition = new Vector3(start.x + dx, start.y + dy, 0); //change from 0 to 2
            positions.Add(currentPosition);


            if (positions[index].y <= start.y && index > 1) {       //makes sure that the points are drawn till the position is <= the starting y-position
                drawTrajectory();
                return;
            }

            if (addDot % 2 == 0) {
                GameObject newDot = Instantiate(dott, currentPosition, transform.rotation); // draw all dots that are divisble by 2

                newDot.transform.parent = parentObject.transform;
                newDot.transform.localScale = scaleVector; // resizes createdDot to be the same size as startPoint

                dot.Add(newDot);
            }

            addDot++;
            index++;
            Debug.Log(index);
        }

        void drawTrajectory() {
            int count = 0;
            trajectory = path.GetComponent<LineRenderer>();

            Vector3[] coordinates = new Vector3[positions.Count];
            trajectory.positionCount = index;
            positions.CopyTo(coordinates);

            while (count < index) {
                trajectory.SetPosition(count, coordinates[count]);
                count++;
            }

            startDrawing = false; 
        }
    }
}