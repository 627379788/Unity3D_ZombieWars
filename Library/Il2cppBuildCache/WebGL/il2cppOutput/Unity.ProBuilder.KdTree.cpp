#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>
struct TypeMath_1_t081D76B18BE447B38465E593BC0883AC02846AF3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.ProBuilder.KdTree.DuplicateNodeError
struct DuplicateNodeError_t979FF91DD314CC4CCA64F8F27754F57180AB4C14;
// System.Exception
struct Exception_t;
// UnityEngine.ProBuilder.KdTree.Math.FloatMath
struct FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral789F6EB390935724E847FEF78009D7D062260AE4;
IL2CPP_EXTERN_C const RuntimeMethod* TypeMath_1__ctor_m940909EBFADF8828A71F759AEED34C651E31371A_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8A3BAE096A35D8D21C6093D40F176EE0108B38D8 
{
public:

public:
};


// System.Object


// UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>
struct TypeMath_1_t081D76B18BE447B38465E593BC0883AC02846AF3  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.ProBuilder.KdTree.Math.FloatMath
struct FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6  : public TypeMath_1_t081D76B18BE447B38465E593BC0883AC02846AF3
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
struct AddDuplicateBehavior_t2033D4A8944914FC31BC7001CEA0E30C553440DE 
{
public:
	// System.Int32 UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddDuplicateBehavior_t2033D4A8944914FC31BC7001CEA0E30C553440DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ProBuilder.KdTree.DuplicateNodeError
struct DuplicateNodeError_t979FF91DD314CC4CCA64F8F27754F57180AB4C14  : public Exception_t
{
public:

public:
};


// <Module>


// <Module>


// System.Object


// System.Object


// UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>


// UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.String

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.String


// System.ValueType


// System.ValueType


// System.Boolean

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Boolean


// System.Enum

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};


// System.Enum


// UnityEngine.ProBuilder.KdTree.Math.FloatMath


// UnityEngine.ProBuilder.KdTree.Math.FloatMath


// System.Int32


// System.Int32


// System.IntPtr

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


// System.IntPtr


// System.Single


// System.Single


// System.Void


// System.Void


// UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior


// UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior


// System.Exception

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};


// System.Exception


// UnityEngine.ProBuilder.KdTree.DuplicateNodeError


// UnityEngine.ProBuilder.KdTree.DuplicateNodeError

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeMath_1__ctor_m940909EBFADF8828A71F759AEED34C651E31371A_gshared (TypeMath_1_t081D76B18BE447B38465E593BC0883AC02846AF3 * __this, const RuntimeMethod* method);

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::.ctor()
inline void TypeMath_1__ctor_m940909EBFADF8828A71F759AEED34C651E31371A (TypeMath_1_t081D76B18BE447B38465E593BC0883AC02846AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (TypeMath_1_t081D76B18BE447B38465E593BC0883AC02846AF3 *, const RuntimeMethod*))TypeMath_1__ctor_m940909EBFADF8828A71F759AEED34C651E31371A_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ProBuilder.KdTree.DuplicateNodeError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplicateNodeError__ctor_m92072DD2118C47EAA07D1F180CAFFFCF6E58AE0C (DuplicateNodeError_t979FF91DD314CC4CCA64F8F27754F57180AB4C14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral789F6EB390935724E847FEF78009D7D062260AE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("Cannot Add Node With Duplicate Coordinates")
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, _stringLiteral789F6EB390935724E847FEF78009D7D062260AE4, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.ProBuilder.KdTree.Math.FloatMath::Compare(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FloatMath_Compare_mD327D2C25A097B5E600A0EFD2713AB2813DD8C10 (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return a.CompareTo(b);
		float L_0 = ___b1;
		int32_t L_1;
		L_1 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&___a0), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.ProBuilder.KdTree.Math.FloatMath::AreEqual(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatMath_AreEqual_mEBD55227DA7352042928103751B3511E89A6DFCC (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return a == b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = (bool)((((float)L_0) == ((float)L_1))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::get_MinValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_MinValue_mAF7D3EDDFC2FA11C2485683FA1C8119530155630 (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return float.MinValue; }
		V_0 = (-(std::numeric_limits<float>::max)());
		goto IL_0009;
	}

IL_0009:
	{
		// get { return float.MinValue; }
		float L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_Zero_mDA80AB40F650B67EE78BDC446686FC49FC8F7E90 (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return 0; }
		V_0 = (0.0f);
		goto IL_0009;
	}

IL_0009:
	{
		// get { return 0; }
		float L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::get_NegativeInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_NegativeInfinity_mB36F00EED5168B0E5F287C5DF7C632C09E58E3A3 (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public override float NegativeInfinity { get { return float.NegativeInfinity; } }
		V_0 = (-std::numeric_limits<float>::infinity());
		goto IL_0009;
	}

IL_0009:
	{
		// public override float NegativeInfinity { get { return float.NegativeInfinity; } }
		float L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::get_PositiveInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_get_PositiveInfinity_m8FF71E645CA8EF5E84CEA99E21C1CF1CCD9FD48A (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public override float PositiveInfinity { get { return float.PositiveInfinity; } }
		V_0 = (std::numeric_limits<float>::infinity());
		goto IL_0009;
	}

IL_0009:
	{
		// public override float PositiveInfinity { get { return float.PositiveInfinity; } }
		float L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::Add(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_Add_m9A0B83D0A90358C61D6CE0A9827BEA4E80CC1C00 (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return a + b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = ((float)il2cpp_codegen_add((float)L_0, (float)L_1));
		goto IL_0007;
	}

IL_0007:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::Subtract(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_Subtract_mA15062DE5DA872B7F54FD1F67E01AFEA84977D14 (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return a - b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1));
		goto IL_0007;
	}

IL_0007:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::Multiply(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_Multiply_m76DDCDB6FBA28E30CD6142847290F200D4F07738 (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return a * b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		goto IL_0007;
	}

IL_0007:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.ProBuilder.KdTree.Math.FloatMath::DistanceSquaredBetweenPoints(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatMath_DistanceSquaredBetweenPoints_m746B83DDAF521F1E9E8B5EC29FAAE7AD1FA0FC03 (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	{
		// float distance = Zero;
		float L_0;
		L_0 = VirtFuncInvoker0< float >::Invoke(15 /* T UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::get_Zero() */, __this);
		V_0 = L_0;
		// int dimensions = a.Length;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___a0;
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		// for (var dimension = 0; dimension < dimensions; dimension++)
		V_2 = 0;
		goto IL_0037;
	}

IL_0010:
	{
		// float distOnThisAxis = Subtract(a[dimension], b[dimension]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___a0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___b1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		float L_10;
		L_10 = VirtFuncInvoker2< float, float, float >::Invoke(19 /* T UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::Subtract(T,T) */, __this, L_5, L_9);
		V_3 = L_10;
		// float distOnThisAxisSquared = Multiply(distOnThisAxis, distOnThisAxis);
		float L_11 = V_3;
		float L_12 = V_3;
		float L_13;
		L_13 = VirtFuncInvoker2< float, float, float >::Invoke(20 /* T UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::Multiply(T,T) */, __this, L_11, L_12);
		V_4 = L_13;
		// distance = Add(distance, distOnThisAxisSquared);
		float L_14 = V_0;
		float L_15 = V_4;
		float L_16;
		L_16 = VirtFuncInvoker2< float, float, float >::Invoke(18 /* T UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<System.Single>::Add(T,T) */, __this, L_14, L_15);
		V_0 = L_16;
		// for (var dimension = 0; dimension < dimensions; dimension++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0037:
	{
		// for (var dimension = 0; dimension < dimensions; dimension++)
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		V_5 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0010;
		}
	}
	{
		// return distance;
		float L_21 = V_0;
		V_6 = L_21;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		float L_22 = V_6;
		return L_22;
	}
}
// System.Void UnityEngine.ProBuilder.KdTree.Math.FloatMath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatMath__ctor_m2CD841D9C313DFFD3AEEBB0F177F3273B1EF6919 (FloatMath_t1AC2D301B5C3249392531B52C3E11A9806369DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeMath_1__ctor_m940909EBFADF8828A71F759AEED34C651E31371A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeMath_1__ctor_m940909EBFADF8828A71F759AEED34C651E31371A(__this, /*hidden argument*/TypeMath_1__ctor_m940909EBFADF8828A71F759AEED34C651E31371A_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
