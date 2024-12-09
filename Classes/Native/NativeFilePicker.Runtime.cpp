#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>
struct TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A;
// System.Threading.Tasks.TaskCompletionSource`1<NativeFilePicker/Permission>
struct TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F;
// System.Threading.Tasks.TaskFactory`1<System.Int32Enum>
struct TaskFactory_1_t96AF1AA119B568BA8916E7FD621B61B350B9BB49;
// System.Threading.Tasks.TaskFactory`1<NativeFilePicker/Permission>
struct TaskFactory_1_tBD3FB6CDCCBE877F15EA7D1BB1519C46A818B75A;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB;
// System.Threading.Tasks.Task`1<NativeFilePicker/Permission>
struct Task_1_t262C20356081CCC67A37DF3C0409D331E3E1D885;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// NativeFilePickerNamespace.FPResultCallbackiOS
struct FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeFilePicker/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37;
// NativeFilePicker/FilePickedCallback
struct FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239;
// NativeFilePicker/FilesExportedCallback
struct FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92;
// NativeFilePicker/MultipleFilesPickedCallback
struct MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453;
// NativeFilePicker/PermissionCallback
struct PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Permission_t0082A6A8B788B8C0B0633A4500A53D9FD5E04BB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0018A45D20F625FA49F1EFB61051C230B7391B02;
IL2CPP_EXTERN_C String_t* _stringLiteral05F87825FD487F6A7AEFBFE96C893E76672B03A6;
IL2CPP_EXTERN_C String_t* _stringLiteral1DD2DCBF57EE098EC1BA3AF3CB6B29AF78745408;
IL2CPP_EXTERN_C String_t* _stringLiteralA7DBB3B549C86F0820B1F72ED45A86C3EA138350;
IL2CPP_EXTERN_C String_t* _stringLiteralCC9ECFD07181921BFE130C43964B6D01EB19D62A;
IL2CPP_EXTERN_C String_t* _stringLiteralE3485DE4EC1B59447BA07BACA881CF27189190F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_mA9A91DCD4858974B85BB7097BBD3EC189B664783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFilePicker_ConvertExtensionToFileType_m8309B8A700A58E84AA581610A31AD71EC13868EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFilePicker_ExportFile_m8DFF788B9F6CAFFD743D4A32CC84962F763D062C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFilePicker_ExportMultipleFiles_mAAA02D7611439C34370F3AF217AE198F60B82965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA62FC4FDA66E2D11625E7B27D5D1B89CFD0384B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mEBDA00F3212273DA0A66D02817ACF240B1470F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m657A51C39FADEBCC4485390C09E4E99CA7562073_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CRequestPermissionAsyncU3Eb__0_m2A201926960A5BC0BB0995A207D534E917186B69_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t70B13D31500409CA695ADE13FD84AAF6370540DC 
{
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>
struct TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<NativeFilePicker/Permission>
struct TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t262C20356081CCC67A37DF3C0409D331E3E1D885* ____task_0;
};

// NativeFilePicker
struct NativeFilePicker_tFC16152288D2E328CB05E8810EEDCFE9181AB5D2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// NativeFilePicker/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<NativeFilePicker/Permission> NativeFilePicker/<>c__DisplayClass13_0::tcs
	TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F* ___tcs_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.StringSplitOptions
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;
};

// NativeFilePicker/Permission
struct Permission_t0082A6A8B788B8C0B0633A4500A53D9FD5E04BB0 
{
	// System.Int32 NativeFilePicker/Permission::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<NativeFilePicker/Permission>
struct Task_1_t262C20356081CCC67A37DF3C0409D331E3E1D885  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// NativeFilePicker/FilePickedCallback
struct FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239  : public MulticastDelegate_t
{
};

// NativeFilePicker/FilesExportedCallback
struct FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92  : public MulticastDelegate_t
{
};

// NativeFilePicker/MultipleFilesPickedCallback
struct MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453  : public MulticastDelegate_t
{
};

// NativeFilePicker/PermissionCallback
struct PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// NativeFilePickerNamespace.FPResultCallbackiOS
struct FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeFilePicker/FilePickedCallback NativeFilePickerNamespace.FPResultCallbackiOS::pickCallback
	FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* ___pickCallback_5;
	// NativeFilePicker/MultipleFilesPickedCallback NativeFilePickerNamespace.FPResultCallbackiOS::pickCallbackMultiple
	MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* ___pickCallbackMultiple_6;
	// NativeFilePicker/FilesExportedCallback NativeFilePickerNamespace.FPResultCallbackiOS::exportCallback
	FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* ___exportCallback_7;
	// System.Single NativeFilePickerNamespace.FPResultCallbackiOS::nextBusyCheckTime
	float ___nextBusyCheckTime_8;
};

// <Module>

// <Module>

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>

// System.Threading.Tasks.TaskCompletionSource`1<NativeFilePicker/Permission>

// System.Threading.Tasks.TaskCompletionSource`1<NativeFilePicker/Permission>

// NativeFilePicker

// NativeFilePicker

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// NativeFilePicker/<>c__DisplayClass13_0

// NativeFilePicker/<>c__DisplayClass13_0

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Int32Enum

// System.Int32Enum

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.StringSplitOptions

// System.StringSplitOptions

// NativeFilePicker/Permission

// NativeFilePicker/Permission

// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t96AF1AA119B568BA8916E7FD621B61B350B9BB49* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Int32Enum>

// System.Threading.Tasks.Task`1<NativeFilePicker/Permission>
struct Task_1_t262C20356081CCC67A37DF3C0409D331E3E1D885_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tBD3FB6CDCCBE877F15EA7D1BB1519C46A818B75A* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<NativeFilePicker/Permission>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// NativeFilePicker/FilePickedCallback

// NativeFilePicker/FilePickedCallback

// NativeFilePicker/FilesExportedCallback

// NativeFilePicker/FilesExportedCallback

// NativeFilePicker/MultipleFilesPickedCallback

// NativeFilePicker/MultipleFilesPickedCallback

// NativeFilePicker/PermissionCallback

// NativeFilePicker/PermissionCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// NativeFilePickerNamespace.FPResultCallbackiOS
struct FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields
{
	// NativeFilePickerNamespace.FPResultCallbackiOS NativeFilePickerNamespace.FPResultCallbackiOS::instance
	FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* ___instance_4;
	// System.Boolean NativeFilePickerNamespace.FPResultCallbackiOS::<IsBusy>k__BackingField
	bool ___U3CIsBusyU3Ek__BackingField_9;
};

// NativeFilePickerNamespace.FPResultCallbackiOS
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m9FD8C5F5BF7CC119D6FF330BA42C60284DB47E65_gshared (TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* TaskCompletionSource_1_get_Task_mB4A2FF75AC28BB6E3B7A55129E9CD347E5F06FDC_gshared_inline (TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m9AEEE70A249C411C5DE39635EF35DAF9D5FAF458_gshared (TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A* __this, int32_t ___0_result, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// NativeFilePicker/Permission NativeFilePicker::CheckPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker_CheckPermission_m56D8F3313DE4E82CC74FCDBBA1CF2A6BE1D35257 (bool ___0_readPermissionOnly, const RuntimeMethod* method) ;
// System.Void NativeFilePicker/PermissionCallback::Invoke(NativeFilePicker/Permission)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_inline (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, const RuntimeMethod* method) ;
// System.Void NativeFilePicker/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m9549841AE0F784546E2796C989B1C5E5F45B721F (U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<NativeFilePicker/Permission>::.ctor()
inline void TaskCompletionSource_1__ctor_mEBDA00F3212273DA0A66D02817ACF240B1470F42 (TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F*, const RuntimeMethod*))TaskCompletionSource_1__ctor_m9FD8C5F5BF7CC119D6FF330BA42C60284DB47E65_gshared)(__this, method);
}
// System.Void NativeFilePicker/PermissionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback__ctor_mFFE3E172817EB89591780E6B9B31CD24778370EE (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeFilePicker::RequestPermissionAsync(NativeFilePicker/PermissionCallback,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFilePicker_RequestPermissionAsync_m0A17ACEB29BEC46EFD9289EAC7EF24D8FB598633 (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* ___0_callback, bool ___1_readPermissionOnly, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<NativeFilePicker/Permission>::get_Task()
inline Task_1_t262C20356081CCC67A37DF3C0409D331E3E1D885* TaskCompletionSource_1_get_Task_m657A51C39FADEBCC4485390C09E4E99CA7562073_inline (TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t262C20356081CCC67A37DF3C0409D331E3E1D885* (*) (TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mB4A2FF75AC28BB6E3B7A55129E9CD347E5F06FDC_gshared_inline)(__this, method);
}
// System.Int32 NativeFilePicker::_NativeFilePicker_CanPickMultipleFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker__NativeFilePicker_CanPickMultipleFiles_m577761E7FB9E2DD727023B7891501EE53147489C (const RuntimeMethod* method) ;
// System.Boolean NativeFilePickerNamespace.FPResultCallbackiOS::get_IsBusy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FPResultCallbackiOS_get_IsBusy_mA89F6EF430BBA5429DDC0AB3C7CC3B3DAB8C7F47_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.String NativeFilePicker::_NativeFilePicker_ConvertExtensionToUTI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeFilePicker__NativeFilePicker_ConvertExtensionToUTI_m7D442376C952A40438C008401F0CABDAAA2C1DA6 (String_t* ___0_extension, const RuntimeMethod* method) ;
// NativeFilePicker/Permission NativeFilePicker::RequestPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker_RequestPermission_mDCC0841549C2FEA94131DEDFB94FB3D1F4120E6F (bool ___0_readPermissionOnly, const RuntimeMethod* method) ;
// System.Boolean NativeFilePicker::IsFilePickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFilePicker_IsFilePickerBusy_mB5A7E1D2367DDD7E2397B8E29E3D589BF996B85D (const RuntimeMethod* method) ;
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::Initialize(NativeFilePicker/FilePickedCallback,NativeFilePicker/MultipleFilesPickedCallback,NativeFilePicker/FilesExportedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS_Initialize_m103F05D5A516C3FD4D1EABEE05F66C38B14B2EC2 (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* ___0_pickCallback, MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* ___1_pickCallbackMultiple, FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* ___2_exportCallback, const RuntimeMethod* method) ;
// System.Void NativeFilePicker::_NativeFilePicker_PickFile(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFilePicker__NativeFilePicker_PickFile_m61506E0B8577701A57DEE16F1C1F997B83EC6B6E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_UTIs, int32_t ___1_UTIsCount, const RuntimeMethod* method) ;
// System.Boolean NativeFilePicker::CanPickMultipleFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFilePicker_CanPickMultipleFiles_m206788E893263B7B8586F5E00E3D3626EB0354FB (const RuntimeMethod* method) ;
// System.Void NativeFilePicker::_NativeFilePicker_PickMultipleFiles(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFilePicker__NativeFilePicker_PickMultipleFiles_m5056D327D074242C34F91088400BAF2B21A0D75D (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_UTIs, int32_t ___1_UTIsCount, const RuntimeMethod* method) ;
// System.Void NativeFilePicker/MultipleFilesPickedCallback::Invoke(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_inline (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) ;
// System.Boolean NativeFilePicker::CanExportFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFilePicker_CanExportFiles_mA687449FB6B1EB553522DA88DABAC843B31AE980 (const RuntimeMethod* method) ;
// System.Void NativeFilePicker::_NativeFilePicker_ExportFiles(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFilePicker__NativeFilePicker_ExportFiles_m5016004D8018CA80A59C5AA52489C071A8312BB6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_files, int32_t ___1_filesCount, const RuntimeMethod* method) ;
// System.Void NativeFilePicker/FilesExportedCallback::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_inline (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, const RuntimeMethod* method) ;
// System.Boolean NativeFilePicker::CanExportMultipleFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFilePicker_CanExportMultipleFiles_mEAF4A6057A83982D647A7C5396823D97CFE75C9B (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<NativeFilePicker/Permission>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA62FC4FDA66E2D11625E7B27D5D1B89CFD0384B3 (TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F*, int32_t, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m9AEEE70A249C411C5DE39635EF35DAF9D5FAF458_gshared)(__this, ___0_result, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeFilePickerNamespace.FPResultCallbackiOS>()
inline FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* GameObject_AddComponent_TisFPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_mA9A91DCD4858974B85BB7097BBD3EC189B664783 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FPResultCallbackiOS_set_IsBusy_m9A023A5B59ACBCB4328BF8FCCB1321885E903D2A_inline (bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 NativeFilePickerNamespace.FPResultCallbackiOS::_NativeFilePicker_IsFilePickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FPResultCallbackiOS__NativeFilePicker_IsFilePickerBusy_m29848BBABC05EB2A5FC3EF08F31F464A1C541E4E (const RuntimeMethod* method) ;
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::OnOperationCancelled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS_OnOperationCancelled_mE9865AE81912463D793B7899CF862015D8A41EDB (FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void NativeFilePicker/FilePickedCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_inline (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.String[] NativeFilePickerNamespace.FPResultCallbackiOS::SplitPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* FPResultCallbackiOS_SplitPaths_m455BE020360AC0761822563FABA83811AB1F35F6 (FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* __this, String_t* ___0_paths, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeFilePicker_CanPickMultipleFiles();
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeFilePicker_ConvertExtensionToUTI(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeFilePicker_PickFile(char**, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeFilePicker_PickMultipleFiles(char**, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeFilePicker_ExportFiles(char**, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeFilePicker_IsFilePickerBusy();
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
// System.Int32 NativeFilePicker::_NativeFilePicker_CanPickMultipleFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker__NativeFilePicker_CanPickMultipleFiles_m577761E7FB9E2DD727023B7891501EE53147489C (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeFilePicker_CanPickMultipleFiles)();

	return returnValue;
}
// System.String NativeFilePicker::_NativeFilePicker_ConvertExtensionToUTI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeFilePicker__NativeFilePicker_ConvertExtensionToUTI_m7D442376C952A40438C008401F0CABDAAA2C1DA6 (String_t* ___0_extension, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_extension' to native representation
	char* ____0_extension_marshaled = NULL;
	____0_extension_marshaled = il2cpp_codegen_marshal_string(___0_extension);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeFilePicker_ConvertExtensionToUTI)(____0_extension_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_extension' native representation
	il2cpp_codegen_marshal_free(____0_extension_marshaled);
	____0_extension_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void NativeFilePicker::_NativeFilePicker_PickFile(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFilePicker__NativeFilePicker_PickFile_m61506E0B8577701A57DEE16F1C1F997B83EC6B6E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_UTIs, int32_t ___1_UTIsCount, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, int32_t);

	// Marshaling of parameter '___0_UTIs' to native representation
	char** ____0_UTIs_marshaled = NULL;
	if (___0_UTIs != NULL)
	{
		il2cpp_array_size_t ____0_UTIs_Length = (___0_UTIs)->max_length;
		____0_UTIs_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____0_UTIs_Length + 1);
		(____0_UTIs_marshaled)[____0_UTIs_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_UTIs_Length); i++)
		{
			(____0_UTIs_marshaled)[i] = il2cpp_codegen_marshal_string((___0_UTIs)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____0_UTIs_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeFilePicker_PickFile)(____0_UTIs_marshaled, ___1_UTIsCount);

	// Marshaling cleanup of parameter '___0_UTIs' native representation
	if (____0_UTIs_marshaled != NULL)
	{
		const il2cpp_array_size_t ____0_UTIs_marshaled_CleanupLoopCount = (___0_UTIs != NULL) ? (___0_UTIs)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_UTIs_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____0_UTIs_marshaled)[i]);
			(____0_UTIs_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____0_UTIs_marshaled);
		____0_UTIs_marshaled = NULL;
	}

}
// System.Void NativeFilePicker::_NativeFilePicker_PickMultipleFiles(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFilePicker__NativeFilePicker_PickMultipleFiles_m5056D327D074242C34F91088400BAF2B21A0D75D (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_UTIs, int32_t ___1_UTIsCount, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, int32_t);

	// Marshaling of parameter '___0_UTIs' to native representation
	char** ____0_UTIs_marshaled = NULL;
	if (___0_UTIs != NULL)
	{
		il2cpp_array_size_t ____0_UTIs_Length = (___0_UTIs)->max_length;
		____0_UTIs_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____0_UTIs_Length + 1);
		(____0_UTIs_marshaled)[____0_UTIs_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_UTIs_Length); i++)
		{
			(____0_UTIs_marshaled)[i] = il2cpp_codegen_marshal_string((___0_UTIs)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____0_UTIs_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeFilePicker_PickMultipleFiles)(____0_UTIs_marshaled, ___1_UTIsCount);

	// Marshaling cleanup of parameter '___0_UTIs' native representation
	if (____0_UTIs_marshaled != NULL)
	{
		const il2cpp_array_size_t ____0_UTIs_marshaled_CleanupLoopCount = (___0_UTIs != NULL) ? (___0_UTIs)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_UTIs_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____0_UTIs_marshaled)[i]);
			(____0_UTIs_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____0_UTIs_marshaled);
		____0_UTIs_marshaled = NULL;
	}

}
// System.Void NativeFilePicker::_NativeFilePicker_ExportFiles(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFilePicker__NativeFilePicker_ExportFiles_m5016004D8018CA80A59C5AA52489C071A8312BB6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_files, int32_t ___1_filesCount, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, int32_t);

	// Marshaling of parameter '___0_files' to native representation
	char** ____0_files_marshaled = NULL;
	if (___0_files != NULL)
	{
		il2cpp_array_size_t ____0_files_Length = (___0_files)->max_length;
		____0_files_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____0_files_Length + 1);
		(____0_files_marshaled)[____0_files_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_files_Length); i++)
		{
			(____0_files_marshaled)[i] = il2cpp_codegen_marshal_string((___0_files)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____0_files_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeFilePicker_ExportFiles)(____0_files_marshaled, ___1_filesCount);

	// Marshaling cleanup of parameter '___0_files' native representation
	if (____0_files_marshaled != NULL)
	{
		const il2cpp_array_size_t ____0_files_marshaled_CleanupLoopCount = (___0_files != NULL) ? (___0_files)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_files_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____0_files_marshaled)[i]);
			(____0_files_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____0_files_marshaled);
		____0_files_marshaled = NULL;
	}

}
// NativeFilePicker/Permission NativeFilePicker::CheckPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker_CheckPermission_m56D8F3313DE4E82CC74FCDBBA1CF2A6BE1D35257 (bool ___0_readPermissionOnly, const RuntimeMethod* method) 
{
	{
		// return Permission.Granted;
		return (int32_t)(1);
	}
}
// NativeFilePicker/Permission NativeFilePicker::RequestPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker_RequestPermission_mDCC0841549C2FEA94131DEDFB94FB3D1F4120E6F (bool ___0_readPermissionOnly, const RuntimeMethod* method) 
{
	{
		// if( CheckPermission( readPermissionOnly ) == Permission.Granted )
		bool L_0 = ___0_readPermissionOnly;
		int32_t L_1;
		L_1 = NativeFilePicker_CheckPermission_m56D8F3313DE4E82CC74FCDBBA1CF2A6BE1D35257(L_0, NULL);
		// return Permission.Granted;
		return (int32_t)(1);
	}
}
// System.Void NativeFilePicker::RequestPermissionAsync(NativeFilePicker/PermissionCallback,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFilePicker_RequestPermissionAsync_m0A17ACEB29BEC46EFD9289EAC7EF24D8FB598633 (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* ___0_callback, bool ___1_readPermissionOnly, const RuntimeMethod* method) 
{
	{
		// callback( Permission.Granted );
		PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* L_0 = ___0_callback;
		NullCheck(L_0);
		PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_inline(L_0, 1, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<NativeFilePicker/Permission> NativeFilePicker::RequestPermissionAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t262C20356081CCC67A37DF3C0409D331E3E1D885* NativeFilePicker_RequestPermissionAsync_m76FFABB0FD9C07BF6D41C3748D4D7EF61499920B (bool ___0_readPermissionOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mEBDA00F3212273DA0A66D02817ACF240B1470F42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m657A51C39FADEBCC4485390C09E4E99CA7562073_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CRequestPermissionAsyncU3Eb__0_m2A201926960A5BC0BB0995A207D534E917186B69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37* L_0 = (U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m9549841AE0F784546E2796C989B1C5E5F45B721F(L_0, NULL);
		// TaskCompletionSource<Permission> tcs = new TaskCompletionSource<Permission>();
		U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37* L_1 = L_0;
		TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F* L_2 = (TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F*)il2cpp_codegen_object_new(TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TaskCompletionSource_1__ctor_mEBDA00F3212273DA0A66D02817ACF240B1470F42(L_2, TaskCompletionSource_1__ctor_mEBDA00F3212273DA0A66D02817ACF240B1470F42_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___tcs_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tcs_0), (void*)L_2);
		// RequestPermissionAsync( ( permission ) => tcs.SetResult( permission ), readPermissionOnly );
		U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37* L_3 = L_1;
		PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* L_4 = (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181*)il2cpp_codegen_object_new(PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PermissionCallback__ctor_mFFE3E172817EB89591780E6B9B31CD24778370EE(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CRequestPermissionAsyncU3Eb__0_m2A201926960A5BC0BB0995A207D534E917186B69_RuntimeMethod_var), NULL);
		bool L_5 = ___0_readPermissionOnly;
		NativeFilePicker_RequestPermissionAsync_m0A17ACEB29BEC46EFD9289EAC7EF24D8FB598633(L_4, L_5, NULL);
		// return tcs.Task;
		NullCheck(L_3);
		TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F* L_6 = L_3->___tcs_0;
		NullCheck(L_6);
		Task_1_t262C20356081CCC67A37DF3C0409D331E3E1D885* L_7;
		L_7 = TaskCompletionSource_1_get_Task_m657A51C39FADEBCC4485390C09E4E99CA7562073_inline(L_6, TaskCompletionSource_1_get_Task_m657A51C39FADEBCC4485390C09E4E99CA7562073_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void NativeFilePicker::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFilePicker_OpenSettings_mAE9DC3DF0D8ECDD36BEBCA55CC4319695FA6AC2E (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean NativeFilePicker::CanPickMultipleFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFilePicker_CanPickMultipleFiles_m206788E893263B7B8586F5E00E3D3626EB0354FB (const RuntimeMethod* method) 
{
	{
		// return _NativeFilePicker_CanPickMultipleFiles() == 1;
		int32_t L_0;
		L_0 = NativeFilePicker__NativeFilePicker_CanPickMultipleFiles_m577761E7FB9E2DD727023B7891501EE53147489C(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean NativeFilePicker::CanExportFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFilePicker_CanExportFiles_mA687449FB6B1EB553522DA88DABAC843B31AE980 (const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean NativeFilePicker::CanExportMultipleFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFilePicker_CanExportMultipleFiles_mEAF4A6057A83982D647A7C5396823D97CFE75C9B (const RuntimeMethod* method) 
{
	{
		// return _NativeFilePicker_CanPickMultipleFiles() == 1;
		int32_t L_0;
		L_0 = NativeFilePicker__NativeFilePicker_CanPickMultipleFiles_m577761E7FB9E2DD727023B7891501EE53147489C(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean NativeFilePicker::IsFilePickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFilePicker_IsFilePickerBusy_mB5A7E1D2367DDD7E2397B8E29E3D589BF996B85D (const RuntimeMethod* method) 
{
	{
		// return FPResultCallbackiOS.IsBusy;
		bool L_0;
		L_0 = FPResultCallbackiOS_get_IsBusy_mA89F6EF430BBA5429DDC0AB3C7CC3B3DAB8C7F47_inline(NULL);
		return L_0;
	}
}
// System.String NativeFilePicker::ConvertExtensionToFileType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeFilePicker_ConvertExtensionToFileType_m8309B8A700A58E84AA581610A31AD71EC13868EB (String_t* ___0_extension, const RuntimeMethod* method) 
{
	{
		// if( string.IsNullOrEmpty( extension ) )
		String_t* L_0 = ___0_extension;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000a:
	{
		// if( extension.IndexOf( '*' ) >= 0 )
		String_t* L_2 = ___0_extension;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)42), NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// throw new ArgumentException( "See: https://github.com/yasirkula/UnityNativeFilePicker#faq" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC9ECFD07181921BFE130C43964B6D01EB19D62A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeFilePicker_ConvertExtensionToFileType_m8309B8A700A58E84AA581610A31AD71EC13868EB_RuntimeMethod_var)));
	}

IL_0020:
	{
		// return _NativeFilePicker_ConvertExtensionToUTI( extension.ToLowerInvariant() );
		String_t* L_5 = ___0_extension;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_5, NULL);
		String_t* L_7;
		L_7 = NativeFilePicker__NativeFilePicker_ConvertExtensionToUTI_m7D442376C952A40438C008401F0CABDAAA2C1DA6(L_6, NULL);
		return L_7;
	}
}
// NativeFilePicker/Permission NativeFilePicker::PickFile(NativeFilePicker/FilePickedCallback,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker_PickFile_mE0A62239E1BF0FA13D510BEF748FFD163D2A6F8D (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* ___0_callback, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_allowedFileTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0018A45D20F625FA49F1EFB61051C230B7391B02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3485DE4EC1B59447BA07BACA881CF27189190F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// if( allowedFileTypes == null || allowedFileTypes.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___1_allowedFileTypes;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_allowedFileTypes;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001f;
		}
	}

IL_0007:
	{
		// allowedFileTypes = new string[] { "public.item", "public.content" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral0018A45D20F625FA49F1EFB61051C230B7391B02);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0018A45D20F625FA49F1EFB61051C230B7391B02);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralE3485DE4EC1B59447BA07BACA881CF27189190F5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE3485DE4EC1B59447BA07BACA881CF27189190F5);
		___1_allowedFileTypes = L_4;
	}

IL_001f:
	{
		// Permission result = RequestPermission( true );
		int32_t L_5;
		L_5 = NativeFilePicker_RequestPermission_mDCC0841549C2FEA94131DEDFB94FB3D1F4120E6F((bool)1, NULL);
		// if( result == Permission.Granted && !IsFilePickerBusy() )
		int32_t L_6 = L_5;
		G_B4_0 = L_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			G_B6_0 = L_6;
			goto IL_0041;
		}
	}
	{
		bool L_7;
		L_7 = NativeFilePicker_IsFilePickerBusy_mB5A7E1D2367DDD7E2397B8E29E3D589BF996B85D(NULL);
		G_B5_0 = G_B4_0;
		if (L_7)
		{
			G_B6_0 = G_B4_0;
			goto IL_0041;
		}
	}
	{
		// FPResultCallbackiOS.Initialize( callback, null, null );
		FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* L_8 = ___0_callback;
		FPResultCallbackiOS_Initialize_m103F05D5A516C3FD4D1EABEE05F66C38B14B2EC2(L_8, (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453*)NULL, (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92*)NULL, NULL);
		// _NativeFilePicker_PickFile( allowedFileTypes, allowedFileTypes.Length );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ___1_allowedFileTypes;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___1_allowedFileTypes;
		NullCheck(L_10);
		NativeFilePicker__NativeFilePicker_PickFile_m61506E0B8577701A57DEE16F1C1F997B83EC6B6E(L_9, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		G_B6_0 = G_B5_0;
	}

IL_0041:
	{
		// return result;
		return G_B6_0;
	}
}
// NativeFilePicker/Permission NativeFilePicker::PickMultipleFiles(NativeFilePicker/MultipleFilesPickedCallback,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker_PickMultipleFiles_m7D78C9F696661030888FAD616580E69BDF05F08E (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* ___0_callback, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_allowedFileTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0018A45D20F625FA49F1EFB61051C230B7391B02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3485DE4EC1B59447BA07BACA881CF27189190F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B9_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if( allowedFileTypes == null || allowedFileTypes.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___1_allowedFileTypes;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_allowedFileTypes;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001f;
		}
	}

IL_0007:
	{
		// allowedFileTypes = new string[] { "public.item", "public.content" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral0018A45D20F625FA49F1EFB61051C230B7391B02);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0018A45D20F625FA49F1EFB61051C230B7391B02);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralE3485DE4EC1B59447BA07BACA881CF27189190F5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE3485DE4EC1B59447BA07BACA881CF27189190F5);
		___1_allowedFileTypes = L_4;
	}

IL_001f:
	{
		// Permission result = RequestPermission( true );
		int32_t L_5;
		L_5 = NativeFilePicker_RequestPermission_mDCC0841549C2FEA94131DEDFB94FB3D1F4120E6F((bool)1, NULL);
		// if( result == Permission.Granted && !IsFilePickerBusy() )
		int32_t L_6 = L_5;
		G_B4_0 = L_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			G_B9_0 = L_6;
			goto IL_0053;
		}
	}
	{
		bool L_7;
		L_7 = NativeFilePicker_IsFilePickerBusy_mB5A7E1D2367DDD7E2397B8E29E3D589BF996B85D(NULL);
		G_B5_0 = G_B4_0;
		if (L_7)
		{
			G_B9_0 = G_B4_0;
			goto IL_0053;
		}
	}
	{
		// if( CanPickMultipleFiles() )
		bool L_8;
		L_8 = NativeFilePicker_CanPickMultipleFiles_m206788E893263B7B8586F5E00E3D3626EB0354FB(NULL);
		G_B6_0 = G_B5_0;
		if (!L_8)
		{
			G_B7_0 = G_B5_0;
			goto IL_0049;
		}
	}
	{
		// FPResultCallbackiOS.Initialize( null, callback, null );
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_9 = ___0_callback;
		FPResultCallbackiOS_Initialize_m103F05D5A516C3FD4D1EABEE05F66C38B14B2EC2((FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239*)NULL, L_9, (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92*)NULL, NULL);
		// _NativeFilePicker_PickMultipleFiles( allowedFileTypes, allowedFileTypes.Length );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___1_allowedFileTypes;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___1_allowedFileTypes;
		NullCheck(L_11);
		NativeFilePicker__NativeFilePicker_PickMultipleFiles_m5056D327D074242C34F91088400BAF2B21A0D75D(L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		return G_B6_0;
	}

IL_0049:
	{
		// else if( callback != null )
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_12 = ___0_callback;
		G_B8_0 = G_B7_0;
		if (!L_12)
		{
			G_B9_0 = G_B7_0;
			goto IL_0053;
		}
	}
	{
		// callback( null );
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_13 = ___0_callback;
		NullCheck(L_13);
		MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_inline(L_13, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		G_B9_0 = G_B8_0;
	}

IL_0053:
	{
		// return result;
		return G_B9_0;
	}
}
// NativeFilePicker/Permission NativeFilePicker::ExportFile(System.String,NativeFilePicker/FilesExportedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker_ExportFile_m8DFF788B9F6CAFFD743D4A32CC84962F763D062C (String_t* ___0_filePath, FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if( string.IsNullOrEmpty( filePath ) )
		String_t* L_0 = ___0_filePath;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'filePath' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DD2DCBF57EE098EC1BA3AF3CB6B29AF78745408)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeFilePicker_ExportFile_m8DFF788B9F6CAFFD743D4A32CC84962F763D062C_RuntimeMethod_var)));
	}

IL_0013:
	{
		// Permission result = RequestPermission( false );
		int32_t L_3;
		L_3 = NativeFilePicker_RequestPermission_mDCC0841549C2FEA94131DEDFB94FB3D1F4120E6F((bool)0, NULL);
		V_0 = L_3;
		// if( result == Permission.Granted && !IsFilePickerBusy() )
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		bool L_5;
		L_5 = NativeFilePicker_IsFilePickerBusy_mB5A7E1D2367DDD7E2397B8E29E3D589BF996B85D(NULL);
		if (L_5)
		{
			goto IL_0050;
		}
	}
	{
		// if( CanExportFiles() )
		bool L_6;
		L_6 = NativeFilePicker_CanExportFiles_mA687449FB6B1EB553522DA88DABAC843B31AE980(NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// FPResultCallbackiOS.Initialize( null, null, callback );
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_7 = ___1_callback;
		FPResultCallbackiOS_Initialize_m103F05D5A516C3FD4D1EABEE05F66C38B14B2EC2((FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239*)NULL, (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453*)NULL, L_7, NULL);
		// _NativeFilePicker_ExportFiles( new string[1] { filePath }, 1 );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___0_filePath;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_10);
		NativeFilePicker__NativeFilePicker_ExportFiles_m5016004D8018CA80A59C5AA52489C071A8312BB6(L_9, 1, NULL);
		goto IL_0050;
	}

IL_0046:
	{
		// else if( callback != null )
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_11 = ___1_callback;
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		// callback( false );
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_12 = ___1_callback;
		NullCheck(L_12);
		FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_inline(L_12, (bool)0, NULL);
	}

IL_0050:
	{
		// return result;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// NativeFilePicker/Permission NativeFilePicker::ExportMultipleFiles(System.String[],NativeFilePicker/FilesExportedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFilePicker_ExportMultipleFiles_mAAA02D7611439C34370F3AF217AE198F60B82965 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_filePaths, FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* ___1_callback, const RuntimeMethod* method) 
{
	int32_t G_B9_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if( filePaths == null || filePaths.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_filePaths;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_filePaths;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0007:
	{
		// throw new ArgumentException( "Parameter 'filePaths' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05F87825FD487F6A7AEFBFE96C893E76672B03A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeFilePicker_ExportMultipleFiles_mAAA02D7611439C34370F3AF217AE198F60B82965_RuntimeMethod_var)));
	}

IL_0012:
	{
		// Permission result = RequestPermission( false );
		int32_t L_3;
		L_3 = NativeFilePicker_RequestPermission_mDCC0841549C2FEA94131DEDFB94FB3D1F4120E6F((bool)0, NULL);
		// if( result == Permission.Granted && !IsFilePickerBusy() )
		int32_t L_4 = L_3;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			G_B9_0 = L_4;
			goto IL_0046;
		}
	}
	{
		bool L_5;
		L_5 = NativeFilePicker_IsFilePickerBusy_mB5A7E1D2367DDD7E2397B8E29E3D589BF996B85D(NULL);
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B9_0 = G_B4_0;
			goto IL_0046;
		}
	}
	{
		// if( CanExportMultipleFiles() )
		bool L_6;
		L_6 = NativeFilePicker_CanExportMultipleFiles_mEAF4A6057A83982D647A7C5396823D97CFE75C9B(NULL);
		G_B6_0 = G_B5_0;
		if (!L_6)
		{
			G_B7_0 = G_B5_0;
			goto IL_003c;
		}
	}
	{
		// FPResultCallbackiOS.Initialize( null, null, callback );
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_7 = ___1_callback;
		FPResultCallbackiOS_Initialize_m103F05D5A516C3FD4D1EABEE05F66C38B14B2EC2((FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239*)NULL, (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453*)NULL, L_7, NULL);
		// _NativeFilePicker_ExportFiles( filePaths, filePaths.Length );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___0_filePaths;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ___0_filePaths;
		NullCheck(L_9);
		NativeFilePicker__NativeFilePicker_ExportFiles_m5016004D8018CA80A59C5AA52489C071A8312BB6(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		return G_B6_0;
	}

IL_003c:
	{
		// else if( callback != null )
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_10 = ___1_callback;
		G_B8_0 = G_B7_0;
		if (!L_10)
		{
			G_B9_0 = G_B7_0;
			goto IL_0046;
		}
	}
	{
		// callback( false );
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_11 = ___1_callback;
		NullCheck(L_11);
		FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_inline(L_11, (bool)0, NULL);
		G_B9_0 = G_B8_0;
	}

IL_0046:
	{
		// return result;
		return G_B9_0;
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
void PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_Multicast(PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* currentDelegate = reinterpret_cast<PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_permission, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_OpenInst(PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_permission, method);
}
void PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_OpenStatic(PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_permission, method);
}
void PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_OpenStaticInvoker(PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_permission);
}
void PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_ClosedStaticInvoker(PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_permission);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181 (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_permission);

}
// System.Void NativeFilePicker/PermissionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback__ctor_mFFE3E172817EB89591780E6B9B31CD24778370EE (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_Multicast;
}
// System.Void NativeFilePicker/PermissionCallback::Invoke(NativeFilePicker/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386 (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_permission, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeFilePicker/PermissionCallback::BeginInvoke(NativeFilePicker/Permission,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PermissionCallback_BeginInvoke_m07822A9D611515665D63C7DCB58A19EBFE953F8B (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Permission_t0082A6A8B788B8C0B0633A4500A53D9FD5E04BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Permission_t0082A6A8B788B8C0B0633A4500A53D9FD5E04BB0_il2cpp_TypeInfo_var, &___0_permission);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeFilePicker/PermissionCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback_EndInvoke_mD22A4E0191FA6FA2D36A51F150717B5CA6DB525E (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_Multicast(FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* currentDelegate = reinterpret_cast<FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_OpenInst(FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	NullCheck(___0_path);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_OpenStatic(FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_OpenStaticInvoker(FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_path);
}
void FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_ClosedStaticInvoker(FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_path);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239 (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	il2cppPInvokeFunc(____0_path_marshaled);

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

}
// System.Void NativeFilePicker/FilePickedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilePickedCallback__ctor_mDC0CE5F123DC76DE666C1B5522DA389A2EC6D601 (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_Multicast;
}
// System.Void NativeFilePicker/FilePickedCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeFilePicker/FilePickedCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilePickedCallback_BeginInvoke_mF092ECA41A3F9C481C115E9856DBD1B091E97B71 (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_path;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeFilePicker/FilePickedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilePickedCallback_EndInvoke_m5BD5B3C5480F94EB69F5E11681A44851394F22C9 (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_Multicast(MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* currentDelegate = reinterpret_cast<MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_OpenInst(MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	NullCheck(___0_paths);
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_paths, method);
}
void MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_OpenStatic(MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_paths, method);
}
void MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_OpenStaticInvoker(MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	InvokerActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_paths);
}
void MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_ClosedStaticInvoker(MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_paths);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453 (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_paths' to native representation
	char** ____0_paths_marshaled = NULL;
	if (___0_paths != NULL)
	{
		il2cpp_array_size_t ____0_paths_Length = (___0_paths)->max_length;
		____0_paths_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____0_paths_Length + 1);
		(____0_paths_marshaled)[____0_paths_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_paths_Length); i++)
		{
			(____0_paths_marshaled)[i] = il2cpp_codegen_marshal_string((___0_paths)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____0_paths_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_paths_marshaled);

	// Marshaling cleanup of parameter '___0_paths' native representation
	if (____0_paths_marshaled != NULL)
	{
		const il2cpp_array_size_t ____0_paths_marshaled_CleanupLoopCount = (___0_paths != NULL) ? (___0_paths)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_paths_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____0_paths_marshaled)[i]);
			(____0_paths_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____0_paths_marshaled);
		____0_paths_marshaled = NULL;
	}

}
// System.Void NativeFilePicker/MultipleFilesPickedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleFilesPickedCallback__ctor_mE68919290D29BF03E91DFDAD70C3A6E34B6DF685 (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_Multicast;
}
// System.Void NativeFilePicker/MultipleFilesPickedCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeFilePicker/MultipleFilesPickedCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultipleFilesPickedCallback_BeginInvoke_m0537C4EDA9A2DAC49CEFC14E677CF0E883F4FC4C (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_paths;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeFilePicker/MultipleFilesPickedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleFilesPickedCallback_EndInvoke_mCA35D73F6DD240722E3042A6460A55991A0A9227 (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_Multicast(FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* currentDelegate = reinterpret_cast<FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_success, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_OpenInst(FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, method);
}
void FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_OpenStatic(FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, method);
}
void FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_OpenStaticInvoker(FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_success);
}
void FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_ClosedStaticInvoker(FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_success);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92 (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___0_success));

}
// System.Void NativeFilePicker/FilesExportedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesExportedCallback__ctor_mE7DA398D9EF76E94F9A7EEF90FADC72160CB940A (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_Multicast;
}
// System.Void NativeFilePicker/FilesExportedCallback::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeFilePicker/FilesExportedCallback::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilesExportedCallback_BeginInvoke_mB4379686AAC2F8D3D8573075E62998569EF72724 (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_success);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeFilePicker/FilesExportedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesExportedCallback_EndInvoke_mB5197203B13FBA8E7AE7B095FFA2481CB7F58E60 (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
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
// System.Void NativeFilePicker/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m9549841AE0F784546E2796C989B1C5E5F45B721F (U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeFilePicker/<>c__DisplayClass13_0::<RequestPermissionAsync>b__0(NativeFilePicker/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CRequestPermissionAsyncU3Eb__0_m2A201926960A5BC0BB0995A207D534E917186B69 (U3CU3Ec__DisplayClass13_0_t10BEDEEC4EE012D7415F9C3DB67452D4F41BDC37* __this, int32_t ___0_permission, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA62FC4FDA66E2D11625E7B27D5D1B89CFD0384B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestPermissionAsync( ( permission ) => tcs.SetResult( permission ), readPermissionOnly );
		TaskCompletionSource_1_tEC18EA52DF8FB29AEFC26F7C99B019B069F8E36F* L_0 = __this->___tcs_0;
		int32_t L_1 = ___0_permission;
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_mA62FC4FDA66E2D11625E7B27D5D1B89CFD0384B3(L_0, L_1, TaskCompletionSource_1_SetResult_mA62FC4FDA66E2D11625E7B27D5D1B89CFD0384B3_RuntimeMethod_var);
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
// System.Boolean NativeFilePickerNamespace.FPResultCallbackiOS::get_IsBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FPResultCallbackiOS_get_IsBusy_mA89F6EF430BBA5429DDC0AB3C7CC3B3DAB8C7F47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS_set_IsBusy_m9A023A5B59ACBCB4328BF8FCCB1321885E903D2A (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___0_value;
		((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 NativeFilePickerNamespace.FPResultCallbackiOS::_NativeFilePicker_IsFilePickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FPResultCallbackiOS__NativeFilePicker_IsFilePickerBusy_m29848BBABC05EB2A5FC3EF08F31F464A1C541E4E (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeFilePicker_IsFilePickerBusy)();

	return returnValue;
}
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::Initialize(NativeFilePicker/FilePickedCallback,NativeFilePicker/MultipleFilesPickedCallback,NativeFilePicker/FilesExportedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS_Initialize_m103F05D5A516C3FD4D1EABEE05F66C38B14B2EC2 (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* ___0_pickCallback, MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* ___1_pickCallbackMultiple, FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* ___2_exportCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_mA9A91DCD4858974B85BB7097BBD3EC189B664783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7DBB3B549C86F0820B1F72ED45A86C3EA138350);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( IsBusy )
		bool L_0;
		L_0 = FPResultCallbackiOS_get_IsBusy_mA89F6EF430BBA5429DDC0AB3C7CC3B3DAB8C7F47_inline(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if( instance == null )
		FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* L_1 = ((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// instance = new GameObject( "FPResultCallbackiOS" ).AddComponent<FPResultCallbackiOS>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteralA7DBB3B549C86F0820B1F72ED45A86C3EA138350, NULL);
		NullCheck(L_3);
		FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* L_4;
		L_4 = GameObject_AddComponent_TisFPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_mA9A91DCD4858974B85BB7097BBD3EC189B664783(L_3, GameObject_AddComponent_TisFPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_mA9A91DCD4858974B85BB7097BBD3EC189B664783_RuntimeMethod_var);
		((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___instance_4), (void*)L_4);
		// DontDestroyOnLoad( instance.gameObject );
		FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* L_5 = ((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
	}

IL_0038:
	{
		// instance.pickCallback = pickCallback;
		FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* L_7 = ((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___instance_4;
		FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* L_8 = ___0_pickCallback;
		NullCheck(L_7);
		L_7->___pickCallback_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___pickCallback_5), (void*)L_8);
		// instance.pickCallbackMultiple = pickCallbackMultiple;
		FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* L_9 = ((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___instance_4;
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_10 = ___1_pickCallbackMultiple;
		NullCheck(L_9);
		L_9->___pickCallbackMultiple_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___pickCallbackMultiple_6), (void*)L_10);
		// instance.exportCallback = exportCallback;
		FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* L_11 = ((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___instance_4;
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_12 = ___2_exportCallback;
		NullCheck(L_11);
		L_11->___exportCallback_7 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___exportCallback_7), (void*)L_12);
		// instance.nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* L_13 = ((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___instance_4;
		float L_14;
		L_14 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NullCheck(L_13);
		L_13->___nextBusyCheckTime_8 = ((float)il2cpp_codegen_add(L_14, (1.0f)));
		// IsBusy = true;
		FPResultCallbackiOS_set_IsBusy_m9A023A5B59ACBCB4328BF8FCCB1321885E903D2A_inline((bool)1, NULL);
		// }
		return;
	}
}
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS_Update_mA865FBFAAA82514C2B1F699B0700DB59349A13A8 (FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* __this, const RuntimeMethod* method) 
{
	{
		// if( IsBusy )
		bool L_0;
		L_0 = FPResultCallbackiOS_get_IsBusy_mA89F6EF430BBA5429DDC0AB3C7CC3B3DAB8C7F47_inline(NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// if( Time.realtimeSinceStartup >= nextBusyCheckTime )
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_2 = __this->___nextBusyCheckTime_8;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0033;
		}
	}
	{
		// nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___nextBusyCheckTime_8 = ((float)il2cpp_codegen_add(L_3, (1.0f)));
		// if( _NativeFilePicker_IsFilePickerBusy() == 0 )
		int32_t L_4;
		L_4 = FPResultCallbackiOS__NativeFilePicker_IsFilePickerBusy_m29848BBABC05EB2A5FC3EF08F31F464A1C541E4E(NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		// OnOperationCancelled( null );
		FPResultCallbackiOS_OnOperationCancelled_mE9865AE81912463D793B7899CF862015D8A41EDB(__this, (String_t*)NULL, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::OnFilePicked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS_OnFilePicked_m5D2C6C8D8E90B797801BCBBC21BA22222D688F3A (FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* V_0 = NULL;
	{
		// IsBusy = false;
		FPResultCallbackiOS_set_IsBusy_m9A023A5B59ACBCB4328BF8FCCB1321885E903D2A_inline((bool)0, NULL);
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// path = null;
		___0_path = (String_t*)NULL;
	}

IL_0011:
	{
		// NativeFilePicker.FilePickedCallback _pickCallback = pickCallback;
		FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* L_2 = __this->___pickCallback_5;
		V_0 = L_2;
		// pickCallback = null;
		__this->___pickCallback_5 = (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickCallback_5), (void*)(FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239*)NULL);
		// if( _pickCallback != null )
		FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// _pickCallback( path );
		FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* L_4 = V_0;
		String_t* L_5 = ___0_path;
		NullCheck(L_4);
		FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_inline(L_4, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::OnMultipleFilesPicked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS_OnMultipleFilesPicked_mEB66FE47F2F03F97C755EA51C011500B9AD88A43 (FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* __this, String_t* ___0_paths, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* V_1 = NULL;
	{
		// IsBusy = false;
		FPResultCallbackiOS_set_IsBusy_m9A023A5B59ACBCB4328BF8FCCB1321885E903D2A_inline((bool)0, NULL);
		// string[] _paths = SplitPaths( paths );
		String_t* L_0 = ___0_paths;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = FPResultCallbackiOS_SplitPaths_m455BE020360AC0761822563FABA83811AB1F35F6(__this, L_0, NULL);
		V_0 = L_1;
		// if( _paths != null && _paths.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0017;
		}
	}
	{
		// _paths = null;
		V_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_0017:
	{
		// NativeFilePicker.MultipleFilesPickedCallback _pickCallbackMultiple = pickCallbackMultiple;
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_4 = __this->___pickCallbackMultiple_6;
		V_1 = L_4;
		// pickCallbackMultiple = null;
		__this->___pickCallbackMultiple_6 = (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickCallbackMultiple_6), (void*)(MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453*)NULL);
		// if( _pickCallbackMultiple != null )
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// _pickCallbackMultiple( _paths );
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_6 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_6);
		MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_inline(L_6, L_7, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::OnFilesExported(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS_OnFilesExported_m009C384D687BA0824D13CC643E79C75E876D6385 (FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* V_0 = NULL;
	{
		// IsBusy = false;
		FPResultCallbackiOS_set_IsBusy_m9A023A5B59ACBCB4328BF8FCCB1321885E903D2A_inline((bool)0, NULL);
		// NativeFilePicker.FilesExportedCallback _exportCallback = exportCallback;
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_0 = __this->___exportCallback_7;
		V_0 = L_0;
		// exportCallback = null;
		__this->___exportCallback_7 = (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exportCallback_7), (void*)(FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92*)NULL);
		// if( _exportCallback != null )
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// _exportCallback( message == "1" );
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_2 = V_0;
		String_t* L_3 = ___0_message;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		NullCheck(L_2);
		FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_inline(L_2, L_4, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::OnOperationCancelled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS_OnOperationCancelled_mE9865AE81912463D793B7899CF862015D8A41EDB (FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* V_0 = NULL;
	MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* V_1 = NULL;
	FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* V_2 = NULL;
	{
		// IsBusy = false;
		FPResultCallbackiOS_set_IsBusy_m9A023A5B59ACBCB4328BF8FCCB1321885E903D2A_inline((bool)0, NULL);
		// NativeFilePicker.FilePickedCallback _pickCallback = pickCallback;
		FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* L_0 = __this->___pickCallback_5;
		V_0 = L_0;
		// NativeFilePicker.MultipleFilesPickedCallback _pickCallbackMultiple = pickCallbackMultiple;
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_1 = __this->___pickCallbackMultiple_6;
		V_1 = L_1;
		// NativeFilePicker.FilesExportedCallback _exportCallback = exportCallback;
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_2 = __this->___exportCallback_7;
		V_2 = L_2;
		// pickCallback = null;
		__this->___pickCallback_5 = (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickCallback_5), (void*)(FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239*)NULL);
		// pickCallbackMultiple = null;
		__this->___pickCallbackMultiple_6 = (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickCallbackMultiple_6), (void*)(MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453*)NULL);
		// exportCallback = null;
		__this->___exportCallback_7 = (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exportCallback_7), (void*)(FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92*)NULL);
		// if( _pickCallback != null )
		FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* L_3 = V_0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// _pickCallback( null );
		FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* L_4 = V_0;
		NullCheck(L_4);
		FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_inline(L_4, (String_t*)NULL, NULL);
	}

IL_003a:
	{
		// if( _pickCallbackMultiple != null )
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// _pickCallbackMultiple( null );
		MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* L_6 = V_1;
		NullCheck(L_6);
		MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_inline(L_6, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
	}

IL_0044:
	{
		// if( _exportCallback != null )
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_7 = V_2;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// _exportCallback( false );
		FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* L_8 = V_2;
		NullCheck(L_8);
		FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_inline(L_8, (bool)0, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.String[] NativeFilePickerNamespace.FPResultCallbackiOS::SplitPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* FPResultCallbackiOS_SplitPaths_m455BE020360AC0761822563FABA83811AB1F35F6 (FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* __this, String_t* ___0_paths, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// string[] result = null;
		V_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		// if( !string.IsNullOrEmpty( paths ) )
		String_t* L_0 = ___0_paths;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_007f;
		}
	}
	{
		// string[] pathsSplit = paths.Split( '>' );
		String_t* L_2 = ___0_paths;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)62), 0, NULL);
		V_1 = L_3;
		// int validPathCount = 0;
		V_2 = 0;
		// for( int i = 0; i < pathsSplit.Length; i++ )
		V_3 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		// validPathCount++;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_11 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// if( validPathCount == 0 )
		int32_t L_13 = V_2;
		if (L_13)
		{
			goto IL_003e;
		}
	}
	{
		// pathsSplit = new string[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_14;
		goto IL_007d;
	}

IL_003e:
	{
		// else if( validPathCount != pathsSplit.Length )
		int32_t L_15 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_007d;
		}
	}
	{
		// string[] validPaths = new string[validPathCount];
		int32_t L_17 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_4 = L_18;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_5 = 0;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_6 = 0;
		goto IL_0073;
	}

IL_0054:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_22, NULL);
		if (L_23)
		{
			goto IL_006d;
		}
	}
	{
		// validPaths[j++] = pathsSplit[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_4;
		int32_t L_25 = V_6;
		int32_t L_26 = L_25;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		String_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_30);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (String_t*)L_30);
	}

IL_006d:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0073:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_32 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_1;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0054;
		}
	}
	{
		// pathsSplit = validPaths;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = V_4;
		V_1 = L_34;
	}

IL_007d:
	{
		// result = pathsSplit;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_1;
		V_0 = L_35;
	}

IL_007f:
	{
		// return result;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_0;
		return L_36;
	}
}
// System.Void NativeFilePickerNamespace.FPResultCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPResultCallbackiOS__ctor_m0C5BC9E6B3D8CF9AB70E50DA2ED1856DD3F0001D (FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PermissionCallback_Invoke_m44F42C5FBA56836948249B7184FF020A8D73C386_inline (PermissionCallback_t5AFD0CA1795CD8ECA8C55C12D3C42CA5631BF181* __this, int32_t ___0_permission, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_permission, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FPResultCallbackiOS_get_IsBusy_mA89F6EF430BBA5429DDC0AB3C7CC3B3DAB8C7F47_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleFilesPickedCallback_Invoke_m5F2C10ABED9853F26F00282AD3799988E4266B7F_inline (MultipleFilesPickedCallback_t870958BD21A68D7D466C1483CC80788D72ECE453* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FilesExportedCallback_Invoke_m03C754BB4D3F455D5C9F615D6B3FFEEB25415E4F_inline (FilesExportedCallback_t0F578D4901501C874FF45D8A580B48E4B96B5C92* __this, bool ___0_success, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FPResultCallbackiOS_set_IsBusy_m9A023A5B59ACBCB4328BF8FCCB1321885E903D2A_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___0_value;
		((FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_StaticFields*)il2cpp_codegen_static_fields_for(FPResultCallbackiOS_t2800E0D8BA302BC76D83C4A6583DD7656FA7943A_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FilePickedCallback_Invoke_m0180E7EF84B4AD7032008716E629B80E51383FFC_inline (FilePickedCallback_tD2661633E4283291D7B1FCC6EE9516C4BE3F2239* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* TaskCompletionSource_1_get_Task_mB4A2FF75AC28BB6E3B7A55129E9CD347E5F06FDC_gshared_inline (TaskCompletionSource_1_tF8DA32849B904AE4F51ECAF6C6D7FA080481A35A* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* L_0 = __this->____task_0;
		return L_0;
	}
}
