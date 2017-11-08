#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.IntPtr[]
struct IntPtrU5BU5D_t4146703665;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t4150481920;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t3487098661;
// System.Version
struct Version_t2385711456;
// System.Reflection.Assembly
struct Assembly_t2972719439;
// System.Byte[]
struct ByteU5BU5D_t2551819633;
// System.Collections.IEnumerator
struct IEnumerator_t2769184415;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1698416664;
// System.UInt32[]
struct UInt32U5BU5D_t1578732421;
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1035352920;
// System.UInt64[]
struct UInt64U5BU5D_t662500805;
// System.Collections.ArrayList
struct ArrayList_t768266056;
// System.Collections.Hashtable
struct Hashtable_t4200525586;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t566780172;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t338680056;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t1909888532;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1416040510;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t2434552715;
// System.Security.Cryptography.RSA
struct RSA_t880491902;
// System.Void
struct Void_t3433708806;
// System.Security.Cryptography.DESTransform
struct DESTransform_t1408007698;
// System.Char[]
struct CharU5BU5D_t1826410835;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3742586126;
// System.Security.Cryptography.DSA
struct DSA_t222173602;
// System.UInt16[]
struct UInt16U5BU5D_t525552825;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3031315588;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t3255016931;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t43567732;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t4056048164;
// System.Security.Cryptography.TripleDES
struct TripleDES_t3823069722;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t35727958;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t2877871052;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1250904775;
// System.Byte[,]
struct ByteU5BU2CU5D_t2551819634;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T1017996714_H
#define EXCEPTION_T1017996714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1017996714  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4146703665* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1017996714 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4146703665* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4146703665** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4146703665* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ___inner_exception_1)); }
	inline Exception_t1017996714 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1017996714 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1017996714 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1017996714, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1017996714_H
#ifndef STRONGNAME_T2276067545_H
#define STRONGNAME_T2276067545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t2276067545  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t3487098661 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t2385711456 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t2276067545, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t3487098661 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t3487098661 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t3487098661 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t2276067545, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t2276067545, ___version_2)); }
	inline Version_t2385711456 * get_version_2() const { return ___version_2; }
	inline Version_t2385711456 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t2385711456 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T2276067545_H
#ifndef HASH_T253340281_H
#define HASH_T253340281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t253340281  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t2972719439 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t2551819633* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t253340281, ___assembly_0)); }
	inline Assembly_t2972719439 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t2972719439 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t2972719439 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t253340281, ___data_1)); }
	inline ByteU5BU5D_t2551819633* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t2551819633** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t2551819633* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T253340281_H
#ifndef EVIDENCEENUMERATOR_T3804313988_H
#define EVIDENCEENUMERATOR_T3804313988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t3804313988  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t3804313988, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t3804313988, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t3804313988, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T3804313988_H
#ifndef APPLICATIONTRUST_T2405358150_H
#define APPLICATIONTRUST_T2405358150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t2405358150  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_0;

public:
	inline static int32_t get_offset_of_fullTrustAssemblies_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2405358150, ___fullTrustAssemblies_0)); }
	inline RuntimeObject* get_fullTrustAssemblies_0() const { return ___fullTrustAssemblies_0; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_0() { return &___fullTrustAssemblies_0; }
	inline void set_fullTrustAssemblies_0(RuntimeObject* value)
	{
		___fullTrustAssemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T2405358150_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T3487098661_H
#define STRONGNAMEPUBLICKEYBLOB_T3487098661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t3487098661  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t2551819633* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t3487098661, ___pubkey_0)); }
	inline ByteU5BU5D_t2551819633* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t2551819633** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t2551819633* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T3487098661_H
#ifndef TOBASE64TRANSFORM_T4152430307_H
#define TOBASE64TRANSFORM_T4152430307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t4152430307  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(ToBase64Transform_t4152430307, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T4152430307_H
#ifndef SIGNATUREDESCRIPTION_T1662188432_H
#define SIGNATUREDESCRIPTION_T1662188432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t1662188432  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t1662188432, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t1662188432, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t1662188432, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t1662188432, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T1662188432_H
#ifndef HASHALGORITHM_T3742586126_H
#define HASHALGORITHM_T3742586126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t3742586126  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t2551819633* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3742586126, ___HashValue_0)); }
	inline ByteU5BU5D_t2551819633* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t2551819633** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t2551819633* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3742586126, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3742586126, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3742586126, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T3742586126_H
#ifndef KEYSIZES_T2084040638_H
#define KEYSIZES_T2084040638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t2084040638  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t2084040638, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t2084040638, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t2084040638, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T2084040638_H
#ifndef SHA1INTERNAL_T2877871052_H
#define SHA1INTERNAL_T2877871052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t2877871052  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t1578732421* ____H_0;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_1;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t2551819633* ____ProcessingBuffer_2;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_3;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t1578732421* ___buff_4;

public:
	inline static int32_t get_offset_of__H_0() { return static_cast<int32_t>(offsetof(SHA1Internal_t2877871052, ____H_0)); }
	inline UInt32U5BU5D_t1578732421* get__H_0() const { return ____H_0; }
	inline UInt32U5BU5D_t1578732421** get_address_of__H_0() { return &____H_0; }
	inline void set__H_0(UInt32U5BU5D_t1578732421* value)
	{
		____H_0 = value;
		Il2CppCodeGenWriteBarrier((&____H_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(SHA1Internal_t2877871052, ___count_1)); }
	inline uint64_t get_count_1() const { return ___count_1; }
	inline uint64_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(uint64_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t2877871052, ____ProcessingBuffer_2)); }
	inline ByteU5BU5D_t2551819633* get__ProcessingBuffer_2() const { return ____ProcessingBuffer_2; }
	inline ByteU5BU5D_t2551819633** get_address_of__ProcessingBuffer_2() { return &____ProcessingBuffer_2; }
	inline void set__ProcessingBuffer_2(ByteU5BU5D_t2551819633* value)
	{
		____ProcessingBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_2), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t2877871052, ____ProcessingBufferCount_3)); }
	inline int32_t get__ProcessingBufferCount_3() const { return ____ProcessingBufferCount_3; }
	inline int32_t* get_address_of__ProcessingBufferCount_3() { return &____ProcessingBufferCount_3; }
	inline void set__ProcessingBufferCount_3(int32_t value)
	{
		____ProcessingBufferCount_3 = value;
	}

	inline static int32_t get_offset_of_buff_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t2877871052, ___buff_4)); }
	inline UInt32U5BU5D_t1578732421* get_buff_4() const { return ___buff_4; }
	inline UInt32U5BU5D_t1578732421** get_address_of_buff_4() { return &___buff_4; }
	inline void set_buff_4(UInt32U5BU5D_t1578732421* value)
	{
		___buff_4 = value;
		Il2CppCodeGenWriteBarrier((&___buff_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T2877871052_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T1374043678_H
#define RIJNDAELMANAGEDTRANSFORM_T1374043678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t1374043678  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RijndaelTransform System.Security.Cryptography.RijndaelManagedTransform::_st
	RijndaelTransform_t1035352920 * ____st_0;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::_bs
	int32_t ____bs_1;

public:
	inline static int32_t get_offset_of__st_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t1374043678, ____st_0)); }
	inline RijndaelTransform_t1035352920 * get__st_0() const { return ____st_0; }
	inline RijndaelTransform_t1035352920 ** get_address_of__st_0() { return &____st_0; }
	inline void set__st_0(RijndaelTransform_t1035352920 * value)
	{
		____st_0 = value;
		Il2CppCodeGenWriteBarrier((&____st_0), value);
	}

	inline static int32_t get_offset_of__bs_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t1374043678, ____bs_1)); }
	inline int32_t get__bs_1() const { return ____bs_1; }
	inline int32_t* get_address_of__bs_1() { return &____bs_1; }
	inline void set__bs_1(int32_t value)
	{
		____bs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T1374043678_H
#ifndef RANDOMNUMBERGENERATOR_T338680056_H
#define RANDOMNUMBERGENERATOR_T338680056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t338680056  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T338680056_H
#ifndef ATTRIBUTE_T1413275174_H
#define ATTRIBUTE_T1413275174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1413275174  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1413275174_H
#ifndef SHACONSTANTS_T223971318_H
#define SHACONSTANTS_T223971318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t223971318  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t223971318_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t1578732421* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t662500805* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t223971318_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t1578732421* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t1578732421** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t1578732421* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t223971318_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t662500805* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t662500805** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t662500805* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T223971318_H
#ifndef CODEACCESSPERMISSION_T687997801_H
#define CODEACCESSPERMISSION_T687997801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t687997801  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T687997801_H
#ifndef EVIDENCE_T1618184857_H
#define EVIDENCE_T1618184857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t1618184857  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t768266056 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t768266056 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t1618184857, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t1618184857, ___hostEvidenceList_1)); }
	inline ArrayList_t768266056 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t768266056 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t768266056 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t1618184857, ___assemblyEvidenceList_2)); }
	inline ArrayList_t768266056 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t768266056 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t768266056 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t1618184857, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T1618184857_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T1189809315_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T1189809315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t1189809315  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T1189809315_H
#ifndef VALUETYPE_T3940160738_H
#define VALUETYPE_T3940160738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3940160738  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3940160738_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3940160738_marshaled_com
{
};
#endif // VALUETYPE_T3940160738_H
#ifndef CRYPTOCONFIG_T3532867824_H
#define CRYPTOCONFIG_T3532867824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t3532867824  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t3532867824_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t4200525586 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t4200525586 * ___oid_2;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t3532867824_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t3532867824_StaticFields, ___algorithms_1)); }
	inline Hashtable_t4200525586 * get_algorithms_1() const { return ___algorithms_1; }
	inline Hashtable_t4200525586 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Hashtable_t4200525586 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_oid_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t3532867824_StaticFields, ___oid_2)); }
	inline Hashtable_t4200525586 * get_oid_2() const { return ___oid_2; }
	inline Hashtable_t4200525586 ** get_address_of_oid_2() { return &___oid_2; }
	inline void set_oid_2(Hashtable_t4200525586 * value)
	{
		___oid_2 = value;
		Il2CppCodeGenWriteBarrier((&___oid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T3532867824_H
#ifndef SYMMETRICTRANSFORM_T1388530328_H
#define SYMMETRICTRANSFORM_T1388530328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t1388530328  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t566780172 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t2551819633* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t2551819633* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t2551819633* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t2551819633* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t338680056 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___algo_0)); }
	inline SymmetricAlgorithm_t566780172 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t566780172 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t566780172 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___temp_3)); }
	inline ByteU5BU5D_t2551819633* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t2551819633** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t2551819633* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___temp2_4)); }
	inline ByteU5BU5D_t2551819633* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t2551819633** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t2551819633* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___workBuff_5)); }
	inline ByteU5BU5D_t2551819633* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t2551819633** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t2551819633* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___workout_6)); }
	inline ByteU5BU5D_t2551819633* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t2551819633** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t2551819633* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1388530328, ____rng_11)); }
	inline RandomNumberGenerator_t338680056 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t338680056 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t338680056 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T1388530328_H
#ifndef SERIALIZATIONINFO_T1250904775_H
#define SERIALIZATIONINFO_T1250904775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t1250904775  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t4200525586 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t768266056 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t1250904775, ___serialized_0)); }
	inline Hashtable_t4200525586 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t4200525586 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t4200525586 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t1250904775, ___values_1)); }
	inline ArrayList_t768266056 * get_values_1() const { return ___values_1; }
	inline ArrayList_t768266056 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t768266056 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t1250904775, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t1250904775, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t1250904775, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T1250904775_H
#ifndef BASE64CONSTANTS_T140170803_H
#define BASE64CONSTANTS_T140170803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t140170803  : public RuntimeObject
{
public:

public:
};

struct Base64Constants_t140170803_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t2551819633* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t2551819633* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t140170803_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t2551819633* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t2551819633** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t2551819633* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodeTable_0), value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t140170803_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t2551819633* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t2551819633** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t2551819633* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___DecodeTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64CONSTANTS_T140170803_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T1967904131_H
#define ASYMMETRICSIGNATUREFORMATTER_T1967904131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t1967904131  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T1967904131_H
#ifndef X509CERTIFICATE_T4196584353_H
#define X509CERTIFICATE_T4196584353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t4196584353  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t1416040510 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t2551819633* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t4196584353, ___x509_0)); }
	inline X509Certificate_t1416040510 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t1416040510 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t1416040510 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t4196584353, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t4196584353, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t2551819633* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t2551819633** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t2551819633* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t4196584353, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t4196584353, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T4196584353_H
#ifndef SERIALIZATIONINFOENUMERATOR_T641892135_H
#define SERIALIZATIONINFOENUMERATOR_T641892135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfoEnumerator
struct  SerializationInfoEnumerator_t641892135  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Runtime.Serialization.SerializationInfoEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t641892135, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFOENUMERATOR_T641892135_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T1457452616_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T1457452616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t1457452616  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T1457452616_H
#ifndef ASYMMETRICALGORITHM_T2734232321_H
#define ASYMMETRICALGORITHM_T2734232321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t2734232321  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2434552715* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2734232321, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2734232321, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t2434552715* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t2434552715** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t2434552715* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T2734232321_H
#ifndef SHA1_T1851241753_H
#define SHA1_T1851241753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t1851241753  : public HashAlgorithm_t3742586126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T1851241753_H
#ifndef SECURITYATTRIBUTE_T3777231047_H
#define SECURITYATTRIBUTE_T3777231047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t3777231047  : public Attribute_t1413275174
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3777231047_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T2721112382_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T2721112382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t2721112382  : public Attribute_t1413275174
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T2721112382_H
#ifndef RSAPARAMETERS_T817918657_H
#define RSAPARAMETERS_T817918657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t817918657 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t2551819633* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t2551819633* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t2551819633* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t2551819633* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t2551819633* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t2551819633* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t2551819633* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t2551819633* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t817918657, ___P_0)); }
	inline ByteU5BU5D_t2551819633* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t2551819633** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t2551819633* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t817918657, ___Q_1)); }
	inline ByteU5BU5D_t2551819633* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t2551819633** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t2551819633* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t817918657, ___D_2)); }
	inline ByteU5BU5D_t2551819633* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t2551819633** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t2551819633* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t817918657, ___DP_3)); }
	inline ByteU5BU5D_t2551819633* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t2551819633** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t2551819633* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t817918657, ___DQ_4)); }
	inline ByteU5BU5D_t2551819633* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t2551819633** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t2551819633* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t817918657, ___InverseQ_5)); }
	inline ByteU5BU5D_t2551819633* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t2551819633** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t2551819633* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t817918657, ___Modulus_6)); }
	inline ByteU5BU5D_t2551819633* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t2551819633** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t2551819633* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t817918657, ___Exponent_7)); }
	inline ByteU5BU5D_t2551819633* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t2551819633** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t2551819633* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t817918657_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t817918657_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T817918657_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T3358162741_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T3358162741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t3358162741  : public AsymmetricSignatureDeformatter_t1189809315
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t880491902 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3358162741, ___rsa_0)); }
	inline RSA_t880491902 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t880491902 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t880491902 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3358162741, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T3358162741_H
#ifndef RIJNDAELTRANSFORM_T1035352920_H
#define RIJNDAELTRANSFORM_T1035352920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t1035352920  : public SymmetricTransform_t1388530328
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t1578732421* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920, ___expandedKey_12)); }
	inline UInt32U5BU5D_t1578732421* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t1578732421** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t1578732421* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t1035352920_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t1578732421* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t2551819633* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t2551819633* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t1578732421* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t1578732421* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t1578732421* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t1578732421* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t1578732421* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t1578732421* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t1578732421* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t1578732421* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t1578732421* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t1578732421** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t1578732421* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t2551819633* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t2551819633** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t2551819633* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t2551819633* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t2551819633** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t2551819633* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t1578732421* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t1578732421** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t1578732421* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t1578732421* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t1578732421** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t1578732421* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t1578732421* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t1578732421** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t1578732421* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t1578732421* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t1578732421** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t1578732421* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t1578732421* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t1578732421** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t1578732421* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t1578732421* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t1578732421** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t1578732421* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t1578732421* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t1578732421** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t1578732421* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1035352920_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t1578732421* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t1578732421** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t1578732421* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELTRANSFORM_T1035352920_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SHA512_T1693852619_H
#define SHA512_T1693852619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t1693852619  : public HashAlgorithm_t3742586126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T1693852619_H
#ifndef SHA384_T1347823033_H
#define SHA384_T1347823033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t1347823033  : public HashAlgorithm_t3742586126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T1347823033_H
#ifndef SYSTEMEXCEPTION_T1117023461_H
#define SYSTEMEXCEPTION_T1117023461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1117023461  : public Exception_t1017996714
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1117023461_H
#ifndef DSASIGNATUREDESCRIPTION_T413434685_H
#define DSASIGNATUREDESCRIPTION_T413434685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t413434685  : public SignatureDescription_t1662188432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T413434685_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T1046459283_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T1046459283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t1046459283  : public SignatureDescription_t1662188432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T1046459283_H
#ifndef TRIPLEDESTRANSFORM_T2209240482_H
#define TRIPLEDESTRANSFORM_T2209240482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t2209240482  : public SymmetricTransform_t1388530328
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t1408007698 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t1408007698 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t1408007698 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t1408007698 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t1408007698 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t1408007698 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2209240482, ___E1_12)); }
	inline DESTransform_t1408007698 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t1408007698 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t1408007698 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2209240482, ___D2_13)); }
	inline DESTransform_t1408007698 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t1408007698 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t1408007698 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2209240482, ___E3_14)); }
	inline DESTransform_t1408007698 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t1408007698 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t1408007698 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2209240482, ___D1_15)); }
	inline DESTransform_t1408007698 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t1408007698 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t1408007698 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2209240482, ___E2_16)); }
	inline DESTransform_t1408007698 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t1408007698 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t1408007698 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2209240482, ___D3_17)); }
	inline DESTransform_t1408007698 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t1408007698 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t1408007698 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T2209240482_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T3341385262_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T3341385262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t3341385262  : public AsymmetricKeyExchangeFormatter_t1457452616
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t880491902 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t338680056 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t3341385262, ___rsa_0)); }
	inline RSA_t880491902 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t880491902 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t880491902 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t3341385262, ___random_1)); }
	inline RandomNumberGenerator_t338680056 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t338680056 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t338680056 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T3341385262_H
#ifndef ENUM_T3541070570_H
#define ENUM_T3541070570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3541070570  : public ValueType_t3940160738
{
public:

public:
};

struct Enum_t3541070570_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1826410835* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3541070570_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1826410835* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1826410835** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1826410835* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3541070570_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3541070570_marshaled_com
{
};
#endif // ENUM_T3541070570_H
#ifndef SHA256_T3386170791_H
#define SHA256_T3386170791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t3386170791  : public HashAlgorithm_t3742586126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T3386170791_H
#ifndef RSA_T880491902_H
#define RSA_T880491902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t880491902  : public AsymmetricAlgorithm_t2734232321
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T880491902_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T416206068_H
#define RSAPKCS1SIGNATUREFORMATTER_T416206068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t416206068  : public AsymmetricSignatureFormatter_t1967904131
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t880491902 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t3742586126 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t416206068, ___rsa_0)); }
	inline RSA_t880491902 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t880491902 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t880491902 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t416206068, ___hash_1)); }
	inline HashAlgorithm_t3742586126 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t3742586126 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t3742586126 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T416206068_H
#ifndef DESTRANSFORM_T1408007698_H
#define DESTRANSFORM_T1408007698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t1408007698  : public SymmetricTransform_t1388530328
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t2551819633* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t2551819633* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t1578732421* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698, ___keySchedule_16)); }
	inline ByteU5BU5D_t2551819633* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t2551819633** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t2551819633* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698, ___byteBuff_17)); }
	inline ByteU5BU5D_t2551819633* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t2551819633** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t2551819633* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t1578732421* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t1578732421** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t1578732421* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t1408007698_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t1578732421* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t2551819633* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t2551819633* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t2551819633* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t1578732421* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t1578732421* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t1578732421* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t1578732421** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t1578732421* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t2551819633* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t2551819633** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t2551819633* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t2551819633* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t2551819633** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t2551819633* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t2551819633* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t2551819633** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t2551819633* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t1578732421* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t1578732421** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t1578732421* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t1408007698_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t1578732421* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t1578732421** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t1578732421* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T1408007698_H
#ifndef DSASIGNATUREFORMATTER_T3992521070_H
#define DSASIGNATUREFORMATTER_T3992521070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t3992521070  : public AsymmetricSignatureFormatter_t1967904131
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t222173602 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t3992521070, ___dsa_0)); }
	inline DSA_t222173602 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t222173602 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t222173602 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T3992521070_H
#ifndef RIPEMD160_T2494304270_H
#define RIPEMD160_T2494304270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t2494304270  : public HashAlgorithm_t3742586126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T2494304270_H
#ifndef RC2TRANSFORM_T2490069643_H
#define RC2TRANSFORM_T2490069643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t2490069643  : public SymmetricTransform_t1388530328
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t525552825* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t2490069643, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t2490069643, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t2490069643, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t2490069643, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t2490069643, ___K_16)); }
	inline UInt16U5BU5D_t525552825* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t525552825** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t525552825* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t2490069643, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t2490069643_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t2551819633* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t2490069643_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t2551819633* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t2551819633** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t2551819633* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T2490069643_H
#ifndef DSASIGNATUREDEFORMATTER_T1225981129_H
#define DSASIGNATUREDEFORMATTER_T1225981129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t1225981129  : public AsymmetricSignatureDeformatter_t1189809315
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t222173602 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t1225981129, ___dsa_0)); }
	inline DSA_t222173602 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t222173602 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t222173602 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T1225981129_H
#ifndef DSAPARAMETERS_T2754976002_H
#define DSAPARAMETERS_T2754976002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t2754976002 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t2551819633* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t2551819633* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t2551819633* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t2551819633* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t2551819633* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t2551819633* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t2551819633* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t2754976002, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t2754976002, ___G_1)); }
	inline ByteU5BU5D_t2551819633* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t2551819633** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t2551819633* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t2754976002, ___J_2)); }
	inline ByteU5BU5D_t2551819633* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t2551819633** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t2551819633* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t2754976002, ___P_3)); }
	inline ByteU5BU5D_t2551819633* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t2551819633** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t2551819633* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t2754976002, ___Q_4)); }
	inline ByteU5BU5D_t2551819633* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t2551819633** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t2551819633* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t2754976002, ___Seed_5)); }
	inline ByteU5BU5D_t2551819633* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t2551819633** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t2551819633* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t2754976002, ___X_6)); }
	inline ByteU5BU5D_t2551819633* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t2551819633** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t2551819633* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t2754976002, ___Y_7)); }
	inline ByteU5BU5D_t2551819633* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t2551819633** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t2551819633* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2754976002_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2754976002_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T2754976002_H
#ifndef KEYEDHASHALGORITHM_T429970687_H
#define KEYEDHASHALGORITHM_T429970687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t429970687  : public HashAlgorithm_t3742586126
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t2551819633* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t429970687, ___KeyValue_4)); }
	inline ByteU5BU5D_t2551819633* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t2551819633** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t2551819633* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T429970687_H
#ifndef MD5_T3029800043_H
#define MD5_T3029800043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t3029800043  : public HashAlgorithm_t3742586126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T3029800043_H
#ifndef DSA_T222173602_H
#define DSA_T222173602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t222173602  : public AsymmetricAlgorithm_t2734232321
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T222173602_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T3896103940_H
#define CODEACCESSSECURITYATTRIBUTE_T3896103940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t3896103940  : public SecurityAttribute_t3777231047
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T3896103940_H
#ifndef SECURITYACTION_T3447689955_H
#define SECURITYACTION_T3447689955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t3447689955 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t3447689955, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYACTION_T3447689955_H
#ifndef SECURITYPERMISSIONFLAG_T4234149418_H
#define SECURITYPERMISSIONFLAG_T4234149418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t4234149418 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t4234149418, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONFLAG_T4234149418_H
#ifndef DSACRYPTOSERVICEPROVIDER_T3848813039_H
#define DSACRYPTOSERVICEPROVIDER_T3848813039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t3848813039  : public DSA_t222173602
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t3031315588 * ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t3255016931 * ___dsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3848813039, ___store_2)); }
	inline KeyPairPersistence_t3031315588 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t3031315588 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t3031315588 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3848813039, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3848813039, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3848813039, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3848813039, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_dsa_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3848813039, ___dsa_7)); }
	inline DSAManaged_t3255016931 * get_dsa_7() const { return ___dsa_7; }
	inline DSAManaged_t3255016931 ** get_address_of_dsa_7() { return &___dsa_7; }
	inline void set_dsa_7(DSAManaged_t3255016931 * value)
	{
		___dsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_7), value);
	}
};

struct DSACryptoServiceProvider_t3848813039_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3848813039_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T3848813039_H
#ifndef RSACRYPTOSERVICEPROVIDER_T3032586813_H
#define RSACRYPTOSERVICEPROVIDER_T3032586813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t3032586813  : public RSA_t880491902
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t3031315588 * ___store_2;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t43567732 * ___rsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3032586813, ___store_2)); }
	inline KeyPairPersistence_t3031315588 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t3031315588 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t3031315588 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3032586813, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3032586813, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3032586813, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3032586813, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_rsa_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3032586813, ___rsa_7)); }
	inline RSAManaged_t43567732 * get_rsa_7() const { return ___rsa_7; }
	inline RSAManaged_t43567732 ** get_address_of_rsa_7() { return &___rsa_7; }
	inline void set_rsa_7(RSAManaged_t43567732 * value)
	{
		___rsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_7), value);
	}
};

struct RSACryptoServiceProvider_t3032586813_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3032586813_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T3032586813_H
#ifndef PRINCIPALPOLICY_T2949741543_H
#define PRINCIPALPOLICY_T2949741543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t2949741543 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t2949741543, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRINCIPALPOLICY_T2949741543_H
#ifndef WINDOWSACCOUNTTYPE_T1697821344_H
#define WINDOWSACCOUNTTYPE_T1697821344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t1697821344 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t1697821344, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSACCOUNTTYPE_T1697821344_H
#ifndef CSPPROVIDERFLAGS_T3100286165_H
#define CSPPROVIDERFLAGS_T3100286165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t3100286165 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t3100286165, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPROVIDERFLAGS_T3100286165_H
#ifndef CRYPTOGRAPHICEXCEPTION_T459957832_H
#define CRYPTOGRAPHICEXCEPTION_T459957832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t459957832  : public SystemException_t1117023461
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T459957832_H
#ifndef CIPHERMODE_T3965087466_H
#define CIPHERMODE_T3965087466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3965087466 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t3965087466, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T3965087466_H
#ifndef X509KEYSTORAGEFLAGS_T3964956373_H
#define X509KEYSTORAGEFLAGS_T3964956373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t3964956373 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t3964956373, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYSTORAGEFLAGS_T3964956373_H
#ifndef STREAMINGCONTEXTSTATES_T780550943_H
#define STREAMINGCONTEXTSTATES_T780550943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t780550943 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t780550943, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T780550943_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T1304356200_H
#define RNGCRYPTOSERVICEPROVIDER_T1304356200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t1304356200  : public RandomNumberGenerator_t338680056
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1304356200, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t1304356200_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1304356200_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RNGCRYPTOSERVICEPROVIDER_T1304356200_H
#ifndef HMAC_T2138825345_H
#define HMAC_T2138825345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t2138825345  : public KeyedHashAlgorithm_t429970687
{
public:
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t3742586126 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t4056048164 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(HMAC_t2138825345, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t2138825345, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__algo_7() { return static_cast<int32_t>(offsetof(HMAC_t2138825345, ____algo_7)); }
	inline HashAlgorithm_t3742586126 * get__algo_7() const { return ____algo_7; }
	inline HashAlgorithm_t3742586126 ** get_address_of__algo_7() { return &____algo_7; }
	inline void set__algo_7(HashAlgorithm_t3742586126 * value)
	{
		____algo_7 = value;
		Il2CppCodeGenWriteBarrier((&____algo_7), value);
	}

	inline static int32_t get_offset_of__block_8() { return static_cast<int32_t>(offsetof(HMAC_t2138825345, ____block_8)); }
	inline BlockProcessor_t4056048164 * get__block_8() const { return ____block_8; }
	inline BlockProcessor_t4056048164 ** get_address_of__block_8() { return &____block_8; }
	inline void set__block_8(BlockProcessor_t4056048164 * value)
	{
		____block_8 = value;
		Il2CppCodeGenWriteBarrier((&____block_8), value);
	}

	inline static int32_t get_offset_of__blockSizeValue_9() { return static_cast<int32_t>(offsetof(HMAC_t2138825345, ____blockSizeValue_9)); }
	inline int32_t get__blockSizeValue_9() const { return ____blockSizeValue_9; }
	inline int32_t* get_address_of__blockSizeValue_9() { return &____blockSizeValue_9; }
	inline void set__blockSizeValue_9(int32_t value)
	{
		____blockSizeValue_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T2138825345_H
#ifndef SERIALIZATIONEXCEPTION_T3042025156_H
#define SERIALIZATIONEXCEPTION_T3042025156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t3042025156  : public SystemException_t1117023461
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T3042025156_H
#ifndef SHA256MANAGED_T1594429234_H
#define SHA256MANAGED_T1594429234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t1594429234  : public SHA256_t3386170791
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t1578732421* ____H_4;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_5;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t2551819633* ____ProcessingBuffer_6;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_7;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t1578732421* ___buff_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t1594429234, ____H_4)); }
	inline UInt32U5BU5D_t1578732421* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t1578732421** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t1578732421* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t1594429234, ___count_5)); }
	inline uint64_t get_count_5() const { return ___count_5; }
	inline uint64_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(uint64_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t1594429234, ____ProcessingBuffer_6)); }
	inline ByteU5BU5D_t2551819633* get__ProcessingBuffer_6() const { return ____ProcessingBuffer_6; }
	inline ByteU5BU5D_t2551819633** get_address_of__ProcessingBuffer_6() { return &____ProcessingBuffer_6; }
	inline void set__ProcessingBuffer_6(ByteU5BU5D_t2551819633* value)
	{
		____ProcessingBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_6), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t1594429234, ____ProcessingBufferCount_7)); }
	inline int32_t get__ProcessingBufferCount_7() const { return ____ProcessingBufferCount_7; }
	inline int32_t* get_address_of__ProcessingBufferCount_7() { return &____ProcessingBufferCount_7; }
	inline void set__ProcessingBufferCount_7(int32_t value)
	{
		____ProcessingBufferCount_7 = value;
	}

	inline static int32_t get_offset_of_buff_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t1594429234, ___buff_8)); }
	inline UInt32U5BU5D_t1578732421* get_buff_8() const { return ___buff_8; }
	inline UInt32U5BU5D_t1578732421** get_address_of_buff_8() { return &___buff_8; }
	inline void set_buff_8(UInt32U5BU5D_t1578732421* value)
	{
		___buff_8 = value;
		Il2CppCodeGenWriteBarrier((&___buff_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T1594429234_H
#ifndef RIPEMD160MANAGED_T805361003_H
#define RIPEMD160MANAGED_T805361003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t805361003  : public RIPEMD160_t2494304270
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t2551819633* ____ProcessingBuffer_4;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t1578732421* ____X_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t1578732421* ____HashValue_6;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_7;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t805361003, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t2551819633* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t2551819633** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t2551819633* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__X_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t805361003, ____X_5)); }
	inline UInt32U5BU5D_t1578732421* get__X_5() const { return ____X_5; }
	inline UInt32U5BU5D_t1578732421** get_address_of__X_5() { return &____X_5; }
	inline void set__X_5(UInt32U5BU5D_t1578732421* value)
	{
		____X_5 = value;
		Il2CppCodeGenWriteBarrier((&____X_5), value);
	}

	inline static int32_t get_offset_of__HashValue_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t805361003, ____HashValue_6)); }
	inline UInt32U5BU5D_t1578732421* get__HashValue_6() const { return ____HashValue_6; }
	inline UInt32U5BU5D_t1578732421** get_address_of__HashValue_6() { return &____HashValue_6; }
	inline void set__HashValue_6(UInt32U5BU5D_t1578732421* value)
	{
		____HashValue_6 = value;
		Il2CppCodeGenWriteBarrier((&____HashValue_6), value);
	}

	inline static int32_t get_offset_of__Length_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t805361003, ____Length_7)); }
	inline uint64_t get__Length_7() const { return ____Length_7; }
	inline uint64_t* get_address_of__Length_7() { return &____Length_7; }
	inline void set__Length_7(uint64_t value)
	{
		____Length_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t805361003, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T805361003_H
#ifndef PADDINGMODE_T2198491072_H
#define PADDINGMODE_T2198491072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2198491072 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2198491072, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T2198491072_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T4138794316_H
#define MD5CRYPTOSERVICEPROVIDER_T4138794316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t4138794316  : public MD5_t3029800043
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t1578732421* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t1578732421* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t2551819633* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4138794316, ____H_4)); }
	inline UInt32U5BU5D_t1578732421* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t1578732421** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t1578732421* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4138794316, ___buff_5)); }
	inline UInt32U5BU5D_t1578732421* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t1578732421** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t1578732421* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((&___buff_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4138794316, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4138794316, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_t2551819633* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_t2551819633** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_t2551819633* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_7), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4138794316, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t4138794316_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t1578732421* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4138794316_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_t1578732421* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_t1578732421** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_t1578732421* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((&___K_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T4138794316_H
#ifndef SHA512MANAGED_T557692053_H
#define SHA512MANAGED_T557692053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t557692053  : public SHA512_t1693852619
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t2551819633* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t662500805* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___xBuf_4)); }
	inline ByteU5BU5D_t2551819633* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t2551819633** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t2551819633* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___W_16)); }
	inline UInt64U5BU5D_t662500805* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t662500805** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t662500805* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t557692053, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T557692053_H
#ifndef MACTRIPLEDES_T3636299079_H
#define MACTRIPLEDES_T3636299079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t3636299079  : public KeyedHashAlgorithm_t429970687
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t3823069722 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t35727958 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t3636299079, ___tdes_5)); }
	inline TripleDES_t3823069722 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t3823069722 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t3823069722 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier((&___tdes_5), value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t3636299079, ___mac_6)); }
	inline MACAlgorithm_t35727958 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t35727958 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t35727958 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier((&___mac_6), value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t3636299079, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T3636299079_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T1344974363_H
#define SHA1CRYPTOSERVICEPROVIDER_T1344974363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t1344974363  : public SHA1_t1851241753
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t2877871052 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t1344974363, ___sha_4)); }
	inline SHA1Internal_t2877871052 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2877871052 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2877871052 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T1344974363_H
#ifndef SHA384MANAGED_T2341601902_H
#define SHA384MANAGED_T2341601902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t2341601902  : public SHA384_t1347823033
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t2551819633* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t662500805* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___xBuf_4)); }
	inline ByteU5BU5D_t2551819633* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t2551819633** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t2551819633* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___W_16)); }
	inline UInt64U5BU5D_t662500805* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t662500805** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t662500805* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t2341601902, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T2341601902_H
#ifndef SHA1MANAGED_T1070461348_H
#define SHA1MANAGED_T1070461348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t1070461348  : public SHA1_t1851241753
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t2877871052 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t1070461348, ___sha_4)); }
	inline SHA1Internal_t2877871052 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2877871052 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2877871052 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T1070461348_H
#ifndef WINDOWSIDENTITY_T1076356410_H
#define WINDOWSIDENTITY_T1076356410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t1076356410  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t1250904775 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1076356410, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1076356410, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1076356410, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1076356410, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1076356410, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1076356410, ____info_5)); }
	inline SerializationInfo_t1250904775 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t1250904775 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t1250904775 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t1076356410_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1076356410_StaticFields, ___invalidWindows_6)); }
	inline intptr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline intptr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(intptr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T1076356410_H
#ifndef HMACMD5_T542370545_H
#define HMACMD5_T542370545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t542370545  : public HMAC_t2138825345
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T542370545_H
#ifndef SYMMETRICALGORITHM_T566780172_H
#define SYMMETRICALGORITHM_T566780172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t566780172  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t2551819633* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t2551819633* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t2434552715* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2434552715* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___IVValue_1)); }
	inline ByteU5BU5D_t2551819633* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t2551819633** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t2551819633* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___KeyValue_3)); }
	inline ByteU5BU5D_t2551819633* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t2551819633** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t2551819633* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t2434552715* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t2434552715** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t2434552715* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t2434552715* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t2434552715** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t2434552715* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t566780172, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T566780172_H
#ifndef HMACSHA512_T2754092255_H
#define HMACSHA512_T2754092255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t2754092255  : public HMAC_t2138825345
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA512_t2754092255, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA512_t2754092255_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA512_t2754092255_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA512_T2754092255_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T3541690301_H
#define SECURITYPERMISSIONATTRIBUTE_T3541690301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t3541690301  : public CodeAccessSecurityAttribute_t3896103940
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_0;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t3541690301, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T3541690301_H
#ifndef SECURITYPERMISSION_T381935124_H
#define SECURITYPERMISSION_T381935124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t381935124  : public CodeAccessPermission_t687997801
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t381935124, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T381935124_H
#ifndef HMACSHA384_T3924355438_H
#define HMACSHA384_T3924355438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t3924355438  : public HMAC_t2138825345
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA384_t3924355438, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA384_t3924355438_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA384_t3924355438_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA384_T3924355438_H
#ifndef HMACSHA256_T598933000_H
#define HMACSHA256_T598933000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t598933000  : public HMAC_t2138825345
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T598933000_H
#ifndef STREAMINGCONTEXT_T4062161289_H
#define STREAMINGCONTEXT_T4062161289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t4062161289 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t4062161289, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t4062161289, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t4062161289_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t4062161289_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T4062161289_H
#ifndef HMACSHA1_T3413564060_H
#define HMACSHA1_T3413564060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t3413564060  : public HMAC_t2138825345
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T3413564060_H
#ifndef HMACRIPEMD160_T1222282959_H
#define HMACRIPEMD160_T1222282959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t1222282959  : public HMAC_t2138825345
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T1222282959_H
#ifndef CSPPARAMETERS_T1153524967_H
#define CSPPARAMETERS_T1153524967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t1153524967  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::_Flags
	int32_t ____Flags_0;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_1;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_2;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_3;
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_4;

public:
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t1153524967, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t1153524967, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t1153524967, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t1153524967, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t1153524967, ___ProviderType_4)); }
	inline int32_t get_ProviderType_4() const { return ___ProviderType_4; }
	inline int32_t* get_address_of_ProviderType_4() { return &___ProviderType_4; }
	inline void set_ProviderType_4(int32_t value)
	{
		___ProviderType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T1153524967_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T1106505425_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T1106505425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t1106505425  : public CryptographicException_t459957832
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T1106505425_H
#ifndef RC2_T1175717142_H
#define RC2_T1175717142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t1175717142  : public SymmetricAlgorithm_t566780172
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_10;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_10() { return static_cast<int32_t>(offsetof(RC2_t1175717142, ___EffectiveKeySizeValue_10)); }
	inline int32_t get_EffectiveKeySizeValue_10() const { return ___EffectiveKeySizeValue_10; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_10() { return &___EffectiveKeySizeValue_10; }
	inline void set_EffectiveKeySizeValue_10(int32_t value)
	{
		___EffectiveKeySizeValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T1175717142_H
#ifndef TRIPLEDES_T3823069722_H
#define TRIPLEDES_T3823069722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t3823069722  : public SymmetricAlgorithm_t566780172
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T3823069722_H
#ifndef DES_T2670620245_H
#define DES_T2670620245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t2670620245  : public SymmetricAlgorithm_t566780172
{
public:

public:
};

struct DES_t2670620245_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t2551819634* ___weakKeys_10;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t2551819634* ___semiWeakKeys_11;

public:
	inline static int32_t get_offset_of_weakKeys_10() { return static_cast<int32_t>(offsetof(DES_t2670620245_StaticFields, ___weakKeys_10)); }
	inline ByteU5BU2CU5D_t2551819634* get_weakKeys_10() const { return ___weakKeys_10; }
	inline ByteU5BU2CU5D_t2551819634** get_address_of_weakKeys_10() { return &___weakKeys_10; }
	inline void set_weakKeys_10(ByteU5BU2CU5D_t2551819634* value)
	{
		___weakKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_10), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_11() { return static_cast<int32_t>(offsetof(DES_t2670620245_StaticFields, ___semiWeakKeys_11)); }
	inline ByteU5BU2CU5D_t2551819634* get_semiWeakKeys_11() const { return ___semiWeakKeys_11; }
	inline ByteU5BU2CU5D_t2551819634** get_address_of_semiWeakKeys_11() { return &___semiWeakKeys_11; }
	inline void set_semiWeakKeys_11(ByteU5BU2CU5D_t2551819634* value)
	{
		___semiWeakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T2670620245_H
#ifndef RIJNDAEL_T3207655192_H
#define RIJNDAEL_T3207655192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t3207655192  : public SymmetricAlgorithm_t566780172
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T3207655192_H
#ifndef RIJNDAELMANAGED_T57946280_H
#define RIJNDAELMANAGED_T57946280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t57946280  : public Rijndael_t3207655192
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T57946280_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T1855610219_H
#define RC2CRYPTOSERVICEPROVIDER_T1855610219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t1855610219  : public RC2_t1175717142
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T1855610219_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T1656129848_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T1656129848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t1656129848  : public TripleDES_t3823069722
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T1656129848_H
#ifndef DESCRYPTOSERVICEPROVIDER_T3191367719_H
#define DESCRYPTOSERVICEPROVIDER_T3191367719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t3191367719  : public DES_t2670620245
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T3191367719_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (SerializationException_t3042025156), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (SerializationInfo_t1250904775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable601[5] = 
{
	SerializationInfo_t1250904775::get_offset_of_serialized_0(),
	SerializationInfo_t1250904775::get_offset_of_values_1(),
	SerializationInfo_t1250904775::get_offset_of_assemblyName_2(),
	SerializationInfo_t1250904775::get_offset_of_fullTypeName_3(),
	SerializationInfo_t1250904775::get_offset_of_converter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (SerializationInfoEnumerator_t641892135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable602[1] = 
{
	SerializationInfoEnumerator_t641892135::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (StreamingContext_t4062161289)+ sizeof (RuntimeObject), sizeof(StreamingContext_t4062161289_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable603[2] = 
{
	StreamingContext_t4062161289::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StreamingContext_t4062161289::get_offset_of_additional_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (StreamingContextStates_t780550943)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable604[10] = 
{
	StreamingContextStates_t780550943::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (X509Certificate_t4196584353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable605[5] = 
{
	X509Certificate_t4196584353::get_offset_of_x509_0(),
	X509Certificate_t4196584353::get_offset_of_hideDates_1(),
	X509Certificate_t4196584353::get_offset_of_cachedCertificateHash_2(),
	X509Certificate_t4196584353::get_offset_of_issuer_name_3(),
	X509Certificate_t4196584353::get_offset_of_subject_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (X509KeyStorageFlags_t3964956373)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable606[7] = 
{
	X509KeyStorageFlags_t3964956373::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (AsymmetricAlgorithm_t2734232321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable607[2] = 
{
	AsymmetricAlgorithm_t2734232321::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t2734232321::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (AsymmetricKeyExchangeFormatter_t1457452616), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (AsymmetricSignatureDeformatter_t1189809315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (AsymmetricSignatureFormatter_t1967904131), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (Base64Constants_t140170803), -1, sizeof(Base64Constants_t140170803_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable611[2] = 
{
	Base64Constants_t140170803_StaticFields::get_offset_of_EncodeTable_0(),
	Base64Constants_t140170803_StaticFields::get_offset_of_DecodeTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (CipherMode_t3965087466)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable612[6] = 
{
	CipherMode_t3965087466::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (CryptoConfig_t3532867824), -1, sizeof(CryptoConfig_t3532867824_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable613[3] = 
{
	CryptoConfig_t3532867824_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t3532867824_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t3532867824_StaticFields::get_offset_of_oid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (CryptographicException_t459957832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (CryptographicUnexpectedOperationException_t1106505425), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { sizeof (CspParameters_t1153524967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable616[5] = 
{
	CspParameters_t1153524967::get_offset_of__Flags_0(),
	CspParameters_t1153524967::get_offset_of_KeyContainerName_1(),
	CspParameters_t1153524967::get_offset_of_KeyNumber_2(),
	CspParameters_t1153524967::get_offset_of_ProviderName_3(),
	CspParameters_t1153524967::get_offset_of_ProviderType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { sizeof (CspProviderFlags_t3100286165)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable617[9] = 
{
	CspProviderFlags_t3100286165::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { sizeof (DES_t2670620245), -1, sizeof(DES_t2670620245_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable618[2] = 
{
	DES_t2670620245_StaticFields::get_offset_of_weakKeys_10(),
	DES_t2670620245_StaticFields::get_offset_of_semiWeakKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (DESTransform_t1408007698), -1, sizeof(DESTransform_t1408007698_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable619[13] = 
{
	DESTransform_t1408007698_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t1408007698_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t1408007698_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t1408007698_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t1408007698::get_offset_of_keySchedule_16(),
	DESTransform_t1408007698::get_offset_of_byteBuff_17(),
	DESTransform_t1408007698::get_offset_of_dwordBuff_18(),
	DESTransform_t1408007698_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t1408007698_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t1408007698_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t1408007698_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t1408007698_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t1408007698_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (DESCryptoServiceProvider_t3191367719), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (DSA_t222173602), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { sizeof (DSACryptoServiceProvider_t3848813039), -1, sizeof(DSACryptoServiceProvider_t3848813039_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable622[7] = 
{
	DSACryptoServiceProvider_t3848813039::get_offset_of_store_2(),
	DSACryptoServiceProvider_t3848813039::get_offset_of_persistKey_3(),
	DSACryptoServiceProvider_t3848813039::get_offset_of_persisted_4(),
	DSACryptoServiceProvider_t3848813039::get_offset_of_privateKeyExportable_5(),
	DSACryptoServiceProvider_t3848813039::get_offset_of_m_disposed_6(),
	DSACryptoServiceProvider_t3848813039::get_offset_of_dsa_7(),
	DSACryptoServiceProvider_t3848813039_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { sizeof (DSAParameters_t2754976002)+ sizeof (RuntimeObject), sizeof(DSAParameters_t2754976002_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable623[8] = 
{
	DSAParameters_t2754976002::get_offset_of_Counter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2754976002::get_offset_of_G_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2754976002::get_offset_of_J_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2754976002::get_offset_of_P_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2754976002::get_offset_of_Q_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2754976002::get_offset_of_Seed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2754976002::get_offset_of_X_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2754976002::get_offset_of_Y_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { sizeof (DSASignatureDeformatter_t1225981129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable624[1] = 
{
	DSASignatureDeformatter_t1225981129::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { sizeof (DSASignatureFormatter_t3992521070), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable625[1] = 
{
	DSASignatureFormatter_t3992521070::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { sizeof (HMAC_t2138825345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable626[5] = 
{
	HMAC_t2138825345::get_offset_of__disposed_5(),
	HMAC_t2138825345::get_offset_of__hashName_6(),
	HMAC_t2138825345::get_offset_of__algo_7(),
	HMAC_t2138825345::get_offset_of__block_8(),
	HMAC_t2138825345::get_offset_of__blockSizeValue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { sizeof (HMACMD5_t542370545), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { sizeof (HMACRIPEMD160_t1222282959), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (HMACSHA1_t3413564060), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (HMACSHA256_t598933000), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { sizeof (HMACSHA384_t3924355438), -1, sizeof(HMACSHA384_t3924355438_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable631[2] = 
{
	HMACSHA384_t3924355438_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA384_t3924355438::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { sizeof (HMACSHA512_t2754092255), -1, sizeof(HMACSHA512_t2754092255_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable632[2] = 
{
	HMACSHA512_t2754092255_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA512_t2754092255::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (HashAlgorithm_t3742586126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable633[4] = 
{
	HashAlgorithm_t3742586126::get_offset_of_HashValue_0(),
	HashAlgorithm_t3742586126::get_offset_of_HashSizeValue_1(),
	HashAlgorithm_t3742586126::get_offset_of_State_2(),
	HashAlgorithm_t3742586126::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (KeySizes_t2084040638), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable636[3] = 
{
	KeySizes_t2084040638::get_offset_of__maxSize_0(),
	KeySizes_t2084040638::get_offset_of__minSize_1(),
	KeySizes_t2084040638::get_offset_of__skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (KeyedHashAlgorithm_t429970687), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable637[1] = 
{
	KeyedHashAlgorithm_t429970687::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (MACTripleDES_t3636299079), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable638[3] = 
{
	MACTripleDES_t3636299079::get_offset_of_tdes_5(),
	MACTripleDES_t3636299079::get_offset_of_mac_6(),
	MACTripleDES_t3636299079::get_offset_of_m_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (MD5_t3029800043), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (MD5CryptoServiceProvider_t4138794316), -1, sizeof(MD5CryptoServiceProvider_t4138794316_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable640[6] = 
{
	MD5CryptoServiceProvider_t4138794316::get_offset_of__H_4(),
	MD5CryptoServiceProvider_t4138794316::get_offset_of_buff_5(),
	MD5CryptoServiceProvider_t4138794316::get_offset_of_count_6(),
	MD5CryptoServiceProvider_t4138794316::get_offset_of__ProcessingBuffer_7(),
	MD5CryptoServiceProvider_t4138794316::get_offset_of__ProcessingBufferCount_8(),
	MD5CryptoServiceProvider_t4138794316_StaticFields::get_offset_of_K_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (PaddingMode_t2198491072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable641[6] = 
{
	PaddingMode_t2198491072::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (RC2_t1175717142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable642[1] = 
{
	RC2_t1175717142::get_offset_of_EffectiveKeySizeValue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (RC2CryptoServiceProvider_t1855610219), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (RC2Transform_t2490069643), -1, sizeof(RC2Transform_t2490069643_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable644[7] = 
{
	RC2Transform_t2490069643::get_offset_of_R0_12(),
	RC2Transform_t2490069643::get_offset_of_R1_13(),
	RC2Transform_t2490069643::get_offset_of_R2_14(),
	RC2Transform_t2490069643::get_offset_of_R3_15(),
	RC2Transform_t2490069643::get_offset_of_K_16(),
	RC2Transform_t2490069643::get_offset_of_j_17(),
	RC2Transform_t2490069643_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (RIPEMD160_t2494304270), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (RIPEMD160Managed_t805361003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable646[5] = 
{
	RIPEMD160Managed_t805361003::get_offset_of__ProcessingBuffer_4(),
	RIPEMD160Managed_t805361003::get_offset_of__X_5(),
	RIPEMD160Managed_t805361003::get_offset_of__HashValue_6(),
	RIPEMD160Managed_t805361003::get_offset_of__Length_7(),
	RIPEMD160Managed_t805361003::get_offset_of__ProcessingBufferCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (RNGCryptoServiceProvider_t1304356200), -1, sizeof(RNGCryptoServiceProvider_t1304356200_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable647[2] = 
{
	RNGCryptoServiceProvider_t1304356200_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t1304356200::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (RSA_t880491902), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (RSACryptoServiceProvider_t3032586813), -1, sizeof(RSACryptoServiceProvider_t3032586813_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable649[7] = 
{
	RSACryptoServiceProvider_t3032586813::get_offset_of_store_2(),
	RSACryptoServiceProvider_t3032586813::get_offset_of_persistKey_3(),
	RSACryptoServiceProvider_t3032586813::get_offset_of_persisted_4(),
	RSACryptoServiceProvider_t3032586813::get_offset_of_privateKeyExportable_5(),
	RSACryptoServiceProvider_t3032586813::get_offset_of_m_disposed_6(),
	RSACryptoServiceProvider_t3032586813::get_offset_of_rsa_7(),
	RSACryptoServiceProvider_t3032586813_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (RSAPKCS1KeyExchangeFormatter_t3341385262), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable650[2] = 
{
	RSAPKCS1KeyExchangeFormatter_t3341385262::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeFormatter_t3341385262::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (RSAPKCS1SignatureDeformatter_t3358162741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable651[2] = 
{
	RSAPKCS1SignatureDeformatter_t3358162741::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t3358162741::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (RSAPKCS1SignatureFormatter_t416206068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable652[2] = 
{
	RSAPKCS1SignatureFormatter_t416206068::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t416206068::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (RSAParameters_t817918657)+ sizeof (RuntimeObject), sizeof(RSAParameters_t817918657_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable653[8] = 
{
	RSAParameters_t817918657::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t817918657::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t817918657::get_offset_of_D_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t817918657::get_offset_of_DP_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t817918657::get_offset_of_DQ_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t817918657::get_offset_of_InverseQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t817918657::get_offset_of_Modulus_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t817918657::get_offset_of_Exponent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (RandomNumberGenerator_t338680056), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (Rijndael_t3207655192), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (RijndaelManaged_t57946280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (RijndaelTransform_t1035352920), -1, sizeof(RijndaelTransform_t1035352920_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable657[15] = 
{
	RijndaelTransform_t1035352920::get_offset_of_expandedKey_12(),
	RijndaelTransform_t1035352920::get_offset_of_Nb_13(),
	RijndaelTransform_t1035352920::get_offset_of_Nk_14(),
	RijndaelTransform_t1035352920::get_offset_of_Nr_15(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_Rcon_16(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_SBox_17(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_iSBox_18(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_T0_19(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_T1_20(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_T2_21(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_T3_22(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_iT0_23(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_iT1_24(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_iT2_25(),
	RijndaelTransform_t1035352920_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (RijndaelManagedTransform_t1374043678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable658[2] = 
{
	RijndaelManagedTransform_t1374043678::get_offset_of__st_0(),
	RijndaelManagedTransform_t1374043678::get_offset_of__bs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (SHA1_t1851241753), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (SHA1Internal_t2877871052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable660[5] = 
{
	SHA1Internal_t2877871052::get_offset_of__H_0(),
	SHA1Internal_t2877871052::get_offset_of_count_1(),
	SHA1Internal_t2877871052::get_offset_of__ProcessingBuffer_2(),
	SHA1Internal_t2877871052::get_offset_of__ProcessingBufferCount_3(),
	SHA1Internal_t2877871052::get_offset_of_buff_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (SHA1CryptoServiceProvider_t1344974363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable661[1] = 
{
	SHA1CryptoServiceProvider_t1344974363::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (SHA1Managed_t1070461348), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable662[1] = 
{
	SHA1Managed_t1070461348::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (SHA256_t3386170791), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (SHA256Managed_t1594429234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable664[5] = 
{
	SHA256Managed_t1594429234::get_offset_of__H_4(),
	SHA256Managed_t1594429234::get_offset_of_count_5(),
	SHA256Managed_t1594429234::get_offset_of__ProcessingBuffer_6(),
	SHA256Managed_t1594429234::get_offset_of__ProcessingBufferCount_7(),
	SHA256Managed_t1594429234::get_offset_of_buff_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (SHA384_t1347823033), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (SHA384Managed_t2341601902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable666[14] = 
{
	SHA384Managed_t2341601902::get_offset_of_xBuf_4(),
	SHA384Managed_t2341601902::get_offset_of_xBufOff_5(),
	SHA384Managed_t2341601902::get_offset_of_byteCount1_6(),
	SHA384Managed_t2341601902::get_offset_of_byteCount2_7(),
	SHA384Managed_t2341601902::get_offset_of_H1_8(),
	SHA384Managed_t2341601902::get_offset_of_H2_9(),
	SHA384Managed_t2341601902::get_offset_of_H3_10(),
	SHA384Managed_t2341601902::get_offset_of_H4_11(),
	SHA384Managed_t2341601902::get_offset_of_H5_12(),
	SHA384Managed_t2341601902::get_offset_of_H6_13(),
	SHA384Managed_t2341601902::get_offset_of_H7_14(),
	SHA384Managed_t2341601902::get_offset_of_H8_15(),
	SHA384Managed_t2341601902::get_offset_of_W_16(),
	SHA384Managed_t2341601902::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { sizeof (SHA512_t1693852619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (SHA512Managed_t557692053), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable668[14] = 
{
	SHA512Managed_t557692053::get_offset_of_xBuf_4(),
	SHA512Managed_t557692053::get_offset_of_xBufOff_5(),
	SHA512Managed_t557692053::get_offset_of_byteCount1_6(),
	SHA512Managed_t557692053::get_offset_of_byteCount2_7(),
	SHA512Managed_t557692053::get_offset_of_H1_8(),
	SHA512Managed_t557692053::get_offset_of_H2_9(),
	SHA512Managed_t557692053::get_offset_of_H3_10(),
	SHA512Managed_t557692053::get_offset_of_H4_11(),
	SHA512Managed_t557692053::get_offset_of_H5_12(),
	SHA512Managed_t557692053::get_offset_of_H6_13(),
	SHA512Managed_t557692053::get_offset_of_H7_14(),
	SHA512Managed_t557692053::get_offset_of_H8_15(),
	SHA512Managed_t557692053::get_offset_of_W_16(),
	SHA512Managed_t557692053::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (SHAConstants_t223971318), -1, sizeof(SHAConstants_t223971318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable669[2] = 
{
	SHAConstants_t223971318_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t223971318_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (SignatureDescription_t1662188432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable670[4] = 
{
	SignatureDescription_t1662188432::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t1662188432::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t1662188432::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t1662188432::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (DSASignatureDescription_t413434685), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (RSAPKCS1SHA1SignatureDescription_t1046459283), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (SymmetricAlgorithm_t566780172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable673[10] = 
{
	SymmetricAlgorithm_t566780172::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t566780172::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t566780172::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t566780172::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t566780172::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t566780172::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t566780172::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t566780172::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t566780172::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t566780172::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (ToBase64Transform_t4152430307), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable674[1] = 
{
	ToBase64Transform_t4152430307::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (TripleDES_t3823069722), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { sizeof (TripleDESCryptoServiceProvider_t1656129848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { sizeof (TripleDESTransform_t2209240482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable677[6] = 
{
	TripleDESTransform_t2209240482::get_offset_of_E1_12(),
	TripleDESTransform_t2209240482::get_offset_of_D2_13(),
	TripleDESTransform_t2209240482::get_offset_of_E3_14(),
	TripleDESTransform_t2209240482::get_offset_of_D1_15(),
	TripleDESTransform_t2209240482::get_offset_of_E2_16(),
	TripleDESTransform_t2209240482::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (CodeAccessSecurityAttribute_t3896103940), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (SecurityAction_t3447689955)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable681[10] = 
{
	SecurityAction_t3447689955::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (SecurityPermission_t381935124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable682[1] = 
{
	SecurityPermission_t381935124::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (SecurityPermissionAttribute_t3541690301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable683[1] = 
{
	SecurityPermissionAttribute_t3541690301::get_offset_of_m_Flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (SecurityPermissionFlag_t4234149418)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable684[17] = 
{
	SecurityPermissionFlag_t4234149418::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { sizeof (StrongNamePublicKeyBlob_t3487098661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable685[1] = 
{
	StrongNamePublicKeyBlob_t3487098661::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { sizeof (ApplicationTrust_t2405358150), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable686[1] = 
{
	ApplicationTrust_t2405358150::get_offset_of_fullTrustAssemblies_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { sizeof (Evidence_t1618184857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable687[4] = 
{
	Evidence_t1618184857::get_offset_of__locked_0(),
	Evidence_t1618184857::get_offset_of_hostEvidenceList_1(),
	Evidence_t1618184857::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t1618184857::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { sizeof (EvidenceEnumerator_t3804313988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable688[3] = 
{
	EvidenceEnumerator_t3804313988::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t3804313988::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t3804313988::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { sizeof (Hash_t253340281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable689[2] = 
{
	Hash_t253340281::get_offset_of_assembly_0(),
	Hash_t253340281::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (StrongName_t2276067545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable692[3] = 
{
	StrongName_t2276067545::get_offset_of_publickey_0(),
	StrongName_t2276067545::get_offset_of_name_1(),
	StrongName_t2276067545::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (PrincipalPolicy_t2949741543)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable695[4] = 
{
	PrincipalPolicy_t2949741543::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (WindowsAccountType_t1697821344)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable696[5] = 
{
	WindowsAccountType_t1697821344::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (WindowsIdentity_t1076356410), -1, sizeof(WindowsIdentity_t1076356410_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable697[7] = 
{
	WindowsIdentity_t1076356410::get_offset_of__token_0(),
	WindowsIdentity_t1076356410::get_offset_of__type_1(),
	WindowsIdentity_t1076356410::get_offset_of__account_2(),
	WindowsIdentity_t1076356410::get_offset_of__authenticated_3(),
	WindowsIdentity_t1076356410::get_offset_of__name_4(),
	WindowsIdentity_t1076356410::get_offset_of__info_5(),
	WindowsIdentity_t1076356410_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (AllowPartiallyTrustedCallersAttribute_t2721112382), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (CodeAccessPermission_t687997801), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
