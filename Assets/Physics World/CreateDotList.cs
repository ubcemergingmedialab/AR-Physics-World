namespace Vuforia {
    using UnityEngine;
    using System.Collections.Generic;

    public class CreateDotList : MonoBehaviour {
        public GameObject dott;
        public float arDist;

        public Material newMaterial;
        public Material oldMaterial;
        public LineRenderer trajectory;

        //for calculating diffference
        public DrawTrajectory spacedot;
        private int count = 0;
        private int dotsOnTrajectory;
        private List<GameObject> dotList = new List<GameObject>();

        public void Update() {
            dotsOnTrajectory = spacedot.dot.Count;  // in Update because dots would not draw if declared in Start()

            checkScreenTouched();
            resetScreen();
        }

        void checkScreenTouched() {
            foreach (Touch touch in Input.touches) {
                if (touch.phase == TouchPhase.Began && count < dotsOnTrajectory) {
                    createTouchDot(touch.position);
                }
            }
        }

        void resetScreen() {

            if (Input.GetKeyDown(KeyCode.Escape)) {     // if the back button on an Android phone is touched, reset the trajctory
                foreach (GameObject createdDot in dotList)
                    Destroy(createdDot);

                dotList.Clear();
                trajectory.material = oldMaterial;

                for (int i = 0; i < count; i++) {
                    spacedot.dot[i].GetComponent<Renderer>().material = oldMaterial;
                }
                count = 0;
            }
        }

        void createTouchDot(Vector3 position) // if Vive trigger is pressed
        {
            Vector3 touchPos = position;                      
            float relativeDist =  Camera.main.transform.position.z - arDist;
            touchPos.z = Mathf.Abs(relativeDist);                                             // distance from camera of ImageTarget

            Vector3 placeDot = Camera.main.ScreenToWorldPoint(touchPos);

            dotList.Add(Instantiate(dott, placeDot, transform.rotation));  // keep z-position at 0 so that the dots stay along the trajectory line
            displayDots(touchPos, count);
            count++;
            displayTrajectory();
        }

        void displayDots(Vector3 position, int index) {
            float dist = 0;


            if (spacedot.dot.Count > 0 && index < spacedot.dot.Count) {
                GameObject closestDot = spacedot.dot[index];
                dist = Vector3.Distance(closestDot.transform.position, position); // calculate the distance from the trajectory to the input
                Debug.Log(dist);
                //mText.text = "Error: " + dist;
                closestDot.GetComponent<Renderer>().material = newMaterial; //changes the material from transparent to green
                
            }
        }

        void displayTrajectory() {
            if (count >= spacedot.dot.Count)
                trajectory.material = newMaterial; //changes the line of the trajectory to be visible
        }
    }
}