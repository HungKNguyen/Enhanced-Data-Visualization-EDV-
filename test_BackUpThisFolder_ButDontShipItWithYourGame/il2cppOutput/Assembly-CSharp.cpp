#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem>
struct Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<UnityEngine.Object,System.Boolean>
struct Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Object>
struct IEnumerable_1_tDFE91FA569BD0F8AF243E1AB885C63ABE1F96024;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager>
struct List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct RegistrationList_1_t4CFD9E29B57A81B6DFE2C016746F640843506138;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct RegistrationList_1_t3C57B4669121D753FC5E6447930968A297EE0630;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// RuntimePresets.Preset[]
struct PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider
struct ActionBasedSnapTurnProvider_t95ED9D2E3E38ABD6EBF964E3D00E8D8B75458BC9;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Clock_Script
struct Clock_Script_tD596C7D3F767EAE237BB8845D627ED2348CB31AD;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// CustomController
struct CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7;
// CustomDebug
struct CustomDebug_tD85974AB20415BD3B82278DA4368FD4EF8B1DC01;
// CustomManager
struct CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.ILineRenderable
struct ILineRenderable_t31B0CD4F7660B33DA1844249EF11B0F653E36ADA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// RuntimePresets.Preset
struct Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// SelectScript
struct SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual
struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule
struct XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;

IL2CPP_EXTERN_C RuntimeClass* ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F;
IL2CPP_EXTERN_C String_t* _stringLiteralE81EFFA1E6B816A8E2251D1993F4E93E82365151;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64362668998D08ABE3662D4A5F520E3DA0DDD9;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF;
IL2CPP_EXTERN_C String_t* _stringLiteralEC77027805B1651EF89F819873354A55A93A7C4A;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_TransferValuesFrom_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mCAC6709499D936ABA8231037E44ED8AFB6CFBC1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_All_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_mAA7FE06C5787DC3C511E15FAB92ACC96064E439A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Preset_U3CApplyToU3Eb__8_0_m99F5D37DE52E50A55D0AE6818CD4B4C96E30CDB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Tool_t2C5454FEFB937DC3646C338C216856401E87E7C6_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// RuntimePresets.ComponentExtensions
struct ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A  : public RuntimeObject
{
};

struct ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> RuntimePresets.ComponentExtensions::exceptions
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___exceptions_0;
};

// RuntimePresets.GameObjectExtensions
struct GameObjectExtensions_tB893EF2388FCBC9316CBEB01F5A2B34D19FD317B  : public RuntimeObject
{
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// System.Func`2<UnityEngine.Object,System.Boolean>
struct Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Clock_Script
struct Clock_Script_tD596C7D3F767EAE237BB8845D627ED2348CB31AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Clock_Script::hour_hand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hour_hand_4;
	// UnityEngine.Transform Clock_Script::minute_hand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___minute_hand_5;
	// UnityEngine.Transform Clock_Script::second_hand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___second_hand_6;
};

// CustomController
struct CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CustomController::enumCount
	int32_t ___enumCount_4;
	// CustomEnums.Tool CustomController::tool
	int32_t ___tool_5;
	// SelectScript CustomController::menu
	SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* ___menu_6;
	// System.Boolean CustomController::menuToggle
	bool ___menuToggle_7;
	// CustomEnums.MenuChoice CustomController::menuChoosing
	int32_t ___menuChoosing_8;
	// CustomEnums.Controller CustomController::controller
	int32_t ___controller_9;
	// CustomManager CustomController::manager
	CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* ___manager_10;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor CustomController::interactor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___interactor_11;
	// System.Boolean CustomController::locomotionActive
	bool ___locomotionActive_12;
	// System.Boolean CustomController::transformActive
	bool ___transformActive_13;
	// System.Boolean CustomController::examineActive
	bool ___examineActive_14;
	// System.Boolean CustomController::rotateToggle
	bool ___rotateToggle_15;
	// System.Single CustomController::scaleSpeed
	float ___scaleSpeed_16;
	// System.Single CustomController::translateSpeed
	float ___translateSpeed_17;
	// System.Single CustomController::rotateSpeed
	float ___rotateSpeed_18;
};

// CustomDebug
struct CustomDebug_tD85974AB20415BD3B82278DA4368FD4EF8B1DC01  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CustomManager
struct CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RuntimePresets.Preset[] CustomManager::snapTurnProviderSettings
	PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F* ___snapTurnProviderSettings_4;
	// RuntimePresets.Preset[] CustomManager::rayInteractorSettings
	PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F* ___rayInteractorSettings_5;
	// RuntimePresets.Preset[] CustomManager::lineVisualSettings
	PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F* ___lineVisualSettings_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager CustomManager::xRInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___xRInteractionManager_7;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem CustomManager::locomotionSystem
	LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* ___locomotionSystem_8;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider CustomManager::snapTurnProvider
	ActionBasedSnapTurnProvider_t95ED9D2E3E38ABD6EBF964E3D00E8D8B75458BC9* ___snapTurnProvider_9;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor CustomManager::leftRayInteractor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___leftRayInteractor_10;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual CustomManager::leftLineVisual
	XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* ___leftLineVisual_11;
	// UnityEngine.LineRenderer CustomManager::leftLineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___leftLineRenderer_12;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController CustomManager::leftXRController
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___leftXRController_13;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor CustomManager::rightRayInteractor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___rightRayInteractor_14;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual CustomManager::rightLineVisual
	XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* ___rightLineVisual_15;
	// UnityEngine.LineRenderer CustomManager::rightLineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___rightLineRenderer_16;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController CustomManager::rightXRController
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___rightXRController_17;
	// System.Boolean CustomManager::leftSnapSetting
	bool ___leftSnapSetting_18;
	// System.Boolean CustomManager::leftSnapState
	bool ___leftSnapState_19;
	// System.Boolean CustomManager::rightSnapSetting
	bool ___rightSnapSetting_20;
	// System.Boolean CustomManager::rightSnapState
	bool ___rightSnapState_21;
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::beginLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___beginLocomotion_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::endLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___endLocomotion_5;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::m_System
	LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* ___m_System_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::startLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___startLocomotion_7;
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_CurrentExclusiveProvider
	LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* ___m_CurrentExclusiveProvider_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_TimeMadeExclusive
	float ___m_TimeMadeExclusive_5;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_Timeout
	float ___m_Timeout_6;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_7;
};

// RuntimePresets.Preset
struct Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Component RuntimePresets.Preset::_component
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ____component_4;
};

// SelectScript
struct SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform SelectScript::top
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___top_4;
	// UnityEngine.Material SelectScript::m_top
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_top_5;
	// UnityEngine.Transform SelectScript::left
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___left_6;
	// UnityEngine.Material SelectScript::m_left
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_left_7;
	// UnityEngine.Transform SelectScript::right
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___right_8;
	// UnityEngine.Material SelectScript::m_right
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_right_9;
	// CustomEnums.Tool SelectScript::currentTool
	int32_t ___currentTool_10;
	// CustomEnums.MenuChoice SelectScript::currentChoice
	int32_t ___currentChoice_11;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_13;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___U3CinteractablesHoveredU3Ek__BackingField_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CinteractablesSelectedU3Ek__BackingField_20;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_21;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_23;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88* ___m_UnorderedInteractablesHovered_24;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF* ___m_UnorderedInteractablesSelected_25;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_26;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_27;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_29;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_30;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_31;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_32;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_33;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_28;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorRegistered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___interactorRegistered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorUnregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___interactorUnregistered_5;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableRegistered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___interactableRegistered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableUnregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___interactableUnregistered_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ColliderToInteractableMap
	Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5* ___m_ColliderToInteractableMap_9;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactors
	RegistrationList_1_t3C57B4669121D753FC5E6447930968A297EE0630* ___m_Interactors_10;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactables
	RegistrationList_1_t4CFD9E29B57A81B6DFE2C016746F640843506138* ___m_Interactables_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentHovered
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___m_CurrentHovered_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentSelected
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___m_CurrentSelected_13;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_14;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_UnorderedValidTargets
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ___m_UnorderedValidTargets_15;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_DeprecatedValidTargets
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___m_DeprecatedValidTargets_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractors
	List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ___m_ScratchInteractors_17;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractables
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ScratchInteractables_18;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectEnterEventArgs
	LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67* ___m_SelectEnterEventArgs_19;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectExitEventArgs
	LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62* ___m_SelectExitEventArgs_20;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverEnterEventArgs
	LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD* ___m_HoverEnterEventArgs_21;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverExitEventArgs
	LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F* ___m_HoverExitEventArgs_22;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorRegisteredEventArgs
	LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F* ___m_InteractorRegisteredEventArgs_23;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorUnregisteredEventArgs
	LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0* ___m_InteractorUnregisteredEventArgs_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableRegisteredEventArgs
	LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B* ___m_InteractableRegisteredEventArgs_25;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableUnregisteredEventArgs
	LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE* ___m_InteractableUnregisteredEventArgs_26;
};

struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::<activeInteractionManagers>k__BackingField
	List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B* ___U3CactiveInteractionManagersU3Ek__BackingField_8;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_PreprocessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_PreprocessInteractorsMarker_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractorsMarker_28;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractablesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractablesMarker_29;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_GetValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_GetValidTargetsMarker_30;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_FilterRegisteredValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_FilterRegisteredValidTargetsMarker_31;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidSelectionsMarker_32;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidHoversMarker_33;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidSelectionsMarker_34;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidHoversMarker_35;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectEnterMarker_36;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectExitMarker_37;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverEnterMarker_38;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverExitMarker_39;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual
struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineWidth
	float ___m_LineWidth_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_OverrideInteractorLineLength
	bool ___m_OverrideInteractorLineLength_7;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineLength
	float ___m_LineLength_8;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_WidthCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_WidthCurve_9;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ValidColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_ValidColorGradient_10;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_InvalidColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_InvalidColorGradient_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SmoothMovement
	bool ___m_SmoothMovement_12;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_FollowTightness
	float ___m_FollowTightness_13;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SnapThresholdDistance
	float ___m_SnapThresholdDistance_14;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_Reticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Reticle_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_StopLineAtFirstRaycastHit
	bool ___m_StopLineAtFirstRaycastHit_16;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticlePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ReticlePos_17;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticleNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ReticleNormal_18;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_EndPositionInLine
	int32_t ___m_EndPositionInLine_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SnapCurve
	bool ___m_SnapCurve_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_PerformSetup
	bool ___m_PerformSetup_21;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticleToUse
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ReticleToUse_22;
	// UnityEngine.LineRenderer UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___m_LineRenderer_23;
	// UnityEngine.XR.Interaction.Toolkit.ILineRenderable UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderable
	RuntimeObject* ___m_LineRenderable_24;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_TargetPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_TargetPoints_25;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoTargetPoints
	int32_t ___m_NoTargetPoints_26;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_RenderPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RenderPoints_27;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoRenderPoints
	int32_t ___m_NoRenderPoints_28;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_PreviousRenderPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_PreviousRenderPoints_29;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoPreviousRenderPoints
	int32_t ___m_NoPreviousRenderPoints_30;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ClearArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ClearArray_31;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_32;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CustomReticleAttached
	bool ___m_CustomReticleAttached_33;
};

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_PositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PositionAction_24;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotationAction_25;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TrackingStateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TrackingStateAction_26;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectAction_27;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectActionValue_28;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateAction_29;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateActionValue_30;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressAction_31;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressActionValue_32;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HapticDeviceAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_HapticDeviceAction_33;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotateAnchorAction_34;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TranslateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TranslateAnchorAction_35;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledTrackingInputReferenceActions
	bool ___m_HasCheckedDisabledTrackingInputReferenceActions_36;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledInputReferenceActions
	bool ___m_HasCheckedDisabledInputReferenceActions_37;
	// System.Single UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ButtonPressPoint
	float ___m_ButtonPressPoint_38;
};

// UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase
struct SnapTurnProviderBase_tFDF55C1A80E85535B6AA7CBCA1C1DF9BA07FF706  : public LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase::m_TurnAmount
	float ___m_TurnAmount_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase::m_DebounceTime
	float ___m_DebounceTime_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase::m_EnableTurnLeftRight
	bool ___m_EnableTurnLeftRight_10;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase::m_EnableTurnAround
	bool ___m_EnableTurnAround_11;
	// System.Single UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase::m_CurrentTurnAmount
	float ___m_CurrentTurnAmount_12;
	// System.Single UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase::m_TimeStarted
	float ___m_TimeStarted_13;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_34;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_35;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_36;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_37;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_38;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_39;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_40;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_41;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_42;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_43;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_44;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_45;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_46;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_47;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_48;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_49;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_50;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_51;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_52;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_53;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_54;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_55;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_56;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_57;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_58;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_59;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_60;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_61;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_63;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_64;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_67;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_68;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_69;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_73;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_74;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_75;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_76;
};

struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_71;
};

// UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider
struct ActionBasedSnapTurnProvider_t95ED9D2E3E38ABD6EBF964E3D00E8D8B75458BC9  : public SnapTurnProviderBase_tFDF55C1A80E85535B6AA7CBCA1C1DF9BA07FF706
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider::m_LeftHandSnapTurnAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_LeftHandSnapTurnAction_14;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider::m_RightHandSnapTurnAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RightHandSnapTurnAction_15;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_81;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_82;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_83;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_84;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_85;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_86;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_87;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_89;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_90;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_92;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_93;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_95;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_96;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_97;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_98;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_99;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_101;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_102;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_103;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_104;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_105;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_106;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_107;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_InputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_InputModule_108;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredInputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_RegisteredInputModule_109;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_CurrentNearestObject
	RuntimeObject* ___m_CurrentNearestObject_110;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_111;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_112;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_113;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_114;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_115;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_116;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_117;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_118;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_119;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ControlPoints_120;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_HitChordControlPoints_121;
};

struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_122;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_ScratchControlPoints_123;
};
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
// RuntimePresets.Preset[]
struct PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F  : public RuntimeArray
{
	ALIGN_FIELD (8) Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* m_Items[1];

	inline Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T RuntimePresets.ComponentExtensions::TransferValuesFrom<System.Object>(UnityEngine.Component,T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentExtensions_TransferValuesFrom_TisRuntimeObject_m158044380CAF428D2E9E48923F317BA7FE11E790_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___comp0, RuntimeObject* ___other1, bool ___considerBaseClasses2, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::All<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_All_TisRuntimeObject_m57CDB9DB99F9E77214B47367D213B06AC3ED97FF_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void SelectScript::setCurrent(CustomEnums.Tool)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectScript_setCurrent_m7E32022479EE5DFA5E80D9A81D7FBB6499F30D9C_inline (SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* __this, int32_t ___tool0, const RuntimeMethod* method) ;
// System.Void CustomController::ConfigureTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_ConfigureTool_m37EE306368B6807FCD98595DC8D2E48B30EF078A (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) ;
// System.Void CustomController::ActivateTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_ActivateTool_m0ACE4742DD10DB5E65E03FA78A7E0BE9343549E8 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor>()
inline XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CustomManager::ConfigureToolFor(CustomEnums.Controller,CustomEnums.Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ConfigureToolFor_m456725BE13D8C572D628665235C43C76E8B8AA52 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, int32_t ___tool1, const RuntimeMethod* method) ;
// System.Void CustomManager::ActivateToolFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ActivateToolFor_mCA8451AB0B76AC768241C40FD472BC8ECAE112A9 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) ;
// System.Void CustomManager::DisableToolFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_DisableToolFor_mD7D0F955BC5FDA4F3200BE7EDB986EEF69461C7B (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) ;
// System.Void CustomController::DisableTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_DisableTool_mA1E3A285277A0CF63302CC34DBA935AFA0367163 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<System.Single>()
inline float InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void SelectScript::setChoosing(CustomEnums.MenuChoice)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectScript_setChoosing_mE6CB8C282CA2FFD1D6D5D0CB47D6B8EC4258FFF5_inline (SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* __this, int32_t ___choice0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_hasSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1 (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_firstInteractableSelected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRBaseInteractor_get_firstInteractableSelected_m26779B4796BA51429DE9B5F34EB69BB4C02C48AF_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// System.Void CustomController::RotateAnchor(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_RotateAnchor_m38D7A76472F9A17A01170001A3CA68271C2F90B5 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___interactable0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___directionAmount2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void CustomController::TranslateAnchor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_TranslateAnchor_m084690F6A9225732F78DA3023128847E11C7016D (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, float ___directionAmount0, const RuntimeMethod* method) ;
// System.Void CustomController::ScaleAnchor(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_ScaleAnchor_m48441BF322F23470189980FA20FF954EB0E62033 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___interactable0, float ___directionAmount1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::get_rayOriginTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRRayInteractor_get_rayOriginTransform_m1E25B9D203ABF076A179802DC530B2A3137232F2_inline (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_attachTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, int32_t ___relativeTo2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void CustomManager::ConfigureSnapTurnProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ConfigureSnapTurnProvider_m69074A397C5D30B97D0DE6C05AA272CC51647E25 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, const RuntimeMethod* method) ;
// System.Boolean RuntimePresets.Preset::ApplyTo(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Preset_ApplyTo_mBDAA117F5AE7A4CC84694BB39C1AE7E67137ADA5 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::set_system(UnityEngine.XR.Interaction.Toolkit.LocomotionSystem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocomotionProvider_set_system_m356CEE71E1057AAD0A615898E7E92A89E2E4664C_inline (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::set_interactionManager(UnityEngine.XR.Interaction.Toolkit.XRInteractionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractor_set_interactionManager_m3B0BFBBFE80325CF8837DFC31B61E907710554AA (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::set_xrController(UnityEngine.XR.Interaction.Toolkit.XRBaseController)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseControllerInteractor_set_xrController_m23CD933EEC980FBEEDA28EB1F6A16B7D7900D454_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::set_attachTransform(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseInteractor_set_attachTransform_mA8DC6CAE14C3CAEDF3A8A9F23EC5DD5D533F7D56_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::set_rayOriginTransform(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRayInteractor_set_rayOriginTransform_m615A2661622EC41AC56242329D3ED7AC681AB289_inline (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void CustomManager::EnableSnapTurnFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_EnableSnapTurnFor_mAF256FA2CAAA74347F8C615ABEC379C19A993DDE (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) ;
// System.Void CustomManager::EnableInteractorFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_EnableInteractorFor_m2FA0597CD57CC480761A8A45FBAB2061AAAE1284 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) ;
// System.Void CustomManager::DisableSnapTurnFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_DisableSnapTurnFor_m068793C50DAEF1941C26D51DBC4D4BAFD2A1E70F (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) ;
// System.Void CustomManager::DisableInteractorFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_DisableInteractorFor_m3F29D9D51D9820EA721F6C66EA0DB0BDDADFCFA2 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) ;
// System.Void CustomManager::ConfigureSnapTurnFor(CustomEnums.Controller,CustomEnums.Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ConfigureSnapTurnFor_m84870AD4FE92D170B85791FD351BA59C6696182E (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, int32_t ___tool1, const RuntimeMethod* method) ;
// System.Void CustomManager::ConfigureInteractorFor(CustomEnums.Controller,CustomEnums.Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ConfigureInteractorFor_mAB09D392698944308388901E7EDF14FEFCDF9F81 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, int32_t ___tool1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___componentType0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean RuntimePresets.Preset::CanBeAppliedTo(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Preset_CanBeAppliedTo_m7A42531BBD7FE8E710C2E3FFFC77B515EC2E0156 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T RuntimePresets.ComponentExtensions::TransferValuesFrom<UnityEngine.Component>(UnityEngine.Component,T,System.Boolean)
inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ComponentExtensions_TransferValuesFrom_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mCAC6709499D936ABA8231037E44ED8AFB6CFBC1D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___comp0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___other1, bool ___considerBaseClasses2, const RuntimeMethod* method)
{
	return ((  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))ComponentExtensions_TransferValuesFrom_TisRuntimeObject_m158044380CAF428D2E9E48923F317BA7FE11E790_gshared)(___comp0, ___other1, ___considerBaseClasses2, method);
}
// System.Void System.Func`2<UnityEngine.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m505DDA7F73856B5B53DFE9D38B4AD41761EC710B (Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::All<UnityEngine.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_All_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_mAA7FE06C5787DC3C511E15FAB92ACC96064E439A (RuntimeObject* ___source0, Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC*, const RuntimeMethod*))Enumerable_All_TisRuntimeObject_m57CDB9DB99F9E77214B47367D213B06AC3ED97FF_gshared)(___source0, ___predicate1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void RuntimePresets.Preset::set_TargetComponent(UnityEngine.Component)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Preset_set_TargetComponent_m1E9C43728A6530C7DEA311E915BB3345F6D5165E_inline (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___value0, const RuntimeMethod* method) ;
// System.Type RuntimePresets.Preset::get_ComponentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Preset_get_ComponentType_mDBD13E402ABD16D4D17E988BACBE5CC96CDB5546 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
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
// System.Void Clock_Script::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Script_Start_mB117F7FB5476BFE949544798ACD8E4892E1F6D4F (Clock_Script_tD596C7D3F767EAE237BB8845D627ED2348CB31AD* __this, const RuntimeMethod* method) 
{
	{
		// hour_hand = transform.GetChild(1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 1, NULL);
		__this->___hour_hand_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hour_hand_4), (void*)L_1);
		// minute_hand = transform.GetChild(2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 2, NULL);
		__this->___minute_hand_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minute_hand_5), (void*)L_3);
		// second_hand = transform.GetChild(3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 3, NULL);
		__this->___second_hand_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_hand_6), (void*)L_5);
		// }
		return;
	}
}
// System.Void Clock_Script::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Script_Update_m1543E3BFC14F580E597492CE23514A398283B901 (Clock_Script_tD596C7D3F767EAE237BB8845D627ED2348CB31AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// DateTime now = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		// int hour = now.Hour;
		int32_t L_1;
		L_1 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		// int minute = now.Minute;
		int32_t L_2;
		L_2 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		V_1 = L_2;
		// int second = now.Second;
		int32_t L_3;
		L_3 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		V_2 = L_3;
		// int seconds_since_half_day = (hour % 12) * 3600 + minute * 60 + second;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		// float new_hour_rotation = (float) seconds_since_half_day / (12 * 3600) * 360;
		V_3 = ((float)il2cpp_codegen_multiply(((float)(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(L_1%((int32_t)12))), ((int32_t)3600))), ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)60))))), L_5)))/(43200.0f))), (360.0f)));
		// hour_hand.localEulerAngles = new Vector3(new_hour_rotation, 0 ,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___hour_hand_4;
		float L_7 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_7, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_6, L_8, NULL);
		// int seconds_since_hour = minute * 60 + second;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		// float new_minute_rotation = (float) seconds_since_hour / 3600 * 360;
		V_4 = ((float)il2cpp_codegen_multiply(((float)(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)60))), L_10)))/(3600.0f))), (360.0f)));
		// minute_hand.localEulerAngles = new Vector3(new_minute_rotation, 0 ,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___minute_hand_5;
		float L_12 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_12, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_11, L_13, NULL);
		// float new_second_rotation = (float) second  / 60 * 360;
		int32_t L_14 = V_2;
		V_5 = ((float)il2cpp_codegen_multiply(((float)(((float)L_14)/(60.0f))), (360.0f)));
		// second_hand.localEulerAngles = new Vector3(new_second_rotation, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___second_hand_6;
		float L_16 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_16, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_15, L_17, NULL);
		// }
		return;
	}
}
// System.Void Clock_Script::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clock_Script__ctor_m2967C85B8A448C9BF4C5F54A3A7805FD230A7111 (Clock_Script_tD596C7D3F767EAE237BB8845D627ED2348CB31AD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CustomController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_Start_mB5FF61F2DD5645D493DF16F67C2CC0B6D3C1DBC4 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// menu.gameObject.SetActive(false);
		SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* L_0 = __this->___menu_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// menu.setCurrent(tool);
		SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* L_2 = __this->___menu_6;
		int32_t L_3 = __this->___tool_5;
		NullCheck(L_2);
		SelectScript_setCurrent_m7E32022479EE5DFA5E80D9A81D7FBB6499F30D9C_inline(L_2, L_3, NULL);
		// ConfigureTool();
		CustomController_ConfigureTool_m37EE306368B6807FCD98595DC8D2E48B30EF078A(__this, NULL);
		// ActivateTool();
		CustomController_ActivateTool_m0ACE4742DD10DB5E65E03FA78A7E0BE9343549E8(__this, NULL);
		// interactor = GetComponent<XRRayInteractor>();
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_4;
		L_4 = Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4(__this, Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4_RuntimeMethod_var);
		__this->___interactor_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactor_11), (void*)L_4);
		// }
		return;
	}
}
// System.Void CustomController::ConfigureTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_ConfigureTool_m37EE306368B6807FCD98595DC8D2E48B30EF078A (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) 
{
	{
		// if (tool == Tool.Locomotion) {
		int32_t L_0 = __this->___tool_5;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// } else if (tool == Tool.Tranformation) {
		int32_t L_1 = __this->___tool_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// rotateToggle = false;
		__this->___rotateToggle_15 = (bool)0;
		goto IL_0023;
	}

IL_001a:
	{
		// } else if (tool == Tool.Examine) {
		int32_t L_2 = __this->___tool_5;
	}

IL_0023:
	{
		// manager.ConfigureToolFor(controller, tool);
		CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* L_3 = __this->___manager_10;
		int32_t L_4 = __this->___controller_9;
		int32_t L_5 = __this->___tool_5;
		NullCheck(L_3);
		CustomManager_ConfigureToolFor_m456725BE13D8C572D628665235C43C76E8B8AA52(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void CustomController::ActivateTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_ActivateTool_m0ACE4742DD10DB5E65E03FA78A7E0BE9343549E8 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) 
{
	{
		// if (tool == Tool.Locomotion) {
		int32_t L_0 = __this->___tool_5;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// locomotionActive = true;
		__this->___locomotionActive_12 = (bool)1;
		goto IL_0033;
	}

IL_0011:
	{
		// } else if (tool == Tool.Tranformation) {
		int32_t L_1 = __this->___tool_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		// transformActive = true;
		__this->___transformActive_13 = (bool)1;
		goto IL_0033;
	}

IL_0023:
	{
		// } else if (tool == Tool.Examine) {
		int32_t L_2 = __this->___tool_5;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0033;
		}
	}
	{
		// examineActive = true;
		__this->___examineActive_14 = (bool)1;
	}

IL_0033:
	{
		// manager.ActivateToolFor(controller);
		CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* L_3 = __this->___manager_10;
		int32_t L_4 = __this->___controller_9;
		NullCheck(L_3);
		CustomManager_ActivateToolFor_mCA8451AB0B76AC768241C40FD472BC8ECAE112A9(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void CustomController::DisableTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_DisableTool_mA1E3A285277A0CF63302CC34DBA935AFA0367163 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) 
{
	{
		// if (tool == Tool.Locomotion) {
		int32_t L_0 = __this->___tool_5;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// locomotionActive = false;
		__this->___locomotionActive_12 = (bool)0;
		goto IL_0033;
	}

IL_0011:
	{
		// } else if (tool == Tool.Tranformation) {
		int32_t L_1 = __this->___tool_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		// transformActive = false;
		__this->___transformActive_13 = (bool)0;
		goto IL_0033;
	}

IL_0023:
	{
		// } else if (tool == Tool.Examine) {
		int32_t L_2 = __this->___tool_5;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0033;
		}
	}
	{
		// examineActive = false;
		__this->___examineActive_14 = (bool)0;
	}

IL_0033:
	{
		// manager.DisableToolFor(controller);
		CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* L_3 = __this->___manager_10;
		int32_t L_4 = __this->___controller_9;
		NullCheck(L_3);
		CustomManager_DisableToolFor_mD7D0F955BC5FDA4F3200BE7EDB986EEF69461C7B(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void CustomController::OnOpenHandSelectionMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_OnOpenHandSelectionMenu_mA6909D1D848D399504EB81EB56A418EFA90B468C (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) 
{
	{
		// if (menuToggle) {
		bool L_0 = __this->___menuToggle_7;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// menu.gameObject.SetActive(false);
		SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* L_1 = __this->___menu_6;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// ActivateTool();
		CustomController_ActivateTool_m0ACE4742DD10DB5E65E03FA78A7E0BE9343549E8(__this, NULL);
		goto IL_0038;
	}

IL_0021:
	{
		// menu.gameObject.SetActive(true);
		SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* L_3 = __this->___menu_6;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// DisableTool();
		CustomController_DisableTool_mA1E3A285277A0CF63302CC34DBA935AFA0367163(__this, NULL);
	}

IL_0038:
	{
		// menuToggle = !menuToggle;
		bool L_5 = __this->___menuToggle_7;
		__this->___menuToggle_7 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		// menuChoosing = MenuChoice.None;
		__this->___menuChoosing_8 = 3;
		// }
		return;
	}
}
// System.Void CustomController::OnHandSelectionMenuSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_OnHandSelectionMenuSelect_m305429E441290D3001ECD464C8DD332FE027A1C3 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) 
{
	{
		// if (menuToggle && menuChoosing != MenuChoice.None) {
		bool L_0 = __this->___menuToggle_7;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1 = __this->___menuChoosing_8;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0034;
		}
	}
	{
		// tool = (Tool) menuChoosing;
		int32_t L_2 = __this->___menuChoosing_8;
		__this->___tool_5 = L_2;
		// ConfigureTool();
		CustomController_ConfigureTool_m37EE306368B6807FCD98595DC8D2E48B30EF078A(__this, NULL);
		// menu.setCurrent(tool);
		SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* L_3 = __this->___menu_6;
		int32_t L_4 = __this->___tool_5;
		NullCheck(L_3);
		SelectScript_setCurrent_m7E32022479EE5DFA5E80D9A81D7FBB6499F30D9C_inline(L_3, L_4, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void CustomController::OnRotationModifier(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_OnRotationModifier_mCA3C03E8BFB0D03DBAA6115EFC84E7CA812DA2EF (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	{
		// if (transformActive) {
		bool L_0 = __this->___transformActive_13;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// float rawValue = value.Get<float>();
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_1 = ___value0;
		NullCheck(L_1);
		float L_2;
		L_2 = InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124(L_1, InputValue_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m02B983095D690693CE2F49C3A50CF63F7BB0B124_RuntimeMethod_var);
		// if (rawValue > 0.6f)
		float L_3 = L_2;
		G_B2_0 = L_3;
		if ((!(((float)L_3) > ((float)(0.600000024f)))))
		{
			G_B3_0 = L_3;
			goto IL_001d;
		}
	}
	{
		// rotateToggle = true;
		__this->___rotateToggle_15 = (bool)1;
		G_B3_0 = G_B2_0;
	}

IL_001d:
	{
		// if (rawValue < 0.3f)
		if ((!(((float)G_B3_0) < ((float)(0.300000012f)))))
		{
			goto IL_002b;
		}
	}
	{
		// rotateToggle = false;
		__this->___rotateToggle_15 = (bool)0;
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void CustomController::OnThumbstick(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_OnThumbstick_mF5063F59138CCBA6F3295644C8DBD6070AAE4A84 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE81EFFA1E6B816A8E2251D1993F4E93E82365151);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	{
		// Vector2 rawValue = value.Get<Vector2>();
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		V_0 = L_1;
		// if (menuToggle) {
		bool L_2 = __this->___menuToggle_7;
		if (!L_2)
		{
			goto IL_009c;
		}
	}
	{
		// if (rawValue.magnitude < 0.5f) {
		float L_3;
		L_3 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		if ((!(((float)L_3) < ((float)(0.5f)))))
		{
			goto IL_0029;
		}
	}
	{
		// menuChoosing = MenuChoice.None;
		__this->___menuChoosing_8 = 3;
		goto IL_008a;
	}

IL_0029:
	{
		// float angle = Vector2.SignedAngle(Vector2.right, rawValue);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6;
		L_6 = Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline(L_4, L_5, NULL);
		V_1 = L_6;
		// if (30.0f <= angle && angle < 150.0f) {
		float L_7 = V_1;
		if ((!(((float)(30.0f)) <= ((float)L_7))))
		{
			goto IL_004e;
		}
	}
	{
		float L_8 = V_1;
		if ((!(((float)L_8) < ((float)(150.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		// menuChoosing = MenuChoice.Locomotion;
		__this->___menuChoosing_8 = 0;
		goto IL_008a;
	}

IL_004e:
	{
		// } else if (150.0f <= angle || angle < -90.0f) {
		float L_9 = V_1;
		if ((((float)(150.0f)) <= ((float)L_9)))
		{
			goto IL_005e;
		}
	}
	{
		float L_10 = V_1;
		if ((!(((float)L_10) < ((float)(-90.0f)))))
		{
			goto IL_0067;
		}
	}

IL_005e:
	{
		// menuChoosing = MenuChoice.Tranformation;
		__this->___menuChoosing_8 = 1;
		goto IL_008a;
	}

IL_0067:
	{
		// } else if (-90.0f <= angle && angle < 30.0f) {
		float L_11 = V_1;
		if ((!(((float)(-90.0f)) <= ((float)L_11))))
		{
			goto IL_0080;
		}
	}
	{
		float L_12 = V_1;
		if ((!(((float)L_12) < ((float)(30.0f)))))
		{
			goto IL_0080;
		}
	}
	{
		// menuChoosing = MenuChoice.Examine;
		__this->___menuChoosing_8 = 2;
		goto IL_008a;
	}

IL_0080:
	{
		// Debug.LogError("[EDV] Math is not right OnThumbstick");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE81EFFA1E6B816A8E2251D1993F4E93E82365151, NULL);
	}

IL_008a:
	{
		// menu.setChoosing(menuChoosing);
		SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* L_13 = __this->___menu_6;
		int32_t L_14 = __this->___menuChoosing_8;
		NullCheck(L_13);
		SelectScript_setChoosing_mE6CB8C282CA2FFD1D6D5D0CB47D6B8EC4258FFF5_inline(L_13, L_14, NULL);
		return;
	}

IL_009c:
	{
		// else if (transformActive && interactor.hasSelection) {
		bool L_15 = __this->___transformActive_13;
		if (!L_15)
		{
			goto IL_010e;
		}
	}
	{
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_16 = __this->___interactor_11;
		NullCheck(L_16);
		bool L_17;
		L_17 = XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1(L_16, NULL);
		if (!L_17)
		{
			goto IL_010e;
		}
	}
	{
		// Transform interactableTransform = interactor.firstInteractableSelected.transform;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_18 = __this->___interactor_11;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = XRBaseInteractor_get_firstInteractableSelected_m26779B4796BA51429DE9B5F34EB69BB4C02C48AF_inline(L_18, NULL);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractable::get_transform() */, IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var, L_19);
		V_2 = L_20;
		// if (rotateToggle) {
		bool L_21 = __this->___rotateToggle_15;
		if (!L_21)
		{
			goto IL_00ef;
		}
	}
	{
		// RotateAnchor(interactableTransform, Vector3.back, rawValue.x);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___x_0;
		CustomController_RotateAnchor_m38D7A76472F9A17A01170001A3CA68271C2F90B5(__this, L_22, L_23, L_25, NULL);
		// RotateAnchor(interactableTransform, Vector3.right, rawValue.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		float L_29 = L_28.___y_1;
		CustomController_RotateAnchor_m38D7A76472F9A17A01170001A3CA68271C2F90B5(__this, L_26, L_27, L_29, NULL);
		return;
	}

IL_00ef:
	{
		// RotateAnchor(interactableTransform, Vector3.up, rawValue.x);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_0;
		float L_33 = L_32.___x_0;
		CustomController_RotateAnchor_m38D7A76472F9A17A01170001A3CA68271C2F90B5(__this, L_30, L_31, L_33, NULL);
		// TranslateAnchor(rawValue.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_0;
		float L_35 = L_34.___y_1;
		CustomController_TranslateAnchor_m084690F6A9225732F78DA3023128847E11C7016D(__this, L_35, NULL);
		return;
	}

IL_010e:
	{
		// } else if (examineActive && interactor.hasSelection) {
		bool L_36 = __this->___examineActive_14;
		if (!L_36)
		{
			goto IL_0141;
		}
	}
	{
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_37 = __this->___interactor_11;
		NullCheck(L_37);
		bool L_38;
		L_38 = XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1(L_37, NULL);
		if (!L_38)
		{
			goto IL_0141;
		}
	}
	{
		// Transform interactableTransform = interactor.firstInteractableSelected.transform;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_39 = __this->___interactor_11;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = XRBaseInteractor_get_firstInteractableSelected_m26779B4796BA51429DE9B5F34EB69BB4C02C48AF_inline(L_39, NULL);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractable::get_transform() */, IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var, L_40);
		V_3 = L_41;
		// ScaleAnchor(interactableTransform, rawValue.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_0;
		float L_44 = L_43.___y_1;
		CustomController_ScaleAnchor_m48441BF322F23470189980FA20FF954EB0E62033(__this, L_42, L_44, NULL);
	}

IL_0141:
	{
		// }
		return;
	}
}
// System.Void CustomController::OnResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_OnResetPosition_m4443D7C3F0D7106B9BBE42F3A6567A47CC8A12BB (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if ((transformActive || examineActive) && interactor.hasSelection) {
		bool L_0 = __this->___transformActive_13;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___examineActive_14;
		if (!L_1)
		{
			goto IL_0079;
		}
	}

IL_0010:
	{
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_2 = __this->___interactor_11;
		NullCheck(L_2);
		bool L_3;
		L_3 = XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1(L_2, NULL);
		if (!L_3)
		{
			goto IL_0079;
		}
	}
	{
		// Transform interactableTransform = interactor.firstInteractableSelected.transform;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_4 = __this->___interactor_11;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XRBaseInteractor_get_firstInteractableSelected_m26779B4796BA51429DE9B5F34EB69BB4C02C48AF_inline(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractable::get_transform() */, IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var, L_5);
		// var rayOrigin = interactor.rayOriginTransform;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_7 = __this->___interactor_11;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = XRRayInteractor_get_rayOriginTransform_m1E25B9D203ABF076A179802DC530B2A3137232F2_inline(L_7, NULL);
		// var anchor = interactor.attachTransform;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_9 = __this->___interactor_11;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_9, NULL);
		V_0 = L_10;
		// var originPosition = rayOrigin.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_8;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		V_1 = L_12;
		// var originForward = rayOrigin.forward;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		V_2 = L_13;
		// var resultingPosition = originPosition + Vector3.Normalize(originForward) * 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, (3.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_17, NULL);
		V_3 = L_18;
		// anchor.position = resultingPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_20, NULL);
		// interactableTransform.eulerAngles = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_6);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_6, L_21, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void CustomController::TranslateAnchor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_TranslateAnchor_m084690F6A9225732F78DA3023128847E11C7016D (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, float ___directionAmount0, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_1 = NULL;
	{
		// if (Mathf.Approximately(directionAmount, 0f))
		float L_0 = ___directionAmount0;
		bool L_1;
		L_1 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_0, (0.0f), NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var rayOrigin = interactor.rayOriginTransform;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_2 = __this->___interactor_11;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = XRRayInteractor_get_rayOriginTransform_m1E25B9D203ABF076A179802DC530B2A3137232F2_inline(L_2, NULL);
		// var anchor = interactor.attachTransform;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_4 = __this->___interactor_11;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_4, NULL);
		V_0 = L_5;
		// var originPosition = rayOrigin.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_3;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		V_1 = L_7;
		// var originForward = rayOrigin.forward;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		V_2 = L_8;
		// var resultingPosition = anchor.position + originForward * (directionAmount * translateSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		float L_12 = ___directionAmount0;
		float L_13 = __this->___translateSpeed_17;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, L_13)), L_14)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_15, NULL);
		V_3 = L_16;
		// var posInAttachSpace = resultingPosition - originPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_18, NULL);
		// var dotResult = Vector3.Dot(posInAttachSpace, originForward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21;
		L_21 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_19, L_20, NULL);
		V_4 = L_21;
		// anchor.position = dotResult > 0f ? resultingPosition : originPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_0;
		float L_23 = V_4;
		G_B3_0 = L_22;
		if ((((float)L_23) > ((float)(0.0f))))
		{
			G_B4_0 = L_22;
			goto IL_006e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		G_B5_0 = L_24;
		G_B5_1 = G_B3_0;
		goto IL_006f;
	}

IL_006e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		G_B5_0 = L_25;
		G_B5_1 = G_B4_0;
	}

IL_006f:
	{
		NullCheck(G_B5_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B5_1, G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void CustomController::RotateAnchor(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_RotateAnchor_m38D7A76472F9A17A01170001A3CA68271C2F90B5 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___interactable0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___directionAmount2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (Mathf.Abs(directionAmount) <= 0.5f)
		float L_0 = ___directionAmount2;
		float L_1;
		L_1 = fabsf(L_0);
		if ((!(((float)L_1) <= ((float)(0.5f)))))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var rotateAngle = directionAmount * (rotateSpeed * Time.deltaTime);
		float L_2 = ___directionAmount2;
		float L_3 = __this->___rotateSpeed_18;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_multiply(L_3, L_4))));
		// interactable.Rotate(direction, rotateAngle, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___interactable0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___direction1;
		float L_7 = V_0;
		NullCheck(L_5);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_5, L_6, L_7, 0, NULL);
		// }
		return;
	}
}
// System.Void CustomController::ScaleAnchor(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController_ScaleAnchor_m48441BF322F23470189980FA20FF954EB0E62033 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___interactable0, float ___directionAmount1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_1 = NULL;
	{
		// if (Mathf.Approximately(directionAmount, 0f))
		float L_0 = ___directionAmount1;
		bool L_1;
		L_1 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_0, (0.0f), NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var oldScale = interactable.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___interactable0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		// var newScale = oldScale + Vector3.one * directionAmount * scaleSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_5 = ___directionAmount1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		float L_7 = __this->___scaleSpeed_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_10, NULL);
		V_0 = L_11;
		// var limitScale = (Vector3.one * 0.05f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, (0.0500000007f), NULL);
		V_1 = L_13;
		// interactable.localScale = limitScale.magnitude > newScale.magnitude ? limitScale : newScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___interactable0;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		G_B3_0 = L_14;
		if ((((float)L_15) > ((float)L_16)))
		{
			G_B4_0 = L_14;
			goto IL_005e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		G_B5_0 = L_17;
		G_B5_1 = G_B3_0;
		goto IL_005f;
	}

IL_005e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		G_B5_0 = L_18;
		G_B5_1 = G_B4_0;
	}

IL_005f:
	{
		NullCheck(G_B5_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(G_B5_1, G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void CustomController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomController__ctor_m37F794A94B0A5B9A24FBA5B1649F486B84793E40 (CustomController_t75A751B822B51284734617DD299D31FB9ADF4DD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tool_t2C5454FEFB937DC3646C338C216856401E87E7C6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int enumCount = Tool.GetNames(typeof(Tool)).Length;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Tool_t2C5454FEFB937DC3646C338C216856401E87E7C6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3(L_1, NULL);
		NullCheck(L_2);
		__this->___enumCount_4 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		// MenuChoice menuChoosing = MenuChoice.None;
		__this->___menuChoosing_8 = 3;
		// float scaleSpeed = 1.0f;
		__this->___scaleSpeed_16 = (1.0f);
		// float translateSpeed = 1.0f;
		__this->___translateSpeed_17 = (1.0f);
		// float rotateSpeed = 180.0f;
		__this->___rotateSpeed_18 = (180.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CustomDebug::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDebug_Start_mEEA07ADB342C5C4E3A1C1017DB3AB2B63217DAE5 (CustomDebug_tD85974AB20415BD3B82278DA4368FD4EF8B1DC01* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CustomDebug::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDebug_Update_m91E252DDD7E481BD89640E84A2D143AD0FE539D8 (CustomDebug_tD85974AB20415BD3B82278DA4368FD4EF8B1DC01* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CustomDebug::Logging(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDebug_Logging_m66248938CB2EE033F395D496C528B8C1EE9B6EA6 (CustomDebug_tD85974AB20415BD3B82278DA4368FD4EF8B1DC01* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(text);
		String_t* L_0 = ___text0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void CustomDebug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDebug__ctor_m00D871B8BF93D482F2453851604606F20CA5480F (CustomDebug_tD85974AB20415BD3B82278DA4368FD4EF8B1DC01* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CustomManager::EnableSnapTurnFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_EnableSnapTurnFor_mAF256FA2CAAA74347F8C615ABEC379C19A993DDE (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) 
{
	{
		// if (controller == Controller.Left) {
		int32_t L_0 = ___controller0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// leftSnapState = leftSnapSetting;
		bool L_1 = __this->___leftSnapSetting_18;
		__this->___leftSnapState_19 = L_1;
		goto IL_001d;
	}

IL_0011:
	{
		// rightSnapState = rightSnapSetting;
		bool L_2 = __this->___rightSnapSetting_20;
		__this->___rightSnapState_21 = L_2;
	}

IL_001d:
	{
		// ConfigureSnapTurnProvider();
		CustomManager_ConfigureSnapTurnProvider_m69074A397C5D30B97D0DE6C05AA272CC51647E25(__this, NULL);
		// }
		return;
	}
}
// System.Void CustomManager::DisableSnapTurnFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_DisableSnapTurnFor_m068793C50DAEF1941C26D51DBC4D4BAFD2A1E70F (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) 
{
	{
		// if (controller == Controller.Left) {
		int32_t L_0 = ___controller0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// leftSnapState = false;
		__this->___leftSnapState_19 = (bool)0;
		goto IL_0013;
	}

IL_000c:
	{
		// rightSnapState = false;
		__this->___rightSnapState_21 = (bool)0;
	}

IL_0013:
	{
		// ConfigureSnapTurnProvider();
		CustomManager_ConfigureSnapTurnProvider_m69074A397C5D30B97D0DE6C05AA272CC51647E25(__this, NULL);
		// }
		return;
	}
}
// System.Void CustomManager::ConfigureSnapTurnFor(CustomEnums.Controller,CustomEnums.Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ConfigureSnapTurnFor_m84870AD4FE92D170B85791FD351BA59C6696182E (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, int32_t ___tool1, const RuntimeMethod* method) 
{
	CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* G_B3_0 = NULL;
	CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* G_B4_1 = NULL;
	CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* G_B7_0 = NULL;
	CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* G_B8_1 = NULL;
	{
		// if (controller == Controller.Left) {
		int32_t L_0 = ___controller0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// leftSnapSetting = (tool == Tool.Locomotion) ? true : false;
		int32_t L_1 = ___tool1;
		G_B2_0 = __this;
		if (!L_1)
		{
			G_B3_0 = __this;
			goto IL_000a;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_000b;
	}

IL_000a:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_000b:
	{
		NullCheck(G_B4_1);
		G_B4_1->___leftSnapSetting_18 = (bool)G_B4_0;
		return;
	}

IL_0011:
	{
		// rightSnapSetting = (tool == Tool.Locomotion) ? true: false;
		int32_t L_2 = ___tool1;
		G_B6_0 = __this;
		if (!L_2)
		{
			G_B7_0 = __this;
			goto IL_0018;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0019:
	{
		NullCheck(G_B8_1);
		G_B8_1->___rightSnapSetting_20 = (bool)G_B8_0;
		// }
		return;
	}
}
// System.Void CustomManager::ConfigureSnapTurnProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ConfigureSnapTurnProvider_m69074A397C5D30B97D0DE6C05AA272CC51647E25 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, const RuntimeMethod* method) 
{
	{
		// if (leftSnapState && rightSnapState) {
		bool L_0 = __this->___leftSnapState_19;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = __this->___rightSnapState_21;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// snapTurnProviderSettings[0].ApplyTo(snapTurnProvider);
		PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F* L_2 = __this->___snapTurnProviderSettings_4;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ActionBasedSnapTurnProvider_t95ED9D2E3E38ABD6EBF964E3D00E8D8B75458BC9* L_5 = __this->___snapTurnProvider_9;
		NullCheck(L_4);
		bool L_6;
		L_6 = Preset_ApplyTo_mBDAA117F5AE7A4CC84694BB39C1AE7E67137ADA5(L_4, L_5, NULL);
		goto IL_0076;
	}

IL_0026:
	{
		// } else if (leftSnapState) {
		bool L_7 = __this->___leftSnapState_19;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// snapTurnProviderSettings[1].ApplyTo(snapTurnProvider);
		PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F* L_8 = __this->___snapTurnProviderSettings_4;
		NullCheck(L_8);
		int32_t L_9 = 1;
		Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ActionBasedSnapTurnProvider_t95ED9D2E3E38ABD6EBF964E3D00E8D8B75458BC9* L_11 = __this->___snapTurnProvider_9;
		NullCheck(L_10);
		bool L_12;
		L_12 = Preset_ApplyTo_mBDAA117F5AE7A4CC84694BB39C1AE7E67137ADA5(L_10, L_11, NULL);
		goto IL_0076;
	}

IL_0044:
	{
		// } else if (rightSnapState) {
		bool L_13 = __this->___rightSnapState_21;
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		// snapTurnProviderSettings[2].ApplyTo(snapTurnProvider);
		PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F* L_14 = __this->___snapTurnProviderSettings_4;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ActionBasedSnapTurnProvider_t95ED9D2E3E38ABD6EBF964E3D00E8D8B75458BC9* L_17 = __this->___snapTurnProvider_9;
		NullCheck(L_16);
		bool L_18;
		L_18 = Preset_ApplyTo_mBDAA117F5AE7A4CC84694BB39C1AE7E67137ADA5(L_16, L_17, NULL);
		goto IL_0076;
	}

IL_0062:
	{
		// snapTurnProviderSettings[3].ApplyTo(snapTurnProvider);
		PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F* L_19 = __this->___snapTurnProviderSettings_4;
		NullCheck(L_19);
		int32_t L_20 = 3;
		Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ActionBasedSnapTurnProvider_t95ED9D2E3E38ABD6EBF964E3D00E8D8B75458BC9* L_22 = __this->___snapTurnProvider_9;
		NullCheck(L_21);
		bool L_23;
		L_23 = Preset_ApplyTo_mBDAA117F5AE7A4CC84694BB39C1AE7E67137ADA5(L_21, L_22, NULL);
	}

IL_0076:
	{
		// snapTurnProvider.system = locomotionSystem;
		ActionBasedSnapTurnProvider_t95ED9D2E3E38ABD6EBF964E3D00E8D8B75458BC9* L_24 = __this->___snapTurnProvider_9;
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_25 = __this->___locomotionSystem_8;
		NullCheck(L_24);
		LocomotionProvider_set_system_m356CEE71E1057AAD0A615898E7E92A89E2E4664C_inline(L_24, L_25, NULL);
		// }
		return;
	}
}
// System.Void CustomManager::DisableInteractorFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_DisableInteractorFor_m3F29D9D51D9820EA721F6C66EA0DB0BDDADFCFA2 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) 
{
	{
		// if (controller == Controller.Left) {
		int32_t L_0 = ___controller0;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// leftRayInteractor.enabled = false;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_1 = __this->___leftRayInteractor_10;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// leftLineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___leftLineRenderer_12;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// leftLineVisual.enabled = false;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_3 = __this->___leftLineVisual_11;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		return;
	}

IL_0028:
	{
		// rightRayInteractor.enabled = false;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_4 = __this->___rightRayInteractor_14;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// rightLineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___rightLineRenderer_16;
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// rightLineVisual.enabled = false;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_6 = __this->___rightLineVisual_15;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CustomManager::EnableInteractorFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_EnableInteractorFor_m2FA0597CD57CC480761A8A45FBAB2061AAAE1284 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) 
{
	{
		// if (controller == Controller.Left) {
		int32_t L_0 = ___controller0;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// leftRayInteractor.enabled = true;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_1 = __this->___leftRayInteractor_10;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// leftLineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___leftLineRenderer_12;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)1, NULL);
		// leftLineVisual.enabled = true;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_3 = __this->___leftLineVisual_11;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)1, NULL);
		return;
	}

IL_0028:
	{
		// rightRayInteractor.enabled = true;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_4 = __this->___rightRayInteractor_14;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		// rightLineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___rightLineRenderer_16;
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)1, NULL);
		// rightLineVisual.enabled = true;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_6 = __this->___rightLineVisual_15;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CustomManager::ConfigureInteractorFor(CustomEnums.Controller,CustomEnums.Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ConfigureInteractorFor_mAB09D392698944308388901E7EDF14FEFCDF9F81 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, int32_t ___tool1, const RuntimeMethod* method) 
{
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* V_0 = NULL;
	XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* V_1 = NULL;
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* G_B3_0 = NULL;
	XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* G_B6_0 = NULL;
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* G_B8_0 = NULL;
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* G_B7_0 = NULL;
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* G_B9_0 = NULL;
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* G_B9_1 = NULL;
	{
		// XRRayInteractor rayInteractor = (controller == Controller.Left) ? leftRayInteractor : rightRayInteractor;
		int32_t L_0 = ___controller0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_1 = __this->___rightRayInteractor_14;
		G_B3_0 = L_1;
		goto IL_0011;
	}

IL_000b:
	{
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_2 = __this->___leftRayInteractor_10;
		G_B3_0 = L_2;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		// XRInteractorLineVisual lineVisual = (controller == Controller.Left) ? leftLineVisual : rightLineVisual;
		int32_t L_3 = ___controller0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_4 = __this->___rightLineVisual_15;
		G_B6_0 = L_4;
		goto IL_0023;
	}

IL_001d:
	{
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_5 = __this->___leftLineVisual_11;
		G_B6_0 = L_5;
	}

IL_0023:
	{
		V_1 = G_B6_0;
		// rayInteractorSettings[(int) tool].ApplyTo(rayInteractor);
		PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F* L_6 = __this->___rayInteractorSettings_5;
		int32_t L_7 = ___tool1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_10 = V_0;
		NullCheck(L_9);
		bool L_11;
		L_11 = Preset_ApplyTo_mBDAA117F5AE7A4CC84694BB39C1AE7E67137ADA5(L_9, L_10, NULL);
		// lineVisualSettings[(int) tool].ApplyTo(lineVisual);
		PresetU5BU5D_t234221A8D8368A3BA1E1122A5C184B8F314B247F* L_12 = __this->___lineVisualSettings_6;
		int32_t L_13 = ___tool1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_16 = V_1;
		NullCheck(L_15);
		bool L_17;
		L_17 = Preset_ApplyTo_mBDAA117F5AE7A4CC84694BB39C1AE7E67137ADA5(L_15, L_16, NULL);
		// rayInteractor.interactionManager = xRInteractionManager;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_18 = V_0;
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_19 = __this->___xRInteractionManager_7;
		NullCheck(L_18);
		XRBaseInteractor_set_interactionManager_m3B0BFBBFE80325CF8837DFC31B61E907710554AA(L_18, L_19, NULL);
		// rayInteractor.xrController = (controller == Controller.Left) ? leftXRController : rightXRController;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_20 = V_0;
		int32_t L_21 = ___controller0;
		G_B7_0 = L_20;
		if (!L_21)
		{
			G_B8_0 = L_20;
			goto IL_005a;
		}
	}
	{
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_22 = __this->___rightXRController_17;
		G_B9_0 = L_22;
		G_B9_1 = G_B7_0;
		goto IL_0060;
	}

IL_005a:
	{
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_23 = __this->___leftXRController_13;
		G_B9_0 = L_23;
		G_B9_1 = G_B8_0;
	}

IL_0060:
	{
		NullCheck(G_B9_1);
		XRBaseControllerInteractor_set_xrController_m23CD933EEC980FBEEDA28EB1F6A16B7D7900D454_inline(G_B9_1, G_B9_0, NULL);
		// rayInteractor.attachTransform = rayInteractor.transform.GetChild(2);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_24 = V_0;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_25 = V_0;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_26, 2, NULL);
		NullCheck(L_24);
		XRBaseInteractor_set_attachTransform_mA8DC6CAE14C3CAEDF3A8A9F23EC5DD5D533F7D56_inline(L_24, L_27, NULL);
		// rayInteractor.rayOriginTransform = rayInteractor.transform.GetChild(3);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_28 = V_0;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_29 = V_0;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_30, 3, NULL);
		NullCheck(L_28);
		XRRayInteractor_set_rayOriginTransform_m615A2661622EC41AC56242329D3ED7AC681AB289_inline(L_28, L_31, NULL);
		// }
		return;
	}
}
// System.Void CustomManager::ActivateToolFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ActivateToolFor_mCA8451AB0B76AC768241C40FD472BC8ECAE112A9 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) 
{
	{
		// EnableSnapTurnFor(controller);
		int32_t L_0 = ___controller0;
		CustomManager_EnableSnapTurnFor_mAF256FA2CAAA74347F8C615ABEC379C19A993DDE(__this, L_0, NULL);
		// EnableInteractorFor(controller);
		int32_t L_1 = ___controller0;
		CustomManager_EnableInteractorFor_m2FA0597CD57CC480761A8A45FBAB2061AAAE1284(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void CustomManager::DisableToolFor(CustomEnums.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_DisableToolFor_mD7D0F955BC5FDA4F3200BE7EDB986EEF69461C7B (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, const RuntimeMethod* method) 
{
	{
		// DisableSnapTurnFor(controller);
		int32_t L_0 = ___controller0;
		CustomManager_DisableSnapTurnFor_m068793C50DAEF1941C26D51DBC4D4BAFD2A1E70F(__this, L_0, NULL);
		// DisableInteractorFor(controller);
		int32_t L_1 = ___controller0;
		CustomManager_DisableInteractorFor_m3F29D9D51D9820EA721F6C66EA0DB0BDDADFCFA2(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void CustomManager::ConfigureToolFor(CustomEnums.Controller,CustomEnums.Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager_ConfigureToolFor_m456725BE13D8C572D628665235C43C76E8B8AA52 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, int32_t ___controller0, int32_t ___tool1, const RuntimeMethod* method) 
{
	{
		// ConfigureSnapTurnFor(controller, tool);
		int32_t L_0 = ___controller0;
		int32_t L_1 = ___tool1;
		CustomManager_ConfigureSnapTurnFor_m84870AD4FE92D170B85791FD351BA59C6696182E(__this, L_0, L_1, NULL);
		// ConfigureInteractorFor(controller, tool);
		int32_t L_2 = ___controller0;
		int32_t L_3 = ___tool1;
		CustomManager_ConfigureInteractorFor_mAB09D392698944308388901E7EDF14FEFCDF9F81(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void CustomManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomManager__ctor_mD9A5F58A9C1B9F1F1BAD1C193DF4E23E559466E2 (CustomManager_t54F7A3E7F26FA60338C97B5D40EC15E9AB8BA840* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SelectScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectScript_Start_mA42B484BA305BE993769C89F934E3DF46075E137 (SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// left = transform.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		__this->___left_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_6), (void*)L_1);
		// m_left = left.GetComponent<Renderer>().material;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___left_6;
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_2, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		__this->___m_left_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_left_7), (void*)L_4);
		// top = transform.GetChild(1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, 1, NULL);
		__this->___top_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___top_4), (void*)L_6);
		// m_top = top.GetComponent<Renderer>().material;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___top_4;
		NullCheck(L_7);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8;
		L_8 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_7, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_8, NULL);
		__this->___m_top_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_top_5), (void*)L_9);
		// right = transform.GetChild(2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, 2, NULL);
		__this->___right_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_8), (void*)L_11);
		// m_right = right.GetComponent<Renderer>().material;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___right_8;
		NullCheck(L_12);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13;
		L_13 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_12, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_13, NULL);
		__this->___m_right_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_right_9), (void*)L_14);
		// }
		return;
	}
}
// System.Void SelectScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectScript_Update_m5E0D4727173168588E7205D7B170EC43176B8687 (SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B6_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B8_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B7_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B9_1 = NULL;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B13_0 = 0.0f;
	float G_B15_0 = 0.0f;
	float G_B15_1 = 0.0f;
	float G_B17_0 = 0.0f;
	float G_B16_0 = 0.0f;
	float G_B18_0 = 0.0f;
	float G_B18_1 = 0.0f;
	{
		// m_top.color = (currentTool == Tool.Locomotion) ? Color.green : Color.grey;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_top_5;
		int32_t L_1 = __this->___currentTool_10;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0015;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0015:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(G_B3_1, G_B3_0, NULL);
		// m_left.color = (currentTool == Tool.Tranformation) ? Color.blue : Color.grey;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_left_7;
		int32_t L_5 = __this->___currentTool_10;
		G_B4_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B5_0 = L_4;
			goto IL_0035;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_003a;
	}

IL_0035:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		G_B6_0 = L_7;
		G_B6_1 = G_B5_0;
	}

IL_003a:
	{
		NullCheck(G_B6_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(G_B6_1, G_B6_0, NULL);
		// m_right.color = (currentTool == Tool.Examine) ? Color.red : Color.grey;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___m_right_9;
		int32_t L_9 = __this->___currentTool_10;
		G_B7_0 = L_8;
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			G_B8_0 = L_8;
			goto IL_0055;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		G_B9_0 = L_10;
		G_B9_1 = G_B7_0;
		goto IL_005a;
	}

IL_0055:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B9_0 = L_11;
		G_B9_1 = G_B8_0;
	}

IL_005a:
	{
		NullCheck(G_B9_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(G_B9_1, G_B9_0, NULL);
		// float delta_top_y = Mathf.Lerp(top.localPosition.y, (currentChoice == MenuChoice.Locomotion) ? 0.2f : 0, 0.5f) - top.localPosition.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___top_4;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_12, NULL);
		float L_14 = L_13.___y_3;
		int32_t L_15 = __this->___currentChoice_11;
		G_B10_0 = L_14;
		if (!L_15)
		{
			G_B11_0 = L_14;
			goto IL_007e;
		}
	}
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B10_0;
		goto IL_0083;
	}

IL_007e:
	{
		G_B12_0 = (0.200000003f);
		G_B12_1 = G_B11_0;
	}

IL_0083:
	{
		float L_16;
		L_16 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(G_B12_1, G_B12_0, (0.5f), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___top_4;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___y_3;
		V_0 = ((float)il2cpp_codegen_subtract(L_16, L_19));
		// top.localPosition += new Vector3(0, delta_top_y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___top_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_21, NULL);
		float L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (0.0f), L_23, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_24, NULL);
		NullCheck(L_21);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_21, L_25, NULL);
		// float delta_left_y = Mathf.Lerp(left.localPosition.y, (currentChoice == MenuChoice.Tranformation) ? 0.2f : 0, 0.5f) - left.localPosition.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___left_6;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		float L_28 = L_27.___y_3;
		int32_t L_29 = __this->___currentChoice_11;
		G_B13_0 = L_28;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			G_B14_0 = L_28;
			goto IL_00e5;
		}
	}
	{
		G_B15_0 = (0.0f);
		G_B15_1 = G_B13_0;
		goto IL_00ea;
	}

IL_00e5:
	{
		G_B15_0 = (0.200000003f);
		G_B15_1 = G_B14_0;
	}

IL_00ea:
	{
		float L_30;
		L_30 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(G_B15_1, G_B15_0, (0.5f), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___left_6;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_31, NULL);
		float L_33 = L_32.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_30, L_33));
		// left.localPosition += new Vector3(0, delta_left_y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___left_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_35, NULL);
		float L_37 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_38), (0.0f), L_37, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_38, NULL);
		NullCheck(L_35);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_35, L_39, NULL);
		// float delta_right_y = Mathf.Lerp(right.localPosition.y, (currentChoice == MenuChoice.Examine) ? 0.2f : 0, 0.5f) - right.localPosition.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___right_8;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_40, NULL);
		float L_42 = L_41.___y_3;
		int32_t L_43 = __this->___currentChoice_11;
		G_B16_0 = L_42;
		if ((((int32_t)L_43) == ((int32_t)2)))
		{
			G_B17_0 = L_42;
			goto IL_014c;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_0151;
	}

IL_014c:
	{
		G_B18_0 = (0.200000003f);
		G_B18_1 = G_B17_0;
	}

IL_0151:
	{
		float L_44;
		L_44 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(G_B18_1, G_B18_0, (0.5f), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___right_8;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_45, NULL);
		float L_47 = L_46.___y_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_44, L_47));
		// right.localPosition += new Vector3(0, delta_right_y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___right_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = L_48;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_49, NULL);
		float L_51 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), (0.0f), L_51, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_50, L_52, NULL);
		NullCheck(L_49);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_49, L_53, NULL);
		// }
		return;
	}
}
// System.Void SelectScript::setCurrent(CustomEnums.Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectScript_setCurrent_m7E32022479EE5DFA5E80D9A81D7FBB6499F30D9C (SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* __this, int32_t ___tool0, const RuntimeMethod* method) 
{
	{
		// currentTool = tool;
		int32_t L_0 = ___tool0;
		__this->___currentTool_10 = L_0;
		// }
		return;
	}
}
// System.Void SelectScript::setChoosing(CustomEnums.MenuChoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectScript_setChoosing_mE6CB8C282CA2FFD1D6D5D0CB47D6B8EC4258FFF5 (SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* __this, int32_t ___choice0, const RuntimeMethod* method) 
{
	{
		// currentChoice = choice;
		int32_t L_0 = ___choice0;
		__this->___currentChoice_11 = L_0;
		// }
		return;
	}
}
// System.Void SelectScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectScript__ctor_m1AC47B804CEAA444923BDBD9A9D6036D1011002C (SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* __this, const RuntimeMethod* method) 
{
	{
		// MenuChoice currentChoice = MenuChoice.None;
		__this->___currentChoice_11 = 3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RuntimePresets.ComponentExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentExtensions__cctor_m6AAFE4BD786076399EDAA173D62C83AAFD206605 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64362668998D08ABE3662D4A5F520E3DA0DDD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC77027805B1651EF89F819873354A55A93A7C4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, string> exceptions = new Dictionary<string, string>
		// {
		//     {"material", "sharedMaterial"},
		//     {"materials", "sharedMaterials"},
		//     {"mesh", "sharedMesh"}
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED, _stringLiteralEA64362668998D08ABE3662D4A5F520E3DA0DDD9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteralEC77027805B1651EF89F819873354A55A93A7C4A, _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		((ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_StaticFields*)il2cpp_codegen_static_fields_for(ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_il2cpp_TypeInfo_var))->___exceptions_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_StaticFields*)il2cpp_codegen_static_fields_for(ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_il2cpp_TypeInfo_var))->___exceptions_0), (void*)L_3);
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
// UnityEngine.Component RuntimePresets.GameObjectExtensions::GetOrCreateComponent(UnityEngine.GameObject,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObjectExtensions_GetOrCreateComponent_m1D668D143B661FBDD1963680CED1CC00D4685139 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	{
		// var component = target.GetComponent(type);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target0;
		Type_t* L_1 = ___type1;
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_1, NULL);
		V_0 = L_2;
		// if (component == null)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		// component = target.AddComponent(type);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___target0;
		Type_t* L_6 = ___type1;
		NullCheck(L_5);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7;
		L_7 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_5, L_6, NULL);
		V_0 = L_7;
	}

IL_0019:
	{
		// return component;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_8 = V_0;
		return L_8;
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
// System.Type RuntimePresets.Preset::get_ComponentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Preset_get_ComponentType_mDBD13E402ABD16D4D17E988BACBE5CC96CDB5546 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, const RuntimeMethod* method) 
{
	{
		// public Type ComponentType => _component.GetType();
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = __this->____component_4;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Component RuntimePresets.Preset::get_TargetComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* Preset_get_TargetComponent_m9A87964B51AF2EF8486EF6645F4BEBD5FCD6B2FC (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, const RuntimeMethod* method) 
{
	{
		// get => _component;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = __this->____component_4;
		return L_0;
	}
}
// System.Void RuntimePresets.Preset::set_TargetComponent(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Preset_set_TargetComponent_m1E9C43728A6530C7DEA311E915BB3345F6D5165E (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _component = value;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___value0;
		__this->____component_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____component_4), (void*)L_0);
		return;
	}
}
// System.Boolean RuntimePresets.Preset::ApplyTo(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Preset_ApplyTo_mBDAA117F5AE7A4CC84694BB39C1AE7E67137ADA5 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_TransferValuesFrom_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mCAC6709499D936ABA8231037E44ED8AFB6CFBC1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	{
		// var component = target as Component;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___target0;
		V_0 = ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
		// if (component == null || !CanBeAppliedTo(component)) return false;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = V_0;
		bool L_4;
		L_4 = Preset_CanBeAppliedTo_m7A42531BBD7FE8E710C2E3FFFC77B515EC2E0156(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// if (component == null || !CanBeAppliedTo(component)) return false;
		return (bool)0;
	}

IL_001b:
	{
		// component.TransferValuesFrom(_component);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5 = V_0;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_6 = __this->____component_4;
		il2cpp_codegen_runtime_class_init_inline(ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_il2cpp_TypeInfo_var);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7;
		L_7 = ComponentExtensions_TransferValuesFrom_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mCAC6709499D936ABA8231037E44ED8AFB6CFBC1D(L_5, L_6, (bool)1, ComponentExtensions_TransferValuesFrom_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mCAC6709499D936ABA8231037E44ED8AFB6CFBC1D_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean RuntimePresets.Preset::ApplyTo(System.Collections.Generic.IEnumerable`1<UnityEngine.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Preset_ApplyTo_m9C0AE49C01DA7322CF0BCA0120DDDDE4E933BDA4 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, RuntimeObject* ___targets0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_All_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_mAA7FE06C5787DC3C511E15FAB92ACC96064E439A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_U3CApplyToU3Eb__8_0_m99F5D37DE52E50A55D0AE6818CD4B4C96E30CDB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return targets.All(t => ApplyTo(t));
		RuntimeObject* L_0 = ___targets0;
		Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC* L_1 = (Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC*)il2cpp_codegen_object_new(Func_2_t81E9240569E242BD31B54FECEC473E6A8AC263EC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_2__ctor_m505DDA7F73856B5B53DFE9D38B4AD41761EC710B(L_1, __this, (intptr_t)((void*)Preset_U3CApplyToU3Eb__8_0_m99F5D37DE52E50A55D0AE6818CD4B4C96E30CDB6_RuntimeMethod_var), NULL);
		bool L_2;
		L_2 = Enumerable_All_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_mAA7FE06C5787DC3C511E15FAB92ACC96064E439A(L_0, L_1, Enumerable_All_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_mAA7FE06C5787DC3C511E15FAB92ACC96064E439A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean RuntimePresets.Preset::UpdateFrom(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Preset_UpdateFrom_m12EEFA2B34B59150BCBEB6F1E0E9D1896A7DA751 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_TransferValuesFrom_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mCAC6709499D936ABA8231037E44ED8AFB6CFBC1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_component != null && CanBeAppliedTo(component))
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = __this->____component_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2 = ___component0;
		bool L_3;
		L_3 = Preset_CanBeAppliedTo_m7A42531BBD7FE8E710C2E3FFFC77B515EC2E0156(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// _component.TransferValuesFrom(component);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4 = __this->____component_4;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5 = ___component0;
		il2cpp_codegen_runtime_class_init_inline(ComponentExtensions_t54F368207D2B01ED5C77A3A6EBAD0CA5FF53F66A_il2cpp_TypeInfo_var);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_6;
		L_6 = ComponentExtensions_TransferValuesFrom_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mCAC6709499D936ABA8231037E44ED8AFB6CFBC1D(L_4, L_5, (bool)1, ComponentExtensions_TransferValuesFrom_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mCAC6709499D936ABA8231037E44ED8AFB6CFBC1D_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0027:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean RuntimePresets.Preset::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Preset_Free_mAD668B20D03DBC56A038DCB1445A60BA905AAC3C (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var instanceHasBeenDestroyed = false;
		V_0 = (bool)0;
		// if (_component.gameObject.scene.name != null)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = __this->____component_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_1, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_1), NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Destroy(_component.gameObject);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4 = __this->____component_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// instanceHasBeenDestroyed = true;
		V_0 = (bool)1;
	}

IL_002e:
	{
		// TargetComponent = null;
		Preset_set_TargetComponent_m1E9C43728A6530C7DEA311E915BB3345F6D5165E_inline(__this, (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)NULL, NULL);
		// return instanceHasBeenDestroyed;
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean RuntimePresets.Preset::CanBeAppliedTo(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Preset_CanBeAppliedTo_m7A42531BBD7FE8E710C2E3FFFC77B515EC2E0156 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool CanBeAppliedTo(UnityObject target) => (target != null) ? (target.GetType() == ComponentType) : false;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___target0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Preset_get_ComponentType_mDBD13E402ABD16D4D17E988BACBE5CC96CDB5546(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		return L_5;
	}
}
// System.String RuntimePresets.Preset::GetTargetFullTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Preset_GetTargetFullTypeName_m70A7EE2B9A6F2753F8FAE1DFC116A81768D0C487 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B2_0 = NULL;
	Type_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// public string GetTargetFullTypeName() => ComponentType?.FullName ?? string.Empty;
		Type_t* L_0;
		L_0 = Preset_get_ComponentType_mDBD13E402ABD16D4D17E988BACBE5CC96CDB5546(__this, NULL);
		Type_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B5_0 = L_4;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.String RuntimePresets.Preset::GetTargetTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Preset_GetTargetTypeName_m8ECEE5CA132B3801F038F9FD19A1CCA3645E1BD1 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B2_0 = NULL;
	Type_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// public string GetTargetTypeName() => ComponentType?.Name ?? string.Empty;
		Type_t* L_0;
		L_0 = Preset_get_ComponentType_mDBD13E402ABD16D4D17E988BACBE5CC96CDB5546(__this, NULL);
		Type_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B5_0 = L_4;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.Void RuntimePresets.Preset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Preset__ctor_mBA183417308A598291871AE4E61348172131497E (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean RuntimePresets.Preset::<ApplyTo>b__8_0(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Preset_U3CApplyToU3Eb__8_0_m99F5D37DE52E50A55D0AE6818CD4B4C96E30CDB6 (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___t0, const RuntimeMethod* method) 
{
	{
		// return targets.All(t => ApplyTo(t));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___t0;
		bool L_1;
		L_1 = Preset_ApplyTo_mBDAA117F5AE7A4CC84694BB39C1AE7E67137ADA5(__this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectScript_setCurrent_m7E32022479EE5DFA5E80D9A81D7FBB6499F30D9C_inline (SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* __this, int32_t ___tool0, const RuntimeMethod* method) 
{
	{
		// currentTool = tool;
		int32_t L_0 = ___tool0;
		__this->___currentTool_10 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___to1;
		float L_2;
		L_2 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___from0;
		float L_4 = L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___to1;
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___from0;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___to1;
		float L_10 = L_9.___x_0;
		float L_11;
		L_11 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10)))), NULL);
		V_1 = L_11;
		float L_12 = V_0;
		float L_13 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		goto IL_0030;
	}

IL_0030:
	{
		float L_14 = V_2;
		return L_14;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectScript_setChoosing_mE6CB8C282CA2FFD1D6D5D0CB47D6B8EC4258FFF5_inline (SelectScript_t51B0D2C0CE3FC7E706F95558B4D885D35242D3D1* __this, int32_t ___choice0, const RuntimeMethod* method) 
{
	{
		// currentChoice = choice;
		int32_t L_0 = ___choice0;
		__this->___currentChoice_11 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRBaseInteractor_get_firstInteractableSelected_m26779B4796BA51429DE9B5F34EB69BB4C02C48AF_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// public IXRSelectInteractable firstInteractableSelected { get; private set; }
		RuntimeObject* L_0 = __this->___U3CfirstInteractableSelectedU3Ek__BackingField_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRRayInteractor_get_rayOriginTransform_m1E25B9D203ABF076A179802DC530B2A3137232F2_inline (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RayOriginTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RayOriginTransform_83;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AttachTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_AttachTransform_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocomotionProvider_set_system_m356CEE71E1057AAD0A615898E7E92A89E2E4664C_inline (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_System = value;
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_0 = ___value0;
		__this->___m_System_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_System_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseControllerInteractor_set_xrController_m23CD933EEC980FBEEDA28EB1F6A16B7D7900D454_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Controller = value;
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_0 = ___value0;
		__this->___m_Controller_68 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Controller_68), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseInteractor_set_attachTransform_mA8DC6CAE14C3CAEDF3A8A9F23EC5DD5D533F7D56_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_AttachTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_AttachTransform_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AttachTransform_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRayInteractor_set_rayOriginTransform_m615A2661622EC41AC56242329D3ED7AC681AB289_inline (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RayOriginTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___m_RayOriginTransform_83 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RayOriginTransform_83), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Preset_set_TargetComponent_m1E9C43728A6530C7DEA311E915BB3345F6D5165E_inline (Preset_tA498EE257B5A7D45EC56DE08AAB08E1AFD4CF071* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___value0, const RuntimeMethod* method) 
{
	{
		// set => _component = value;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___value0;
		__this->____component_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____component_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
