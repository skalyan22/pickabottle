﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>
struct IUniTaskAsyncEnumerable_1_t441C53D97012D553F19280070D1B14ABEFBD3118;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>
struct IUniTaskAsyncEnumerator_1_t35CB7B6535A60F2DD5565CDE8DA1A207CC9B73E2;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_tDC639FD163E4613AFE1D3F2749CA5B177DC702F5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VisualScripting.FullSerializer.fsData>[]
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[]
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	// Unity.VisualScripting.FullSerializer.fsSerializer Unity.VisualScripting.FullSerializer.fsBaseConverter::Serializer
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer_0;
};

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	// System.Object Unity.VisualScripting.FullSerializer.fsData::_value
	RuntimeObject* ____value_0;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>
struct UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	bool ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	bool ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Object>
struct UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>
struct fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_value
	RuntimeObject* ____value_1;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
	// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::debuggingId
	RuntimeObject* ___debuggingId_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.FullSerializer.fsResult::_messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[] Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Ancestors
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors_0;
	// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::VersionString
	String_t* ___VersionString_1;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ModelType
	Type_t* ___ModelType_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors_0;
	char* ___VersionString_1;
	Type_t* ___ModelType_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors_0;
	Il2CppChar* ___VersionString_1;
	Type_t* ___ModelType_2;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>
struct Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task_0;
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_value
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean> Cysharp.Threading.Tasks.MoveNextSource::completionSource
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.Ray2D
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Origin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin_0;
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69  : public RuntimeObject
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>4__this
	_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::first
	RuntimeObject* ___first_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::second
	RuntimeObject* ___second_5;
	// System.Func`4<TFirst,TSecond,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<TResult>> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultSelector
	Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E* ___resultSelector_6;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstEnumerator
	RuntimeObject* ___firstEnumerator_8;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondEnumerator
	RuntimeObject* ___secondEnumerator_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___firstAwaiter_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondAwaiter
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___secondAwaiter_11;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultAwaiter
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 ___resultAwaiter_12;
	// TResult Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_13;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Unity.VisualScripting.FullSerializer.fsBaseConverter

// Unity.VisualScripting.FullSerializer.fsBaseConverter

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::True
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True_1;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::False
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False_2;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::Null
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null_3;
};

// Unity.VisualScripting.FullSerializer.fsData

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Object>

// Cysharp.Threading.Tasks.UniTask`1<System.Object>

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>
struct fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39_StaticFields
{
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39 ___Empty_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Keyframe

// UnityEngine.Keyframe

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Rect

// UnityEngine.Rect

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTask

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// Unity.VisualScripting.FullSerializer.fsDirectConverter

// Unity.VisualScripting.FullSerializer.fsDirectConverter

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	// System.String[] Unity.VisualScripting.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Success
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};

// Unity.VisualScripting.FullSerializer.fsResult

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>

// UnityEngine.Bounds

// UnityEngine.Bounds

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Cysharp.Threading.Tasks.MoveNextSource

// Cysharp.Threading.Tasks.MoveNextSource

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.Ray2D

// UnityEngine.Ray2D

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Cysharp.Threading.Tasks.UniTask/Awaiter

// Cysharp.Threading.Tasks.UniTask/Awaiter

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultAwaitCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// System.InvalidOperationException

// System.InvalidOperationException
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_gshared_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<T>,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<System.Boolean>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_gshared (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___0_awaiter, bool* ___1_result, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisRuntimeObject_mB47A7ED4A1E8E03B2C64A9071007BD0BD052D831_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject** ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared_inline (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;

// System.Void Cysharp.Threading.Tasks.MoveNextSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640 (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
inline void UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_gshared)(__this, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
inline Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_gshared_inline)(__this, ___0_continuation, ___1_state, method);
}
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
inline int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<T>,System.Int16)
inline void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, RuntimeObject*, int16_t, const RuntimeMethod*))UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_gshared_inline)(__this, ___0_source, ___1_token, method);
}
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<System.Boolean>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>,T&)
inline bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1 (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___0_awaiter, bool* ___1_result, const RuntimeMethod* method)
{
	return ((  bool (*) (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15, bool*, const RuntimeMethod*))MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_gshared)(__this, ___0_awaiter, ___1_result, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetException(System.Exception)
inline bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared)(__this, ___0_error, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(TResult)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, bool, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared)(__this, ___0_result, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
inline Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, const RuntimeMethod*))Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_gshared_inline)(__this, ___0_continuation, ___1_state, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
inline bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_gshared)(__this, ___0_cancellationToken, method);
}
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69_m9545E735188DA1E446339CFD2B9D2AAC2A851AA7_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69**, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisRuntimeObject_mB47A7ED4A1E8E03B2C64A9071007BD0BD052D831_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::.ctor()
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsData::.ctor(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_dict, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsBaseConverter::CheckType(Unity.VisualScripting.FullSerializer.fsData,Unity.VisualScripting.FullSerializer.fsDataType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, int32_t ___1_type, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::op_Addition(Unity.VisualScripting.FullSerializer.fsResult,Unity.VisualScripting.FullSerializer.fsResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___0_a, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::get_Failed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData> Unity.VisualScripting.FullSerializer.fsData::get_AsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_HasValue()
inline bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_inline (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, const RuntimeMethod*))fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared_inline)(__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_Value()
inline RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41 (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, const RuntimeMethod*))fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
inline void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8 (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, RuntimeObject*, const RuntimeMethod*))fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_gshared)(__this, ___0_value, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
inline bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline)(__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___0_value, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE (Exception_t* ___0_ex, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline)(__this, ___0_task, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
inline int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`4<TFirst,TSecond,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__ctor_m7AB16A5CCDB24DFE7943DDA5BE99651A267C300C_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ZipAwaitWithCancellation(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, CancellationToken, UniTask<TResult>> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		__this->___first_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_4), (void*)L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		__this->___second_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_5), (void*)L_1);
		// this.resultSelector = resultSelector;
		Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E* L_2 = ___2_resultSelector;
		__this->___resultSelector_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		__this->___cancellationToken_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_7))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ZipAwaitWithCancellation_get_Current_mB506D8CDCFA7BDEDDBE7C0716DBA9A20C92A99F3_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_set_Current_m331D67B5930C42447BE6829A935FC306FD0E260A_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ZipAwaitWithCancellation_MoveNextAsync_m97705087627C7C53160B09B86F034D3DCAA82483_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->___firstEnumerator_8;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_3 = (RuntimeObject*)__this->___first_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_7;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		__this->___firstEnumerator_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstEnumerator_8), (void*)L_5);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___second_5;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_7;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_6, L_7);
		__this->___secondEnumerator_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondEnumerator_9), (void*)L_8);
	}

IL_004a:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_9 = (RuntimeObject*)__this->___firstEnumerator_8;
		NullCheck(L_9);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_10;
		L_10 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_9);
		V_1 = L_10;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_11;
		L_11 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		__this->___firstAwaiter_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___firstAwaiter_10))->___task_0))->___source_0), (void*)NULL);
		// if (firstAwaiter.IsCompleted)
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_12 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_10);
		bool L_13;
		L_13 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_12, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_007d;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		goto IL_0091;
	}

IL_007d:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_15 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___firstAwaiter_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_16 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_15, L_16, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0091:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_18;
		L_18 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_17, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_19;
		memset((&L_19), 0, sizeof(L_19));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_19), (RuntimeObject*)__this, L_18, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		V_3 = L_19;
		goto IL_00a5;
	}

IL_00a5:
	{
		// }
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_20 = V_3;
		return L_20;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_FirstMoveNextCore_mFA0A072A3BE5F3565E73BABF5BBD2014BA894AD2_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	bool V_6 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)L_2->___firstAwaiter_10;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0095;
		}
	}
	{
		// if (result)
		bool L_6 = V_1;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0085;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_8 = V_0;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = (RuntimeObject*)L_9->___secondEnumerator_9;
		NullCheck(L_10);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
		L_11 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_10);
		V_4 = L_11;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12;
		L_12 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___secondAwaiter_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_8->___secondAwaiter_11))->___task_0))->___source_0), (void*)NULL);
		goto IL_0052;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003f;
		}
		throw e;
	}

CATCH_003f:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_13 = V_0;
		NullCheck(L_13);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_14 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_13)->___completionSource_0);
		Exception_t* L_15 = V_5;
		bool L_16;
		L_16 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_14, L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0095;
	}// end catch (depth: 1)

IL_0052:
	{
		// if (self.secondAwaiter.IsCompleted)
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_17 = V_0;
		NullCheck(L_17);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_17->___secondAwaiter_11);
		bool L_19;
		L_19 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline(L_18, Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_006e;
		}
	}
	{
		// SecondMoveNextCore(self);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((RuntimeObject*)L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		goto IL_0082;
	}

IL_006e:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_22 = V_0;
		NullCheck(L_22);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_23 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&L_22->___secondAwaiter_11);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_24 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_25 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline(L_23, L_24, (RuntimeObject*)L_25, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0082:
	{
		goto IL_0094;
	}

IL_0085:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_26 = V_0;
		NullCheck(L_26);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_27 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_26)->___completionSource_0);
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_27, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0094:
	{
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_SecondMoveNextCore_mDBFF561C42C2132E89F13E1B3341AB0E7943694A_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)L_2->___secondAwaiter_11;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00b8;
		}
	}
	{
		// if (result)
		bool L_6 = V_1;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00a8;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			// self.resultAwaiter = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current, self.cancellationToken).GetAwaiter();
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_8 = V_0;
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_9 = V_0;
			NullCheck(L_9);
			Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E* L_10 = (Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E*)L_9->___resultSelector_6;
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_11 = V_0;
			NullCheck(L_11);
			RuntimeObject* L_12 = (RuntimeObject*)L_11->___firstEnumerator_8;
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_12);
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_14 = V_0;
			NullCheck(L_14);
			RuntimeObject* L_15 = (RuntimeObject*)L_14->___secondEnumerator_9;
			NullCheck(L_15);
			RuntimeObject* L_16;
			L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_15);
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_17 = V_0;
			NullCheck(L_17);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_17->___cancellationToken_7;
			NullCheck(L_10);
			UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_19;
			L_19 = ((  UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 (*) (Func_4_t40C6767E2665DAD9B0066714E3C69121295D457E*, RuntimeObject*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_10, L_13, L_16, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
			V_4 = L_19;
			Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_20;
			L_20 = UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline((&V_4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
			NullCheck(L_8);
			L_8->___resultAwaiter_12 = L_20;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_8->___resultAwaiter_12))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_8->___resultAwaiter_12))->___task_0))->___result_1), (void*)NULL);
			#endif
			// if (self.resultAwaiter.IsCompleted)
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_21 = V_0;
			NullCheck(L_21);
			Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_22 = (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*)(&L_21->___resultAwaiter_12);
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline(L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			V_5 = L_23;
			bool L_24 = V_5;
			if (!L_24)
			{
				goto IL_007a_1;
			}
		}
		{
			// ResultAwaitCore(self);
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_25 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)))((RuntimeObject*)L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
			goto IL_008e_1;
		}

IL_007a_1:
		{
			// self.resultAwaiter.SourceOnCompleted(resultAwaitCoreDelegate, self);
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_26 = V_0;
			NullCheck(L_26);
			Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_27 = (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*)(&L_26->___resultAwaiter_12);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_28 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3;
			_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_29 = V_0;
			Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline(L_27, L_28, (RuntimeObject*)L_29, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		}

IL_008e_1:
		{
			goto IL_00a5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_30 = V_0;
		NullCheck(L_30);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_31 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_30)->___completionSource_0);
		Exception_t* L_32 = V_6;
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_31, L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a5;
	}// end catch (depth: 1)

IL_00a5:
	{
		goto IL_00b7;
	}

IL_00a8:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_34 = V_0;
		NullCheck(L_34);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_35 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_34)->___completionSource_0);
		bool L_36;
		L_36 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_35, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_00b7:
	{
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::ResultAwaitCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_ResultAwaitCore_m7F91876C1100E60ED7981561FFC4D1991198101D_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.resultAwaiter, out var result))
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_3 = (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101)L_2->___resultAwaiter_12;
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = ((  bool (*) (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)))((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		// self.Current = result;
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_6 = V_0;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_6);
		((  void (*) (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// if (self.cancellationToken.IsCancellationRequested)
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_8 = V_0;
		NullCheck(L_8);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_9 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_8->___cancellationToken_7);
		bool L_10;
		L_10 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_9, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_12)->___completionSource_0);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_14 = V_0;
		NullCheck(L_14);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_15 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_14->___cancellationToken_7;
		bool L_16;
		L_16 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_13, L_15, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		goto IL_0057;
	}

IL_0048:
	{
		// self.completionSource.TrySetResult(true);
		_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* L_17 = V_0;
		NullCheck(L_17);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_18 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_17)->___completionSource_0);
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_18, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0057:
	{
	}

IL_0058:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ZipAwaitWithCancellation_DisposeAsync_mF1CB8FAA3F89C48AA85EEC1CCC5DC76AF4107680_gshared (_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* V_0 = NULL;
	{
		U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* L_0 = (U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 22));
		NullCheck(L_0);
		((  void (*) (U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_0;
		U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* L_1 = V_0;
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_2;
		L_2 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___debuggingId_2), (void*)NULL);
		#endif
		U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* L_5 = V_0;
		NullCheck(L_5);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_6 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&L_5->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69_m9545E735188DA1E446339CFD2B9D2AAC2A851AA7_inline(L_6, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		U3CDisposeAsyncU3Ed__21_t60F194BF860EEDB1A9A7FFF644A05FB94148DD69* L_7 = V_0;
		NullCheck(L_7);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_8 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&L_7->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_9;
		L_9 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_8, NULL);
		return L_9;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__cctor_mAB2F1E0C02340FCEBF13253E1F166FD63956D976_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
		// static readonly Action<object> resultAwaitCoreDelegate = ResultAwaitCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), NULL);
		((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4A039DC38A257210D2872BC71909539E3B7EE52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3), (void*)L_2);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m66614734A851F69863F28F36CAE8C109DFE633A0_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mD7FB6CCCB39160CC4D1837430E55165CA2686FE6_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		V_1 = L_3;
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DC7A75C5043D26A8B0F27C1EBF6414DB1F38947_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		// instance = obj;
		RuntimeObject** L_16 = ___1_instance;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m469B29DA8E93A109CE1A84DEF411C216C2E91B3C_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3B1D5B68B9A2AB907D286BB041E68825E23D338B_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m228B3D61FB850893564D237F0F16E30BBD9B6B04_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		V_1 = L_3;
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mDDCD92619631E9ED6DE40EDE7B2E4E0A586513DA_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		// instance = obj;
		RuntimeObject** L_16 = ___1_instance;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_17 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m67B64763A70B6CFF7BC8E207844892AFCCFA9B72_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m9F76A8BA82C3043DFB71DA4C07A250F84CDB0184_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m641FFE348BDF3531BF6BDBDD22704DE53ED14F4A_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		V_1 = L_3;
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mFFB6258A349189C4019C5E3C202AAFC7230C1BF9_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		// instance = obj;
		RuntimeObject** L_16 = ___1_instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m8386B8479295E3AC361DE4EBBFC2C3CCB11BB908_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m434ECAC51B09FD530A6DD456388A8B3B39F71DE1_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m012F8AADBFF962499339189E5EABB41B2F51D491_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, RuntimeObject*, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), L_2);
		V_1 = L_3;
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DA1D304ED129B105B65D30686CE2CE0BFACBBD0_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, RuntimeObject** >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		// instance = obj;
		RuntimeObject** L_16 = ___1_instance;
		RuntimeObject* L_17 = V_1;
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_17);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_18 = V_0;
		V_4 = L_18;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_4;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mC4D982EAE127626844AA2FF8D98F3CEA570A1A10_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		V_1 = L_3;
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		// instance = obj;
		RuntimeObject** L_16 = ___1_instance;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m644F4C264CCF8F165037066D5AC2034B6D176110_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		V_1 = L_3;
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		// instance = obj;
		RuntimeObject** L_16 = ___1_instance;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mBFCA0DE0165FE7459AEBC89AC73731BBCF7F64E6_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3FD4D633636A5AF98D07BE76673F55CC9262FB13_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mA6F80C2C119177F6A02BE2DCE8B17803F98E0A2A_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		V_1 = L_3;
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m055ADA15BC7796EDA3848DBC9F9B51BB2562A886_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		// instance = obj;
		RuntimeObject** L_16 = ___1_instance;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m74EBB5195DD5F746EE58C2B7FE7E20A93E44DFE8_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => _hasValue == false;
		bool L_0 = (bool)__this->____hasValue_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC(_thisAdjusted, method);
	return _returnValue;
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (IsEmpty)
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// throw new InvalidOperationException("fsOption is empty");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_RuntimeMethod_var)));
	}

IL_0017:
	{
		// return _value;
		RuntimeObject* L_3 = (RuntimeObject*)__this->____value_1;
		V_1 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// _hasValue = true;
		__this->____hasValue_0 = (bool)1;
		// _value = value;
		RuntimeObject* L_0 = ___0_value;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_1), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => _hasValue == false;
		bool L_0 = (bool)__this->____hasValue_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(_thisAdjusted, method);
	return _returnValue;
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (IsEmpty)
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// throw new InvalidOperationException("fsOption is empty");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var)));
	}

IL_0017:
	{
		// return _value;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_3 = (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)__this->____value_1;
		V_1 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 _returnValue;
	_returnValue = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) 
{
	{
		// _hasValue = true;
		__this->____hasValue_0 = (bool)1;
		// _value = value;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___0_value;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___ModelType_2), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_AdjustorThunk (RuntimeObject* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		NullCheck(L_2);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001d:
	{
		// else if (ex != null)
		Exception_t* L_4 = __this->___ex_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t* L_6 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
		L_7 = UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE(L_6, NULL);
		V_1 = L_7;
		goto IL_0042;
	}

IL_0039:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Awaiter(this);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return task.Status.IsCompleted();
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// var s = task.source;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___0_continuation;
		RuntimeObject* L_5 = ___1_state;
		NullCheck(L_4);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_4, L_5, NULL);
		goto IL_0037;
	}

IL_0021:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_6 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7 = ___0_continuation;
		RuntimeObject* L_8 = ___1_state;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_9 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int16_t L_10 = (int16_t)L_9->___token_2;
		NullCheck((RuntimeObject*)L_6);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, L_7, L_8, L_10);
	}

IL_0037:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_gshared_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method) 
{
	{
		// public short Version => version;
		int16_t L_0 = (int16_t)__this->___version_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	{
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_0), (void*)L_0);
		// this.token = token;
		int16_t L_1 = ___1_token;
		__this->___token_2 = L_1;
		// this.result = default;
		bool* L_2 = (bool*)(&__this->___result_1);
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Awaiter(this);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return task.Status.IsCompleted();
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___0_continuation;
		RuntimeObject* L_5 = ___1_state;
		NullCheck(L_4);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_4, L_5, NULL);
		goto IL_0037;
	}

IL_0021:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_6 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7 = ___0_continuation;
		RuntimeObject* L_8 = ___1_state;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_9 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_10 = (int16_t)L_9->___token_2;
		NullCheck((RuntimeObject*)L_6);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, L_7, L_8, L_10);
	}

IL_0037:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisRuntimeObject_mB47A7ED4A1E8E03B2C64A9071007BD0BD052D831_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject** ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateMachine.MoveNext();
		RuntimeObject** L_0 = ___0_stateMachine;
		NullCheck((RuntimeObject*)(*L_0));
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Runtime.CompilerServices.IAsyncStateMachine::MoveNext() */, IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_0));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared_inline (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___0_status;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = ___0_task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = (*(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = ___0_task;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_1 = (*(UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___result_1), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
