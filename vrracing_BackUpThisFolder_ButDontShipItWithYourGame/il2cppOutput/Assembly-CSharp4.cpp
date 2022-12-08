﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<OculusSampleFramework.ColliderZoneArgs>
struct Action_1_tCFBE340FD442BC4B5557FD1B5ECC8237D9ADD49F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<CAr.HandshakeMessage,Grpc.Core.SerializationContext>
struct Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62;
// System.Action`2<CAr.HealthCheckReply,Grpc.Core.SerializationContext>
struct Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86;
// System.Action`2<CAr.HealthCheckRequest,Grpc.Core.SerializationContext>
struct Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.Object,Grpc.Core.SerializationContext>
struct Action_2_t9C3590BB6FA76D4CD869048A98FE5C158BE881BA;
// Grpc.Core.AsyncDuplexStreamingCall`2<CAr.HandshakeMessage,CAr.HandshakeMessage>
struct AsyncDuplexStreamingCall_2_tAC5737587D11205F5BD0A279930DACB0BF8FA7D9;
// Grpc.Core.AsyncUnaryCall`1<CAr.HealthCheckReply>
struct AsyncUnaryCall_1_tD54FF260DA799468191108F1D0F41138E0A82273;
// Grpc.Core.ClientBase`1<System.Object>
struct ClientBase_1_t823373CF768205918D40859F59FAD9398A5D444A;
// Grpc.Core.ClientBase`1<CAr.Control/ControlClient>
struct ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<OculusSampleFramework.Interactable,OculusSampleFramework.InteractableCollisionInfo>
struct Dictionary_2_t0E0584945B4E3068F9A994C51F1DBE0090B67287;
// System.Collections.Generic.Dictionary`2<OVRGrabbable,System.Int32>
struct Dictionary_2_t749E8D446C2E8EE6FF423979EE55DB04E3E91EBD;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.ToggleGroup>
struct Dictionary_2_t4D32AB7B38D14EB24A56141DC52CF5643FDF9834;
// Grpc.Core.DuplexStreamingServerMethod`2<CAr.HandshakeMessage,CAr.HandshakeMessage>
struct DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE;
// Grpc.Core.DuplexStreamingServerMethod`2<System.Object,System.Object>
struct DuplexStreamingServerMethod_2_t15AD8F3F79481860BD3F296981B7CE3866A161B5;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203;
// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
// System.Func`1<CAr.HandshakeMessage>
struct Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF;
// System.Func`1<CAr.HealthCheckReply>
struct Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B;
// System.Func`1<CAr.HealthCheckRequest>
struct Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918;
// System.Func`1<CAr.NotifyDescription>
struct Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0;
// System.Func`1<CAr.NotifyIce>
struct Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<CArControls.ThumbstickDirection>
struct Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Byte[],CAr.HandshakeMessage>
struct Func_2_tC46736C405F3FED62A48C7A4D476D67C0E564766;
// System.Func`2<System.Byte[],CAr.HealthCheckReply>
struct Func_2_t8C03D5D5E65ADA766CC9269B1E18AD7178D11EE9;
// System.Func`2<System.Byte[],CAr.HealthCheckRequest>
struct Func_2_t77D20A23D57D56E3A8EBC90C305F53F21C5F65EE;
// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04;
// System.Func`2<Grpc.Core.DeserializationContext,CAr.HandshakeMessage>
struct Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972;
// System.Func`2<Grpc.Core.DeserializationContext,CAr.HealthCheckReply>
struct Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727;
// System.Func`2<Grpc.Core.DeserializationContext,CAr.HealthCheckRequest>
struct Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB;
// System.Func`2<Grpc.Core.DeserializationContext,System.Object>
struct Func_2_t2DC2C5441D486EE2BD4532265546F3F07AF53252;
// System.Func`2<CAr.HandshakeMessage,System.Byte[]>
struct Func_2_t183B04C6DF9148335FAA5C3D16D1A9284F577FD2;
// System.Func`2<CAr.HealthCheckReply,System.Byte[]>
struct Func_2_tE32507677E500A24D54BBE58753FDA33AF8B1604;
// System.Func`2<CAr.HealthCheckRequest,System.Byte[]>
struct Func_2_tABD5043C5989D4E5AA29B8D7FABC3EF1613D831D;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean>
struct Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// Grpc.Core.IAsyncStreamReader`1<CAr.HandshakeMessage>
struct IAsyncStreamReader_1_tB59441AD792E25D0BEC5A217ED71F816ECFAFD70;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897;
// Grpc.Core.IClientStreamWriter`1<CAr.HandshakeMessage>
struct IClientStreamWriter_1_t70BB947039A5E8E007CB2B2ED0EB9050B69317B2;
// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.UnknownField>
struct IDictionary_2_tDE18981433E3420ACE1F95A42EC7A93F5AA317EE;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tDB170C5929E4ACA380EEF5C8E082139CE49EC21B;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>
struct IEnumerable_1_t738A577130D5FBE55CDA8A3FF4898A00C43996CA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_t2113D31E64AB4BC3FE73AB5985B7D30B220225D2;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t1C3796CCB02A6FB46469A8C82C9FBB10883C38B1;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor>
struct IList_1_t8F9E40B57B31F24B4FF11D24C88155651A66C0E4;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t72D63DEDFD3D09D9D034239EC2954718F7FCDB68;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t9B74854C0814D339537A7FFF6105D1D25A39C180;
// System.Collections.Generic.IReadOnlyList`1<System.Action`1<Grpc.Core.ServiceBinderBase>>
struct IReadOnlyList_1_t08196DC4F3B8F3A8306EDC2202B86B872B2A4A44;
// Grpc.Core.IServerStreamWriter`1<CAr.HandshakeMessage>
struct IServerStreamWriter_1_t3C852AEDEA5D93727B6C559F1EF3D5D18BBE275A;
// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>>
struct Lazy_1_t9EE2A1123EC79B036ABD6DA8C3433CC66609B4A6;
// System.Collections.Generic.List`1<System.Action`1<Grpc.Core.ServiceBinderBase>>
struct List_1_t28B295E550D7F6C1924CEDDE1C8E75888A6AFBA5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<OculusSampleFramework.Interactable>
struct List_1_tE24BA6DEA09B928DD057B20C565CD199D7E9050D;
// System.Collections.Generic.List`1<OculusSampleFramework.InteractableCollisionInfo>
struct List_1_t490A09E30860203F317F45478EF4A90AE431CAEE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>
struct List_1_t9FE6338CFB4FD5AFFFABF90B6DD6087DBE808337;
// Grpc.Core.Marshaller`1<CAr.HandshakeMessage>
struct Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4;
// Grpc.Core.Marshaller`1<CAr.HealthCheckReply>
struct Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D;
// Grpc.Core.Marshaller`1<CAr.HealthCheckRequest>
struct Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA;
// Grpc.Core.Marshaller`1<System.Object>
struct Marshaller_1_t5AF2761BFFFBF2DF3FEBBAA0BEEE874BA4435EC4;
// Google.Protobuf.MessageParser`1<CAr.HandshakeMessage>
struct MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3;
// Google.Protobuf.MessageParser`1<CAr.HealthCheckReply>
struct MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F;
// Google.Protobuf.MessageParser`1<CAr.HealthCheckRequest>
struct MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680;
// Google.Protobuf.MessageParser`1<CAr.NotifyDescription>
struct MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F;
// Google.Protobuf.MessageParser`1<CAr.NotifyIce>
struct MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E;
// Google.Protobuf.MessageParser`1<System.Object>
struct MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F;
// Google.Protobuf.MessageParser`1<CArControls.ThumbstickDirection>
struct MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581;
// Grpc.Core.Method`2<CAr.HandshakeMessage,CAr.HandshakeMessage>
struct Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF;
// Grpc.Core.Method`2<CAr.HealthCheckRequest,CAr.HealthCheckReply>
struct Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090;
// Grpc.Core.Method`2<System.Object,System.Object>
struct Method_2_tA105D4DFA48BEB7BBD46C116F6AAA7F6E7CCFF40;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<CAr.HealthCheckReply>
struct TaskFactory_1_tC5107C42548E280CC0BD25B7F235DCE171742AD2;
// System.Threading.Tasks.Task`1<CAr.HealthCheckReply>
struct Task_1_tEE4277B3335B1EB3CDF55D66111D9DBD3C4B5A32;
// Grpc.Core.UnaryServerMethod`2<CAr.HealthCheckRequest,CAr.HealthCheckReply>
struct UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117;
// Grpc.Core.UnaryServerMethod`2<System.Object,System.Object>
struct UnaryServerMethod_2_tBDE10CB7EBAD233A230E5ACBD856993B65E23969;
// UnityEngine.Events.UnityAction`1<OculusSampleFramework.InteractableStateArgs>
struct UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityEvent`1<OculusSampleFramework.InteractableStateArgs>
struct UnityEvent_1_t1ED2AE761CB7C186AC6B6A8C5BE14C7204486168;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>[]
struct List_1U5BU5D_t826337C0A88A91A3DE75521974962C2C682A3865;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66;
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// OVROverlay[]
struct OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
// OculusSampleFramework.TrackSegment[]
struct TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295;
// OculusSampleFramework.TrainCar[]
struct TrainCarU5BU5D_t7CFF4CCAF90716935B7C8324466A6326DB2414DD;
// OculusSampleFramework.TrainCarBase[]
struct TrainCarBaseU5BU5D_t6F8E5463CC2FF62ADD249184806D420B00F70B8A;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// OVROverlay/LayerTexture[]
struct LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB;
// OVRPlugin/Fovf[]
struct FovfU5BU5D_tB7B0EFE7E4FD4A33BC0EFA3644D94BF70D75AA7C;
// OVRPlugin/Rectf[]
struct RectfU5BU5D_tCBABD552E093C7891710F2D448FACAA8140C1DD0;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// OculusSampleFramework.ButtonController
struct ButtonController_t1660558E417C701B092265A45EBC1795F1DBBC79;
// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592;
// Grpc.Core.CallCredentials
struct CallCredentials_t937C403ED70D8E5BC712464E26D2CD3EF0144466;
// Grpc.Core.CallInvoker
struct CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// Grpc.Core.ChannelBase
struct ChannelBase_tD276AC64DE64B8C1BFD85654A280D93E69DA40E5;
// Grpc.Core.ClientBase
struct ClientBase_tD3AE7DEE97761650B2A6CCB19E3B501FEF713391;
// Google.Protobuf.CodedInputStream
struct CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425;
// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// OculusSampleFramework.ColliderZone
struct ColliderZone_tA9DAAD7F9B3FDEC5B607DB97A934B1081CCF7E19;
// OculusSampleFramework.ColliderZoneArgs
struct ColliderZoneArgs_tC7431174FDF0C6002A554118B81A5E6096D41087;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Grpc.Core.ContextPropagationToken
struct ContextPropagationToken_t3D20D09B421D355689C95D8C5F1BA4B1C4D18751;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DebugUIBuilder
struct DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D;
// Grpc.Core.DeserializationContext
struct DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// Google.Protobuf.Extension
struct Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A;
// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0;
// Google.Protobuf.ExtensionRegistry
struct ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// OVRTouchSample.Hand
struct Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8;
// OVRTouchSample.HandPose
struct HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8;
// CAr.HandshakeMessage
struct HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803;
// CAr.HealthCheckReply
struct HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09;
// CAr.HealthCheckRequest
struct HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Google.Protobuf.IMessage
struct IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940;
// OculusSampleFramework.Interactable
struct Interactable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2;
// OculusSampleFramework.InteractableStateArgs
struct InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906;
// OculusSampleFramework.InteractableTool
struct InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LaserPointer
struct LaserPointer_t0E77E38E488CC0E97D2E29F61CA3422430FEB874;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906;
// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D;
// Grpc.Core.Metadata
struct Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// CAr.NotifyDescription
struct NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29;
// CAr.NotifyIce
struct NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1;
// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
// OVRGrabbable
struct OVRGrabbable_t322F6468B588212B888E9397723397A16E7614B5;
// OVRGrabber
struct OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC;
// OVROverlay
struct OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D;
// OculusSampleFramework.OVROverlaySample
struct OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// OculusSampleFramework.Pose
struct Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Grpc.Core.RpcException
struct RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// OculusSampleFramework.SelectionCylinder
struct SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E;
// Grpc.Core.SerializationContext
struct SerializationContext_tB58A48F5BD333BD147B799711A88A26662D09ADB;
// Grpc.Core.ServerCallContext
struct ServerCallContext_t03C40610542F091E955B15B4AB225ED1A909C5E9;
// Grpc.Core.ServerServiceDefinition
struct ServerServiceDefinition_t16402F50122B2FADAD587780C17A2671596DC5D0;
// Grpc.Core.ServiceBinderBase
struct ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A;
// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE;
// Google.Protobuf.Reflection.ServiceDescriptorProto
struct ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// CArControls.ThumbstickDirection
struct ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// OVRTouchSample.TouchController
struct TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03;
// OculusSampleFramework.TrackSegment
struct TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680;
// OculusSampleFramework.TrainButtonVisualController
struct TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A;
// OculusSampleFramework.TrainCar
struct TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D;
// OculusSampleFramework.TrainCarBase
struct TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616;
// OculusSampleFramework.TrainCrossingController
struct TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75;
// OculusSampleFramework.TrainLocomotive
struct TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E;
// OculusSampleFramework.TrainTrack
struct TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Google.Protobuf.UnknownField
struct UnknownField_tC38F0EBBE48029F7B0BF156B6CCB6585176E91DD;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// OculusSampleFramework.WindmillBladesController
struct WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616;
// OculusSampleFramework.WindmillController
struct WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53;
// Grpc.Core.WriteOptions
struct WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Grpc.Core.ClientBase/ClientBaseConfiguration
struct ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D;
// CAr.Control/<>c
struct U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F;
// CAr.Control/ControlBase
struct ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E;
// CAr.Control/ControlClient
struct ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447;
// DebugUIBuilder/OnClick
struct OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A;
// DebugUIBuilder/OnToggleValueChange
struct OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF;
// OVRTouchSample.Hand/<>c
struct U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F;
// CAr.HandshakeMessage/<>c
struct U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A;
// CAr.HealthCheckReply/<>c
struct U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400;
// CAr.HealthCheckRequest/<>c
struct U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE;
// OculusSampleFramework.Interactable/InteractableStateArgsEvent
struct InteractableStateArgsEvent_tAE90140049B5BEA21987B055A652C8CBA4D67D41;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3;
// CAr.NotifyDescription/<>c
struct U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C;
// CAr.NotifyIce/<>c
struct U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E;
// OVROverlay/ExternalSurfaceObjectCreated
struct ExternalSurfaceObjectCreated_tBAE280613D86A040CC365995D817E30254FDEF1A;
// OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30
struct U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Grpc.Core.ServerServiceDefinition/Builder
struct Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// CArControls.ThumbstickDirection/<>c
struct U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26
struct U3CResetPositionU3Ed__26_t447FF0C4C24D521E5C2A09CE93932F840D5ACCB6;
// OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15
struct U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235;
// OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34
struct U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9;
// OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17
struct U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40;
// OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18
struct U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferMessage_t301A70FA6757072BFBDBBC1C4D02D81085D8B22A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t9B74854C0814D339537A7FFF6105D1D25A39C180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral077201B88DA5EBE6BCD89C10E9462C2AFCBDC270;
IL2CPP_EXTERN_C String_t* _stringLiteral0D58C254A6B34D95CA1A2DAB761F42AD1EE1A371;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8802B48724FAE68F2562989D0BC6414633BEA6;
IL2CPP_EXTERN_C String_t* _stringLiteral149967D8B0B4FF60C95B519437C63F4F13C1E258;
IL2CPP_EXTERN_C String_t* _stringLiteral14DF90F7B7B1D0C29E073C07C92DBA6A25DAA187;
IL2CPP_EXTERN_C String_t* _stringLiteral1C324DBC6724F3535B914AE036A4C3C8F1B5E200;
IL2CPP_EXTERN_C String_t* _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B;
IL2CPP_EXTERN_C String_t* _stringLiteral2752A64BA712F6F13A300028AB018ACD9A80434C;
IL2CPP_EXTERN_C String_t* _stringLiteral2ADE2817B0E7EB8CE7D77305F699E8E0D8C89996;
IL2CPP_EXTERN_C String_t* _stringLiteral2E09BBE03AB231A5C5EB67A982C0103CF560CF92;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3C67FF0314F3C94FF7278A2AF1C6B55C36D01B;
IL2CPP_EXTERN_C String_t* _stringLiteral36FE550DAE233DBB1A4453958A2155B540FF2E6F;
IL2CPP_EXTERN_C String_t* _stringLiteral42B3D9B0AAE35211614438B3160DC944B9155D26;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral51B065FCE4F717615DF020D641986901AC7DA270;
IL2CPP_EXTERN_C String_t* _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
IL2CPP_EXTERN_C String_t* _stringLiteral5A848793342F75888D40DE2AEDC507A1035ED454;
IL2CPP_EXTERN_C String_t* _stringLiteral604773D3DBC620869237443189180C03C02206AE;
IL2CPP_EXTERN_C String_t* _stringLiteral656BE69C6758A271805383E0A18CE996531A3EDC;
IL2CPP_EXTERN_C String_t* _stringLiteral686B62DC85A76B4D986AD7F54097517BC28F71E3;
IL2CPP_EXTERN_C String_t* _stringLiteral6ABB55FE81934EC75A837DA60878C55C5D087571;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDC7D44836FB5023F14411B8C43CDDE68A50895;
IL2CPP_EXTERN_C String_t* _stringLiteral75AB8BCFD46EFD61011E81C209870785F7C0429A;
IL2CPP_EXTERN_C String_t* _stringLiteral761CAF2881EC72215DE6C3BFBC1BEEEC0E195109;
IL2CPP_EXTERN_C String_t* _stringLiteral78B861D9789220F101E6A2B45F723663B75C06E9;
IL2CPP_EXTERN_C String_t* _stringLiteral7B4F026A08CF218CEEAB24FE7C08190D0FFA8788;
IL2CPP_EXTERN_C String_t* _stringLiteral7C04A407FE215D295E25E3D30FD585ED38C7AA05;
IL2CPP_EXTERN_C String_t* _stringLiteral7C572D7E80154DD1A39D6A68D447FA164689FC12;
IL2CPP_EXTERN_C String_t* _stringLiteral7E85ECCB7093F5018C9F13499309750C0A65403D;
IL2CPP_EXTERN_C String_t* _stringLiteral821832F7D61486539B4FAC1CBC51815EC2012381;
IL2CPP_EXTERN_C String_t* _stringLiteral83C940CCC7153451903DD8149886EAB029AB7BB6;
IL2CPP_EXTERN_C String_t* _stringLiteral8527477538A58C4D0BEFF1E314F25DFC679B1257;
IL2CPP_EXTERN_C String_t* _stringLiteral888CE0F0EA1CFA03014C3B3685817B5523378BF2;
IL2CPP_EXTERN_C String_t* _stringLiteral8A7A6BEA8C7D25447D30AF82742C86B5C4EE190D;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB4E9905F6F550494FF4D258F973A6CC2395CC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8BE930D1113E1F4E079D8BEA1F5770DD38A4A1F2;
IL2CPP_EXTERN_C String_t* _stringLiteral90423BAEC36E20DF5579ED0EB88D5B96F533BB4D;
IL2CPP_EXTERN_C String_t* _stringLiteral9834B0E1156678E178780AFC5E20BAD59E8EE1C5;
IL2CPP_EXTERN_C String_t* _stringLiteralAAB1149D3A1CF7CD4BD5D2A797F9C0EFDF1790ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB1B875B155618040EFCF8D3AEE9F39271ADCA03F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB51A7D1EC8D91F79814484C0BA85D0C8D9DE79B0;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralB8D930B9AD60A6077F0007E319442FE353470081;
IL2CPP_EXTERN_C String_t* _stringLiteralBC09616FC7A1F15CD91C601854596281EF11A6AC;
IL2CPP_EXTERN_C String_t* _stringLiteralBD3F2B6A71339D70457CEBD856E50EE4127313E1;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCDDEA60C5E255F5631B753F3A5B926A1F61178;
IL2CPP_EXTERN_C String_t* _stringLiteralC00880D907D6D67D86710475D1F7BC9CFF891AA1;
IL2CPP_EXTERN_C String_t* _stringLiteralCE4A0C460C7F0EA4954EC81E660C43B0182E5295;
IL2CPP_EXTERN_C String_t* _stringLiteralD17DD637DB39F3E85513720D2D63811B3DD7E783;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD75F043211EC7F57B7E6A391486703462CE7633;
IL2CPP_EXTERN_C String_t* _stringLiteralE7A03396ACA66C7D8DF8563B2D34692EDC276118;
IL2CPP_EXTERN_C String_t* _stringLiteralEC24456BF1D0B9CE18660F74F513161368E6B88A;
IL2CPP_EXTERN_C String_t* _stringLiteralEDCEC302F0B84B1209C009FA5818F3EA90BC8E64;
IL2CPP_EXTERN_C String_t* _stringLiteralF183B9DCCD1C62885274C340782B7E76D24D4020;
IL2CPP_EXTERN_C String_t* _stringLiteralF4AF7A913F31F5B9DF39DAD2E5E539A63FC2AD2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C9085A8FC519D61179956F4A28BAD81D661A82;
IL2CPP_EXTERN_C String_t* _stringLiteralF8CE300AA60ADAF83138A365C863C0CD87398AE9;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_AddMethod_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mB8F5B490D6E3E96F627B593427EEDF555673C445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_AddMethod_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mD110ACC2A64F7EF0AEA33A0165F60D18D8A15D15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallInvoker_AsyncDuplexStreamingCall_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m04710705B4950CACE379A03F1258F26A8AB303C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallInvoker_AsyncUnaryCall_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mBA648E811F641005F6A9A95076CCFCFCF5CD876C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallInvoker_BlockingUnaryCall_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_m9D8B022C8DB0967C30E7A66520E04E9067412275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientBase_1__ctor_m28A7AA58B59BFADDF2D7CCE12A92A45648B79935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientBase_1__ctor_m2A39107B53469978102ED15F66B5AB2619ED21BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientBase_1__ctor_m7D38CE6EB1AD2688EB1F5C98A6EC610C96070B64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientBase_1__ctor_mE55CFFEC4C7D3838AD25FBA5678D6C8D4354E59E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E_m95FCA4CB92F6DE57BE094BDD6974BC757B586B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisWindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616_m53755224721F80FC4D0EB82D4A8BAA35EFF514C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8_mD6BC519B31A7ED5AF993C7BB5F6291110C4F51F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC_mC820FC13FAD6DC529D204CDC86DF3E1C6A918B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680_m4496ABBB105279A0038A9E35859784E5E7F2FCB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D_m6458A84700BCD1DA009674C73A5E7E028C2D32EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControlBase_HealthCheck_m3548C765EEC7FE0C46B62750268CAA0616CCEEC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControlBase_SendHandshake_m391C8E31C2BA698C660D573DDBD719784A772552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Control___Helper_DeserializeMessage_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m38C56265528E827698180489ACD2280B3E8523A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Control___Helper_DeserializeMessage_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mB706476EBB728B29802262AA46020FC3AB530E30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Control___Helper_DeserializeMessage_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_m16AAD0E3D1DCCDDF25003F2F59FEBED6AD8043C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Control___Helper_SerializeMessage_m29C8672B9B95A3A6D060E3B4C3260011998784A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m1A489F1406F2CD15719E60F537BD5AA4FB036808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInteractable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2_m0CDEA8EF47A15EFA3EB104C354E834030C56E3D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hand_OnInputFocusAcquired_m0812ABDFE30CE9348919181D77BB8F5E4F5A3490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hand_OnInputFocusLost_mD3FFDE39026F3EEFDFE8212B6E1FE3B064EB8C52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshallers_Create_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mFC6C69AADDBBB6CB2115EC66E5C233083AAE155E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshallers_Create_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mF34E8AE6DC477E58C31E6DEBE95E9E74DEC49DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshallers_Create_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_mA849078B1FD41DB58B48D4EFAC8DF971D72ACA5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m5FA55DDADE84E0A40348BA8EC52777E9DCC41D69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m8979CA50DAD5DB6C06B93C38CBF87A8088291B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m98F488779771FA13C656CE1DC417518E3CB2C20A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mD51316658FC972F420349A452DC816B08148EC11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mFD28D9810816C383C349EB9DCECCAD71083F1254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mFF36608820300235AEF72EF32A67171425CAB9DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Method_2__ctor_m4BBB824274E71F83F8A84E97848EC436FE6DE32E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Method_2__ctor_mE345955774A1730E69F80FC0D2C6B6F8A854390E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVROverlaySample_TriggerLoad_m700D3A873346D40C61B4E35D6222810766FB7C1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVROverlaySample_TriggerUnload_mC2BCD58945AE57A99E5C988C844126C2CC74706E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVROverlaySample_U3CStartU3Eb__24_0_mBF39A5A801A25E8938E5E0163A22FD1DB4BD45E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVROverlaySample_U3CStartU3Eb__24_1_m1970159E2C8C7043DBC6797017C840EA7A9429FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVROverlaySample_U3CStartU3Eb__24_2_m9DCDFEF1326B4909B69D2FE1E754D18C7C289EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceBinderBase_AddMethod_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m998D0F127CF12E6E5EB362B3F7AC7B92026D60F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceBinderBase_AddMethod_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_m171F1DA58DCEC5B4F17593F5D16246491C6CDFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchController_OnInputFocusAcquired_m4CE35E8F9CA5C7E611193F2859EF5D72E4C6A106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchController_OnInputFocusLost_m6317EA5E49BEFAB15C37741C92DE17CC0056DE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateCrossingU3Ed__15_System_Collections_IEnumerator_Reset_mBCD5E96BE8CE94DD20BE98DF247524CD06FECCCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLerpToSpeedU3Ed__17_System_Collections_IEnumerator_Reset_mE335D544A3E213AA1C592DD7794424E3787FA2BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlaySoundDelayedU3Ed__18_System_Collections_IEnumerator_Reset_m8DAD6960C34AAE47BB8F758A3739AFCA20B79F8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetPositionU3Ed__26_System_Collections_IEnumerator_Reset_m693B2830178792F2B02E328558109D63ACDB67B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartStopTrainU3Ed__34_System_Collections_IEnumerator_Reset_mEBAF005BA8E10A1EF29605BE77EDE739EB2EF984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__28_0_m69657F26B241AA6A749CAFAF9534605A3FAC3480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__15_0_mF5FFB7F4267E7094A9D0A2CEEE75528257848156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__15_1_mFC4B88AD23EF5CD1E502BA88FBF286EEDB9E604D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__15_2_m6CD72496A8B8C866966F8901A679B1BF99F46768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__22_0_mCCE65CBF07930E0A62BF758C62694497FCA1734D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__22_0_mD9ACB648FFFD72FB93B29DCEBC2D317C73FBCBC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__27_0_mA9ED2963D6ADDD7A4A9CC63DE6D5B5B696EB9DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__32_0_mE58940F67147D9828A753342B77E650A60B5CB4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__36_0_mDA4D648A4DC82E2CEC29D65C755F9A7FFEDDAA8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_0_mB3FDD5F53DE4309C9799CC14C4BD68241837FE34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitforOVROverlayU3Ed__30_System_Collections_IEnumerator_Reset_m04457336FACD8889D9212E217FA15CD1C9CB91A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m35712670895235C4BB2182DB1E18A434907F5623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mF45099DCD5F62281322F30AF7675AC22B695B39E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindmillController_StartStopStateChanged_m4F5830906DDB74D0F1DC45D689478F869163446B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SdpType_t23A00C03CC0AEE41DFE504BCAB41A24B7C8BE0F2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Fovf_t7A8312168C57A6CC5AA4FE685369A4618BF686E7;
struct Rectf_t28AE83DFE92F018AD3956872DED5880FB4F06459;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66;
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
struct TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295;
struct TrainCarU5BU5D_t7CFF4CCAF90716935B7C8324466A6326DB2414DD;
struct TrainCarBaseU5BU5D_t6F8E5463CC2FF62ADD249184806D420B00F70B8A;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB  : public RuntimeObject
{
};

struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___defaultComparer_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___s_emptyArray_5;
};

// Grpc.Core.Marshaller`1<CAr.HandshakeMessage>
struct Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4  : public RuntimeObject
{
	// System.Func`2<T,System.Byte[]> Grpc.Core.Marshaller`1::serializer
	Func_2_t183B04C6DF9148335FAA5C3D16D1A9284F577FD2* ___serializer_0;
	// System.Func`2<System.Byte[],T> Grpc.Core.Marshaller`1::deserializer
	Func_2_tC46736C405F3FED62A48C7A4D476D67C0E564766* ___deserializer_1;
	// System.Action`2<T,Grpc.Core.SerializationContext> Grpc.Core.Marshaller`1::contextualSerializer
	Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62* ___contextualSerializer_2;
	// System.Func`2<Grpc.Core.DeserializationContext,T> Grpc.Core.Marshaller`1::contextualDeserializer
	Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972* ___contextualDeserializer_3;
};

// Grpc.Core.Marshaller`1<CAr.HealthCheckReply>
struct Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D  : public RuntimeObject
{
	// System.Func`2<T,System.Byte[]> Grpc.Core.Marshaller`1::serializer
	Func_2_tE32507677E500A24D54BBE58753FDA33AF8B1604* ___serializer_0;
	// System.Func`2<System.Byte[],T> Grpc.Core.Marshaller`1::deserializer
	Func_2_t8C03D5D5E65ADA766CC9269B1E18AD7178D11EE9* ___deserializer_1;
	// System.Action`2<T,Grpc.Core.SerializationContext> Grpc.Core.Marshaller`1::contextualSerializer
	Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86* ___contextualSerializer_2;
	// System.Func`2<Grpc.Core.DeserializationContext,T> Grpc.Core.Marshaller`1::contextualDeserializer
	Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727* ___contextualDeserializer_3;
};

// Grpc.Core.Marshaller`1<CAr.HealthCheckRequest>
struct Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA  : public RuntimeObject
{
	// System.Func`2<T,System.Byte[]> Grpc.Core.Marshaller`1::serializer
	Func_2_tABD5043C5989D4E5AA29B8D7FABC3EF1613D831D* ___serializer_0;
	// System.Func`2<System.Byte[],T> Grpc.Core.Marshaller`1::deserializer
	Func_2_t77D20A23D57D56E3A8EBC90C305F53F21C5F65EE* ___deserializer_1;
	// System.Action`2<T,Grpc.Core.SerializationContext> Grpc.Core.Marshaller`1::contextualSerializer
	Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9* ___contextualSerializer_2;
	// System.Func`2<Grpc.Core.DeserializationContext,T> Grpc.Core.Marshaller`1::contextualDeserializer
	Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB* ___contextualDeserializer_3;
};

// Grpc.Core.Method`2<CAr.HandshakeMessage,CAr.HandshakeMessage>
struct Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF  : public RuntimeObject
{
	// Grpc.Core.MethodType Grpc.Core.Method`2::type
	int32_t ___type_0;
	// System.String Grpc.Core.Method`2::serviceName
	String_t* ___serviceName_1;
	// System.String Grpc.Core.Method`2::name
	String_t* ___name_2;
	// Grpc.Core.Marshaller`1<TRequest> Grpc.Core.Method`2::requestMarshaller
	Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* ___requestMarshaller_3;
	// Grpc.Core.Marshaller`1<TResponse> Grpc.Core.Method`2::responseMarshaller
	Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* ___responseMarshaller_4;
	// System.String Grpc.Core.Method`2::fullName
	String_t* ___fullName_5;
};

// Grpc.Core.Method`2<CAr.HealthCheckRequest,CAr.HealthCheckReply>
struct Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090  : public RuntimeObject
{
	// Grpc.Core.MethodType Grpc.Core.Method`2::type
	int32_t ___type_0;
	// System.String Grpc.Core.Method`2::serviceName
	String_t* ___serviceName_1;
	// System.String Grpc.Core.Method`2::name
	String_t* ___name_2;
	// Grpc.Core.Marshaller`1<TRequest> Grpc.Core.Method`2::requestMarshaller
	Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA* ___requestMarshaller_3;
	// Grpc.Core.Marshaller`1<TResponse> Grpc.Core.Method`2::responseMarshaller
	Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D* ___responseMarshaller_4;
	// System.String Grpc.Core.Method`2::fullName
	String_t* ___fullName_5;
};
struct Il2CppArrayBounds;

// Grpc.Core.CallCredentials
struct CallCredentials_t937C403ED70D8E5BC712464E26D2CD3EF0144466  : public RuntimeObject
{
};

// Grpc.Core.CallInvoker
struct CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF  : public RuntimeObject
{
};

// Grpc.Core.ChannelBase
struct ChannelBase_tD276AC64DE64B8C1BFD85654A280D93E69DA40E5  : public RuntimeObject
{
	// System.String Grpc.Core.ChannelBase::target
	String_t* ___target_0;
};

// Grpc.Core.ClientBase
struct ClientBase_tD3AE7DEE97761650B2A6CCB19E3B501FEF713391  : public RuntimeObject
{
	// Grpc.Core.ClientBase/ClientBaseConfiguration Grpc.Core.ClientBase::configuration
	ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D* ___configuration_0;
	// Grpc.Core.CallInvoker Grpc.Core.ClientBase::callInvoker
	CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* ___callInvoker_1;
};

// Grpc.Core.ContextPropagationToken
struct ContextPropagationToken_t3D20D09B421D355689C95D8C5F1BA4B1C4D18751  : public RuntimeObject
{
};

// CAr.Control
struct Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC  : public RuntimeObject
{
};

struct Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields
{
	// System.String CAr.Control::__ServiceName
	String_t* _____ServiceName_0;
	// Grpc.Core.Marshaller`1<CAr.HealthCheckRequest> CAr.Control::__Marshaller_c_ar_HealthCheckRequest
	Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA* _____Marshaller_c_ar_HealthCheckRequest_1;
	// Grpc.Core.Marshaller`1<CAr.HealthCheckReply> CAr.Control::__Marshaller_c_ar_HealthCheckReply
	Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D* _____Marshaller_c_ar_HealthCheckReply_2;
	// Grpc.Core.Marshaller`1<CAr.HandshakeMessage> CAr.Control::__Marshaller_c_ar_HandshakeMessage
	Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* _____Marshaller_c_ar_HandshakeMessage_3;
	// Grpc.Core.Method`2<CAr.HealthCheckRequest,CAr.HealthCheckReply> CAr.Control::__Method_HealthCheck
	Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* _____Method_HealthCheck_4;
	// Grpc.Core.Method`2<CAr.HandshakeMessage,CAr.HandshakeMessage> CAr.Control::__Method_SendHandshake
	Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* _____Method_SendHandshake_5;
};

// CAr.ControlReflection
struct ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569  : public RuntimeObject
{
};

struct ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor CAr.ControlReflection::descriptor
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___descriptor_0;
};

// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::<File>k__BackingField
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___U3CFileU3Ek__BackingField_2;
};

// Grpc.Core.DeserializationContext
struct DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Google.Protobuf.Extension
struct Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Extension::<FieldNumber>k__BackingField
	int32_t ___U3CFieldNumberU3Ek__BackingField_0;
};

// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE  : public RuntimeObject
{
	// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>> Google.Protobuf.Reflection.FileDescriptor::declarations
	Lazy_1_t9EE2A1123EC79B036ABD6DA8C3433CC66609B4A6* ___declarations_0;
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___U3CProtoU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.Syntax Google.Protobuf.Reflection.FileDescriptor::<Syntax>k__BackingField
	int32_t ___U3CSyntaxU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_5;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.FileDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* ___U3CExtensionsU3Ek__BackingField_6;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_7;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_8;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___U3CSerializedDataU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* ___U3CDescriptorPoolU3Ek__BackingField_10;
};

// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E  : public RuntimeObject
{
	// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_3;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_4;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<PropertyNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CPropertyNamesU3Ek__BackingField_5;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Extensions>k__BackingField
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___U3CExtensionsU3Ek__BackingField_6;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<OneofNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COneofNamesU3Ek__BackingField_7;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedTypes>k__BackingField
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___U3CNestedTypesU3Ek__BackingField_8;
	// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedEnums>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CNestedEnumsU3Ek__BackingField_9;
};

struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields
{
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyNames_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyCodeInfo
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___EmptyCodeInfo_1;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyExtensions
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___EmptyExtensions_2;
};

// CAr.HandshakeMessage
struct HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet CAr.HandshakeMessage::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Object CAr.HandshakeMessage::msg_
	RuntimeObject* ___msg__4;
	// CAr.HandshakeMessage/MsgOneofCase CAr.HandshakeMessage::msgCase_
	int32_t ___msgCase__5;
};

struct HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_StaticFields
{
	// Google.Protobuf.MessageParser`1<CAr.HandshakeMessage> CAr.HandshakeMessage::_parser
	MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* ____parser_0;
};

// CAr.HealthCheckReply
struct HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet CAr.HealthCheckReply::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
};

struct HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_StaticFields
{
	// Google.Protobuf.MessageParser`1<CAr.HealthCheckReply> CAr.HealthCheckReply::_parser
	MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* ____parser_0;
};

// CAr.HealthCheckRequest
struct HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet CAr.HealthCheckRequest::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
};

struct HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_StaticFields
{
	// Google.Protobuf.MessageParser`1<CAr.HealthCheckRequest> CAr.HealthCheckRequest::_parser
	MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* ____parser_0;
};

// CArControls.InputReflection
struct InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD  : public RuntimeObject
{
};

struct InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor CArControls.InputReflection::descriptor
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___descriptor_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D  : public RuntimeObject
{
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918* ___factory_0;
	// System.Boolean Google.Protobuf.MessageParser::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_1;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.MessageParser::<Extensions>k__BackingField
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionsU3Ek__BackingField_2;
};

// Grpc.Core.Metadata
struct Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry> Grpc.Core.Metadata::entries
	List_1_t9FE6338CFB4FD5AFFFABF90B6DD6087DBE808337* ___entries_4;
	// System.Boolean Grpc.Core.Metadata::readOnly
	bool ___readOnly_5;
};

struct Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06_StaticFields
{
	// Grpc.Core.Metadata Grpc.Core.Metadata::Empty
	Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___Empty_1;
	// System.Text.Encoding Grpc.Core.Metadata::EncodingASCII
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___EncodingASCII_3;
};

// CAr.NotifyDescription
struct NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet CAr.NotifyDescription::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// CAr.SdpType CAr.NotifyDescription::sdpType_
	int32_t ___sdpType__3;
	// System.String CAr.NotifyDescription::sdp_
	String_t* ___sdp__5;
};

struct NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_StaticFields
{
	// Google.Protobuf.MessageParser`1<CAr.NotifyDescription> CAr.NotifyDescription::_parser
	MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F* ____parser_0;
};

// CAr.NotifyIce
struct NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet CAr.NotifyIce::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String CAr.NotifyIce::jsonBase64_
	String_t* ___jsonBase64__3;
};

struct NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_StaticFields
{
	// Google.Protobuf.MessageParser`1<CAr.NotifyIce> CAr.NotifyIce::_parser
	MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E* ____parser_0;
};

// Google.Protobuf.Collections.ProtobufEqualityComparers
struct ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09  : public RuntimeObject
{
};

struct ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
	// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
};

// Grpc.Core.SerializationContext
struct SerializationContext_tB58A48F5BD333BD147B799711A88A26662D09ADB  : public RuntimeObject
{
};

// Grpc.Core.ServerCallContext
struct ServerCallContext_t03C40610542F091E955B15B4AB225ED1A909C5E9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Grpc.Core.ServerCallContext::userState
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___userState_0;
};

// Grpc.Core.ServerServiceDefinition
struct ServerServiceDefinition_t16402F50122B2FADAD587780C17A2671596DC5D0  : public RuntimeObject
{
	// System.Collections.Generic.IReadOnlyList`1<System.Action`1<Grpc.Core.ServiceBinderBase>> Grpc.Core.ServerServiceDefinition::addMethodActions
	RuntimeObject* ___addMethodActions_0;
};

// Grpc.Core.ServiceBinderBase
struct ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A  : public RuntimeObject
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
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// CArControls.ThumbstickDirection
struct ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet CArControls.ThumbstickDirection::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Double CArControls.ThumbstickDirection::dx_
	double ___dx__3;
	// System.Double CArControls.ThumbstickDirection::dy_
	double ___dy__5;
	// System.Int64 CArControls.ThumbstickDirection::seqNum_
	int64_t ___seqNum__7;
};

struct ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_StaticFields
{
	// Google.Protobuf.MessageParser`1<CArControls.ThumbstickDirection> CArControls.ThumbstickDirection::_parser
	MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581* ____parser_0;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.UnknownField> Google.Protobuf.UnknownFieldSet::fields
	RuntimeObject* ___fields_0;
	// System.Int32 Google.Protobuf.UnknownFieldSet::lastFieldNumber
	int32_t ___lastFieldNumber_1;
	// Google.Protobuf.UnknownField Google.Protobuf.UnknownFieldSet::lastField
	UnknownField_tC38F0EBBE48029F7B0BF156B6CCB6585176E91DD* ___lastField_2;
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

// Grpc.Core.WriteOptions
struct WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050  : public RuntimeObject
{
	// Grpc.Core.WriteFlags Grpc.Core.WriteOptions::flags
	int32_t ___flags_1;
};

struct WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050_StaticFields
{
	// Grpc.Core.WriteOptions Grpc.Core.WriteOptions::Default
	WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050* ___Default_0;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Grpc.Core.ClientBase/ClientBaseConfiguration
struct ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D  : public RuntimeObject
{
	// Grpc.Core.CallInvoker Grpc.Core.ClientBase/ClientBaseConfiguration::undecoratedCallInvoker
	CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* ___undecoratedCallInvoker_0;
	// System.String Grpc.Core.ClientBase/ClientBaseConfiguration::host
	String_t* ___host_1;
};

// CAr.Control/<>c
struct U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F  : public RuntimeObject
{
};

struct U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_StaticFields
{
	// CAr.Control/<>c CAr.Control/<>c::<>9
	U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* ___U3CU3E9_0;
};

// CAr.Control/ControlBase
struct ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E  : public RuntimeObject
{
};

// OVRTouchSample.Hand/<>c
struct U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F  : public RuntimeObject
{
};

struct U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields
{
	// OVRTouchSample.Hand/<>c OVRTouchSample.Hand/<>c::<>9
	U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Collider,System.Boolean> OVRTouchSample.Hand/<>c::<>9__28_0
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* ___U3CU3E9__28_0_1;
};

// CAr.HandshakeMessage/<>c
struct U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A  : public RuntimeObject
{
};

struct U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_StaticFields
{
	// CAr.HandshakeMessage/<>c CAr.HandshakeMessage/<>c::<>9
	U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A* ___U3CU3E9_0;
};

// CAr.HealthCheckReply/<>c
struct U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400  : public RuntimeObject
{
};

struct U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_StaticFields
{
	// CAr.HealthCheckReply/<>c CAr.HealthCheckReply/<>c::<>9
	U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400* ___U3CU3E9_0;
};

// CAr.HealthCheckRequest/<>c
struct U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE  : public RuntimeObject
{
};

struct U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_StaticFields
{
	// CAr.HealthCheckRequest/<>c CAr.HealthCheckRequest/<>c::<>9
	U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE* ___U3CU3E9_0;
};

// CAr.NotifyDescription/<>c
struct U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C  : public RuntimeObject
{
};

struct U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_StaticFields
{
	// CAr.NotifyDescription/<>c CAr.NotifyDescription/<>c::<>9
	U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C* ___U3CU3E9_0;
};

// CAr.NotifyIce/<>c
struct U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E  : public RuntimeObject
{
};

struct U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_StaticFields
{
	// CAr.NotifyIce/<>c CAr.NotifyIce/<>c::<>9
	U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E* ___U3CU3E9_0;
};

// OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30
struct U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA  : public RuntimeObject
{
	// System.Int32 OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// OculusSampleFramework.OVROverlaySample OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::<>4__this
	OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* ___U3CU3E4__this_2;
};

// Grpc.Core.ServerServiceDefinition/Builder
struct Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Grpc.Core.ServerServiceDefinition/Builder::duplicateDetector
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___duplicateDetector_0;
	// System.Collections.Generic.List`1<System.Action`1<Grpc.Core.ServiceBinderBase>> Grpc.Core.ServerServiceDefinition/Builder::addMethodActions
	List_1_t28B295E550D7F6C1924CEDDE1C8E75888A6AFBA5* ___addMethodActions_1;
};

// CArControls.ThumbstickDirection/<>c
struct U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6  : public RuntimeObject
{
};

struct U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_StaticFields
{
	// CArControls.ThumbstickDirection/<>c CArControls.ThumbstickDirection/<>c::<>9
	U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6* ___U3CU3E9_0;
};

// OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26
struct U3CResetPositionU3Ed__26_t447FF0C4C24D521E5C2A09CE93932F840D5ACCB6  : public RuntimeObject
{
	// System.Int32 OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// OculusSampleFramework.TrainButtonVisualController OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<>4__this
	TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A* ___U3CU3E4__this_2;
	// System.Single OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<startTime>5__2
	float ___U3CstartTimeU3E5__2_3;
	// System.Single OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::<endTime>5__3
	float ___U3CendTimeU3E5__3_4;
};

// OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34
struct U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9  : public RuntimeObject
{
	// System.Int32 OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Boolean OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::startTrain
	bool ___startTrain_2;
	// OculusSampleFramework.TrainLocomotive OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<>4__this
	TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* ___U3CU3E4__this_3;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<endSpeed>5__2
	float ___U3CendSpeedU3E5__2_4;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<timePeriodForSpeedChange>5__3
	float ___U3CtimePeriodForSpeedChangeU3E5__3_5;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<startTime>5__4
	float ___U3CstartTimeU3E5__4_6;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<endTime>5__5
	float ___U3CendTimeU3E5__5_7;
	// System.Single OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::<startSpeed>5__6
	float ___U3CstartSpeedU3E5__6_8;
};

// OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17
struct U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40  : public RuntimeObject
{
	// System.Int32 OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// OculusSampleFramework.WindmillBladesController OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<>4__this
	WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* ___U3CU3E4__this_2;
	// System.Single OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::goalSpeed
	float ___goalSpeed_3;
	// System.Single OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<totalTime>5__2
	float ___U3CtotalTimeU3E5__2_4;
	// System.Single OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::<startSpeed>5__3
	float ___U3CstartSpeedU3E5__3_5;
};

// OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18
struct U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1  : public RuntimeObject
{
	// System.Int32 OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// OculusSampleFramework.WindmillBladesController OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::<>4__this
	WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* ___U3CU3E4__this_2;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::initial
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___initial_3;
	// System.Single OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::timeDelayAfterInitial
	float ___timeDelayAfterInitial_4;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_5;
};

// Grpc.Core.ClientBase`1<CAr.Control/ControlClient>
struct ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF  : public ClientBase_tD3AE7DEE97761650B2A6CCB19E3B501FEF713391
{
};

// Google.Protobuf.MessageParser`1<CAr.HandshakeMessage>
struct MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF* ___factory_3;
};

// Google.Protobuf.MessageParser`1<CAr.HealthCheckReply>
struct MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B* ___factory_3;
};

// Google.Protobuf.MessageParser`1<CAr.HealthCheckRequest>
struct MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9* ___factory_3;
};

// Google.Protobuf.MessageParser`1<CAr.NotifyDescription>
struct MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0* ___factory_3;
};

// Google.Protobuf.MessageParser`1<CAr.NotifyIce>
struct MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F* ___factory_3;
};

// Google.Protobuf.MessageParser`1<CArControls.ThumbstickDirection>
struct MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20* ___factory_3;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A 
{
	// System.Object System.Buffers.ReadOnlySequence`1::_startObject
	RuntimeObject* ____startObject_0;
	// System.Object System.Buffers.ReadOnlySequence`1::_endObject
	RuntimeObject* ____endObject_1;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_startInteger
	int32_t ____startInteger_2;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_endInteger
	int32_t ____endInteger_3;
};

struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A_StaticFields
{
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___Empty_4;
};

// System.Threading.Tasks.Task`1<CAr.HealthCheckReply>
struct Task_1_tEE4277B3335B1EB3CDF55D66111D9DBD3C4B5A32  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* ___m_result_38;
};

struct Task_1_tEE4277B3335B1EB3CDF55D66111D9DBD3C4B5A32_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC5107C42548E280CC0BD25B7F235DCE171742AD2* ___s_defaultFactory_39;
};

// UnityEngine.Events.UnityEvent`1<OculusSampleFramework.InteractableStateArgs>
struct UnityEvent_1_t1ED2AE761CB7C186AC6B6A8C5BE14C7204486168  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// Grpc.Core.AsyncCallState
struct AsyncCallState_t4925877EB4B16440DA661E0661C766EB271C3920 
{
	// System.Object Grpc.Core.AsyncCallState::responseHeadersAsync
	RuntimeObject* ___responseHeadersAsync_0;
	// System.Object Grpc.Core.AsyncCallState::getStatusFunc
	RuntimeObject* ___getStatusFunc_1;
	// System.Object Grpc.Core.AsyncCallState::getTrailersFunc
	RuntimeObject* ___getTrailersFunc_2;
	// System.Object Grpc.Core.AsyncCallState::disposeAction
	RuntimeObject* ___disposeAction_3;
	// System.Object Grpc.Core.AsyncCallState::callbackState
	RuntimeObject* ___callbackState_4;
};
// Native definition for P/Invoke marshalling of Grpc.Core.AsyncCallState
struct AsyncCallState_t4925877EB4B16440DA661E0661C766EB271C3920_marshaled_pinvoke
{
	Il2CppIUnknown* ___responseHeadersAsync_0;
	Il2CppIUnknown* ___getStatusFunc_1;
	Il2CppIUnknown* ___getTrailersFunc_2;
	Il2CppIUnknown* ___disposeAction_3;
	Il2CppIUnknown* ___callbackState_4;
};
// Native definition for COM marshalling of Grpc.Core.AsyncCallState
struct AsyncCallState_t4925877EB4B16440DA661E0661C766EB271C3920_marshaled_com
{
	Il2CppIUnknown* ___responseHeadersAsync_0;
	Il2CppIUnknown* ___getStatusFunc_1;
	Il2CppIUnknown* ___getTrailersFunc_2;
	Il2CppIUnknown* ___disposeAction_3;
	Il2CppIUnknown* ___callbackState_4;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// OculusSampleFramework.InteractableStateArgs
struct InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// OculusSampleFramework.Interactable OculusSampleFramework.InteractableStateArgs::Interactable
	Interactable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2* ___Interactable_1;
	// OculusSampleFramework.InteractableTool OculusSampleFramework.InteractableStateArgs::Tool
	InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* ___Tool_2;
	// OculusSampleFramework.InteractableState OculusSampleFramework.InteractableStateArgs::OldInteractableState
	int32_t ___OldInteractableState_3;
	// OculusSampleFramework.InteractableState OculusSampleFramework.InteractableStateArgs::NewInteractableState
	int32_t ___NewInteractableState_4;
	// OculusSampleFramework.ColliderZoneArgs OculusSampleFramework.InteractableStateArgs::ColliderArgs
	ColliderZoneArgs_tC7431174FDF0C6002A554118B81A5E6096D41087* ___ColliderArgs_5;
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

// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.MessageDescriptor::extensionSetIsInitialized
	Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* ___extensionSetIsInitialized_7;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___U3CProtoU3Ek__BackingField_8;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_9;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CContainingTypeU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* ___U3CFieldsU3Ek__BackingField_12;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* ___U3CExtensionsU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_15;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_16;
	// System.Int32 Google.Protobuf.Reflection.MessageDescriptor::<RealOneofCount>k__BackingField
	int32_t ___U3CRealOneofCountU3Ek__BackingField_17;
};

struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___WellKnownTypeNames_3;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 
{
	// System.Object System.SequencePosition::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;
};
// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::proto
	ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ___proto_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor> Google.Protobuf.Reflection.ServiceDescriptor::methods
	RuntimeObject* ___methods_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// Grpc.Core.Status
struct Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642 
{
	// Grpc.Core.StatusCode Grpc.Core.Status::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_2;
	// System.String Grpc.Core.Status::<Detail>k__BackingField
	String_t* ___U3CDetailU3Ek__BackingField_3;
	// System.Exception Grpc.Core.Status::<DebugException>k__BackingField
	Exception_t* ___U3CDebugExceptionU3Ek__BackingField_4;
};

struct Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642_StaticFields
{
	// Grpc.Core.Status Grpc.Core.Status::DefaultSuccess
	Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642 ___DefaultSuccess_0;
	// Grpc.Core.Status Grpc.Core.Status::DefaultCancelled
	Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642 ___DefaultCancelled_1;
};
// Native definition for P/Invoke marshalling of Grpc.Core.Status
struct Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642_marshaled_pinvoke
{
	int32_t ___U3CStatusCodeU3Ek__BackingField_2;
	char* ___U3CDetailU3Ek__BackingField_3;
	Exception_t_marshaled_pinvoke* ___U3CDebugExceptionU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Grpc.Core.Status
struct Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642_marshaled_com
{
	int32_t ___U3CStatusCodeU3Ek__BackingField_2;
	Il2CppChar* ___U3CDetailU3Ek__BackingField_3;
	Exception_t_marshaled_com* ___U3CDebugExceptionU3Ek__BackingField_4;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Google.Protobuf.WriteBufferHelper
struct WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557 
{
	// System.Buffers.IBufferWriter`1<System.Byte> Google.Protobuf.WriteBufferHelper::bufferWriter
	RuntimeObject* ___bufferWriter_0;
	// Google.Protobuf.CodedOutputStream Google.Protobuf.WriteBufferHelper::codedOutputStream
	CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___codedOutputStream_1;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.WriteBufferHelper
struct WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_pinvoke
{
	RuntimeObject* ___bufferWriter_0;
	CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___codedOutputStream_1;
};
// Native definition for COM marshalling of Google.Protobuf.WriteBufferHelper
struct WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_com
{
	RuntimeObject* ___bufferWriter_0;
	CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___codedOutputStream_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// OVRPlugin/Sizei
struct Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE 
{
	// System.Int32 OVRPlugin/Sizei::w
	int32_t ___w_0;
	// System.Int32 OVRPlugin/Sizei::h
	int32_t ___h_1;
};

struct Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE_StaticFields
{
	// OVRPlugin/Sizei OVRPlugin/Sizei::zero
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___zero_2;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// Grpc.Core.AsyncDuplexStreamingCall`2<CAr.HandshakeMessage,CAr.HandshakeMessage>
struct AsyncDuplexStreamingCall_2_tAC5737587D11205F5BD0A279930DACB0BF8FA7D9  : public RuntimeObject
{
	// Grpc.Core.IClientStreamWriter`1<TRequest> Grpc.Core.AsyncDuplexStreamingCall`2::requestStream
	RuntimeObject* ___requestStream_0;
	// Grpc.Core.IAsyncStreamReader`1<TResponse> Grpc.Core.AsyncDuplexStreamingCall`2::responseStream
	RuntimeObject* ___responseStream_1;
	// Grpc.Core.AsyncCallState Grpc.Core.AsyncDuplexStreamingCall`2::callState
	AsyncCallState_t4925877EB4B16440DA661E0661C766EB271C3920 ___callState_2;
};

// Grpc.Core.AsyncUnaryCall`1<CAr.HealthCheckReply>
struct AsyncUnaryCall_1_tD54FF260DA799468191108F1D0F41138E0A82273  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResponse> Grpc.Core.AsyncUnaryCall`1::responseAsync
	Task_1_tEE4277B3335B1EB3CDF55D66111D9DBD3C4B5A32* ___responseAsync_0;
	// Grpc.Core.AsyncCallState Grpc.Core.AsyncUnaryCall`1::callState
	AsyncCallState_t4925877EB4B16440DA661E0661C766EB271C3920 ___callState_1;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Buffers.ReadOnlySequence`1/Enumerator<System.Byte>
struct Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 
{
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1/Enumerator::_sequence
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____sequence_0;
	// System.SequencePosition System.Buffers.ReadOnlySequence`1/Enumerator::_next
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ____next_1;
	// System.ReadOnlyMemory`1<T> System.Buffers.ReadOnlySequence`1/Enumerator::_currentMemory
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ____currentMemory_2;
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
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

// OculusSampleFramework.Pose
struct Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7  : public RuntimeObject
{
	// UnityEngine.Vector3 OculusSampleFramework.Pose::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	// UnityEngine.Quaternion OculusSampleFramework.Pose::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Google.Protobuf.WriterInternalState
struct WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780 
{
	// System.Int32 Google.Protobuf.WriterInternalState::limit
	int32_t ___limit_0;
	// System.Int32 Google.Protobuf.WriterInternalState::position
	int32_t ___position_1;
	// Google.Protobuf.WriteBufferHelper Google.Protobuf.WriterInternalState::writeBufferHelper
	WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557 ___writeBufferHelper_2;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.WriterInternalState
struct WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_pinvoke
{
	int32_t ___limit_0;
	int32_t ___position_1;
	WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_pinvoke ___writeBufferHelper_2;
};
// Native definition for COM marshalling of Google.Protobuf.WriterInternalState
struct WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_com
{
	int32_t ___limit_0;
	int32_t ___position_1;
	WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_com ___writeBufferHelper_2;
};

// CAr.Control/ControlClient
struct ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447  : public ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF
{
};

// OculusSampleFramework.Interactable/InteractableStateArgsEvent
struct InteractableStateArgsEvent_tAE90140049B5BEA21987B055A652C8CBA4D67D41  : public UnityEvent_1_t1ED2AE761CB7C186AC6B6A8C5BE14C7204486168
{
};

// OVRPlugin/LayerDesc
struct LayerDesc_t4528A22F36B454D6137754D6033AC8EF68A8DA75 
{
	// OVRPlugin/OverlayShape OVRPlugin/LayerDesc::Shape
	int32_t ___Shape_0;
	// OVRPlugin/LayerLayout OVRPlugin/LayerDesc::Layout
	int32_t ___Layout_1;
	// OVRPlugin/Sizei OVRPlugin/LayerDesc::TextureSize
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___TextureSize_2;
	// System.Int32 OVRPlugin/LayerDesc::MipLevels
	int32_t ___MipLevels_3;
	// System.Int32 OVRPlugin/LayerDesc::SampleCount
	int32_t ___SampleCount_4;
	// OVRPlugin/EyeTextureFormat OVRPlugin/LayerDesc::Format
	int32_t ___Format_5;
	// System.Int32 OVRPlugin/LayerDesc::LayerFlags
	int32_t ___LayerFlags_6;
	// OVRPlugin/Fovf[] OVRPlugin/LayerDesc::Fov
	FovfU5BU5D_tB7B0EFE7E4FD4A33BC0EFA3644D94BF70D75AA7C* ___Fov_7;
	// OVRPlugin/Rectf[] OVRPlugin/LayerDesc::VisibleRect
	RectfU5BU5D_tCBABD552E093C7891710F2D448FACAA8140C1DD0* ___VisibleRect_8;
	// OVRPlugin/Sizei OVRPlugin/LayerDesc::MaxViewportSize
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MaxViewportSize_9;
	// OVRPlugin/EyeTextureFormat OVRPlugin/LayerDesc::DepthFormat
	int32_t ___DepthFormat_10;
	// OVRPlugin/EyeTextureFormat OVRPlugin/LayerDesc::MotionVectorFormat
	int32_t ___MotionVectorFormat_11;
	// OVRPlugin/EyeTextureFormat OVRPlugin/LayerDesc::MotionVectorDepthFormat
	int32_t ___MotionVectorDepthFormat_12;
	// OVRPlugin/Sizei OVRPlugin/LayerDesc::MotionVectorTextureSize
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MotionVectorTextureSize_13;
};
// Native definition for P/Invoke marshalling of OVRPlugin/LayerDesc
struct LayerDesc_t4528A22F36B454D6137754D6033AC8EF68A8DA75_marshaled_pinvoke
{
	int32_t ___Shape_0;
	int32_t ___Layout_1;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___TextureSize_2;
	int32_t ___MipLevels_3;
	int32_t ___SampleCount_4;
	int32_t ___Format_5;
	int32_t ___LayerFlags_6;
	Fovf_t7A8312168C57A6CC5AA4FE685369A4618BF686E7* ___Fov_7;
	Rectf_t28AE83DFE92F018AD3956872DED5880FB4F06459* ___VisibleRect_8;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MaxViewportSize_9;
	int32_t ___DepthFormat_10;
	int32_t ___MotionVectorFormat_11;
	int32_t ___MotionVectorDepthFormat_12;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MotionVectorTextureSize_13;
};
// Native definition for COM marshalling of OVRPlugin/LayerDesc
struct LayerDesc_t4528A22F36B454D6137754D6033AC8EF68A8DA75_marshaled_com
{
	int32_t ___Shape_0;
	int32_t ___Layout_1;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___TextureSize_2;
	int32_t ___MipLevels_3;
	int32_t ___SampleCount_4;
	int32_t ___Format_5;
	int32_t ___LayerFlags_6;
	Fovf_t7A8312168C57A6CC5AA4FE685369A4618BF686E7* ___Fov_7;
	Rectf_t28AE83DFE92F018AD3956872DED5880FB4F06459* ___VisibleRect_8;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MaxViewportSize_9;
	int32_t ___DepthFormat_10;
	int32_t ___MotionVectorFormat_11;
	int32_t ___MotionVectorDepthFormat_12;
	Sizei_t6095E64B917EEF95276801B335D2204C5E36BAAE ___MotionVectorTextureSize_13;
};

// OVRPlugin/TextureRectMatrixf
struct TextureRectMatrixf_t389BA8981D39B99E120A6C70AF140911993215C5 
{
	// UnityEngine.Rect OVRPlugin/TextureRectMatrixf::leftRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect_0;
	// UnityEngine.Rect OVRPlugin/TextureRectMatrixf::rightRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect_1;
	// UnityEngine.Vector4 OVRPlugin/TextureRectMatrixf::leftScaleBias
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___leftScaleBias_2;
	// UnityEngine.Vector4 OVRPlugin/TextureRectMatrixf::rightScaleBias
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rightScaleBias_3;
};

struct TextureRectMatrixf_t389BA8981D39B99E120A6C70AF140911993215C5_StaticFields
{
	// OVRPlugin/TextureRectMatrixf OVRPlugin/TextureRectMatrixf::zero
	TextureRectMatrixf_t389BA8981D39B99E120A6C70AF140911993215C5 ___zero_4;
};

// OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15
struct U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235  : public RuntimeObject
{
	// System.Int32 OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// OculusSampleFramework.TrainCrossingController OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<>4__this
	TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* ___U3CU3E4__this_2;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::animationLength
	float ___animationLength_3;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<animationEndTime>5__2
	float ___U3CanimationEndTimeU3E5__2_4;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightBlinkDuration>5__3
	float ___U3ClightBlinkDurationU3E5__3_5;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightBlinkStartTime>5__4
	float ___U3ClightBlinkStartTimeU3E5__4_6;
	// System.Single OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightBlinkEndTime>5__5
	float ___U3ClightBlinkEndTimeU3E5__5_7;
	// UnityEngine.Material OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightToBlinkOn>5__6
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3ClightToBlinkOnU3E5__6_8;
	// UnityEngine.Material OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<lightToBlinkOff>5__7
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3ClightToBlinkOffU3E5__7_9;
	// UnityEngine.Color OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<onColor>5__8
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3ConColorU3E5__8_10;
	// UnityEngine.Color OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::<offColor>5__9
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CoffColorU3E5__9_11;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// Grpc.Core.CallOptions
struct CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E 
{
	// Grpc.Core.Metadata Grpc.Core.CallOptions::headers
	Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___headers_0;
	// System.Nullable`1<System.DateTime> Grpc.Core.CallOptions::deadline
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___deadline_1;
	// System.Threading.CancellationToken Grpc.Core.CallOptions::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_2;
	// Grpc.Core.WriteOptions Grpc.Core.CallOptions::writeOptions
	WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050* ___writeOptions_3;
	// Grpc.Core.ContextPropagationToken Grpc.Core.CallOptions::propagationToken
	ContextPropagationToken_t3D20D09B421D355689C95D8C5F1BA4B1C4D18751* ___propagationToken_4;
	// Grpc.Core.CallCredentials Grpc.Core.CallOptions::credentials
	CallCredentials_t937C403ED70D8E5BC712464E26D2CD3EF0144466* ___credentials_5;
	// Grpc.Core.Internal.CallFlags Grpc.Core.CallOptions::flags
	int32_t ___flags_6;
};
// Native definition for P/Invoke marshalling of Grpc.Core.CallOptions
struct CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E_marshaled_pinvoke
{
	Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___headers_0;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___deadline_1;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___cancellationToken_2;
	WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050* ___writeOptions_3;
	ContextPropagationToken_t3D20D09B421D355689C95D8C5F1BA4B1C4D18751* ___propagationToken_4;
	CallCredentials_t937C403ED70D8E5BC712464E26D2CD3EF0144466* ___credentials_5;
	int32_t ___flags_6;
};
// Native definition for COM marshalling of Grpc.Core.CallOptions
struct CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E_marshaled_com
{
	Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___headers_0;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___deadline_1;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___cancellationToken_2;
	WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050* ___writeOptions_3;
	ContextPropagationToken_t3D20D09B421D355689C95D8C5F1BA4B1C4D18751* ___propagationToken_4;
	CallCredentials_t937C403ED70D8E5BC712464E26D2CD3EF0144466* ___credentials_5;
	int32_t ___flags_6;
};

// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.CodedOutputStream::leaveOpen
	bool ___leaveOpen_6;
	// System.Byte[] Google.Protobuf.CodedOutputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_7;
	// Google.Protobuf.WriterInternalState Google.Protobuf.CodedOutputStream::state
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780 ___state_8;
	// System.IO.Stream Google.Protobuf.CodedOutputStream::output
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output_9;
};

struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_StaticFields
{
	// System.Int32 Google.Protobuf.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Grpc.Core.RpcException
struct RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72  : public Exception_t
{
	// Grpc.Core.Status Grpc.Core.RpcException::status
	Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642 ___status_18;
	// Grpc.Core.Metadata Grpc.Core.RpcException::trailers
	Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___trailers_19;
};

// Google.Protobuf.SegmentedBufferHelper
struct SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B 
{
	// System.Nullable`1<System.Int32> Google.Protobuf.SegmentedBufferHelper::totalLength
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___totalLength_0;
	// System.Buffers.ReadOnlySequence`1/Enumerator<System.Byte> Google.Protobuf.SegmentedBufferHelper::readOnlySequenceEnumerator
	Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 ___readOnlySequenceEnumerator_1;
	// Google.Protobuf.CodedInputStream Google.Protobuf.SegmentedBufferHelper::codedInputStream
	CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___codedInputStream_2;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.SegmentedBufferHelper
struct SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_pinvoke
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___totalLength_0;
	Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 ___readOnlySequenceEnumerator_1;
	CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___codedInputStream_2;
};
// Native definition for COM marshalling of Google.Protobuf.SegmentedBufferHelper
struct SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_com
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___totalLength_0;
	Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 ___readOnlySequenceEnumerator_1;
	CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___codedInputStream_2;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// System.Action`2<CAr.HandshakeMessage,Grpc.Core.SerializationContext>
struct Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62  : public MulticastDelegate_t
{
};

// System.Action`2<CAr.HealthCheckReply,Grpc.Core.SerializationContext>
struct Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86  : public MulticastDelegate_t
{
};

// System.Action`2<CAr.HealthCheckRequest,Grpc.Core.SerializationContext>
struct Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9  : public MulticastDelegate_t
{
};

// Grpc.Core.DuplexStreamingServerMethod`2<CAr.HandshakeMessage,CAr.HandshakeMessage>
struct DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE  : public MulticastDelegate_t
{
};

// System.Func`1<CAr.HandshakeMessage>
struct Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF  : public MulticastDelegate_t
{
};

// System.Func`1<CAr.HealthCheckReply>
struct Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B  : public MulticastDelegate_t
{
};

// System.Func`1<CAr.HealthCheckRequest>
struct Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9  : public MulticastDelegate_t
{
};

// System.Func`1<CAr.NotifyDescription>
struct Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0  : public MulticastDelegate_t
{
};

// System.Func`1<CAr.NotifyIce>
struct Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F  : public MulticastDelegate_t
{
};

// System.Func`1<CArControls.ThumbstickDirection>
struct Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04  : public MulticastDelegate_t
{
};

// System.Func`2<Grpc.Core.DeserializationContext,CAr.HandshakeMessage>
struct Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972  : public MulticastDelegate_t
{
};

// System.Func`2<Grpc.Core.DeserializationContext,CAr.HealthCheckReply>
struct Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727  : public MulticastDelegate_t
{
};

// System.Func`2<Grpc.Core.DeserializationContext,CAr.HealthCheckRequest>
struct Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB  : public MulticastDelegate_t
{
};

// Grpc.Core.UnaryServerMethod`2<CAr.HealthCheckRequest,CAr.HealthCheckReply>
struct UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<OculusSampleFramework.InteractableStateArgs>
struct UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Google.Protobuf.ParserInternalState
struct ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C 
{
	// System.Int32 Google.Protobuf.ParserInternalState::bufferPos
	int32_t ___bufferPos_0;
	// System.Int32 Google.Protobuf.ParserInternalState::bufferSize
	int32_t ___bufferSize_1;
	// System.Int32 Google.Protobuf.ParserInternalState::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_2;
	// System.Int32 Google.Protobuf.ParserInternalState::currentLimit
	int32_t ___currentLimit_3;
	// System.Int32 Google.Protobuf.ParserInternalState::totalBytesRetired
	int32_t ___totalBytesRetired_4;
	// System.Int32 Google.Protobuf.ParserInternalState::recursionDepth
	int32_t ___recursionDepth_5;
	// Google.Protobuf.SegmentedBufferHelper Google.Protobuf.ParserInternalState::segmentedBufferHelper
	SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B ___segmentedBufferHelper_6;
	// System.UInt32 Google.Protobuf.ParserInternalState::lastTag
	uint32_t ___lastTag_7;
	// System.UInt32 Google.Protobuf.ParserInternalState::nextTag
	uint32_t ___nextTag_8;
	// System.Boolean Google.Protobuf.ParserInternalState::hasNextTag
	bool ___hasNextTag_9;
	// System.Int32 Google.Protobuf.ParserInternalState::sizeLimit
	int32_t ___sizeLimit_10;
	// System.Int32 Google.Protobuf.ParserInternalState::recursionLimit
	int32_t ___recursionLimit_11;
	// System.Boolean Google.Protobuf.ParserInternalState::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_12;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.ParserInternalState::<ExtensionRegistry>k__BackingField
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.ParserInternalState
struct ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_pinvoke
{
	int32_t ___bufferPos_0;
	int32_t ___bufferSize_1;
	int32_t ___bufferSizeAfterLimit_2;
	int32_t ___currentLimit_3;
	int32_t ___totalBytesRetired_4;
	int32_t ___recursionDepth_5;
	SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_pinvoke ___segmentedBufferHelper_6;
	uint32_t ___lastTag_7;
	uint32_t ___nextTag_8;
	int32_t ___hasNextTag_9;
	int32_t ___sizeLimit_10;
	int32_t ___recursionLimit_11;
	int32_t ___U3CDiscardUnknownFieldsU3Ek__BackingField_12;
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_13;
};
// Native definition for COM marshalling of Google.Protobuf.ParserInternalState
struct ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_com
{
	int32_t ___bufferPos_0;
	int32_t ___bufferSize_1;
	int32_t ___bufferSizeAfterLimit_2;
	int32_t ___currentLimit_3;
	int32_t ___totalBytesRetired_4;
	int32_t ___recursionDepth_5;
	SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_com ___segmentedBufferHelper_6;
	uint32_t ___lastTag_7;
	uint32_t ___nextTag_8;
	int32_t ___hasNextTag_9;
	int32_t ___sizeLimit_10;
	int32_t ___recursionLimit_11;
	int32_t ___U3CDiscardUnknownFieldsU3Ek__BackingField_12;
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_13;
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Google.Protobuf.WriteContext
struct WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D 
{
	// System.Span`1<System.Byte> Google.Protobuf.WriteContext::buffer
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer_0;
	// Google.Protobuf.WriterInternalState Google.Protobuf.WriteContext::state
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780 ___state_1;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.WriteContext
struct WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D_marshaled_pinvoke
{
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer_0;
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_pinvoke ___state_1;
};
// Native definition for COM marshalling of Google.Protobuf.WriteContext
struct WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D_marshaled_com
{
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer_0;
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_com ___state_1;
};

// DebugUIBuilder/OnClick
struct OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A  : public MulticastDelegate_t
{
};

// DebugUIBuilder/OnToggleValueChange
struct OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// Google.Protobuf.CodedInputStream
struct CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.CodedInputStream::leaveOpen
	bool ___leaveOpen_0;
	// System.Byte[] Google.Protobuf.CodedInputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_1;
	// System.IO.Stream Google.Protobuf.CodedInputStream::input
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input_2;
	// Google.Protobuf.ParserInternalState Google.Protobuf.CodedInputStream::state
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C ___state_3;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Google.Protobuf.ParseContext
struct ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF 
{
	// System.ReadOnlySpan`1<System.Byte> Google.Protobuf.ParseContext::buffer
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer_2;
	// Google.Protobuf.ParserInternalState Google.Protobuf.ParseContext::state
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C ___state_3;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.ParseContext
struct ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF_marshaled_pinvoke
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer_2;
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_pinvoke ___state_3;
};
// Native definition for COM marshalling of Google.Protobuf.ParseContext
struct ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF_marshaled_com
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer_2;
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_com ___state_3;
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// DebugUIBuilder
struct DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform DebugUIBuilder::buttonPrefab
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___buttonPrefab_7;
	// UnityEngine.RectTransform[] DebugUIBuilder::additionalButtonPrefab
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ___additionalButtonPrefab_8;
	// UnityEngine.RectTransform DebugUIBuilder::labelPrefab
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___labelPrefab_9;
	// UnityEngine.RectTransform DebugUIBuilder::sliderPrefab
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___sliderPrefab_10;
	// UnityEngine.RectTransform DebugUIBuilder::dividerPrefab
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___dividerPrefab_11;
	// UnityEngine.RectTransform DebugUIBuilder::togglePrefab
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___togglePrefab_12;
	// UnityEngine.RectTransform DebugUIBuilder::radioPrefab
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___radioPrefab_13;
	// UnityEngine.RectTransform DebugUIBuilder::textPrefab
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___textPrefab_14;
	// UnityEngine.GameObject DebugUIBuilder::uiHelpersToInstantiate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiHelpersToInstantiate_15;
	// UnityEngine.Transform[] DebugUIBuilder::targetContentPanels
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___targetContentPanels_16;
	// System.Boolean[] DebugUIBuilder::reEnable
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___reEnable_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DebugUIBuilder::toEnable
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___toEnable_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DebugUIBuilder::toDisable
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___toDisable_19;
	// System.Single DebugUIBuilder::elementSpacing
	float ___elementSpacing_21;
	// System.Single DebugUIBuilder::marginH
	float ___marginH_22;
	// System.Single DebugUIBuilder::marginV
	float ___marginV_23;
	// UnityEngine.Vector2[] DebugUIBuilder::insertPositions
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___insertPositions_24;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform>[] DebugUIBuilder::insertedElements
	List_1U5BU5D_t826337C0A88A91A3DE75521974962C2C682A3865* ___insertedElements_25;
	// UnityEngine.Vector3 DebugUIBuilder::menuOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___menuOffset_26;
	// OVRCameraRig DebugUIBuilder::rig
	OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ___rig_27;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.ToggleGroup> DebugUIBuilder::radioGroups
	Dictionary_2_t4D32AB7B38D14EB24A56141DC52CF5643FDF9834* ___radioGroups_28;
	// LaserPointer DebugUIBuilder::lp
	LaserPointer_t0E77E38E488CC0E97D2E29F61CA3422430FEB874* ___lp_29;
	// UnityEngine.LineRenderer DebugUIBuilder::lr
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lr_30;
	// LaserPointer/LaserBeamBehavior DebugUIBuilder::laserBeamBehavior
	int32_t ___laserBeamBehavior_31;
	// System.Boolean DebugUIBuilder::isHorizontal
	bool ___isHorizontal_32;
	// System.Boolean DebugUIBuilder::usePanelCentricRelayout
	bool ___usePanelCentricRelayout_33;
};

struct DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields
{
	// DebugUIBuilder DebugUIBuilder::instance
	DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* ___instance_20;
};

// OVRTouchSample.Hand
struct Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRInput/Controller OVRTouchSample.Hand::m_controller
	int32_t ___m_controller_15;
	// UnityEngine.Animator OVRTouchSample.Hand::m_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_animator_16;
	// OVRTouchSample.HandPose OVRTouchSample.Hand::m_defaultGrabPose
	HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* ___m_defaultGrabPose_17;
	// UnityEngine.Collider[] OVRTouchSample.Hand::m_colliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___m_colliders_18;
	// System.Boolean OVRTouchSample.Hand::m_collisionEnabled
	bool ___m_collisionEnabled_19;
	// OVRGrabber OVRTouchSample.Hand::m_grabber
	OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* ___m_grabber_20;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> OVRTouchSample.Hand::m_showAfterInputFocusAcquired
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___m_showAfterInputFocusAcquired_21;
	// System.Int32 OVRTouchSample.Hand::m_animLayerIndexThumb
	int32_t ___m_animLayerIndexThumb_22;
	// System.Int32 OVRTouchSample.Hand::m_animLayerIndexPoint
	int32_t ___m_animLayerIndexPoint_23;
	// System.Int32 OVRTouchSample.Hand::m_animParamIndexFlex
	int32_t ___m_animParamIndexFlex_24;
	// System.Int32 OVRTouchSample.Hand::m_animParamIndexPose
	int32_t ___m_animParamIndexPose_25;
	// System.Boolean OVRTouchSample.Hand::m_isPointing
	bool ___m_isPointing_26;
	// System.Boolean OVRTouchSample.Hand::m_isGivingThumbsUp
	bool ___m_isGivingThumbsUp_27;
	// System.Single OVRTouchSample.Hand::m_pointBlend
	float ___m_pointBlend_28;
	// System.Single OVRTouchSample.Hand::m_thumbsUpBlend
	float ___m_thumbsUpBlend_29;
	// System.Boolean OVRTouchSample.Hand::m_restoreOnInputAcquired
	bool ___m_restoreOnInputAcquired_30;
	// System.Single OVRTouchSample.Hand::m_collisionScaleCurrent
	float ___m_collisionScaleCurrent_31;
};

// OVRTouchSample.HandPose
struct HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean OVRTouchSample.HandPose::m_allowPointing
	bool ___m_allowPointing_4;
	// System.Boolean OVRTouchSample.HandPose::m_allowThumbsUp
	bool ___m_allowThumbsUp_5;
	// OVRTouchSample.HandPoseId OVRTouchSample.HandPose::m_poseId
	int32_t ___m_poseId_6;
};

// OculusSampleFramework.Interactable
struct Interactable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OculusSampleFramework.ColliderZone OculusSampleFramework.Interactable::_proximityZoneCollider
	RuntimeObject* ____proximityZoneCollider_4;
	// OculusSampleFramework.ColliderZone OculusSampleFramework.Interactable::_contactZoneCollider
	RuntimeObject* ____contactZoneCollider_5;
	// OculusSampleFramework.ColliderZone OculusSampleFramework.Interactable::_actionZoneCollider
	RuntimeObject* ____actionZoneCollider_6;
	// System.Action`1<OculusSampleFramework.ColliderZoneArgs> OculusSampleFramework.Interactable::ProximityZoneEvent
	Action_1_tCFBE340FD442BC4B5557FD1B5ECC8237D9ADD49F* ___ProximityZoneEvent_7;
	// System.Action`1<OculusSampleFramework.ColliderZoneArgs> OculusSampleFramework.Interactable::ContactZoneEvent
	Action_1_tCFBE340FD442BC4B5557FD1B5ECC8237D9ADD49F* ___ContactZoneEvent_8;
	// System.Action`1<OculusSampleFramework.ColliderZoneArgs> OculusSampleFramework.Interactable::ActionZoneEvent
	Action_1_tCFBE340FD442BC4B5557FD1B5ECC8237D9ADD49F* ___ActionZoneEvent_9;
	// OculusSampleFramework.Interactable/InteractableStateArgsEvent OculusSampleFramework.Interactable::InteractableStateChanged
	InteractableStateArgsEvent_tAE90140049B5BEA21987B055A652C8CBA4D67D41* ___InteractableStateChanged_10;
};

// OculusSampleFramework.InteractableTool
struct InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean OculusSampleFramework.InteractableTool::<IsRightHandedTool>k__BackingField
	bool ___U3CIsRightHandedToolU3Ek__BackingField_4;
	// UnityEngine.Vector3 OculusSampleFramework.InteractableTool::<Velocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CVelocityU3Ek__BackingField_5;
	// UnityEngine.Vector3 OculusSampleFramework.InteractableTool::<InteractionPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CInteractionPositionU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<OculusSampleFramework.InteractableCollisionInfo> OculusSampleFramework.InteractableTool::_currentIntersectingObjects
	List_1_t490A09E30860203F317F45478EF4A90AE431CAEE* ____currentIntersectingObjects_7;
	// System.Collections.Generic.List`1<OculusSampleFramework.Interactable> OculusSampleFramework.InteractableTool::_addedInteractables
	List_1_tE24BA6DEA09B928DD057B20C565CD199D7E9050D* ____addedInteractables_8;
	// System.Collections.Generic.List`1<OculusSampleFramework.Interactable> OculusSampleFramework.InteractableTool::_removedInteractables
	List_1_tE24BA6DEA09B928DD057B20C565CD199D7E9050D* ____removedInteractables_9;
	// System.Collections.Generic.List`1<OculusSampleFramework.Interactable> OculusSampleFramework.InteractableTool::_remainingInteractables
	List_1_tE24BA6DEA09B928DD057B20C565CD199D7E9050D* ____remainingInteractables_10;
	// System.Collections.Generic.Dictionary`2<OculusSampleFramework.Interactable,OculusSampleFramework.InteractableCollisionInfo> OculusSampleFramework.InteractableTool::_currInteractableToCollisionInfos
	Dictionary_2_t0E0584945B4E3068F9A994C51F1DBE0090B67287* ____currInteractableToCollisionInfos_11;
	// System.Collections.Generic.Dictionary`2<OculusSampleFramework.Interactable,OculusSampleFramework.InteractableCollisionInfo> OculusSampleFramework.InteractableTool::_prevInteractableToCollisionInfos
	Dictionary_2_t0E0584945B4E3068F9A994C51F1DBE0090B67287* ____prevInteractableToCollisionInfos_12;
};

// OVRGrabbable
struct OVRGrabbable_t322F6468B588212B888E9397723397A16E7614B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean OVRGrabbable::m_allowOffhandGrab
	bool ___m_allowOffhandGrab_4;
	// System.Boolean OVRGrabbable::m_snapPosition
	bool ___m_snapPosition_5;
	// System.Boolean OVRGrabbable::m_snapOrientation
	bool ___m_snapOrientation_6;
	// UnityEngine.Transform OVRGrabbable::m_snapOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_snapOffset_7;
	// UnityEngine.Collider[] OVRGrabbable::m_grabPoints
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___m_grabPoints_8;
	// System.Boolean OVRGrabbable::m_grabbedKinematic
	bool ___m_grabbedKinematic_9;
	// UnityEngine.Collider OVRGrabbable::m_grabbedCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_grabbedCollider_10;
	// OVRGrabber OVRGrabbable::m_grabbedBy
	OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* ___m_grabbedBy_11;
};

// OVRGrabber
struct OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OVRGrabber::grabBegin
	float ___grabBegin_4;
	// System.Single OVRGrabber::grabEnd
	float ___grabEnd_5;
	// System.Boolean OVRGrabber::m_parentHeldObject
	bool ___m_parentHeldObject_6;
	// System.Boolean OVRGrabber::m_moveHandPosition
	bool ___m_moveHandPosition_7;
	// UnityEngine.Transform OVRGrabber::m_gripTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_gripTransform_8;
	// UnityEngine.Collider[] OVRGrabber::m_grabVolumes
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___m_grabVolumes_9;
	// OVRInput/Controller OVRGrabber::m_controller
	int32_t ___m_controller_10;
	// UnityEngine.Transform OVRGrabber::m_parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentTransform_11;
	// UnityEngine.GameObject OVRGrabber::m_player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_player_12;
	// System.Boolean OVRGrabber::m_grabVolumeEnabled
	bool ___m_grabVolumeEnabled_13;
	// UnityEngine.Vector3 OVRGrabber::m_lastPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_lastPos_14;
	// UnityEngine.Quaternion OVRGrabber::m_lastRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_lastRot_15;
	// UnityEngine.Quaternion OVRGrabber::m_anchorOffsetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_anchorOffsetRotation_16;
	// UnityEngine.Vector3 OVRGrabber::m_anchorOffsetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_anchorOffsetPosition_17;
	// System.Single OVRGrabber::m_prevFlex
	float ___m_prevFlex_18;
	// OVRGrabbable OVRGrabber::m_grabbedObj
	OVRGrabbable_t322F6468B588212B888E9397723397A16E7614B5* ___m_grabbedObj_19;
	// UnityEngine.Vector3 OVRGrabber::m_grabbedObjectPosOff
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_grabbedObjectPosOff_20;
	// UnityEngine.Quaternion OVRGrabber::m_grabbedObjectRotOff
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_grabbedObjectRotOff_21;
	// System.Collections.Generic.Dictionary`2<OVRGrabbable,System.Int32> OVRGrabber::m_grabCandidates
	Dictionary_2_t749E8D446C2E8EE6FF423979EE55DB04E3E91EBD* ___m_grabCandidates_22;
	// System.Boolean OVRGrabber::m_operatingWithoutOVRCameraRig
	bool ___m_operatingWithoutOVRCameraRig_23;
};

// OVROverlay
struct OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVROverlay/OverlayType OVROverlay::currentOverlayType
	int32_t ___currentOverlayType_4;
	// System.Boolean OVROverlay::isDynamic
	bool ___isDynamic_5;
	// System.Boolean OVROverlay::isProtectedContent
	bool ___isProtectedContent_6;
	// UnityEngine.Rect OVROverlay::srcRectLeft
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___srcRectLeft_7;
	// UnityEngine.Rect OVROverlay::srcRectRight
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___srcRectRight_8;
	// UnityEngine.Rect OVROverlay::destRectLeft
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___destRectLeft_9;
	// UnityEngine.Rect OVROverlay::destRectRight
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___destRectRight_10;
	// System.Boolean OVROverlay::invertTextureRects
	bool ___invertTextureRects_11;
	// OVRPlugin/TextureRectMatrixf OVROverlay::textureRectMatrix
	TextureRectMatrixf_t389BA8981D39B99E120A6C70AF140911993215C5 ___textureRectMatrix_12;
	// System.Boolean OVROverlay::overrideTextureRectMatrix
	bool ___overrideTextureRectMatrix_13;
	// System.Boolean OVROverlay::overridePerLayerColorScaleAndOffset
	bool ___overridePerLayerColorScaleAndOffset_14;
	// UnityEngine.Vector4 OVROverlay::colorScale
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorScale_15;
	// UnityEngine.Vector4 OVROverlay::colorOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorOffset_16;
	// System.Boolean OVROverlay::useExpensiveSuperSample
	bool ___useExpensiveSuperSample_17;
	// System.Boolean OVROverlay::useExpensiveSharpen
	bool ___useExpensiveSharpen_18;
	// System.Boolean OVROverlay::hidden
	bool ___hidden_19;
	// System.Boolean OVROverlay::isExternalSurface
	bool ___isExternalSurface_20;
	// System.Int32 OVROverlay::externalSurfaceWidth
	int32_t ___externalSurfaceWidth_21;
	// System.Int32 OVROverlay::externalSurfaceHeight
	int32_t ___externalSurfaceHeight_22;
	// System.Int32 OVROverlay::compositionDepth
	int32_t ___compositionDepth_23;
	// System.Int32 OVROverlay::layerCompositionDepth
	int32_t ___layerCompositionDepth_24;
	// System.Boolean OVROverlay::noDepthBufferTesting
	bool ___noDepthBufferTesting_25;
	// OVRPlugin/EyeTextureFormat OVROverlay::layerTextureFormat
	int32_t ___layerTextureFormat_26;
	// OVROverlay/OverlayShape OVROverlay::currentOverlayShape
	int32_t ___currentOverlayShape_27;
	// OVROverlay/OverlayShape OVROverlay::prevOverlayShape
	int32_t ___prevOverlayShape_28;
	// UnityEngine.Texture[] OVROverlay::textures
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ___textures_29;
	// System.Boolean OVROverlay::isAlphaPremultiplied
	bool ___isAlphaPremultiplied_30;
	// System.Boolean OVROverlay::useBicubicFiltering
	bool ___useBicubicFiltering_31;
	// System.Boolean OVROverlay::useLegacyCubemapRotation
	bool ___useLegacyCubemapRotation_32;
	// System.Boolean OVROverlay::useEfficientSupersample
	bool ___useEfficientSupersample_33;
	// System.Boolean OVROverlay::useEfficientSharpen
	bool ___useEfficientSharpen_34;
	// System.Boolean OVROverlay::_previewInEditor
	bool ____previewInEditor_35;
	// System.IntPtr[] OVROverlay::texturePtrs
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___texturePtrs_36;
	// System.IntPtr OVROverlay::externalSurfaceObject
	intptr_t ___externalSurfaceObject_37;
	// OVROverlay/ExternalSurfaceObjectCreated OVROverlay::externalSurfaceObjectCreated
	ExternalSurfaceObjectCreated_tBAE280613D86A040CC365995D817E30254FDEF1A* ___externalSurfaceObjectCreated_38;
	// System.Boolean OVROverlay::isOverridePending
	bool ___isOverridePending_39;
	// System.Int32 OVROverlay::<layerId>k__BackingField
	int32_t ___U3ClayerIdU3Ek__BackingField_42;
	// OVROverlay/LayerTexture[] OVROverlay::layerTextures
	LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB* ___layerTextures_45;
	// OVRPlugin/LayerDesc OVROverlay::layerDesc
	LayerDesc_t4528A22F36B454D6137754D6033AC8EF68A8DA75 ___layerDesc_46;
	// System.Int32 OVROverlay::stageCount
	int32_t ___stageCount_47;
	// System.Int32 OVROverlay::layerIndex
	int32_t ___layerIndex_48;
	// System.Runtime.InteropServices.GCHandle OVROverlay::layerIdHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___layerIdHandle_49;
	// System.IntPtr OVROverlay::layerIdPtr
	intptr_t ___layerIdPtr_50;
	// System.Int32 OVROverlay::frameIndex
	int32_t ___frameIndex_51;
	// System.Int32 OVROverlay::prevFrameIndex
	int32_t ___prevFrameIndex_52;
	// UnityEngine.Renderer OVROverlay::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_53;
	// System.UInt64 OVROverlay::OpenVROverlayHandle
	uint64_t ___OpenVROverlayHandle_54;
	// UnityEngine.Vector4 OVROverlay::OpenVRUVOffsetAndScale
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___OpenVRUVOffsetAndScale_55;
	// UnityEngine.Vector2 OVROverlay::OpenVRMouseScale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___OpenVRMouseScale_56;
	// OVRManager/XRDevice OVROverlay::constructedOverlayXRDevice
	int32_t ___constructedOverlayXRDevice_57;
	// System.Boolean OVROverlay::xrDeviceConstructed
	bool ___xrDeviceConstructed_58;
};

struct OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D_StaticFields
{
	// OVROverlay[] OVROverlay::instances
	OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D* ___instances_41;
	// UnityEngine.Material OVROverlay::tex2DMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tex2DMaterial_43;
	// UnityEngine.Material OVROverlay::cubeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cubeMaterial_44;
};

// OculusSampleFramework.OVROverlaySample
struct OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean OculusSampleFramework.OVROverlaySample::inMenu
	bool ___inMenu_4;
	// UnityEngine.UI.Toggle OculusSampleFramework.OVROverlaySample::applicationRadioButton
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___applicationRadioButton_8;
	// UnityEngine.UI.Toggle OculusSampleFramework.OVROverlaySample::noneRadioButton
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___noneRadioButton_9;
	// UnityEngine.GameObject OculusSampleFramework.OVROverlaySample::mainCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainCamera_10;
	// UnityEngine.GameObject OculusSampleFramework.OVROverlaySample::uiCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiCamera_11;
	// UnityEngine.GameObject OculusSampleFramework.OVROverlaySample::uiGeoParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiGeoParent_12;
	// UnityEngine.GameObject OculusSampleFramework.OVROverlaySample::worldspaceGeoParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___worldspaceGeoParent_13;
	// OVROverlay OculusSampleFramework.OVROverlaySample::cameraRenderOverlay
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* ___cameraRenderOverlay_14;
	// OVROverlay OculusSampleFramework.OVROverlaySample::renderingLabelOverlay
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* ___renderingLabelOverlay_15;
	// UnityEngine.Texture OculusSampleFramework.OVROverlaySample::applicationLabelTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___applicationLabelTexture_16;
	// UnityEngine.Texture OculusSampleFramework.OVROverlaySample::compositorLabelTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___compositorLabelTexture_17;
	// UnityEngine.GameObject OculusSampleFramework.OVROverlaySample::prefabForLevelLoadSim
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabForLevelLoadSim_18;
	// OVROverlay OculusSampleFramework.OVROverlaySample::cubemapOverlay
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* ___cubemapOverlay_19;
	// OVROverlay OculusSampleFramework.OVROverlaySample::loadingTextQuadOverlay
	OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* ___loadingTextQuadOverlay_20;
	// System.Single OculusSampleFramework.OVROverlaySample::distanceFromCamToLoadText
	float ___distanceFromCamToLoadText_21;
	// System.Single OculusSampleFramework.OVROverlaySample::cubeSpawnRadius
	float ___cubeSpawnRadius_22;
	// System.Single OculusSampleFramework.OVROverlaySample::heightBetweenItems
	float ___heightBetweenItems_23;
	// System.Int32 OculusSampleFramework.OVROverlaySample::numObjectsPerLevel
	int32_t ___numObjectsPerLevel_24;
	// System.Int32 OculusSampleFramework.OVROverlaySample::numLevels
	int32_t ___numLevels_25;
	// System.Int32 OculusSampleFramework.OVROverlaySample::numLoopsTrigger
	int32_t ___numLoopsTrigger_26;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> OculusSampleFramework.OVROverlaySample::spawnedCubes
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___spawnedCubes_27;
};

// OculusSampleFramework.SelectionCylinder
struct SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer OculusSampleFramework.SelectionCylinder::_selectionMeshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____selectionMeshRenderer_4;
	// UnityEngine.Material[] OculusSampleFramework.SelectionCylinder::_selectionMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____selectionMaterials_6;
	// UnityEngine.Color[] OculusSampleFramework.SelectionCylinder::_defaultSelectionColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____defaultSelectionColors_7;
	// UnityEngine.Color[] OculusSampleFramework.SelectionCylinder::_highlightColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____highlightColors_8;
	// OculusSampleFramework.SelectionCylinder/SelectionState OculusSampleFramework.SelectionCylinder::_currSelectionState
	int32_t ____currSelectionState_9;
};

struct SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E_StaticFields
{
	// System.Int32 OculusSampleFramework.SelectionCylinder::_colorId
	int32_t ____colorId_5;
};

// OVRTouchSample.TouchController
struct TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRInput/Controller OVRTouchSample.TouchController::m_controller
	int32_t ___m_controller_4;
	// UnityEngine.Animator OVRTouchSample.TouchController::m_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_animator_5;
	// System.Boolean OVRTouchSample.TouchController::m_restoreOnInputAcquired
	bool ___m_restoreOnInputAcquired_6;
};

// OculusSampleFramework.TrackSegment
struct TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OculusSampleFramework.TrackSegment/SegmentType OculusSampleFramework.TrackSegment::_segmentType
	int32_t ____segmentType_4;
	// UnityEngine.MeshFilter OculusSampleFramework.TrackSegment::_straight
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____straight_5;
	// UnityEngine.MeshFilter OculusSampleFramework.TrackSegment::_leftTurn
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____leftTurn_6;
	// UnityEngine.MeshFilter OculusSampleFramework.TrackSegment::_rightTurn
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____rightTurn_7;
	// System.Single OculusSampleFramework.TrackSegment::_gridSize
	float ____gridSize_8;
	// System.Int32 OculusSampleFramework.TrackSegment::_subDivCount
	int32_t ____subDivCount_9;
	// UnityEngine.GameObject OculusSampleFramework.TrackSegment::_mesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mesh_12;
	// System.Single OculusSampleFramework.TrackSegment::<StartDistance>k__BackingField
	float ___U3CStartDistanceU3Ek__BackingField_13;
	// OculusSampleFramework.Pose OculusSampleFramework.TrackSegment::_p1
	Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* ____p1_14;
	// OculusSampleFramework.Pose OculusSampleFramework.TrackSegment::_p2
	Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* ____p2_15;
	// OculusSampleFramework.Pose OculusSampleFramework.TrackSegment::_endPose
	Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* ____endPose_16;
};

// OculusSampleFramework.TrainButtonVisualController
struct TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer OculusSampleFramework.TrainButtonVisualController::_meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____meshRenderer_6;
	// UnityEngine.MeshRenderer OculusSampleFramework.TrainButtonVisualController::_glowRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____glowRenderer_7;
	// OculusSampleFramework.ButtonController OculusSampleFramework.TrainButtonVisualController::_buttonController
	ButtonController_t1660558E417C701B092265A45EBC1795F1DBBC79* ____buttonController_8;
	// UnityEngine.Color OculusSampleFramework.TrainButtonVisualController::_buttonContactColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____buttonContactColor_9;
	// UnityEngine.Color OculusSampleFramework.TrainButtonVisualController::_buttonActionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____buttonActionColor_10;
	// UnityEngine.AudioSource OculusSampleFramework.TrainButtonVisualController::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_11;
	// UnityEngine.AudioClip OculusSampleFramework.TrainButtonVisualController::_actionSoundEffect
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____actionSoundEffect_12;
	// UnityEngine.Transform OculusSampleFramework.TrainButtonVisualController::_buttonContactTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____buttonContactTransform_13;
	// System.Single OculusSampleFramework.TrainButtonVisualController::_contactMaxDisplacementDistance
	float ____contactMaxDisplacementDistance_14;
	// UnityEngine.Material OculusSampleFramework.TrainButtonVisualController::_buttonMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____buttonMaterial_15;
	// UnityEngine.Color OculusSampleFramework.TrainButtonVisualController::_buttonDefaultColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____buttonDefaultColor_16;
	// System.Int32 OculusSampleFramework.TrainButtonVisualController::_materialColorId
	int32_t ____materialColorId_17;
	// System.Boolean OculusSampleFramework.TrainButtonVisualController::_buttonInContactOrActionStates
	bool ____buttonInContactOrActionStates_18;
	// UnityEngine.Coroutine OculusSampleFramework.TrainButtonVisualController::_lerpToOldPositionCr
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____lerpToOldPositionCr_19;
	// UnityEngine.Vector3 OculusSampleFramework.TrainButtonVisualController::_oldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____oldPosition_20;
};

// OculusSampleFramework.TrainCarBase
struct TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform OculusSampleFramework.TrainCarBase::_frontWheels
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____frontWheels_7;
	// UnityEngine.Transform OculusSampleFramework.TrainCarBase::_rearWheels
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____rearWheels_8;
	// OculusSampleFramework.TrainTrack OculusSampleFramework.TrainCarBase::_trainTrack
	TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* ____trainTrack_9;
	// UnityEngine.Transform[] OculusSampleFramework.TrainCarBase::_individualWheels
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____individualWheels_10;
	// System.Single OculusSampleFramework.TrainCarBase::<Distance>k__BackingField
	float ___U3CDistanceU3Ek__BackingField_11;
	// System.Single OculusSampleFramework.TrainCarBase::scale
	float ___scale_12;
	// OculusSampleFramework.Pose OculusSampleFramework.TrainCarBase::_frontPose
	Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* ____frontPose_13;
	// OculusSampleFramework.Pose OculusSampleFramework.TrainCarBase::_rearPose
	Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* ____rearPose_14;
};

struct TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_StaticFields
{
	// UnityEngine.Vector3 OculusSampleFramework.TrainCarBase::OFFSET
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OFFSET_4;
};

// OculusSampleFramework.TrainCrossingController
struct TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource OculusSampleFramework.TrainCrossingController::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_4;
	// UnityEngine.AudioClip[] OculusSampleFramework.TrainCrossingController::_crossingSounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ____crossingSounds_5;
	// UnityEngine.MeshRenderer OculusSampleFramework.TrainCrossingController::_lightSide1Renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____lightSide1Renderer_6;
	// UnityEngine.MeshRenderer OculusSampleFramework.TrainCrossingController::_lightSide2Renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____lightSide2Renderer_7;
	// OculusSampleFramework.SelectionCylinder OculusSampleFramework.TrainCrossingController::_selectionCylinder
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* ____selectionCylinder_8;
	// UnityEngine.Material OculusSampleFramework.TrainCrossingController::_lightsSide1Mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____lightsSide1Mat_9;
	// UnityEngine.Material OculusSampleFramework.TrainCrossingController::_lightsSide2Mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____lightsSide2Mat_10;
	// System.Int32 OculusSampleFramework.TrainCrossingController::_colorId
	int32_t ____colorId_11;
	// UnityEngine.Coroutine OculusSampleFramework.TrainCrossingController::_xingAnimationCr
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____xingAnimationCr_12;
	// OculusSampleFramework.InteractableTool OculusSampleFramework.TrainCrossingController::_toolInteractingWithMe
	InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* ____toolInteractingWithMe_13;
};

// OculusSampleFramework.TrainTrack
struct TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OculusSampleFramework.TrainTrack::_gridSize
	float ____gridSize_4;
	// System.Int32 OculusSampleFramework.TrainTrack::_subDivCount
	int32_t ____subDivCount_5;
	// UnityEngine.Transform OculusSampleFramework.TrainTrack::_segmentParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____segmentParent_6;
	// UnityEngine.Transform OculusSampleFramework.TrainTrack::_trainParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trainParent_7;
	// System.Boolean OculusSampleFramework.TrainTrack::_regnerateTrackMeshOnAwake
	bool ____regnerateTrackMeshOnAwake_8;
	// System.Single OculusSampleFramework.TrainTrack::_trainLength
	float ____trainLength_9;
	// OculusSampleFramework.TrackSegment[] OculusSampleFramework.TrainTrack::_trackSegments
	TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295* ____trackSegments_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OculusSampleFramework.WindmillBladesController
struct WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource OculusSampleFramework.WindmillBladesController::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_5;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController::_windMillRotationSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____windMillRotationSound_6;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController::_windMillStartSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____windMillStartSound_7;
	// UnityEngine.AudioClip OculusSampleFramework.WindmillBladesController::_windMillStopSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____windMillStopSound_8;
	// System.Boolean OculusSampleFramework.WindmillBladesController::<IsMoving>k__BackingField
	bool ___U3CIsMovingU3Ek__BackingField_9;
	// System.Single OculusSampleFramework.WindmillBladesController::_currentSpeed
	float ____currentSpeed_10;
	// UnityEngine.Coroutine OculusSampleFramework.WindmillBladesController::_lerpSpeedCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____lerpSpeedCoroutine_11;
	// UnityEngine.Coroutine OculusSampleFramework.WindmillBladesController::_audioChangeCr
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____audioChangeCr_12;
	// UnityEngine.Quaternion OculusSampleFramework.WindmillBladesController::_originalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____originalRotation_13;
	// System.Single OculusSampleFramework.WindmillBladesController::_rotAngle
	float ____rotAngle_14;
};

// OculusSampleFramework.WindmillController
struct WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject OculusSampleFramework.WindmillController::_startStopButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____startStopButton_4;
	// System.Single OculusSampleFramework.WindmillController::_maxSpeed
	float ____maxSpeed_5;
	// OculusSampleFramework.SelectionCylinder OculusSampleFramework.WindmillController::_selectionCylinder
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* ____selectionCylinder_6;
	// OculusSampleFramework.WindmillBladesController OculusSampleFramework.WindmillController::_bladesRotation
	WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* ____bladesRotation_7;
	// OculusSampleFramework.InteractableTool OculusSampleFramework.WindmillController::_toolInteractingWithMe
	InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* ____toolInteractingWithMe_8;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// OculusSampleFramework.TrainCar
struct TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D  : public TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616
{
	// OculusSampleFramework.TrainCarBase OculusSampleFramework.TrainCar::_parentLocomotive
	TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* ____parentLocomotive_15;
	// System.Single OculusSampleFramework.TrainCar::_distanceBehindParent
	float ____distanceBehindParent_16;
};

// OculusSampleFramework.TrainLocomotive
struct TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E  : public TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616
{
	// System.Single OculusSampleFramework.TrainLocomotive::_initialSpeed
	float ____initialSpeed_19;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_startStopButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____startStopButton_20;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_decreaseSpeedButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____decreaseSpeedButton_21;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_increaseSpeedButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____increaseSpeedButton_22;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_smokeButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____smokeButton_23;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_whistleButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____whistleButton_24;
	// UnityEngine.GameObject OculusSampleFramework.TrainLocomotive::_reverseButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____reverseButton_25;
	// UnityEngine.AudioSource OculusSampleFramework.TrainLocomotive::_whistleAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____whistleAudioSource_26;
	// UnityEngine.AudioClip OculusSampleFramework.TrainLocomotive::_whistleSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____whistleSound_27;
	// UnityEngine.AudioSource OculusSampleFramework.TrainLocomotive::_engineAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____engineAudioSource_28;
	// UnityEngine.AudioClip[] OculusSampleFramework.TrainLocomotive::_accelerationSounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ____accelerationSounds_29;
	// UnityEngine.AudioClip[] OculusSampleFramework.TrainLocomotive::_decelerationSounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ____decelerationSounds_30;
	// UnityEngine.AudioClip OculusSampleFramework.TrainLocomotive::_startUpSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____startUpSound_31;
	// UnityEngine.AudioSource OculusSampleFramework.TrainLocomotive::_smokeStackAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____smokeStackAudioSource_32;
	// UnityEngine.AudioClip OculusSampleFramework.TrainLocomotive::_smokeSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____smokeSound_33;
	// UnityEngine.ParticleSystem OculusSampleFramework.TrainLocomotive::_smoke1
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ____smoke1_34;
	// UnityEngine.ParticleSystem OculusSampleFramework.TrainLocomotive::_smoke2
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ____smoke2_35;
	// OculusSampleFramework.TrainCarBase[] OculusSampleFramework.TrainLocomotive::_childCars
	TrainCarBaseU5BU5D_t6F8E5463CC2FF62ADD249184806D420B00F70B8A* ____childCars_36;
	// System.Boolean OculusSampleFramework.TrainLocomotive::_isMoving
	bool ____isMoving_37;
	// System.Boolean OculusSampleFramework.TrainLocomotive::_reverse
	bool ____reverse_38;
	// System.Single OculusSampleFramework.TrainLocomotive::_currentSpeed
	float ____currentSpeed_39;
	// System.Single OculusSampleFramework.TrainLocomotive::_speedDiv
	float ____speedDiv_40;
	// System.Single OculusSampleFramework.TrainLocomotive::_standardRateOverTimeMultiplier
	float ____standardRateOverTimeMultiplier_41;
	// System.Int32 OculusSampleFramework.TrainLocomotive::_standardMaxParticles
	int32_t ____standardMaxParticles_42;
	// UnityEngine.Coroutine OculusSampleFramework.TrainLocomotive::_startStopTrainCr
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____startStopTrainCr_43;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OculusSampleFramework.TrainCarBase[]
struct TrainCarBaseU5BU5D_t6F8E5463CC2FF62ADD249184806D420B00F70B8A  : public RuntimeArray
{
	ALIGN_FIELD (8) TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* m_Items[1];

	inline TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OculusSampleFramework.TrackSegment[]
struct TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295  : public RuntimeArray
{
	ALIGN_FIELD (8) TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* m_Items[1];

	inline TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OculusSampleFramework.TrainCar[]
struct TrainCarU5BU5D_t7CFF4CCAF90716935B7C8324466A6326DB2414DD  : public RuntimeArray
{
	ALIGN_FIELD (8) TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* m_Items[1];

	inline TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* m_Items[1];

	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F  : public RuntimeArray
{
	ALIGN_FIELD (8) FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* m_Items[1];

	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89  : public RuntimeArray
{
	ALIGN_FIELD (8) GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* m_Items[1];

	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66  : public RuntimeArray
{
	ALIGN_FIELD (8) Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* m_Items[1];

	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.MessageParser`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared (MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___factory0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoPreconditions_CheckNotNull_TisRuntimeObject_mF2D50EEA285EC24C4A33857428197C8C1ACA1B88_gshared (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Grpc.Core.UnaryServerMethod`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryServerMethod_2__ctor_mAF6A26DC98B3BB24B271BC100C80D2AFDA4D95FC_gshared (UnaryServerMethod_2_tBDE10CB7EBAD233A230E5ACBD856993B65E23969* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Grpc.Core.ServerServiceDefinition/Builder Grpc.Core.ServerServiceDefinition/Builder::AddMethod<System.Object,System.Object>(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.UnaryServerMethod`2<TRequest,TResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* Builder_AddMethod_TisRuntimeObject_TisRuntimeObject_mE12C0C8A385661AEFCC59885B555EF5CB03C07B6_gshared (Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* __this, Method_2_tA105D4DFA48BEB7BBD46C116F6AAA7F6E7CCFF40* ___method0, UnaryServerMethod_2_tBDE10CB7EBAD233A230E5ACBD856993B65E23969* ___handler1, const RuntimeMethod* method) ;
// System.Void Grpc.Core.DuplexStreamingServerMethod`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplexStreamingServerMethod_2__ctor_mE20EA05D87B02F828854BF86FDFD86AA5DA3DC0D_gshared (DuplexStreamingServerMethod_2_t15AD8F3F79481860BD3F296981B7CE3866A161B5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Grpc.Core.ServerServiceDefinition/Builder Grpc.Core.ServerServiceDefinition/Builder::AddMethod<System.Object,System.Object>(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.DuplexStreamingServerMethod`2<TRequest,TResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* Builder_AddMethod_TisRuntimeObject_TisRuntimeObject_m0F9E701879FC3AED130CBB1E39B578640CC24D2C_gshared (Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* __this, Method_2_tA105D4DFA48BEB7BBD46C116F6AAA7F6E7CCFF40* ___method0, DuplexStreamingServerMethod_2_t15AD8F3F79481860BD3F296981B7CE3866A161B5* ___handler1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Grpc.Core.Marshaller`1<T> Grpc.Core.Marshallers::Create<System.Object>(System.Action`2<T,Grpc.Core.SerializationContext>,System.Func`2<Grpc.Core.DeserializationContext,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marshaller_1_t5AF2761BFFFBF2DF3FEBBAA0BEEE874BA4435EC4* Marshallers_Create_TisRuntimeObject_m7CA97A0E9C6133A043DA26A05240F39357832B78_gshared (Action_2_t9C3590BB6FA76D4CD869048A98FE5C158BE881BA* ___serializer0, Func_2_t2DC2C5441D486EE2BD4532265546F3F07AF53252* ___deserializer1, const RuntimeMethod* method) ;
// System.Void Grpc.Core.Method`2<System.Object,System.Object>::.ctor(Grpc.Core.MethodType,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Method_2__ctor_m59F2E5F7600E5D35CF970FB54BBC5E1E1F25EA5B_gshared (Method_2_tA105D4DFA48BEB7BBD46C116F6AAA7F6E7CCFF40* __this, int32_t ___type0, String_t* ___serviceName1, String_t* ___name2, Marshaller_1_t5AF2761BFFFBF2DF3FEBBAA0BEEE874BA4435EC4* ___requestMarshaller3, Marshaller_1_t5AF2761BFFFBF2DF3FEBBAA0BEEE874BA4435EC4* ___responseMarshaller4, const RuntimeMethod* method) ;
// System.Void Grpc.Core.ClientBase`1<System.Object>::.ctor(Grpc.Core.ChannelBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_1__ctor_mB9A81C5888BAD6871A08BB1D2936F447EB48CE3D_gshared (ClientBase_1_t823373CF768205918D40859F59FAD9398A5D444A* __this, ChannelBase_tD276AC64DE64B8C1BFD85654A280D93E69DA40E5* ___channel0, const RuntimeMethod* method) ;
// System.Void Grpc.Core.ClientBase`1<System.Object>::.ctor(Grpc.Core.CallInvoker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_1__ctor_m4D7C60B99BC8E8B26A1FC91300756FC44A26F20E_gshared (ClientBase_1_t823373CF768205918D40859F59FAD9398A5D444A* __this, CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* ___callInvoker0, const RuntimeMethod* method) ;
// System.Void Grpc.Core.ClientBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_1__ctor_m69B52A5E60AF015636687A0F2BB3B0ABA77F0A94_gshared (ClientBase_1_t823373CF768205918D40859F59FAD9398A5D444A* __this, const RuntimeMethod* method) ;
// System.Void Grpc.Core.ClientBase`1<System.Object>::.ctor(Grpc.Core.ClientBase/ClientBaseConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_1__ctor_m1B96E191DC96C641061B317489E78E19BC5DB976_gshared (ClientBase_1_t823373CF768205918D40859F59FAD9398A5D444A* __this, ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D* ___configuration0, const RuntimeMethod* method) ;
// T CAr.Control::__Helper_DeserializeMessage<System.Object>(Grpc.Core.DeserializationContext,Google.Protobuf.MessageParser`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Control___Helper_DeserializeMessage_TisRuntimeObject_mB17412941029A18B9A26930FD6034C84F14013BD_gshared (DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* ___context0, MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F* ___parser1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainCarBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_Awake_mC68B7251E7AA8D2AC3574B546B257EBBD080A55A (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) ;
// System.Single OculusSampleFramework.TrainCarBase::get_Distance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TrainCarBase_get_Distance_m6B93FAF6496C152333743CEA7AAB979B5456A044_inline (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) ;
// System.Single OculusSampleFramework.TrainCar::get_DistanceBehindParentScaled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainCar_get_DistanceBehindParentScaled_mFEE16D2E68DF136E196620E3E4AB6FA93E18D333 (TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainCarBase::set_Distance(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrainCarBase_set_Distance_mF9D78037A307E9060BC95667FA44CF820A0F13DD_inline (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainCarBase::UpdateCarPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_UpdateCarPosition_mA4D577CE3C64E1AA19FD8EBF89536A588A473F50 (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainCarBase::RotateCarWheels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_RotateCarWheels_m1B3BCB04D6F4E79C3BF098AF4C6582C2D76A000D (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainCarBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase__ctor_mAB1702EA386CA6F2156F8E03595B2D0E4C57FC4E (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) ;
// System.Single OculusSampleFramework.TrainTrack::get_TrackLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TrainTrack_get_TrackLength_m007CB823F48E12E88CCC143F734431A3148B99AE_inline (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, const RuntimeMethod* method) ;
// OculusSampleFramework.TrackSegment OculusSampleFramework.TrainTrack::GetSegment(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* TrainTrack_GetSegment_mCD8849640D747C216ABBD0C2417FB3C0AE7C19F7 (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, float ___distance0, const RuntimeMethod* method) ;
// System.Single OculusSampleFramework.TrackSegment::get_StartDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TrackSegment_get_StartDistance_mBC42F0134B39A7E31F1278FB09717ABB946E97BF_inline (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrackSegment::UpdatePose(System.Single,OculusSampleFramework.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_UpdatePose_m9A235DC90FC16A7B9FDA09106B3E8C19B2CFDCC0 (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, float ___distanceIntoSegment0, Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* ___pose1, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainCarBase::UpdatePose(System.Single,OculusSampleFramework.TrainCarBase,OculusSampleFramework.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_UpdatePose_m7B5E48663084D97D3227F7C3AC028406E214312D (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, float ___distance0, TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* ___train1, Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* ___pose2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.Pose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m64168E925BDA4409B159DE34F1E287CACB5C9C6D (Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainCrossingController::ActivateTrainCrossing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_ActivateTrainCrossing_mD577E824ECE26ACE5CF2D775AA75948973C2ADA5 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.SelectionCylinder::set_CurrSelectionState(OculusSampleFramework.SelectionCylinder/SelectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionCylinder_set_CurrSelectionState_m6A22A6076B7C0F359A67BB3F92C5F44891F88546 (SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_timeSamples(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator OculusSampleFramework.TrainCrossingController::AnimateCrossing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrainCrossingController_AnimateCrossing_m1EBE094532926C6F7B089C92DDE575C011DA3DAA (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, float ___animationLength0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateCrossingU3Ed__15__ctor_m663FB6CE1AADE77FC6FF0BBCE339F7D0D01496C3 (U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainCrossingController::ToggleLightObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_ToggleLightObjects_mAFC81037C7641441E6375A6558FCF8FEFD33D574 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, bool ___enableState0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/EmissionModule::get_rateOverTimeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EmissionModule_get_rateOverTimeMultiplier_m9BD9DA04BD762F6E7C22D025DC86CB6B96227867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator OculusSampleFramework.TrainLocomotive::StartStopTrain(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrainLocomotive_StartStopTrain_m923C25578C7E5C83CA661CAD2745DA6F4F6D627C (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, bool ___startTrain0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainLocomotive::UpdateDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_UpdateDistance_m351865CC93F07988D15D8761D395D428C8E7D3C9 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStopTrainU3Ed__34__ctor_m6C4C1E9485DE26EBB56AECA7A016C2D7C963E0BE (U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainLocomotive::UpdateSmokeEmissionBasedOnSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_UpdateSmokeEmissionBasedOnSpeed_m7BB7210DD00DC5FAAFBC5C8C6ABB2AAED02ADBF6 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) ;
// System.Single OculusSampleFramework.TrainLocomotive::PlayEngineSound(OculusSampleFramework.TrainLocomotive/EngineSoundState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainLocomotive_PlayEngineSound_mD69FE8AAA9D99F0F9A25D6F5A76CFFEF51B17A45 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, int32_t ___engineSoundState0, const RuntimeMethod* method) ;
// System.Single OculusSampleFramework.TrainLocomotive::GetCurrentSmokeEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainLocomotive_GetCurrentSmokeEmission_m9594D49C603189779E03F66211972D864E28633C (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTimeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverTimeMultiplier_mB15A82A2C188437DA4432F4402731132F64259EC (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_set_time_mD7AF2E34304DBF8ED9ECA84710C0871B184B73EC (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainTrack::Regenerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainTrack_Regenerate_mF5741B178A8DA4D1C8C5F327028D4E146EFF37F6 (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<OculusSampleFramework.TrackSegment>()
inline TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295* Component_GetComponentsInChildren_TisTrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680_m4496ABBB105279A0038A9E35859784E5E7F2FCB6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void OculusSampleFramework.TrainTrack::set_TrackLength(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrainTrack_set_TrackLength_mBD68D6F4FD33127524693DA99B9FD30A0577B7C4_inline (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrackSegment::set_SubDivCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackSegment_set_SubDivCount_mAEB68B90E1330424ADEBF83CDE32D99F267DDE7C_inline (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single OculusSampleFramework.TrackSegment::setGridSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrackSegment_setGridSize_mEECA9D39E76EEB2C6E1470BA3C2CCFFD7536434B (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, float ___size0, const RuntimeMethod* method) ;
// OculusSampleFramework.Pose OculusSampleFramework.TrackSegment::get_EndPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* TrackSegment_get_EndPose_m56C4F14D6358D2B3AD9AD4CAB7A932C707A6A71E (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrackSegment::set_StartDistance(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackSegment_set_StartDistance_mF619D4B1E344E9677DB748117EB3FF4043BB6408_inline (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrackSegment::RegenerateTrackAndMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackSegment_RegenerateTrackAndMesh_m210279986500F48ABC2C0D0F511A219220D96D1A (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, const RuntimeMethod* method) ;
// System.Single OculusSampleFramework.TrackSegment::get_SegmentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrackSegment_get_SegmentLength_m4DC97686445AB361249093727801A0A7BCCE4C65 (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.TrainTrack::SetScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainTrack_SetScale_mD3CAB2E3C6842CAB864DD896209C2257E701E0A2 (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, float ___ratio0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<OculusSampleFramework.TrainCar>()
inline TrainCarU5BU5D_t7CFF4CCAF90716935B7C8324466A6326DB2414DD* Component_GetComponentsInChildren_TisTrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D_m6458A84700BCD1DA009674C73A5E7E028C2D32EC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TrainCarU5BU5D_t7CFF4CCAF90716935B7C8324466A6326DB2414DD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<OculusSampleFramework.TrainLocomotive>()
inline TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* Component_GetComponentInChildren_TisTrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E_m95FCA4CB92F6DE57BE094BDD6974BC757B586B70 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void OculusSampleFramework.TrainCarBase::set_Scale(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrainCarBase_set_Scale_m79E7EF54132ABFF88F00D49ED9C11D7E611D7626_inline (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.WindmillBladesController::set_IsMoving(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindmillBladesController_set_IsMoving_m35BF95FD16ABE573A75F2EC033A2D7068A02B1A2_inline (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator OculusSampleFramework.WindmillBladesController::LerpToSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindmillBladesController_LerpToSpeed_mBC880C7530D09D0E982942CAF3BB246B5FE1BB30 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, float ___goalSpeed0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToSpeedU3Ed__17__ctor_mB0644DFE449B8E167768389988830FD1FBC2B821 (U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySoundDelayedU3Ed__18__ctor_mA399B2FD06607BD5B6C8EAA9A1B97B164B27E033 (U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean OculusSampleFramework.WindmillBladesController::get_IsMoving()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindmillBladesController_get_IsMoving_mD9B1B60A86AAD2EA43A7F88C45ECD4256D024540_inline (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator OculusSampleFramework.WindmillBladesController::PlaySoundDelayed(UnityEngine.AudioClip,UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindmillBladesController_PlaySoundDelayed_m2F25974FC738C03CBAB13838C100CC4616A28272 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___initial0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, float ___timeDelayAfterInitial2, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.WindmillBladesController::PlaySound(UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillBladesController_PlaySound_m18ED2161A9FB0F7F84AA0A42BC5B0FCF3E4B2B89 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, bool ___loop1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<OculusSampleFramework.WindmillBladesController>()
inline WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* Component_GetComponentInChildren_TisWindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616_m53755224721F80FC4D0EB82D4A8BAA35EFF514C4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void OculusSampleFramework.WindmillBladesController::SetMoveState(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillBladesController_SetMoveState_mDD25E6E8190A0584599E3B3E7B44DF5ED1204BCE (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, bool ___newMoveState0, float ___goalSpeed1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<OculusSampleFramework.Interactable>()
inline Interactable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2* GameObject_GetComponent_TisInteractable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2_m0CDEA8EF47A15EFA3EB104C354E834030C56E3D3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Interactable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<OculusSampleFramework.InteractableStateArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD32C805751448D299B2AD38CB38D9B216645D7EF (UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<OculusSampleFramework.InteractableStateArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m35712670895235C4BB2182DB1E18A434907F5623 (UnityEvent_1_t1ED2AE761CB7C186AC6B6A8C5BE14C7204486168* __this, UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1ED2AE761CB7C186AC6B6A8C5BE14C7204486168*, UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<OculusSampleFramework.InteractableStateArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mF45099DCD5F62281322F30AF7675AC22B695B39E (UnityEvent_1_t1ED2AE761CB7C186AC6B6A8C5BE14C7204486168* __this, UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1ED2AE761CB7C186AC6B6A8C5BE14C7204486168*, UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// UnityEngine.RectTransform DebugUIBuilder::AddLabel(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* DebugUIBuilder_AddLabel_mDA7A36FB7E174675CF6B89ADB36DFA9942041BF5 (DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* __this, String_t* ___label0, int32_t ___targetCanvas1, const RuntimeMethod* method) ;
// UnityEngine.RectTransform DebugUIBuilder::AddDivider(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* DebugUIBuilder_AddDivider_m422E4FFC43FA0E01952FD54C4824D2FFD7D66B36 (DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* __this, int32_t ___targetCanvas0, const RuntimeMethod* method) ;
// System.Void DebugUIBuilder/OnClick::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClick__ctor_mD9D3372ACB4997A58C1906B38F2DCFDFB6FFC43C (OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.RectTransform DebugUIBuilder::AddButton(System.String,DebugUIBuilder/OnClick,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* DebugUIBuilder_AddButton_m44565B7C2818D3257AEA9F089D4543BB4DC2A281 (DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* __this, String_t* ___label0, OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A* ___handler1, int32_t ___buttonIndex2, int32_t ___targetCanvas3, bool ___highResolutionText4, const RuntimeMethod* method) ;
// System.Void DebugUIBuilder/OnToggleValueChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnToggleValueChange__ctor_m81EEBC5B36970EDB4EACDE8894B2B7B9EEB6C329 (OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.RectTransform DebugUIBuilder::AddRadio(System.String,System.String,DebugUIBuilder/OnToggleValueChange,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* DebugUIBuilder_AddRadio_m31C361F6A061B4AF438965B4B419716D8A83BBA8 (DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* __this, String_t* ___label0, String_t* ___group1, OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF* ___handler2, int32_t ___targetCanvas3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void DebugUIBuilder::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugUIBuilder_Show_mC497EDD3C65CD45F75CB8E5EBBF09FD2C114762B (DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.OVROverlaySample::CameraAndRenderTargetSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_CameraAndRenderTargetSetup_m11F17E86B063E668865D6609C34F35CD7B2971D4 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.Boolean OVRInput::GetDown(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_GetDown_mEC4F71AEC93D3AF1A041934CA4C61680C6DB9AC7 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Void DebugUIBuilder::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugUIBuilder_Hide_mF366B8F84533FB83A4C33F0F67D6B0CF3E24398D (DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.OVROverlaySample::TriggerLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_TriggerLoad_m700D3A873346D40C61B4E35D6222810766FB7C1D (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator OculusSampleFramework.OVROverlaySample::WaitforOVROverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OVROverlaySample_WaitforOVROverlay_m95BB31F1A213D15CF49403AE039AF22020A247D4 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitforOVROverlayU3Ed__30__ctor_m0E99904CB71976828C93D3272159FFCA84910576 (U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.OVROverlaySample::ClearObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_ClearObjects_mBA47743D458D9E9D10AB68E7BE3A0D48544AB196 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m68A1B9CAA1BE0B597C5F4895C296E21502D0C962 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___readWrite4, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7 (const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mDD60C5A044BA55A136F7B84B48BBD99353F4EB4C (String_t* ___strA0, String_t* ___strB1, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.OVROverlaySample::ActivateOVROverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_ActivateOVROverlay_m7FCA427103D87A7C638BEF78FB7AF8948500D5FE (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.OVROverlaySample::ActivateWorldGeo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_ActivateWorldGeo_m74C9008C097DBA62BE342D8AF7E46F84ED5F6EDF (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.OVROverlaySample::ActivateNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_ActivateNone_mDD9A990EF43A0880841D0C54EDA214B3D8CA19D7 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void OculusSampleFramework.OVROverlaySample::RadioPressed(System.String,System.String,UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_RadioPressed_m6068363BDF1AFFEE1B74DAFD7080B7ADC1393D06 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, String_t* ___radioLabel0, String_t* ___group1, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void OculusSampleFramework.OVROverlaySample::SimulateLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_SimulateLevelLoad_m05A45D3B3318612EE2234AC0CF95357BC58446BB (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<OVRGrabber>()
inline OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* Component_GetComponent_TisOVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC_mC820FC13FAD6DC529D204CDC86DF3E1C6A918B9A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::.ctor()
inline void List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void System.Func`2<UnityEngine.Collider,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m864A52B06CBC2998220EBC26DE6F9AF4FC6BF864 (Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UnityEngine.Collider>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786 (RuntimeObject* ___source0, Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Collider>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Enumerable_ToArray_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m1A489F1406F2CD15719E60F537BD5AA4FB036808 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void OVRTouchSample.Hand::CollisionEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_CollisionEnable_mE84E4E5CDE7F8D524DD175035E51B336E09871A4 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, bool ___enabled0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void OVRManager::add_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void OVRManager::add_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void OVRManager::remove_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRManager_remove_InputFocusAcquired_m739A9413A8A163181FB382725F8B9B1975368283 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void OVRManager::remove_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRManager_remove_InputFocusLost_m331F5CDD3BACD07943A5A3380702145A744E7172 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void OVRTouchSample.Hand::UpdateCapTouchStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_UpdateCapTouchStates_m00F26FB54506C7C13EA8F4280A7A733E87267272 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) ;
// System.Single OVRTouchSample.Hand::InputValueRateChange(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Hand_InputValueRateChange_m8EE04E1A0BEB06E82FAED24CC0CEE299EA4EA060 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, bool ___isDown0, float ___value1, const RuntimeMethod* method) ;
// System.Single OVRInput::Get(OVRInput/Axis1D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// OVRGrabbable OVRGrabber::get_grabbedObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRGrabbable_t322F6468B588212B888E9397723397A16E7614B5* OVRGrabber_get_grabbedObject_m6A1961622740C23EA69222EFAC1C65D9463A0C1A_inline (OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* __this, const RuntimeMethod* method) ;
// System.Void OVRTouchSample.Hand::UpdateAnimStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_UpdateAnimStates_mDD57A9E1B68086129F50F12BC2ED46FA26C1D996 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) ;
// System.Boolean OVRInput::Get(OVRInput/NearTouch,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_Get_m3231F0E900AB4B2AF1BCBCB2045C6D2AF125C0C7 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Clear()
inline void List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Add(T)
inline void List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Item(System.Int32)
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Count()
inline int32_t List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<OVRTouchSample.HandPose>()
inline HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* Component_GetComponent_TisHandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8_mD6BC519B31A7ED5AF993C7BB5F6291110C4F51F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// OVRTouchSample.HandPoseId OVRTouchSample.HandPose::get_PoseId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPose_get_PoseId_m399F7DCB42FE2A60FFF096C1865DFF5B347F7BDB_inline (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) ;
// System.Boolean OVRTouchSample.HandPose::get_AllowPointing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPose_get_AllowPointing_m19E1786901712E84FD7D2CC113471FF7B2167731_inline (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method) ;
// System.Boolean OVRTouchSample.HandPose::get_AllowThumbsUp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPose_get_AllowThumbsUp_m5B0BCD38FCEEB5512FE9FA49DFDDFB61FA5D5EAF_inline (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void OVRTouchSample.Hand/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B6A45FE68FE591E166EC9969E2356BE51CA2E4F (U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_isTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean OVRInput::Get(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 OVRInput::Get(OVRInput/Axis2D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<CArControls.ThumbstickDirection> CArControls.ThumbstickDirection::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581* ThumbstickDirection_get_Parser_m92D7B7F69B42723A21368CA9048C6765EB606078_inline (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___clrType0, MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___extensions5, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes6, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m6C6F4A657670674B74F3AF88AA06251E4C8DD022 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___extensions1, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes2, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor::FromGeneratedCode(System.Byte[],Google.Protobuf.Reflection.FileDescriptor[],Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FileDescriptor_FromGeneratedCode_mE8458CBFAFB2D3121B5EFC55182A02EAC93E0823 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___descriptorData0, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies1, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo2, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor CArControls.InputReflection::get_Descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* InputReflection_get_Descriptor_mFBB61B9A90717A6D53469B5D7FD25C93520FF6A2_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor CArControls.ThumbstickDirection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ThumbstickDirection_get_Descriptor_m0BA090C078AC6DC6D1B626BBFCDD9E9A1D0AFF88 (const RuntimeMethod* method) ;
// System.Void CArControls.ThumbstickDirection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection__ctor_m263618303267A4FFFFD7B773CFCAE38A5E5BDDC8 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) ;
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::Clone(Google.Protobuf.UnknownFieldSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723 (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ___other0, const RuntimeMethod* method) ;
// System.Void CArControls.ThumbstickDirection::.ctor(CArControls.ThumbstickDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection__ctor_m8DD8657E94E72BDDCA75F95F9FD4D99AC8D4C2A7 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* ___other0, const RuntimeMethod* method) ;
// System.Boolean CArControls.ThumbstickDirection::Equals(CArControls.ThumbstickDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThumbstickDirection_Equals_mCF0A070F9DD09AB4AE3F21F1592E070D31FCFD6D (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* ___other0, const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseDoubleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline (const RuntimeMethod* method) ;
// System.Double CArControls.ThumbstickDirection::get_Dx()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) ;
// System.Double CArControls.ThumbstickDirection::get_Dy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) ;
// System.Int64 CArControls.ThumbstickDirection::get_SeqNum()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.JsonFormatter::ToDiagnosticString(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteRawMessage(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteRawTag(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022 (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, uint8_t ___b10, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteDouble_m69D9DDADB079FC8C652BBE0672212126C7BB66E6 (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteInt64_m67B44E95DD3431514A71527605A53F59875C05EC (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.UnknownFieldSet::WriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476 (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___ctx0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeInt64Size(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt64Size_mA138368189B4AE2787BE7B4A5FC8FBC0C4CF48C8 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.UnknownFieldSet::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1 (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* __this, const RuntimeMethod* method) ;
// System.Void CArControls.ThumbstickDirection::set_Dx(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThumbstickDirection_set_Dx_m05B03AAB29A4E608B72E7CA9E25AF3ECD51BD546_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void CArControls.ThumbstickDirection::set_Dy(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThumbstickDirection_set_Dy_m2A3E989D42A4ED17562A3C3FB75AE4B6F723F122_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void CArControls.ThumbstickDirection::set_SeqNum(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThumbstickDirection_set_SeqNum_m59F042E3B9664136E9F909DD8410513076B573BE_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, int64_t ___value0, const RuntimeMethod* method) ;
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::MergeFrom(Google.Protobuf.UnknownFieldSet,Google.Protobuf.UnknownFieldSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2 (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ___unknownFields0, UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ___other1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedInputStream::ReadRawMessage(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::MergeFieldFrom(Google.Protobuf.UnknownFieldSet,Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ___unknownFields0, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx1, const RuntimeMethod* method) ;
// System.Double Google.Protobuf.ParseContext::ReadDouble()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ParseContext_ReadDouble_m472E820A5560DEDA7DB0C3E9FBBAAB1D9889A521_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.Int64 Google.Protobuf.ParseContext::ReadInt64()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ParseContext_ReadInt64_mEA0F773A37DBAA193C4146023EABA449F35DB876_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParseContext::ReadTag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<CArControls.ThumbstickDirection>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m56D6652CB45DEF3E594237257CBF6D4E3219D00F (Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<CArControls.ThumbstickDirection>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m8979CA50DAD5DB6C06B93C38CBF87A8088291B4A (MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581* __this, Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581*, Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void CArControls.ThumbstickDirection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1862CB59C8D1DB6A2FB74822741041976CC6B7C2 (U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<CAr.HealthCheckRequest> CAr.HealthCheckRequest::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* HealthCheckRequest_get_Parser_mF64B315384900033E8622653381D7E692EA0B1CC_inline (const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<CAr.HealthCheckReply> CAr.HealthCheckReply::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* HealthCheckReply_get_Parser_m3E6E9533528075258109C3B3C3129BC8F0288BC8_inline (const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<CAr.HandshakeMessage> CAr.HandshakeMessage::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* HandshakeMessage_get_Parser_mEE267FFE1DE214403E34C5D2E086E46EE036AAD7_inline (const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<CAr.NotifyDescription> CAr.NotifyDescription::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F* NotifyDescription_get_Parser_m1A35C020064486614FAE01D1EFC85532F3BEABAB_inline (const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<CAr.NotifyIce> CAr.NotifyIce::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E* NotifyIce_get_Parser_m556B31799E65ADB0659E6F3B5A78C1CA6C6BAB2F_inline (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor CAr.ControlReflection::get_Descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ControlReflection_get_Descriptor_mF06AA872BCEBD18766A2E54C8DE8F3D8A4329F68_inline (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor CAr.HealthCheckRequest::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* HealthCheckRequest_get_Descriptor_m74F729B9510BDE751A085AB1B5E58CE3FED5449A (const RuntimeMethod* method) ;
// System.Void CAr.HealthCheckRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest__ctor_mDCB793D6A261AE4EEDE9F4C10C846D42F94014F8 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, const RuntimeMethod* method) ;
// System.Void CAr.HealthCheckRequest::.ctor(CAr.HealthCheckRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest__ctor_mD920DFDCEEB380FBE79DC8A8B1944895BFFE3388 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___other0, const RuntimeMethod* method) ;
// System.Boolean CAr.HealthCheckRequest::Equals(CAr.HealthCheckRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HealthCheckRequest_Equals_m407DAF23714EC1E6F6098701D4D1ED5E6FEF2815 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___other0, const RuntimeMethod* method) ;
// System.Void System.Func`1<CAr.HealthCheckRequest>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mB55E2EC1F36F646213CED154463F9F598B76A6A4 (Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<CAr.HealthCheckRequest>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_mFD28D9810816C383C349EB9DCECCAD71083F1254 (MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* __this, Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680*, Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void CAr.HealthCheckRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA67008A28EAA742025E8AEF8AE1CE52580B261E (U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor CAr.HealthCheckReply::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* HealthCheckReply_get_Descriptor_m6A10BA9B0F42A54DB950AAC22685E4152EEF9FAF (const RuntimeMethod* method) ;
// System.Void CAr.HealthCheckReply::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply__ctor_m0B3200528D43E4244FB6D41544918F88AEE157A3 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, const RuntimeMethod* method) ;
// System.Void CAr.HealthCheckReply::.ctor(CAr.HealthCheckReply)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply__ctor_m9AA49AB5D749F7558F6FCD11F03156B247832012 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* ___other0, const RuntimeMethod* method) ;
// System.Boolean CAr.HealthCheckReply::Equals(CAr.HealthCheckReply)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HealthCheckReply_Equals_m6D6F34E2CC6C22BF917C9FE549F85F09D0CDEB14 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* ___other0, const RuntimeMethod* method) ;
// System.Void System.Func`1<CAr.HealthCheckReply>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mAF3D38A26F1C06C06A472693AD6005F97947E3DC (Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<CAr.HealthCheckReply>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_mFF36608820300235AEF72EF32A67171425CAB9DF (MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* __this, Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F*, Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void CAr.HealthCheckReply/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m404FDE9F6B7B3DD503A3DD28ABB811BBE6150106 (U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor CAr.HandshakeMessage::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* HandshakeMessage_get_Descriptor_m75FA95DF010ECBF58AB7EDA37FCD659ABC552A1A (const RuntimeMethod* method) ;
// System.Void CAr.HandshakeMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage__ctor_mB0FB785585B7C133A399B85FE75CE1048F13E34B (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) ;
// CAr.HandshakeMessage/MsgOneofCase CAr.HandshakeMessage::get_MsgCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandshakeMessage_get_MsgCase_m64012CBBD5C57AFAF48B065845AD0F6F79CEB5CD_inline (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) ;
// CAr.NotifyDescription CAr.HandshakeMessage::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) ;
// CAr.NotifyDescription CAr.NotifyDescription::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* NotifyDescription_Clone_m261E05EAEA88B7F68472061219470E34E3DBA0C0 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) ;
// System.Void CAr.HandshakeMessage::set_Description(CAr.NotifyDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_set_Description_mA9CCBAF268EED61AB0F058832789D0B90C0BFEE9 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* ___value0, const RuntimeMethod* method) ;
// CAr.NotifyIce CAr.HandshakeMessage::get_Ice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) ;
// CAr.NotifyIce CAr.NotifyIce::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* NotifyIce_Clone_m10C918C1763285CBE09F6A367EF59B4B3AAC2227 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) ;
// System.Void CAr.HandshakeMessage::set_Ice(CAr.NotifyIce)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_set_Ice_mDF97AF403E92FFBC09ABDEA19C142EBBF290EBDD (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* ___value0, const RuntimeMethod* method) ;
// System.Void CAr.HandshakeMessage::.ctor(CAr.HandshakeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage__ctor_mECF3B59B3255E7077AD38BC39FE79AF6BACE3257 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* ___other0, const RuntimeMethod* method) ;
// System.Boolean CAr.HandshakeMessage::Equals(CAr.HandshakeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandshakeMessage_Equals_m45F6B85EC9D218DE79F2D0EE2138DD9DF27719EE (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* ___other0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteMessage(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteMessage_m2F77C0E66BE30E7D27F74713F4C2967F9CB67575 (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeMessageSize(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeMessageSize_m96CA0965A80BAE333592894886B82CF0F5B357C2 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void CAr.NotifyDescription::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription__ctor_m08D7633712E29BF3634BAE65D3CF70E4FF6C8511 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) ;
// System.Void CAr.NotifyDescription::MergeFrom(CAr.NotifyDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription_MergeFrom_m9B2F70BEDDDC48BB350B9C9FE8CEA5775968E333 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* ___other0, const RuntimeMethod* method) ;
// System.Void CAr.NotifyIce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce__ctor_mBF33DCB706C13C70047524B65FC672C9E496AF08 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) ;
// System.Void CAr.NotifyIce::MergeFrom(CAr.NotifyIce)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce_MergeFrom_m3040F4FC5CC286103AE95EF84EED8449F2058EE5 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* ___other0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.ParseContext::ReadMessage(Google.Protobuf.IMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Func`1<CAr.HandshakeMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m32C341B1D42FE24F26669F3567907D080CB9674C (Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<CAr.HandshakeMessage>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m5FA55DDADE84E0A40348BA8EC52777E9DCC41D69 (MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* __this, Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3*, Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void CAr.HandshakeMessage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m668C7AE6EF6B024887A65FAA8CE8A96F600A150D (U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor CAr.NotifyDescription::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* NotifyDescription_get_Descriptor_m1112AEB00119C88AB61C968848E76355F16CEA56 (const RuntimeMethod* method) ;
// System.Void CAr.NotifyDescription::.ctor(CAr.NotifyDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription__ctor_m656A7C54927E2E2E13C5D6A2BC752D8726293E9C (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* ___other0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.String>(T,System.String)
inline String_t* ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414 (String_t* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_mF2D50EEA285EC24C4A33857428197C8C1ACA1B88_gshared)(___value0, ___name1, method);
}
// System.Boolean CAr.NotifyDescription::Equals(CAr.NotifyDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotifyDescription_Equals_m451C84E81B0D9A0904C684A96C7DF048464768D8 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* ___other0, const RuntimeMethod* method) ;
// CAr.SdpType CAr.NotifyDescription::get_SdpType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) ;
// System.String CAr.NotifyDescription::get_Sdp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteEnum_m9D943000AEB1B4AF9DA9BF3E506F1CD1A79C623F (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteString_m5B3A03676A3834F59391E025BDF7A6E173A6D864 (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeEnumSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSize_mA1836D9E8169C256E0EF161A0A7CA86FE3CE0402 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeStringSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeStringSize_m92DC0377FB211F101BD116CA72093D148E0C1A8C (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void CAr.NotifyDescription::set_SdpType(CAr.SdpType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotifyDescription_set_SdpType_m26343856BAE1905739A94A521B1D0CFCA0112D78_inline (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void CAr.NotifyDescription::set_Sdp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription_set_Sdp_m83C13D6AED0A6F8384BDE31CE10A0A91C901AF9D (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.ParseContext::ReadEnum()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParseContext_ReadEnum_mF3B58B12A29DD615F9EC6FD424CF4FFAED1A6E51_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.ParseContext::ReadString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParseContext_ReadString_mB36C526257EBC5893769F25359B11B65E2E54D3D_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<CAr.NotifyDescription>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m870B16D6172F29FD1407AB42E01D2D71020FB944 (Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<CAr.NotifyDescription>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_mD51316658FC972F420349A452DC816B08148EC11 (MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F* __this, Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F*, Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void CAr.NotifyDescription/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA05534BAC064C27DA6157C2BE42966709C9C28A4 (U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor CAr.NotifyIce::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* NotifyIce_get_Descriptor_m4BD272C65738DF250EED00ECDF61CF1C95B60EA6 (const RuntimeMethod* method) ;
// System.Void CAr.NotifyIce::.ctor(CAr.NotifyIce)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce__ctor_mC4BC365BCEF2A1F0C63BDCA9686A7B9FFEA0CD80 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* ___other0, const RuntimeMethod* method) ;
// System.Boolean CAr.NotifyIce::Equals(CAr.NotifyIce)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotifyIce_Equals_m46D325B2854A59B89324CA01219641792850D27E (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* ___other0, const RuntimeMethod* method) ;
// System.String CAr.NotifyIce::get_JsonBase64()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) ;
// System.Void CAr.NotifyIce::set_JsonBase64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce_set_JsonBase64_m40549B6A6BCCE047A1BE2E8FAC3ACAED895CFDDF (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`1<CAr.NotifyIce>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mA02C5F5BFC0A49C5CCD4E3AEBE3AA50B6265E897 (Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<CAr.NotifyIce>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m98F488779771FA13C656CE1DC417518E3CB2C20A (MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E* __this, Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E*, Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void CAr.NotifyIce/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m46CA550618DFB6091C14F2BF056624DA5430FDDB (U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.MessageExtensions::WriteTo(Google.Protobuf.IMessage,System.Buffers.IBufferWriter`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageExtensions_WriteTo_mD5D8A6CCD05C38B2DCCF2A4841467B30D2B9A6EE (RuntimeObject* ___message0, RuntimeObject* ___output1, const RuntimeMethod* method) ;
// System.Byte[] Google.Protobuf.MessageExtensions::ToByteArray(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageExtensions_ToByteArray_m8BACFCA8D5CD4C6C70FBC7ACBD92161FF107DC4C (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_Services()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Services_m32AE49DE554CD6104A5792813F458B1E1A065A8D_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// Grpc.Core.ServerServiceDefinition/Builder Grpc.Core.ServerServiceDefinition::CreateBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* ServerServiceDefinition_CreateBuilder_mA1E7CF4CE4D0D2AD1A3A6C9595502C50CDD555AA (const RuntimeMethod* method) ;
// System.Void Grpc.Core.UnaryServerMethod`2<CAr.HealthCheckRequest,CAr.HealthCheckReply>::.ctor(System.Object,System.IntPtr)
inline void UnaryServerMethod_2__ctor_m7F3CA10F141B5F6445789097BF0EE4915B721B02 (UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnaryServerMethod_2__ctor_mAF6A26DC98B3BB24B271BC100C80D2AFDA4D95FC_gshared)(__this, ___object0, ___method1, method);
}
// Grpc.Core.ServerServiceDefinition/Builder Grpc.Core.ServerServiceDefinition/Builder::AddMethod<CAr.HealthCheckRequest,CAr.HealthCheckReply>(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.UnaryServerMethod`2<TRequest,TResponse>)
inline Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* Builder_AddMethod_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mD110ACC2A64F7EF0AEA33A0165F60D18D8A15D15 (Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* __this, Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* ___method0, UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117* ___handler1, const RuntimeMethod* method)
{
	return ((  Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* (*) (Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32*, Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090*, UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117*, const RuntimeMethod*))Builder_AddMethod_TisRuntimeObject_TisRuntimeObject_mE12C0C8A385661AEFCC59885B555EF5CB03C07B6_gshared)(__this, ___method0, ___handler1, method);
}
// System.Void Grpc.Core.DuplexStreamingServerMethod`2<CAr.HandshakeMessage,CAr.HandshakeMessage>::.ctor(System.Object,System.IntPtr)
inline void DuplexStreamingServerMethod_2__ctor_mB8763C50A2EA2FA4515DBA941ACBA58469BC5655 (DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE*, RuntimeObject*, intptr_t, const RuntimeMethod*))DuplexStreamingServerMethod_2__ctor_mE20EA05D87B02F828854BF86FDFD86AA5DA3DC0D_gshared)(__this, ___object0, ___method1, method);
}
// Grpc.Core.ServerServiceDefinition/Builder Grpc.Core.ServerServiceDefinition/Builder::AddMethod<CAr.HandshakeMessage,CAr.HandshakeMessage>(Grpc.Core.Method`2<TRequest,TResponse>,Grpc.Core.DuplexStreamingServerMethod`2<TRequest,TResponse>)
inline Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* Builder_AddMethod_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mB8F5B490D6E3E96F627B593427EEDF555673C445 (Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* __this, Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* ___method0, DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE* ___handler1, const RuntimeMethod* method)
{
	return ((  Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* (*) (Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32*, Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF*, DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE*, const RuntimeMethod*))Builder_AddMethod_TisRuntimeObject_TisRuntimeObject_m0F9E701879FC3AED130CBB1E39B578640CC24D2C_gshared)(__this, ___method0, ___handler1, method);
}
// Grpc.Core.ServerServiceDefinition Grpc.Core.ServerServiceDefinition/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerServiceDefinition_t16402F50122B2FADAD587780C17A2671596DC5D0* Builder_Build_m09BE41A1247701FABFF203159FF8872EEC2A021F (Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<CAr.HealthCheckRequest,Grpc.Core.SerializationContext>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA030D09705F2EC92EE19FB326A2CF3ED5BC2F39E (Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Grpc.Core.DeserializationContext,CAr.HealthCheckRequest>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDFB2641ACA6665B40BBA69826D22517FEE63133B (Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// Grpc.Core.Marshaller`1<T> Grpc.Core.Marshallers::Create<CAr.HealthCheckRequest>(System.Action`2<T,Grpc.Core.SerializationContext>,System.Func`2<Grpc.Core.DeserializationContext,T>)
inline Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA* Marshallers_Create_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_mA849078B1FD41DB58B48D4EFAC8DF971D72ACA5C (Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9* ___serializer0, Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB* ___deserializer1, const RuntimeMethod* method)
{
	return ((  Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA* (*) (Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9*, Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB*, const RuntimeMethod*))Marshallers_Create_TisRuntimeObject_m7CA97A0E9C6133A043DA26A05240F39357832B78_gshared)(___serializer0, ___deserializer1, method);
}
// System.Void System.Action`2<CAr.HealthCheckReply,Grpc.Core.SerializationContext>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m02B4AC0C5FDA221D71A29EF5CDBA63692937A286 (Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Grpc.Core.DeserializationContext,CAr.HealthCheckReply>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF41AC7F652E74809D46690C5218D72BFF6AF8040 (Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// Grpc.Core.Marshaller`1<T> Grpc.Core.Marshallers::Create<CAr.HealthCheckReply>(System.Action`2<T,Grpc.Core.SerializationContext>,System.Func`2<Grpc.Core.DeserializationContext,T>)
inline Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D* Marshallers_Create_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mF34E8AE6DC477E58C31E6DEBE95E9E74DEC49DE1 (Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86* ___serializer0, Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727* ___deserializer1, const RuntimeMethod* method)
{
	return ((  Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D* (*) (Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86*, Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727*, const RuntimeMethod*))Marshallers_Create_TisRuntimeObject_m7CA97A0E9C6133A043DA26A05240F39357832B78_gshared)(___serializer0, ___deserializer1, method);
}
// System.Void System.Action`2<CAr.HandshakeMessage,Grpc.Core.SerializationContext>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m9CA7D6CEA9BCA4FCF8ACD5C4B0CBAE9BF0539166 (Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Grpc.Core.DeserializationContext,CAr.HandshakeMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEB3F3A4095444431C7A20E5783E4195E0B101FF4 (Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// Grpc.Core.Marshaller`1<T> Grpc.Core.Marshallers::Create<CAr.HandshakeMessage>(System.Action`2<T,Grpc.Core.SerializationContext>,System.Func`2<Grpc.Core.DeserializationContext,T>)
inline Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* Marshallers_Create_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mFC6C69AADDBBB6CB2115EC66E5C233083AAE155E (Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62* ___serializer0, Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972* ___deserializer1, const RuntimeMethod* method)
{
	return ((  Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* (*) (Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62*, Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972*, const RuntimeMethod*))Marshallers_Create_TisRuntimeObject_m7CA97A0E9C6133A043DA26A05240F39357832B78_gshared)(___serializer0, ___deserializer1, method);
}
// System.Void Grpc.Core.Method`2<CAr.HealthCheckRequest,CAr.HealthCheckReply>::.ctor(Grpc.Core.MethodType,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>)
inline void Method_2__ctor_mE345955774A1730E69F80FC0D2C6B6F8A854390E (Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* __this, int32_t ___type0, String_t* ___serviceName1, String_t* ___name2, Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA* ___requestMarshaller3, Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D* ___responseMarshaller4, const RuntimeMethod* method)
{
	((  void (*) (Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090*, int32_t, String_t*, String_t*, Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA*, Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D*, const RuntimeMethod*))Method_2__ctor_m59F2E5F7600E5D35CF970FB54BBC5E1E1F25EA5B_gshared)(__this, ___type0, ___serviceName1, ___name2, ___requestMarshaller3, ___responseMarshaller4, method);
}
// System.Void Grpc.Core.Method`2<CAr.HandshakeMessage,CAr.HandshakeMessage>::.ctor(Grpc.Core.MethodType,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>)
inline void Method_2__ctor_m4BBB824274E71F83F8A84E97848EC436FE6DE32E (Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* __this, int32_t ___type0, String_t* ___serviceName1, String_t* ___name2, Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* ___requestMarshaller3, Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* ___responseMarshaller4, const RuntimeMethod* method)
{
	((  void (*) (Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF*, int32_t, String_t*, String_t*, Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4*, Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4*, const RuntimeMethod*))Method_2__ctor_m59F2E5F7600E5D35CF970FB54BBC5E1E1F25EA5B_gshared)(__this, ___type0, ___serviceName1, ___name2, ___requestMarshaller3, ___responseMarshaller4, method);
}
// System.Void Grpc.Core.Status::.ctor(Grpc.Core.StatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_mC9E29F2BD60C9C3C1A3AD4A834052ABD9CBC89FF (Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642* __this, int32_t ___statusCode0, String_t* ___detail1, const RuntimeMethod* method) ;
// System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcException__ctor_m06D2314D26D2BC163E2753D66137EC3DFEBE3E56 (RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72* __this, Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642 ___status0, const RuntimeMethod* method) ;
// System.Void Grpc.Core.ClientBase`1<CAr.Control/ControlClient>::.ctor(Grpc.Core.ChannelBase)
inline void ClientBase_1__ctor_mE55CFFEC4C7D3838AD25FBA5678D6C8D4354E59E (ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF* __this, ChannelBase_tD276AC64DE64B8C1BFD85654A280D93E69DA40E5* ___channel0, const RuntimeMethod* method)
{
	((  void (*) (ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF*, ChannelBase_tD276AC64DE64B8C1BFD85654A280D93E69DA40E5*, const RuntimeMethod*))ClientBase_1__ctor_mB9A81C5888BAD6871A08BB1D2936F447EB48CE3D_gshared)(__this, ___channel0, method);
}
// System.Void Grpc.Core.ClientBase`1<CAr.Control/ControlClient>::.ctor(Grpc.Core.CallInvoker)
inline void ClientBase_1__ctor_m28A7AA58B59BFADDF2D7CCE12A92A45648B79935 (ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF* __this, CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* ___callInvoker0, const RuntimeMethod* method)
{
	((  void (*) (ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF*, CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF*, const RuntimeMethod*))ClientBase_1__ctor_m4D7C60B99BC8E8B26A1FC91300756FC44A26F20E_gshared)(__this, ___callInvoker0, method);
}
// System.Void Grpc.Core.ClientBase`1<CAr.Control/ControlClient>::.ctor()
inline void ClientBase_1__ctor_m7D38CE6EB1AD2688EB1F5C98A6EC610C96070B64 (ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF* __this, const RuntimeMethod* method)
{
	((  void (*) (ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF*, const RuntimeMethod*))ClientBase_1__ctor_m69B52A5E60AF015636687A0F2BB3B0ABA77F0A94_gshared)(__this, method);
}
// System.Void Grpc.Core.ClientBase`1<CAr.Control/ControlClient>::.ctor(Grpc.Core.ClientBase/ClientBaseConfiguration)
inline void ClientBase_1__ctor_m2A39107B53469978102ED15F66B5AB2619ED21BE (ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF* __this, ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D* ___configuration0, const RuntimeMethod* method)
{
	((  void (*) (ClientBase_1_t523277BA6C059A838495C261C4130279BCDFC7FF*, ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D*, const RuntimeMethod*))ClientBase_1__ctor_m1B96E191DC96C641061B317489E78E19BC5DB976_gshared)(__this, ___configuration0, method);
}
// System.Void Grpc.Core.CallOptions::.ctor(Grpc.Core.Metadata,System.Nullable`1<System.DateTime>,System.Threading.CancellationToken,Grpc.Core.WriteOptions,Grpc.Core.ContextPropagationToken,Grpc.Core.CallCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallOptions__ctor_m3CA2A09D88B01048E1C33BAA895BD8133F098CA2 (CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E* __this, Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___headers0, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___deadline1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050* ___writeOptions3, ContextPropagationToken_t3D20D09B421D355689C95D8C5F1BA4B1C4D18751* ___propagationToken4, CallCredentials_t937C403ED70D8E5BC712464E26D2CD3EF0144466* ___credentials5, const RuntimeMethod* method) ;
// Grpc.Core.CallInvoker Grpc.Core.ClientBase::get_CallInvoker()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* ClientBase_get_CallInvoker_mF3E51D6FE5AA4B3A732F085DEDE995249ECF4788_inline (ClientBase_tD3AE7DEE97761650B2A6CCB19E3B501FEF713391* __this, const RuntimeMethod* method) ;
// System.Void CAr.Control/ControlClient::.ctor(Grpc.Core.ClientBase/ClientBaseConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlClient__ctor_m0B0142D9B5B8B663C0CADAD140D3FD98341F4E3B (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D* ___configuration0, const RuntimeMethod* method) ;
// System.Void CAr.Control/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m20286A915691D4C2DE46917920463EFA1CAF776D (U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* __this, const RuntimeMethod* method) ;
// T CAr.Control::__Helper_DeserializeMessage<CAr.HealthCheckRequest>(Grpc.Core.DeserializationContext,Google.Protobuf.MessageParser`1<T>)
inline HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* Control___Helper_DeserializeMessage_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_m16AAD0E3D1DCCDDF25003F2F59FEBED6AD8043C8 (DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* ___context0, MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* ___parser1, const RuntimeMethod* method)
{
	return ((  HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* (*) (DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC*, MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680*, const RuntimeMethod*))Control___Helper_DeserializeMessage_TisRuntimeObject_mB17412941029A18B9A26930FD6034C84F14013BD_gshared)(___context0, ___parser1, method);
}
// T CAr.Control::__Helper_DeserializeMessage<CAr.HealthCheckReply>(Grpc.Core.DeserializationContext,Google.Protobuf.MessageParser`1<T>)
inline HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* Control___Helper_DeserializeMessage_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mB706476EBB728B29802262AA46020FC3AB530E30 (DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* ___context0, MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* ___parser1, const RuntimeMethod* method)
{
	return ((  HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* (*) (DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC*, MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F*, const RuntimeMethod*))Control___Helper_DeserializeMessage_TisRuntimeObject_mB17412941029A18B9A26930FD6034C84F14013BD_gshared)(___context0, ___parser1, method);
}
// T CAr.Control::__Helper_DeserializeMessage<CAr.HandshakeMessage>(Grpc.Core.DeserializationContext,Google.Protobuf.MessageParser`1<T>)
inline HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* Control___Helper_DeserializeMessage_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m38C56265528E827698180489ACD2280B3E8523A6 (DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* ___context0, MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* ___parser1, const RuntimeMethod* method)
{
	return ((  HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* (*) (DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC*, MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3*, const RuntimeMethod*))Control___Helper_DeserializeMessage_TisRuntimeObject_mB17412941029A18B9A26930FD6034C84F14013BD_gshared)(___context0, ___parser1, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Double Google.Protobuf.ParsingPrimitives::ParseDouble(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ParsingPrimitives_ParseDouble_m64081914C3D679EB6B86F5E435EFB7059F0A744F (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) ;
// System.UInt64 Google.Protobuf.ParsingPrimitives::ParseRawVarint64(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ParsingPrimitives_ParseRawVarint64_m5F7ECE8A6E0DED9DCF88966D02F68695B1961F03 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParsingPrimitives::ParseTag(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ParsingPrimitives_ParseTag_mC3CDF9E540F71AEAB45BC4BAFAE69C8FB097DB64 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.ParsingPrimitivesMessages::ReadMessage(Google.Protobuf.ParseContext&,Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingPrimitivesMessages_ReadMessage_mB316DADE7E701D2EA0E45CDB6100F4E3654C49EF (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx0, RuntimeObject* ___message1, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParsingPrimitives::ParseRawVarint32(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ParsingPrimitives_ParseRawVarint32_m12E76CAA773AAED8FDAF192EBFAF830E615798BF (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) ;
// System.String Google.Protobuf.ParsingPrimitives::ReadString(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParsingPrimitives_ReadString_m7D4986A2946DB4734B717580778BB75160508D7A_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.ParsingPrimitives::ParseLength(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParsingPrimitives_ParseLength_mF93B4D567E4CC5CC9B575050C30448BFDB466C52_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) ;
// System.String Google.Protobuf.ParsingPrimitives::ReadRawString(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsingPrimitives_ReadRawString_m18F4AF4946FA46A62BFBDEB1A807A17839F745B8 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPositionU3Ed__26__ctor_m0133720F31CDB06A7E52088A73C0D83204AC9AE8 (U3CResetPositionU3Ed__26_t447FF0C4C24D521E5C2A09CE93932F840D5ACCB6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPositionU3Ed__26_System_IDisposable_Dispose_m1D7DE4BCE81F6703A0FE039F6471B5CB48E73325 (U3CResetPositionU3Ed__26_t447FF0C4C24D521E5C2A09CE93932F840D5ACCB6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetPositionU3Ed__26_MoveNext_mB7E5215EE130FB92918FB845F4905BF635A1693A (U3CResetPositionU3Ed__26_t447FF0C4C24D521E5C2A09CE93932F840D5ACCB6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var startTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3CstartTimeU3E5__2_3 = L_4;
		// var endTime = Time.time + LERP_TO_OLD_POS_DURATION;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3CendTimeU3E5__3_4 = ((float)il2cpp_codegen_add(L_5, (1.0f)));
		goto IL_0086;
	}

IL_003c:
	{
		// transform.localPosition = Vector3.Lerp(transform.localPosition, _oldPosition,
		//   (Time.time - startTime) / LERP_TO_OLD_POS_DURATION);
		TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A* L_6 = V_1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_9, NULL);
		TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A* L_11 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->____oldPosition_20;
		float L_13;
		L_13 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_14 = __this->___U3CstartTimeU3E5__2_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_10, L_12, ((float)(((float)il2cpp_codegen_subtract(L_13, L_14))/(1.0f))), NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_15, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0086:
	{
		// while (Time.time < endTime)
		float L_16;
		L_16 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_17 = __this->___U3CendTimeU3E5__3_4;
		if ((((float)L_16) < ((float)L_17)))
		{
			goto IL_003c;
		}
	}
	{
		// transform.localPosition = _oldPosition;
		TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A* L_20 = V_1;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->____oldPosition_20;
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_21, NULL);
		// _lerpToOldPositionCr = null;
		TrainButtonVisualController_t19FF2618FCCC02F2DB1D11B73C383B09C7ED813A* L_22 = V_1;
		NullCheck(L_22);
		L_22->____lerpToOldPositionCr_19 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____lerpToOldPositionCr_19), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetPositionU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7A834EED7BA1271D08038394CB79EAAF9D87F0B1 (U3CResetPositionU3Ed__26_t447FF0C4C24D521E5C2A09CE93932F840D5ACCB6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPositionU3Ed__26_System_Collections_IEnumerator_Reset_m693B2830178792F2B02E328558109D63ACDB67B8 (U3CResetPositionU3Ed__26_t447FF0C4C24D521E5C2A09CE93932F840D5ACCB6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetPositionU3Ed__26_System_Collections_IEnumerator_Reset_m693B2830178792F2B02E328558109D63ACDB67B8_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetPositionU3Ed__26_System_Collections_IEnumerator_get_Current_mFABE5F3F59935313FFC34ECDAEB685F4E646ABE2 (U3CResetPositionU3Ed__26_t447FF0C4C24D521E5C2A09CE93932F840D5ACCB6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Single OculusSampleFramework.TrainCar::get_DistanceBehindParentScaled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainCar_get_DistanceBehindParentScaled_mFEE16D2E68DF136E196620E3E4AB6FA93E18D333 (TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* __this, const RuntimeMethod* method) 
{
	{
		// get { return scale * _distanceBehindParent; }
		float L_0 = ((TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616*)__this)->___scale_12;
		float L_1 = __this->____distanceBehindParent_16;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Void OculusSampleFramework.TrainCar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCar_Awake_m18C04F5B4021FA0DA3B4ED96922722F109AC1F5F (TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* __this, const RuntimeMethod* method) 
{
	{
		// base.Awake();
		TrainCarBase_Awake_mC68B7251E7AA8D2AC3574B546B257EBBD080A55A(__this, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCar::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCar_UpdatePosition_mAA7D1ACEB4CA52113AC379AC47EAD4D27DE2BD49 (TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* __this, const RuntimeMethod* method) 
{
	{
		// Distance = _parentLocomotive.Distance - DistanceBehindParentScaled;
		TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* L_0 = __this->____parentLocomotive_15;
		NullCheck(L_0);
		float L_1;
		L_1 = TrainCarBase_get_Distance_m6B93FAF6496C152333743CEA7AAB979B5456A044_inline(L_0, NULL);
		float L_2;
		L_2 = TrainCar_get_DistanceBehindParentScaled_mFEE16D2E68DF136E196620E3E4AB6FA93E18D333(__this, NULL);
		TrainCarBase_set_Distance_mF9D78037A307E9060BC95667FA44CF820A0F13DD_inline(__this, ((float)il2cpp_codegen_subtract(L_1, L_2)), NULL);
		// UpdateCarPosition();
		TrainCarBase_UpdateCarPosition_mA4D577CE3C64E1AA19FD8EBF89536A588A473F50(__this, NULL);
		// RotateCarWheels();
		TrainCarBase_RotateCarWheels_m1B3BCB04D6F4E79C3BF098AF4C6582C2D76A000D(__this, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCar__ctor_mEECD1E3253D05AD75974AB495694903252A73B71 (TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] protected float _distanceBehindParent = 0.1f;
		__this->____distanceBehindParent_16 = (0.100000001f);
		il2cpp_codegen_runtime_class_init_inline(TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var);
		TrainCarBase__ctor_mAB1702EA386CA6F2156F8E03595B2D0E4C57FC4E(__this, NULL);
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
// System.Single OculusSampleFramework.TrainCarBase::get_Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainCarBase_get_Distance_m6B93FAF6496C152333743CEA7AAB979B5456A044 (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) 
{
	{
		// public float Distance { get; protected set; }
		float L_0 = __this->___U3CDistanceU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void OculusSampleFramework.TrainCarBase::set_Distance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_set_Distance_mF9D78037A307E9060BC95667FA44CF820A0F13DD (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Distance { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CDistanceU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Single OculusSampleFramework.TrainCarBase::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainCarBase_get_Scale_m8049E0B92A110B1F1027ED926A7BCE9742DF3CEF (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) 
{
	{
		// get { return scale; }
		float L_0 = __this->___scale_12;
		return L_0;
	}
}
// System.Void OculusSampleFramework.TrainCarBase::set_Scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_set_Scale_m79E7EF54132ABFF88F00D49ED9C11D7E611D7626 (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { scale = value; }
		float L_0 = ___value0;
		__this->___scale_12 = L_0;
		// set { scale = value; }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCarBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_Awake_mC68B7251E7AA8D2AC3574B546B257EBBD080A55A (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCarBase::UpdatePose(System.Single,OculusSampleFramework.TrainCarBase,OculusSampleFramework.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_UpdatePose_m7B5E48663084D97D3227F7C3AC028406E214312D (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, float ___distance0, TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* ___train1, Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* ___pose2, const RuntimeMethod* method) 
{
	TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// distance = (train._trainTrack.TrackLength + distance) % train._trainTrack.TrackLength;
		TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* L_0 = ___train1;
		NullCheck(L_0);
		TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* L_1 = L_0->____trainTrack_9;
		NullCheck(L_1);
		float L_2;
		L_2 = TrainTrack_get_TrackLength_m007CB823F48E12E88CCC143F734431A3148B99AE_inline(L_1, NULL);
		float L_3 = ___distance0;
		TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* L_4 = ___train1;
		NullCheck(L_4);
		TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* L_5 = L_4->____trainTrack_9;
		NullCheck(L_5);
		float L_6;
		L_6 = TrainTrack_get_TrackLength_m007CB823F48E12E88CCC143F734431A3148B99AE_inline(L_5, NULL);
		___distance0 = (fmodf(((float)il2cpp_codegen_add(L_2, L_3)), L_6));
		// if (distance < 0)
		float L_7 = ___distance0;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		// distance += train._trainTrack.TrackLength;
		float L_8 = ___distance0;
		TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* L_9 = ___train1;
		NullCheck(L_9);
		TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* L_10 = L_9->____trainTrack_9;
		NullCheck(L_10);
		float L_11;
		L_11 = TrainTrack_get_TrackLength_m007CB823F48E12E88CCC143F734431A3148B99AE_inline(L_10, NULL);
		___distance0 = ((float)il2cpp_codegen_add(L_8, L_11));
	}

IL_0032:
	{
		// var currentSegment = train._trainTrack.GetSegment(distance);
		TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* L_12 = ___train1;
		NullCheck(L_12);
		TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* L_13 = L_12->____trainTrack_9;
		float L_14 = ___distance0;
		NullCheck(L_13);
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_15;
		L_15 = TrainTrack_GetSegment_mCD8849640D747C216ABBD0C2417FB3C0AE7C19F7(L_13, L_14, NULL);
		V_0 = L_15;
		// var distanceInto = distance - currentSegment.StartDistance;
		float L_16 = ___distance0;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_17 = V_0;
		NullCheck(L_17);
		float L_18;
		L_18 = TrackSegment_get_StartDistance_mBC42F0134B39A7E31F1278FB09717ABB946E97BF_inline(L_17, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(L_16, L_18));
		// currentSegment.UpdatePose(distanceInto, pose);
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_19 = V_0;
		float L_20 = V_1;
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_21 = ___pose2;
		NullCheck(L_19);
		TrackSegment_UpdatePose_m9A235DC90FC16A7B9FDA09106B3E8C19B2CFDCC0(L_19, L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCarBase::UpdateCarPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_UpdateCarPosition_mA4D577CE3C64E1AA19FD8EBF89536A588A473F50 (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// UpdatePose(Distance + _frontWheels.transform.localPosition.z * scale,
		//   this, _frontPose);
		float L_0;
		L_0 = TrainCarBase_get_Distance_m6B93FAF6496C152333743CEA7AAB979B5456A044_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____frontWheels_7;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		float L_4 = L_3.___z_4;
		float L_5 = __this->___scale_12;
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_6 = __this->____frontPose_13;
		TrainCarBase_UpdatePose_m7B5E48663084D97D3227F7C3AC028406E214312D(__this, ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_4, L_5)))), __this, L_6, NULL);
		// UpdatePose(Distance + _rearWheels.transform.localPosition.z * scale,
		//   this, _rearPose);
		float L_7;
		L_7 = TrainCarBase_get_Distance_m6B93FAF6496C152333743CEA7AAB979B5456A044_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->____rearWheels_8;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_9, NULL);
		float L_11 = L_10.___z_4;
		float L_12 = __this->___scale_12;
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_13 = __this->____rearPose_14;
		TrainCarBase_UpdatePose_m7B5E48663084D97D3227F7C3AC028406E214312D(__this, ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_11, L_12)))), __this, L_13, NULL);
		// var midPoint = 0.5f * (_frontPose.Position + _rearPose.Position);
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_14 = __this->____frontPose_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___Position_0;
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_16 = __this->____rearPose_14;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___Position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_18, NULL);
		V_0 = L_19;
		// var carLookDirection = _frontPose.Position - _rearPose.Position;
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_20 = __this->____frontPose_13;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->___Position_0;
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_22 = __this->____rearPose_14;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___Position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_23, NULL);
		V_1 = L_24;
		// transform.position = midPoint + OFFSET;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ((TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_StaticFields*)il2cpp_codegen_static_fields_for(TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var))->___OFFSET_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_27, NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_28, NULL);
		// transform.rotation = Quaternion.LookRotation(carLookDirection, transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_30, L_32, NULL);
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_33, NULL);
		// _frontWheels.transform.rotation = _frontPose.Rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->____frontWheels_7;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_36 = __this->____frontPose_13;
		NullCheck(L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = L_36->___Rotation_1;
		NullCheck(L_35);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_35, L_37, NULL);
		// _rearWheels.transform.rotation = _rearPose.Rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = __this->____rearWheels_8;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_40 = __this->____rearPose_14;
		NullCheck(L_40);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = L_40->___Rotation_1;
		NullCheck(L_39);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_39, L_41, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCarBase::RotateCarWheels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase_RotateCarWheels_m1B3BCB04D6F4E79C3BF098AF4C6582C2D76A000D (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// float angleOfRot = (Distance / WHEEL_RADIUS) % TWO_PI;
		float L_0;
		L_0 = TrainCarBase_get_Distance_m6B93FAF6496C152333743CEA7AAB979B5456A044_inline(__this, NULL);
		V_0 = (fmodf(((float)(L_0/(0.0270000007f))), (6.28318548f)));
		// foreach (var individualWheel in _individualWheels)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->____individualWheels_10;
		V_1 = L_1;
		V_2 = 0;
		goto IL_003b;
	}

IL_001e:
	{
		// foreach (var individualWheel in _individualWheels)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// individualWheel.localRotation = Quaternion.AngleAxis(Mathf.Rad2Deg * angleOfRot,
		//   Vector3.right);
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply((57.2957802f), L_6)), L_7, NULL);
		NullCheck(L_5);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_5, L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003b:
	{
		// foreach (var individualWheel in _individualWheels)
		int32_t L_10 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCarBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase__ctor_mAB1702EA386CA6F2156F8E03595B2D0E4C57FC4E (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected float scale = 1.0f;
		__this->___scale_12 = (1.0f);
		// private Pose _frontPose = new Pose(), _rearPose = new Pose();
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_0 = (Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7*)il2cpp_codegen_object_new(Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Pose__ctor_m64168E925BDA4409B159DE34F1E287CACB5C9C6D(L_0, NULL);
		__this->____frontPose_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____frontPose_13), (void*)L_0);
		// private Pose _frontPose = new Pose(), _rearPose = new Pose();
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_1 = (Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7*)il2cpp_codegen_object_new(Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Pose__ctor_m64168E925BDA4409B159DE34F1E287CACB5C9C6D(L_1, NULL);
		__this->____rearPose_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rearPose_14), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void OculusSampleFramework.TrainCarBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCarBase__cctor_m2CDD3D5910FF2D29591E556E01EBB99F3FAFF242 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Vector3 OFFSET = new Vector3(0f, 0.0195f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0195000004f), (0.0f), /*hidden argument*/NULL);
		((TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_StaticFields*)il2cpp_codegen_static_fields_for(TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var))->___OFFSET_4 = L_0;
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
// System.Void OculusSampleFramework.TrainCrossingController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_Awake_mF917BDC1F1D946CB23DBBF2CD77EF849C900FC96 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, const RuntimeMethod* method) 
{
	{
		// _lightsSide1Mat = _lightSide1Renderer.material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____lightSide1Renderer_6;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		__this->____lightsSide1Mat_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lightsSide1Mat_9), (void*)L_1);
		// _lightsSide2Mat = _lightSide2Renderer.material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->____lightSide2Renderer_7;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		__this->____lightsSide2Mat_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lightsSide2Mat_10), (void*)L_3);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_OnDestroy_m0BE982D5F8A1C1C213EA359E2BC6B62C036C18A7 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_lightsSide1Mat != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____lightsSide1Mat_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(_lightsSide1Mat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____lightsSide1Mat_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// if (_lightsSide2Mat != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->____lightsSide2Mat_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(_lightsSide2Mat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->____lightsSide2Mat_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController::CrossingButtonStateChanged(OculusSampleFramework.InteractableStateArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_CrossingButtonStateChanged_mF034D143D7838A40AD298882F4C2CB2306219577 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906* ___obj0, const RuntimeMethod* method) 
{
	TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* G_B4_0 = NULL;
	TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* G_B3_0 = NULL;
	InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* G_B5_0 = NULL;
	TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* G_B5_1 = NULL;
	{
		// bool inActionState = obj.NewInteractableState == InteractableState.ActionState;
		InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906* L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___NewInteractableState_4;
		// if (inActionState)
		if (!((((int32_t)L_1) == ((int32_t)3))? 1 : 0))
		{
			goto IL_0011;
		}
	}
	{
		// ActivateTrainCrossing();
		TrainCrossingController_ActivateTrainCrossing_mD577E824ECE26ACE5CF2D775AA75948973C2ADA5(__this, NULL);
	}

IL_0011:
	{
		// _toolInteractingWithMe = obj.NewInteractableState > InteractableState.Default ?
		//   obj.Tool : null;
		InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906* L_2 = ___obj0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___NewInteractableState_4;
		G_B3_0 = __this;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			G_B4_0 = __this;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_0024;
	}

IL_001e:
	{
		InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906* L_4 = ___obj0;
		NullCheck(L_4);
		InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* L_5 = L_4->___Tool_2;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}

IL_0024:
	{
		NullCheck(G_B5_1);
		G_B5_1->____toolInteractingWithMe_13 = G_B5_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->____toolInteractingWithMe_13), (void*)G_B5_0);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_Update_m5FB8377ABE009C199E0AA34D9DC954C2712F6E18 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* G_B5_0 = NULL;
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* G_B3_0 = NULL;
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* G_B6_1 = NULL;
	{
		// if (_toolInteractingWithMe == null)
		InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* L_0 = __this->____toolInteractingWithMe_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _selectionCylinder.CurrSelectionState = SelectionCylinder.SelectionState.Off;
		SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* L_2 = __this->____selectionCylinder_8;
		NullCheck(L_2);
		SelectionCylinder_set_CurrSelectionState_m6A22A6076B7C0F359A67BB3F92C5F44891F88546(L_2, 0, NULL);
		return;
	}

IL_001b:
	{
		// _selectionCylinder.CurrSelectionState = (
		//   _toolInteractingWithMe.ToolInputState == ToolInputState.PrimaryInputDown ||
		//   _toolInteractingWithMe.ToolInputState == ToolInputState.PrimaryInputDownStay)
		//   ? SelectionCylinder.SelectionState.Highlighted
		//   : SelectionCylinder.SelectionState.Selected;
		SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* L_3 = __this->____selectionCylinder_8;
		InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* L_4 = __this->____toolInteractingWithMe_13;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* OculusSampleFramework.ToolInputState OculusSampleFramework.InteractableTool::get_ToolInputState() */, L_4);
		G_B3_0 = L_3;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B5_0 = L_3;
			goto IL_0040;
		}
	}
	{
		InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* L_6 = __this->____toolInteractingWithMe_13;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* OculusSampleFramework.ToolInputState OculusSampleFramework.InteractableTool::get_ToolInputState() */, L_6);
		G_B4_0 = G_B3_0;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0040;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 2;
		G_B6_1 = G_B5_0;
	}

IL_0041:
	{
		NullCheck(G_B6_1);
		SelectionCylinder_set_CurrSelectionState_m6A22A6076B7C0F359A67BB3F92C5F44891F88546(G_B6_1, G_B6_0, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController::ActivateTrainCrossing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_ActivateTrainCrossing_mD577E824ECE26ACE5CF2D775AA75948973C2ADA5 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	{
		// int maxSoundIndex = _crossingSounds.Length - 1;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->____crossingSounds_5;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		// var audioClip = _crossingSounds[(int)(Random.value * maxSoundIndex)];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->____crossingSounds_5;
		float L_2;
		L_2 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		int32_t L_3 = V_0;
		NullCheck(L_1);
		int32_t L_4 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_2, ((float)L_3))));
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// _audioSource.clip = audioClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->____audioSource_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = V_1;
		NullCheck(L_6);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_6, L_7, NULL);
		// _audioSource.timeSamples = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->____audioSource_4;
		NullCheck(L_8);
		AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE(L_8, 0, NULL);
		// _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->____audioSource_4;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// if (_xingAnimationCr != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10 = __this->____xingAnimationCr_12;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// StopCoroutine(_xingAnimationCr);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11 = __this->____xingAnimationCr_12;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_11, NULL);
	}

IL_0053:
	{
		// _xingAnimationCr = StartCoroutine(AnimateCrossing(audioClip.length * 0.75f));
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = V_1;
		NullCheck(L_12);
		float L_13;
		L_13 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_12, NULL);
		RuntimeObject* L_14;
		L_14 = TrainCrossingController_AnimateCrossing_m1EBE094532926C6F7B089C92DDE575C011DA3DAA(__this, ((float)il2cpp_codegen_multiply(L_13, (0.75f))), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15;
		L_15 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_14, NULL);
		__this->____xingAnimationCr_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xingAnimationCr_12), (void*)L_15);
		// }
		return;
	}
}
// System.Collections.IEnumerator OculusSampleFramework.TrainCrossingController::AnimateCrossing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrainCrossingController_AnimateCrossing_m1EBE094532926C6F7B089C92DDE575C011DA3DAA (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, float ___animationLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* L_0 = (U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235*)il2cpp_codegen_object_new(U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateCrossingU3Ed__15__ctor_m663FB6CE1AADE77FC6FF0BBCE339F7D0D01496C3(L_0, 0, NULL);
		U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* L_2 = L_1;
		float L_3 = ___animationLength0;
		NullCheck(L_2);
		L_2->___animationLength_3 = L_3;
		return L_2;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController::AffectMaterials(UnityEngine.Material[],UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_AffectMaterials_m4B9B2DE1D17D0CFE589271E7F168C0DC1C453604 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___materials0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor1, const RuntimeMethod* method) 
{
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var material in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = ___materials0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0019;
	}

IL_0006:
	{
		// foreach (var material in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// material.SetColor(_colorId, newColor);
		int32_t L_5 = __this->____colorId_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___newColor1;
		NullCheck(L_4);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_4, L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0019:
	{
		// foreach (var material in materials)
		int32_t L_8 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController::ToggleLightObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController_ToggleLightObjects_mAFC81037C7641441E6375A6558FCF8FEFD33D574 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, bool ___enableState0, const RuntimeMethod* method) 
{
	{
		// _lightSide1Renderer.gameObject.SetActive(enableState);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____lightSide1Renderer_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2 = ___enableState0;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// _lightSide2Renderer.gameObject.SetActive(enableState);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = __this->____lightSide2Renderer_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5 = ___enableState0;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainCrossingController__ctor_mBD522C91E57118DF979F6FA1C27F85BEEFBB1535 (TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _colorId = Shader.PropertyToID("_Color");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		__this->____colorId_11 = L_0;
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
// System.Void OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateCrossingU3Ed__15__ctor_m663FB6CE1AADE77FC6FF0BBCE339F7D0D01496C3 (U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateCrossingU3Ed__15_System_IDisposable_Dispose_mCC3A087461B7951EF48617743BAA241902FE9B37 (U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateCrossingU3Ed__15_MoveNext_m8D2DAAD03D77C6DFF61643A28BE1F0A47F0D9D89 (U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* V_1 = NULL;
	float V_2 = 0.0f;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0172;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ToggleLightObjects(true);
		TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* L_4 = V_1;
		NullCheck(L_4);
		TrainCrossingController_ToggleLightObjects_mAFC81037C7641441E6375A6558FCF8FEFD33D574(L_4, (bool)1, NULL);
		// float animationEndTime = Time.time + animationLength;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_6 = __this->___animationLength_3;
		__this->___U3CanimationEndTimeU3E5__2_4 = ((float)il2cpp_codegen_add(L_5, L_6));
		// float lightBlinkDuration = animationLength * 0.1f;
		float L_7 = __this->___animationLength_3;
		__this->___U3ClightBlinkDurationU3E5__3_5 = ((float)il2cpp_codegen_multiply(L_7, (0.100000001f)));
		// float lightBlinkStartTime = Time.time;
		float L_8;
		L_8 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3ClightBlinkStartTimeU3E5__4_6 = L_8;
		// float lightBlinkEndTime = Time.time + lightBlinkDuration;
		float L_9;
		L_9 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_10 = __this->___U3ClightBlinkDurationU3E5__3_5;
		__this->___U3ClightBlinkEndTimeU3E5__5_7 = ((float)il2cpp_codegen_add(L_9, L_10));
		// Material lightToBlinkOn = _lightsSide1Mat;
		TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* L_11 = V_1;
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = L_11->____lightsSide1Mat_9;
		__this->___U3ClightToBlinkOnU3E5__6_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClightToBlinkOnU3E5__6_8), (void*)L_12);
		// Material lightToBlinkOff = _lightsSide2Mat;
		TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* L_13 = V_1;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = L_13->____lightsSide2Mat_10;
		__this->___U3ClightToBlinkOffU3E5__7_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClightToBlinkOffU3E5__7_9), (void*)L_14);
		// Color onColor = new Color(1.0f, 1.0f, 1.0f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___U3ConColorU3E5__8_10 = L_15;
		// Color offColor = new Color(1.0f, 1.0f, 1.0f, 0.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___U3CoffColorU3E5__9_11 = L_16;
		goto IL_0179;
	}

IL_00c4:
	{
		// float t = (Time.time - lightBlinkStartTime) / lightBlinkDuration;
		float L_17;
		L_17 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_18 = __this->___U3ClightBlinkStartTimeU3E5__4_6;
		float L_19 = __this->___U3ClightBlinkDurationU3E5__3_5;
		V_2 = ((float)(((float)il2cpp_codegen_subtract(L_17, L_18))/L_19));
		// lightToBlinkOn.SetColor(_colorId, Color.Lerp(offColor, onColor, t));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___U3ClightToBlinkOnU3E5__6_8;
		TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->____colorId_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___U3CoffColorU3E5__9_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = __this->___U3ConColorU3E5__8_10;
		float L_25 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_23, L_24, L_25, NULL);
		NullCheck(L_20);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_20, L_22, L_26, NULL);
		// lightToBlinkOff.SetColor(_colorId, Color.Lerp(onColor, offColor, t));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___U3ClightToBlinkOffU3E5__7_9;
		TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->____colorId_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = __this->___U3ConColorU3E5__8_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = __this->___U3CoffColorU3E5__9_11;
		float L_32 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		L_33 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_30, L_31, L_32, NULL);
		NullCheck(L_27);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_27, L_29, L_33, NULL);
		// if (Time.time > lightBlinkEndTime)
		float L_34;
		L_34 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_35 = __this->___U3ClightBlinkEndTimeU3E5__5_7;
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_0162;
		}
	}
	{
		// Material temp = lightToBlinkOn;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___U3ClightToBlinkOnU3E5__6_8;
		V_3 = L_36;
		// lightToBlinkOn = lightToBlinkOff;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___U3ClightToBlinkOffU3E5__7_9;
		__this->___U3ClightToBlinkOnU3E5__6_8 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClightToBlinkOnU3E5__6_8), (void*)L_37);
		// lightToBlinkOff = temp;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = V_3;
		__this->___U3ClightToBlinkOffU3E5__7_9 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClightToBlinkOffU3E5__7_9), (void*)L_38);
		// lightBlinkStartTime = Time.time;
		float L_39;
		L_39 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3ClightBlinkStartTimeU3E5__4_6 = L_39;
		// lightBlinkEndTime = Time.time + lightBlinkDuration;
		float L_40;
		L_40 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_41 = __this->___U3ClightBlinkDurationU3E5__3_5;
		__this->___U3ClightBlinkEndTimeU3E5__5_7 = ((float)il2cpp_codegen_add(L_40, L_41));
	}

IL_0162:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0172:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0179:
	{
		// while (Time.time < animationEndTime)
		float L_42;
		L_42 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_43 = __this->___U3CanimationEndTimeU3E5__2_4;
		if ((((float)L_42) < ((float)L_43)))
		{
			goto IL_00c4;
		}
	}
	{
		// ToggleLightObjects(false);
		TrainCrossingController_t9E464193B59140D54E9B9AA92AB8B7C34788BA75* L_44 = V_1;
		NullCheck(L_44);
		TrainCrossingController_ToggleLightObjects_mAFC81037C7641441E6375A6558FCF8FEFD33D574(L_44, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateCrossingU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA37F1E0AEB7639C9D4100D1C99B657A398CEA879 (U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateCrossingU3Ed__15_System_Collections_IEnumerator_Reset_mBCD5E96BE8CE94DD20BE98DF247524CD06FECCCA (U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateCrossingU3Ed__15_System_Collections_IEnumerator_Reset_mBCD5E96BE8CE94DD20BE98DF247524CD06FECCCA_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.TrainCrossingController/<AnimateCrossing>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateCrossingU3Ed__15_System_Collections_IEnumerator_get_Current_m17A72D7597BA7E484D44BD2CF2FDAF15E727116F (U3CAnimateCrossingU3Ed__15_t9A1936026B9E1AC63FF1BA774A462DD291B14235* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void OculusSampleFramework.TrainLocomotive::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_Start_mA8035D4E851A65EA28F6615E3D2515FEFF4D8B7D (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// _standardRateOverTimeMultiplier = _smoke1.emission.rateOverTimeMultiplier;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____smoke1_34;
		NullCheck(L_0);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1;
		L_1 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = EmissionModule_get_rateOverTimeMultiplier_m9BD9DA04BD762F6E7C22D025DC86CB6B96227867((&V_0), NULL);
		__this->____standardRateOverTimeMultiplier_41 = L_2;
		// _standardMaxParticles = _smoke1.main.maxParticles;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->____smoke1_34;
		NullCheck(L_3);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_4;
		L_4 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_3, NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198((&V_1), NULL);
		__this->____standardMaxParticles_42 = L_5;
		// Distance = 0.0f;
		TrainCarBase_set_Distance_mF9D78037A307E9060BC95667FA44CF820A0F13DD_inline(__this, (0.0f), NULL);
		// _speedDiv = (MAX_SPEED - MIN_SPEED) / _accelerationSounds.Length;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_6 = __this->____accelerationSounds_29;
		NullCheck(L_6);
		__this->____speedDiv_40 = ((float)((2.5f)/((float)((int32_t)(((RuntimeArray*)L_6)->max_length)))));
		// _currentSpeed = _initialSpeed;
		float L_7 = __this->____initialSpeed_19;
		__this->____currentSpeed_39 = L_7;
		// UpdateCarPosition();
		TrainCarBase_UpdateCarPosition_mA4D577CE3C64E1AA19FD8EBF89536A588A473F50(__this, NULL);
		// _smoke1.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->____smoke1_34;
		NullCheck(L_8);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_8, NULL);
		// _startStopTrainCr = StartCoroutine(StartStopTrain(true));
		RuntimeObject* L_9;
		L_9 = TrainLocomotive_StartStopTrain_m923C25578C7E5C83CA661CAD2745DA6F4F6D627C(__this, (bool)1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		__this->____startStopTrainCr_43 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____startStopTrainCr_43), (void*)L_10);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_Update_m541AD2FB35342FC3572EFF41A0BCBD92D803D864 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePosition();
		VirtualActionInvoker0::Invoke(5 /* System.Void OculusSampleFramework.TrainCarBase::UpdatePosition() */, __this);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_UpdatePosition_m56DEEF49488DC3A7B463D2F5E6E2A114AD5BF72F (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrainCarBaseU5BU5D_t6F8E5463CC2FF62ADD249184806D420B00F70B8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!_isMoving)
		bool L_0 = __this->____isMoving_37;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_trainTrack != null)
		TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* L_1 = ((TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616*)__this)->____trainTrack_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// UpdateDistance();
		TrainLocomotive_UpdateDistance_m351865CC93F07988D15D8761D395D428C8E7D3C9(__this, NULL);
		// UpdateCarPosition();
		TrainCarBase_UpdateCarPosition_mA4D577CE3C64E1AA19FD8EBF89536A588A473F50(__this, NULL);
		// RotateCarWheels();
		TrainCarBase_RotateCarWheels_m1B3BCB04D6F4E79C3BF098AF4C6582C2D76A000D(__this, NULL);
	}

IL_0029:
	{
		// foreach (var trainCarBase in _childCars)
		TrainCarBaseU5BU5D_t6F8E5463CC2FF62ADD249184806D420B00F70B8A* L_3 = __this->____childCars_36;
		V_0 = L_3;
		V_1 = 0;
		goto IL_0040;
	}

IL_0034:
	{
		// foreach (var trainCarBase in _childCars)
		TrainCarBaseU5BU5D_t6F8E5463CC2FF62ADD249184806D420B00F70B8A* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// trainCarBase.UpdatePosition();
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(5 /* System.Void OculusSampleFramework.TrainCarBase::UpdatePosition() */, L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0040:
	{
		// foreach (var trainCarBase in _childCars)
		int32_t L_9 = V_1;
		TrainCarBaseU5BU5D_t6F8E5463CC2FF62ADD249184806D420B00F70B8A* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::StartStopStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_StartStopStateChanged_m1E6002A368988D15708B7B830F139BB129214C41 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	{
		// if (_startStopTrainCr == null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->____startStopTrainCr_43;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// _startStopTrainCr = StartCoroutine(StartStopTrain(!_isMoving));
		bool L_1 = __this->____isMoving_37;
		RuntimeObject* L_2;
		L_2 = TrainLocomotive_StartStopTrain_m923C25578C7E5C83CA661CAD2745DA6F4F6D627C(__this, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		__this->____startStopTrainCr_43 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____startStopTrainCr_43), (void*)L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator OculusSampleFramework.TrainLocomotive::StartStopTrain(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrainLocomotive_StartStopTrain_m923C25578C7E5C83CA661CAD2745DA6F4F6D627C (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, bool ___startTrain0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* L_0 = (U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9*)il2cpp_codegen_object_new(U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartStopTrainU3Ed__34__ctor_m6C4C1E9485DE26EBB56AECA7A016C2D7C963E0BE(L_0, 0, NULL);
		U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* L_2 = L_1;
		bool L_3 = ___startTrain0;
		NullCheck(L_2);
		L_2->___startTrain_2 = L_3;
		return L_2;
	}
}
// System.Single OculusSampleFramework.TrainLocomotive::PlayEngineSound(OculusSampleFramework.TrainLocomotive/EngineSoundState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainLocomotive_PlayEngineSound_mD69FE8AAA9D99F0F9A25D6F5A76CFFEF51B17A45 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, int32_t ___engineSoundState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* G_B5_0 = NULL;
	{
		// AudioClip audioClip = null;
		V_0 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
		// if (engineSoundState == EngineSoundState.Start)
		int32_t L_0 = ___engineSoundState0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// audioClip = _startUpSound;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->____startUpSound_31;
		V_0 = L_1;
		goto IL_004a;
	}

IL_000e:
	{
		// AudioClip[] audioClips = engineSoundState == EngineSoundState.AccelerateOrSetProperSpeed
		//     ? _accelerationSounds
		//     : _decelerationSounds;
		int32_t L_2 = ___engineSoundState0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_3 = __this->____decelerationSounds_30;
		G_B5_0 = L_3;
		goto IL_0020;
	}

IL_001a:
	{
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_4 = __this->____accelerationSounds_29;
		G_B5_0 = L_4;
	}

IL_0020:
	{
		// int numSounds = audioClips.Length;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_5 = G_B5_0;
		NullCheck(L_5);
		V_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		// int speedIndex = (int)Mathf.Round((_currentSpeed - MIN_SPEED) / _speedDiv);
		float L_6 = __this->____currentSpeed_39;
		float L_7 = __this->____speedDiv_40;
		float L_8;
		L_8 = bankers_roundf(((float)(((float)il2cpp_codegen_subtract(L_6, (0.200000003f)))/L_7)));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
		// audioClip = audioClips[Mathf.Clamp(speedIndex, 0, numSounds - 1)];
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_9, 0, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), NULL);
		NullCheck(L_5);
		int32_t L_12 = L_11;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = L_13;
	}

IL_004a:
	{
		// if (_engineAudioSource.clip == audioClip && _engineAudioSource.isPlaying &&
		//     engineSoundState == EngineSoundState.AccelerateOrSetProperSpeed)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->____engineAudioSource_28;
		NullCheck(L_14);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15;
		L_15 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_14, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0074;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->____engineAudioSource_28;
		NullCheck(L_18);
		bool L_19;
		L_19 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_18, NULL);
		if (!L_19)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_20 = ___engineSoundState0;
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0074;
		}
	}
	{
		// return 0.0f;
		return (0.0f);
	}

IL_0074:
	{
		// _engineAudioSource.clip = audioClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->____engineAudioSource_28;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_22 = V_0;
		NullCheck(L_21);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_21, L_22, NULL);
		// _engineAudioSource.timeSamples = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->____engineAudioSource_28;
		NullCheck(L_23);
		AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE(L_23, 0, NULL);
		// _engineAudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = __this->____engineAudioSource_28;
		NullCheck(L_24);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_24, NULL);
		// return audioClip.length;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_25 = V_0;
		NullCheck(L_25);
		float L_26;
		L_26 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_25, NULL);
		return L_26;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::UpdateDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_UpdateDistance_m351865CC93F07988D15D8761D395D428C8E7D3C9 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// var signedSpeed = _reverse ? -_currentSpeed : _currentSpeed;
		bool L_0 = __this->____reverse_38;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = __this->____currentSpeed_39;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0010:
	{
		float L_2 = __this->____currentSpeed_39;
		G_B3_0 = ((-L_2));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		// Distance = (Distance + signedSpeed * Time.deltaTime) % _trainTrack.TrackLength;
		float L_3;
		L_3 = TrainCarBase_get_Distance_m6B93FAF6496C152333743CEA7AAB979B5456A044_inline(__this, NULL);
		float L_4 = V_0;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* L_6 = ((TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616*)__this)->____trainTrack_9;
		NullCheck(L_6);
		float L_7;
		L_7 = TrainTrack_get_TrackLength_m007CB823F48E12E88CCC143F734431A3148B99AE_inline(L_6, NULL);
		TrainCarBase_set_Distance_mF9D78037A307E9060BC95667FA44CF820A0F13DD_inline(__this, (fmodf(((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)))), L_7)), NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::DecreaseSpeedStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_DecreaseSpeedStateChanged_m45757A992DE495AC07B1F6D57DAE8CCC3E5C4FE1 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	{
		// if (_startStopTrainCr == null && _isMoving)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->____startStopTrainCr_43;
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		bool L_1 = __this->____isMoving_37;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// _currentSpeed = Mathf.Clamp(_currentSpeed - _speedDiv, MIN_SPEED, MAX_SPEED);
		float L_2 = __this->____currentSpeed_39;
		float L_3 = __this->____speedDiv_40;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_2, L_3)), (0.200000003f), (2.70000005f), NULL);
		__this->____currentSpeed_39 = L_4;
		// UpdateSmokeEmissionBasedOnSpeed();
		TrainLocomotive_UpdateSmokeEmissionBasedOnSpeed_m7BB7210DD00DC5FAAFBC5C8C6ABB2AAED02ADBF6(__this, NULL);
		// PlayEngineSound(EngineSoundState.AccelerateOrSetProperSpeed);
		float L_5;
		L_5 = TrainLocomotive_PlayEngineSound_mD69FE8AAA9D99F0F9A25D6F5A76CFFEF51B17A45(__this, 1, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::IncreaseSpeedStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_IncreaseSpeedStateChanged_m9DCB8688B1A116909A6C7843EECFCB16E739ECBD (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	{
		// if (_startStopTrainCr == null && _isMoving)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->____startStopTrainCr_43;
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		bool L_1 = __this->____isMoving_37;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// _currentSpeed = Mathf.Clamp(_currentSpeed + _speedDiv, MIN_SPEED, MAX_SPEED);
		float L_2 = __this->____currentSpeed_39;
		float L_3 = __this->____speedDiv_40;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(L_2, L_3)), (0.200000003f), (2.70000005f), NULL);
		__this->____currentSpeed_39 = L_4;
		// UpdateSmokeEmissionBasedOnSpeed();
		TrainLocomotive_UpdateSmokeEmissionBasedOnSpeed_m7BB7210DD00DC5FAAFBC5C8C6ABB2AAED02ADBF6(__this, NULL);
		// PlayEngineSound(EngineSoundState.AccelerateOrSetProperSpeed);
		float L_5;
		L_5 = TrainLocomotive_PlayEngineSound_mD69FE8AAA9D99F0F9A25D6F5A76CFFEF51B17A45(__this, 1, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::UpdateSmokeEmissionBasedOnSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_UpdateSmokeEmissionBasedOnSpeed_m7BB7210DD00DC5FAAFBC5C8C6ABB2AAED02ADBF6 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var emissionModule = _smoke1.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____smoke1_34;
		NullCheck(L_0);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1;
		L_1 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_0, NULL);
		V_0 = L_1;
		// emissionModule.rateOverTimeMultiplier = GetCurrentSmokeEmission();
		float L_2;
		L_2 = TrainLocomotive_GetCurrentSmokeEmission_m9594D49C603189779E03F66211972D864E28633C(__this, NULL);
		EmissionModule_set_rateOverTimeMultiplier_mB15A82A2C188437DA4432F4402731132F64259EC((&V_0), L_2, NULL);
		// var mainModule = _smoke1.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->____smoke1_34;
		NullCheck(L_3);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_4;
		L_4 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_3, NULL);
		V_1 = L_4;
		// mainModule.maxParticles = (int)Mathf.Lerp(_standardMaxParticles, _standardMaxParticles * MAX_PARTICLES_MULTIPLIER,
		//     _currentSpeed / (MAX_SPEED - MIN_SPEED));
		int32_t L_5 = __this->____standardMaxParticles_42;
		int32_t L_6 = __this->____standardMaxParticles_42;
		float L_7 = __this->____currentSpeed_39;
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)L_5), ((float)((int32_t)il2cpp_codegen_multiply(L_6, 3))), ((float)(L_7/(2.5f))), NULL);
		MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748((&V_1), il2cpp_codegen_cast_double_to_int<int32_t>(L_8), NULL);
		// }
		return;
	}
}
// System.Single OculusSampleFramework.TrainLocomotive::GetCurrentSmokeEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainLocomotive_GetCurrentSmokeEmission_m9594D49C603189779E03F66211972D864E28633C (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	{
		// return Mathf.Lerp(_standardRateOverTimeMultiplier, _standardRateOverTimeMultiplier * SMOKE_SPEED_MULTIPLIER,
		//     _currentSpeed / (MAX_SPEED - MIN_SPEED));
		float L_0 = __this->____standardRateOverTimeMultiplier_41;
		float L_1 = __this->____standardRateOverTimeMultiplier_41;
		float L_2 = __this->____currentSpeed_39;
		float L_3;
		L_3 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_0, ((float)il2cpp_codegen_multiply(L_1, (8.0f))), ((float)(L_2/(2.5f))), NULL);
		return L_3;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::SmokeButtonStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_SmokeButtonStateChanged_m2DD09F55E1ECD386BCA6B4F540D895A1A784DC43 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	{
		// if (_isMoving)
		bool L_0 = __this->____isMoving_37;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// _smokeStackAudioSource.clip = _smokeSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->____smokeStackAudioSource_32;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->____smokeSound_33;
		NullCheck(L_1);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_1, L_2, NULL);
		// _smokeStackAudioSource.timeSamples = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->____smokeStackAudioSource_32;
		NullCheck(L_3);
		AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE(L_3, 0, NULL);
		// _smokeStackAudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->____smokeStackAudioSource_32;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// _smoke2.time = 0.0f;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = __this->____smoke2_35;
		NullCheck(L_5);
		ParticleSystem_set_time_mD7AF2E34304DBF8ED9ECA84710C0871B184B73EC(L_5, (0.0f), NULL);
		// _smoke2.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = __this->____smoke2_35;
		NullCheck(L_6);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_6, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::WhistleButtonStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_WhistleButtonStateChanged_mC99652993E8BA12B0C7EDC45FAF800C7D1326A06 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_whistleSound != null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->____whistleSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// _whistleAudioSource.clip = _whistleSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->____whistleAudioSource_26;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = __this->____whistleSound_27;
		NullCheck(L_2);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_2, L_3, NULL);
		// _whistleAudioSource.timeSamples = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->____whistleAudioSource_26;
		NullCheck(L_4);
		AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE(L_4, 0, NULL);
		// _whistleAudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->____whistleAudioSource_26;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::ReverseButtonStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive_ReverseButtonStateChanged_mC8649648374AB835DC725DBDCB07617B38323223 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	{
		// _reverse = !_reverse;
		bool L_0 = __this->____reverse_38;
		__this->____reverse_38 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainLocomotive__ctor_m77DA3442C2569D954CBE2879FE8CD740C52E1117 (TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _isMoving = true;
		__this->____isMoving_37 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616_il2cpp_TypeInfo_var);
		TrainCarBase__ctor_mAB1702EA386CA6F2156F8E03595B2D0E4C57FC4E(__this, NULL);
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
// System.Void OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStopTrainU3Ed__34__ctor_m6C4C1E9485DE26EBB56AECA7A016C2D7C963E0BE (U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStopTrainU3Ed__34_System_IDisposable_Dispose_m3580381D4D339CE8223C55021DAEB59890FFD9FC (U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartStopTrainU3Ed__34_MoveNext_m9B84B28ADB4791B089DE7C23058EE5E4C520EC8F (U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* V_1 = NULL;
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_2;
	memset((&V_2), 0, sizeof(V_2));
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* G_B5_0 = NULL;
	U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0142;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float endSpeed = startTrain ? _initialSpeed : 0.0f;
		bool L_4 = __this->___startTrain_2;
		G_B4_0 = __this;
		if (L_4)
		{
			G_B5_0 = __this;
			goto IL_0031;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0031:
	{
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->____initialSpeed_19;
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CendSpeedU3E5__2_4 = G_B6_0;
		// var timePeriodForSpeedChange = 3.0f;
		__this->___U3CtimePeriodForSpeedChangeU3E5__3_5 = (3.0f);
		// if (startTrain)
		bool L_7 = __this->___startTrain_2;
		if (!L_7)
		{
			goto IL_00a2;
		}
	}
	{
		// _smoke1.Play();
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_8 = V_1;
		NullCheck(L_8);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = L_8->____smoke1_34;
		NullCheck(L_9);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_9, NULL);
		// _isMoving = true;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_10 = V_1;
		NullCheck(L_10);
		L_10->____isMoving_37 = (bool)1;
		// var emissionModule1 = _smoke1.emission;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_11 = V_1;
		NullCheck(L_11);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = L_11->____smoke1_34;
		NullCheck(L_12);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_13;
		L_13 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_12, NULL);
		V_2 = L_13;
		// var mainModule = _smoke1.main;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_14 = V_1;
		NullCheck(L_14);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = L_14->____smoke1_34;
		NullCheck(L_15);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_16;
		L_16 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_15, NULL);
		V_3 = L_16;
		// emissionModule1.rateOverTimeMultiplier = _standardRateOverTimeMultiplier;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->____standardRateOverTimeMultiplier_41;
		EmissionModule_set_rateOverTimeMultiplier_mB15A82A2C188437DA4432F4402731132F64259EC((&V_2), L_18, NULL);
		// mainModule.maxParticles = _standardMaxParticles;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->____standardMaxParticles_42;
		MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748((&V_3), L_20, NULL);
		// timePeriodForSpeedChange = PlayEngineSound(EngineSoundState.Start);
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_21 = V_1;
		NullCheck(L_21);
		float L_22;
		L_22 = TrainLocomotive_PlayEngineSound_mD69FE8AAA9D99F0F9A25D6F5A76CFFEF51B17A45(L_21, 0, NULL);
		__this->___U3CtimePeriodForSpeedChangeU3E5__3_5 = L_22;
		goto IL_00af;
	}

IL_00a2:
	{
		// timePeriodForSpeedChange = PlayEngineSound(EngineSoundState.Stop);
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_23 = V_1;
		NullCheck(L_23);
		float L_24;
		L_24 = TrainLocomotive_PlayEngineSound_mD69FE8AAA9D99F0F9A25D6F5A76CFFEF51B17A45(L_23, 2, NULL);
		__this->___U3CtimePeriodForSpeedChangeU3E5__3_5 = L_24;
	}

IL_00af:
	{
		// _engineAudioSource.loop = false;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_25 = V_1;
		NullCheck(L_25);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26 = L_25->____engineAudioSource_28;
		NullCheck(L_26);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_26, (bool)0, NULL);
		// timePeriodForSpeedChange = timePeriodForSpeedChange * 0.9f;
		float L_27 = __this->___U3CtimePeriodForSpeedChangeU3E5__3_5;
		__this->___U3CtimePeriodForSpeedChangeU3E5__3_5 = ((float)il2cpp_codegen_multiply(L_27, (0.899999976f)));
		// float startTime = Time.time;
		float L_28;
		L_28 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3CstartTimeU3E5__4_6 = L_28;
		// float endTime = Time.time + timePeriodForSpeedChange;
		float L_29;
		L_29 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_30 = __this->___U3CtimePeriodForSpeedChangeU3E5__3_5;
		__this->___U3CendTimeU3E5__5_7 = ((float)il2cpp_codegen_add(L_29, L_30));
		// float startSpeed = _currentSpeed;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_31 = V_1;
		NullCheck(L_31);
		float L_32 = L_31->____currentSpeed_39;
		__this->___U3CstartSpeedU3E5__6_8 = L_32;
		goto IL_0149;
	}

IL_00f8:
	{
		// float t = (Time.time - startTime) / timePeriodForSpeedChange;
		float L_33;
		L_33 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_34 = __this->___U3CstartTimeU3E5__4_6;
		float L_35 = __this->___U3CtimePeriodForSpeedChangeU3E5__3_5;
		V_4 = ((float)(((float)il2cpp_codegen_subtract(L_33, L_34))/L_35));
		// _currentSpeed = startSpeed * (1.0f - t) + endSpeed * t;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_36 = V_1;
		float L_37 = __this->___U3CstartSpeedU3E5__6_8;
		float L_38 = V_4;
		float L_39 = __this->___U3CendSpeedU3E5__2_4;
		float L_40 = V_4;
		NullCheck(L_36);
		L_36->____currentSpeed_39 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_37, ((float)il2cpp_codegen_subtract((1.0f), L_38)))), ((float)il2cpp_codegen_multiply(L_39, L_40))));
		// UpdateSmokeEmissionBasedOnSpeed();
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_41 = V_1;
		NullCheck(L_41);
		TrainLocomotive_UpdateSmokeEmissionBasedOnSpeed_m7BB7210DD00DC5FAAFBC5C8C6ABB2AAED02ADBF6(L_41, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0142:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0149:
	{
		// while (Time.time < endTime)
		float L_42;
		L_42 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_43 = __this->___U3CendTimeU3E5__5_7;
		if ((((float)L_42) < ((float)L_43)))
		{
			goto IL_00f8;
		}
	}
	{
		// _currentSpeed = endSpeed;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_44 = V_1;
		float L_45 = __this->___U3CendSpeedU3E5__2_4;
		NullCheck(L_44);
		L_44->____currentSpeed_39 = L_45;
		// _startStopTrainCr = null;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_46 = V_1;
		NullCheck(L_46);
		L_46->____startStopTrainCr_43 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->____startStopTrainCr_43), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// _isMoving = startTrain;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_47 = V_1;
		bool L_48 = __this->___startTrain_2;
		NullCheck(L_47);
		L_47->____isMoving_37 = L_48;
		// if (!_isMoving)
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_49 = V_1;
		NullCheck(L_49);
		bool L_50 = L_49->____isMoving_37;
		if (L_50)
		{
			goto IL_018a;
		}
	}
	{
		// _smoke1.Stop();
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_51 = V_1;
		NullCheck(L_51);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_52 = L_51->____smoke1_34;
		NullCheck(L_52);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_52, NULL);
		goto IL_019e;
	}

IL_018a:
	{
		// _engineAudioSource.loop = true;
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_53 = V_1;
		NullCheck(L_53);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_54 = L_53->____engineAudioSource_28;
		NullCheck(L_54);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_54, (bool)1, NULL);
		// PlayEngineSound(EngineSoundState.AccelerateOrSetProperSpeed);
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_55 = V_1;
		NullCheck(L_55);
		float L_56;
		L_56 = TrainLocomotive_PlayEngineSound_mD69FE8AAA9D99F0F9A25D6F5A76CFFEF51B17A45(L_55, 1, NULL);
	}

IL_019e:
	{
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartStopTrainU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD4B4037EF047CE63802DDB6977D938E596DB389 (U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStopTrainU3Ed__34_System_Collections_IEnumerator_Reset_mEBAF005BA8E10A1EF29605BE77EDE739EB2EF984 (U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartStopTrainU3Ed__34_System_Collections_IEnumerator_Reset_mEBAF005BA8E10A1EF29605BE77EDE739EB2EF984_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.TrainLocomotive/<StartStopTrain>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartStopTrainU3Ed__34_System_Collections_IEnumerator_get_Current_mEF5C740BFDAACB01D587A4F269E43CD1791A96B2 (U3CStartStopTrainU3Ed__34_t56DD6C2FB4AB2588CC63AC7602A532856243DEB9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Single OculusSampleFramework.TrainTrack::get_TrackLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrainTrack_get_TrackLength_m007CB823F48E12E88CCC143F734431A3148B99AE (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, const RuntimeMethod* method) 
{
	{
		// return _trainLength;
		float L_0 = __this->____trainLength_9;
		return L_0;
	}
}
// System.Void OculusSampleFramework.TrainTrack::set_TrackLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainTrack_set_TrackLength_mBD68D6F4FD33127524693DA99B9FD30A0577B7C4 (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _trainLength = value;
		float L_0 = ___value0;
		__this->____trainLength_9 = L_0;
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainTrack::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainTrack_Awake_mE59D0C468F6D6E2CBCEFC0C5DD7848C6EF403A98 (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, const RuntimeMethod* method) 
{
	{
		// Regenerate();
		TrainTrack_Regenerate_mF5741B178A8DA4D1C8C5F327028D4E146EFF37F6(__this, NULL);
		// }
		return;
	}
}
// OculusSampleFramework.TrackSegment OculusSampleFramework.TrainTrack::GetSegment(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* TrainTrack_GetSegment_mCD8849640D747C216ABBD0C2417FB3C0AE7C19F7 (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, float ___distance0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* V_2 = NULL;
	TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* V_3 = NULL;
	{
		// int childCount = _segmentParent.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____segmentParent_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		V_0 = L_1;
		// for (int i = 0; i < childCount; i++)
		V_1 = 0;
		goto IL_0044;
	}

IL_0010:
	{
		// var segment = _trackSegments[i];
		TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295* L_2 = __this->____trackSegments_10;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// var nextSegment = _trackSegments[(i + 1) % childCount];
		TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295* L_6 = __this->____trackSegments_10;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_7, 1))%L_8));
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// if (distance >= segment.StartDistance && (distance < nextSegment.StartDistance || i == childCount - 1))
		float L_11 = ___distance0;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_12 = V_2;
		NullCheck(L_12);
		float L_13;
		L_13 = TrackSegment_get_StartDistance_mBC42F0134B39A7E31F1278FB09717ABB946E97BF_inline(L_12, NULL);
		if ((!(((float)L_11) >= ((float)L_13))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = ___distance0;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_15 = V_3;
		NullCheck(L_15);
		float L_16;
		L_16 = TrackSegment_get_StartDistance_mBC42F0134B39A7E31F1278FB09717ABB946E97BF_inline(L_15, NULL);
		if ((((float)L_14) < ((float)L_16)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))))
		{
			goto IL_0040;
		}
	}

IL_003e:
	{
		// return segment;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_19 = V_2;
		return L_19;
	}

IL_0040:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0044:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680*)NULL;
	}
}
// System.Void OculusSampleFramework.TrainTrack::Regenerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainTrack_Regenerate_mF5741B178A8DA4D1C8C5F327028D4E146EFF37F6 (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680_m4496ABBB105279A0038A9E35859784E5E7F2FCB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* V_4 = NULL;
	Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* V_5 = NULL;
	{
		// _trackSegments = _segmentParent.GetComponentsInChildren<TrackSegment>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____segmentParent_6;
		NullCheck(L_0);
		TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295* L_1;
		L_1 = Component_GetComponentsInChildren_TisTrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680_m4496ABBB105279A0038A9E35859784E5E7F2FCB6(L_0, Component_GetComponentsInChildren_TisTrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680_m4496ABBB105279A0038A9E35859784E5E7F2FCB6_RuntimeMethod_var);
		__this->____trackSegments_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trackSegments_10), (void*)L_1);
		// TrackLength = 0;
		TrainTrack_set_TrackLength_mBD68D6F4FD33127524693DA99B9FD30A0577B7C4_inline(__this, (0.0f), NULL);
		// int childCount = _segmentParent.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____segmentParent_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_2, NULL);
		V_0 = L_3;
		// TrackSegment lastSegment = null;
		V_1 = (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680*)NULL;
		// var ratio = 0.0f;
		V_2 = (0.0f);
		// for (int i = 0; i < childCount; i++)
		V_3 = 0;
		goto IL_00ca;
	}

IL_0037:
	{
		// var segment = _trackSegments[i];
		TrackSegmentU5BU5D_tD84AF9120F4019904C24BA6A699C67DEBFCE9295* L_4 = __this->____trackSegments_10;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// segment.SubDivCount = _subDivCount;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_8 = V_4;
		int32_t L_9 = __this->____subDivCount_5;
		NullCheck(L_8);
		TrackSegment_set_SubDivCount_mAEB68B90E1330424ADEBF83CDE32D99F267DDE7C_inline(L_8, L_9, NULL);
		// ratio = segment.setGridSize(_gridSize);
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_10 = V_4;
		float L_11 = __this->____gridSize_4;
		NullCheck(L_10);
		float L_12;
		L_12 = TrackSegment_setGridSize_mEECA9D39E76EEB2C6E1470BA3C2CCFFD7536434B(L_10, L_11, NULL);
		V_2 = L_12;
		// if (lastSegment != null)
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_00a0;
		}
	}
	{
		// var endPose = lastSegment.EndPose;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_15 = V_1;
		NullCheck(L_15);
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_16;
		L_16 = TrackSegment_get_EndPose_m56C4F14D6358D2B3AD9AD4CAB7A932C707A6A71E(L_15, NULL);
		V_5 = L_16;
		// segment.transform.position = endPose.Position;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_17 = V_4;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_19 = V_5;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19->___Position_0;
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_20, NULL);
		// segment.transform.rotation = endPose.Rotation;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_21 = V_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* L_23 = V_5;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = L_23->___Rotation_1;
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_24, NULL);
		// segment.StartDistance = TrackLength;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_25 = V_4;
		float L_26;
		L_26 = TrainTrack_get_TrackLength_m007CB823F48E12E88CCC143F734431A3148B99AE_inline(__this, NULL);
		NullCheck(L_25);
		TrackSegment_set_StartDistance_mF619D4B1E344E9677DB748117EB3FF4043BB6408_inline(L_25, L_26, NULL);
	}

IL_00a0:
	{
		// if (_regnerateTrackMeshOnAwake)
		bool L_27 = __this->____regnerateTrackMeshOnAwake_8;
		if (!L_27)
		{
			goto IL_00af;
		}
	}
	{
		// segment.RegenerateTrackAndMesh();
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_28 = V_4;
		NullCheck(L_28);
		TrackSegment_RegenerateTrackAndMesh_m210279986500F48ABC2C0D0F511A219220D96D1A(L_28, NULL);
	}

IL_00af:
	{
		// TrackLength += segment.SegmentLength;
		float L_29;
		L_29 = TrainTrack_get_TrackLength_m007CB823F48E12E88CCC143F734431A3148B99AE_inline(__this, NULL);
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_30 = V_4;
		NullCheck(L_30);
		float L_31;
		L_31 = TrackSegment_get_SegmentLength_m4DC97686445AB361249093727801A0A7BCCE4C65(L_30, NULL);
		TrainTrack_set_TrackLength_mBD68D6F4FD33127524693DA99B9FD30A0577B7C4_inline(__this, ((float)il2cpp_codegen_add(L_29, L_31)), NULL);
		// lastSegment = segment;
		TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* L_32 = V_4;
		V_1 = L_32;
		// for (int i = 0; i < childCount; i++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ca:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_34 = V_3;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0037;
		}
	}
	{
		// SetScale(ratio);
		float L_36 = V_2;
		TrainTrack_SetScale_mD3CAB2E3C6842CAB864DD896209C2257E701E0A2(__this, L_36, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainTrack::SetScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainTrack_SetScale_mD3CAB2E3C6842CAB864DD896209C2257E701E0A2 (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, float ___ratio0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E_m95FCA4CB92F6DE57BE094BDD6974BC757B586B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D_m6458A84700BCD1DA009674C73A5E7E028C2D32EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TrainCarU5BU5D_t7CFF4CCAF90716935B7C8324466A6326DB2414DD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// _trainParent.localScale = new Vector3(ratio, ratio, ratio);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____trainParent_7;
		float L_1 = ___ratio0;
		float L_2 = ___ratio0;
		float L_3 = ___ratio0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_4, NULL);
		// var cars = _trainParent.GetComponentsInChildren<TrainCar>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____trainParent_7;
		NullCheck(L_5);
		TrainCarU5BU5D_t7CFF4CCAF90716935B7C8324466A6326DB2414DD* L_6;
		L_6 = Component_GetComponentsInChildren_TisTrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D_m6458A84700BCD1DA009674C73A5E7E028C2D32EC(L_5, Component_GetComponentsInChildren_TisTrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D_m6458A84700BCD1DA009674C73A5E7E028C2D32EC_RuntimeMethod_var);
		// var locomotive = _trainParent.GetComponentInChildren<TrainLocomotive>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____trainParent_7;
		NullCheck(L_7);
		TrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E* L_8;
		L_8 = Component_GetComponentInChildren_TisTrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E_m95FCA4CB92F6DE57BE094BDD6974BC757B586B70(L_7, Component_GetComponentInChildren_TisTrainLocomotive_t9B892C94EE7B2A4637F28836BBFDD0291115E57E_m95FCA4CB92F6DE57BE094BDD6974BC757B586B70_RuntimeMethod_var);
		// locomotive.Scale = ratio;
		float L_9 = ___ratio0;
		NullCheck(L_8);
		TrainCarBase_set_Scale_m79E7EF54132ABFF88F00D49ED9C11D7E611D7626_inline(L_8, L_9, NULL);
		// foreach (var car in cars)
		V_0 = L_6;
		V_1 = 0;
		goto IL_0041;
	}

IL_0034:
	{
		// foreach (var car in cars)
		TrainCarU5BU5D_t7CFF4CCAF90716935B7C8324466A6326DB2414DD* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TrainCar_t6DCDD84A769A7A356BCBCEAF536718032D8C625D* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// car.Scale = ratio;
		float L_14 = ___ratio0;
		NullCheck(L_13);
		TrainCarBase_set_Scale_m79E7EF54132ABFF88F00D49ED9C11D7E611D7626_inline(L_13, L_14, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0041:
	{
		// foreach (var car in cars)
		int32_t L_16 = V_1;
		TrainCarU5BU5D_t7CFF4CCAF90716935B7C8324466A6326DB2414DD* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.TrainTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainTrack__ctor_m79E797C46BDFF5FF40E3D703AE38324A00B4E401 (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _gridSize = 0.5f;
		__this->____gridSize_4 = (0.5f);
		// [SerializeField] private int _subDivCount = 20;
		__this->____subDivCount_5 = ((int32_t)20);
		// private float _trainLength = -1.0f;
		__this->____trainLength_9 = (-1.0f);
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
// System.Void OculusSampleFramework.Pose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m64168E925BDA4409B159DE34F1E287CACB5C9C6D (Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* __this, const RuntimeMethod* method) 
{
	{
		// public Pose()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___Position_0 = L_0;
		// Rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___Rotation_1 = L_1;
		// }
		return;
	}
}
// System.Void OculusSampleFramework.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_mDDD5B447084E07F33B3F9A2C27DA1EEA03950C87 (Pose_t586B98D092E896A4FE933ADA4074D3F7D44A8CF7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) 
{
	{
		// public Pose(Vector3 position, Quaternion rotation)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		__this->___Position_0 = L_0;
		// Rotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		__this->___Rotation_1 = L_1;
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
// System.Boolean OculusSampleFramework.WindmillBladesController::get_IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindmillBladesController_get_IsMoving_mD9B1B60A86AAD2EA43A7F88C45ECD4256D024540 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsMoving { get; private set; }
		bool L_0 = __this->___U3CIsMovingU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController::set_IsMoving(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillBladesController_set_IsMoving_m35BF95FD16ABE573A75F2EC033A2D7068A02B1A2 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsMoving { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsMovingU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillBladesController_Start_m499CF78121E16F84BEA07E52A1362AA139599FA4 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, const RuntimeMethod* method) 
{
	{
		// _originalRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->____originalRotation_13 = L_1;
		// }
		return;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillBladesController_Update_mF8B087076289DCB176D8687CC19DC3222CDB82C5 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, const RuntimeMethod* method) 
{
	{
		// _rotAngle += _currentSpeed * Time.deltaTime;
		float L_0 = __this->____rotAngle_14;
		float L_1 = __this->____currentSpeed_10;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____rotAngle_14 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if (_rotAngle > 360.0f)
		float L_3 = __this->____rotAngle_14;
		if ((!(((float)L_3) > ((float)(360.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// _rotAngle = 0.0f;
		__this->____rotAngle_14 = (0.0f);
	}

IL_0031:
	{
		// transform.localRotation = _originalRotation * Quaternion.AngleAxis(_rotAngle, Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->____originalRotation_13;
		float L_6 = __this->____rotAngle_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_6, L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_5, L_8, NULL);
		NullCheck(L_4);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_4, L_9, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController::SetMoveState(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillBladesController_SetMoveState_mDD25E6E8190A0584599E3B3E7B44DF5ED1204BCE (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, bool ___newMoveState0, float ___goalSpeed1, const RuntimeMethod* method) 
{
	{
		// IsMoving = newMoveState;
		bool L_0 = ___newMoveState0;
		WindmillBladesController_set_IsMoving_m35BF95FD16ABE573A75F2EC033A2D7068A02B1A2_inline(__this, L_0, NULL);
		// if (_lerpSpeedCoroutine != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->____lerpSpeedCoroutine_11;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// StopCoroutine(_lerpSpeedCoroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->____lerpSpeedCoroutine_11;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_2, NULL);
	}

IL_001b:
	{
		// _lerpSpeedCoroutine = StartCoroutine(LerpToSpeed(goalSpeed));
		float L_3 = ___goalSpeed1;
		RuntimeObject* L_4;
		L_4 = WindmillBladesController_LerpToSpeed_mBC880C7530D09D0E982942CAF3BB246B5FE1BB30(__this, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		__this->____lerpSpeedCoroutine_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lerpSpeedCoroutine_11), (void*)L_5);
		// }
		return;
	}
}
// System.Collections.IEnumerator OculusSampleFramework.WindmillBladesController::LerpToSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindmillBladesController_LerpToSpeed_mBC880C7530D09D0E982942CAF3BB246B5FE1BB30 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, float ___goalSpeed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* L_0 = (U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40*)il2cpp_codegen_object_new(U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLerpToSpeedU3Ed__17__ctor_mB0644DFE449B8E167768389988830FD1FBC2B821(L_0, 0, NULL);
		U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* L_2 = L_1;
		float L_3 = ___goalSpeed0;
		NullCheck(L_2);
		L_2->___goalSpeed_3 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator OculusSampleFramework.WindmillBladesController::PlaySoundDelayed(UnityEngine.AudioClip,UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindmillBladesController_PlaySoundDelayed_m2F25974FC738C03CBAB13838C100CC4616A28272 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___initial0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, float ___timeDelayAfterInitial2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* L_0 = (U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1*)il2cpp_codegen_object_new(U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlaySoundDelayedU3Ed__18__ctor_mA399B2FD06607BD5B6C8EAA9A1B97B164B27E033(L_0, 0, NULL);
		U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* L_2 = L_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___initial0;
		NullCheck(L_2);
		L_2->___initial_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___initial_3), (void*)L_3);
		U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* L_4 = L_2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___clip1;
		NullCheck(L_4);
		L_4->___clip_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___clip_5), (void*)L_5);
		U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* L_6 = L_4;
		float L_7 = ___timeDelayAfterInitial2;
		NullCheck(L_6);
		L_6->___timeDelayAfterInitial_4 = L_7;
		return L_6;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController::PlaySound(UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillBladesController_PlaySound_m18ED2161A9FB0F7F84AA0A42BC5B0FCF3E4B2B89 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, bool ___loop1, const RuntimeMethod* method) 
{
	{
		// _audioSource.loop = loop;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_5;
		bool L_1 = ___loop1;
		NullCheck(L_0);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_0, L_1, NULL);
		// _audioSource.timeSamples = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->____audioSource_5;
		NullCheck(L_2);
		AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE(L_2, 0, NULL);
		// _audioSource.clip = clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->____audioSource_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = ___clip0;
		NullCheck(L_3);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_3, L_4, NULL);
		// _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->____audioSource_5;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillBladesController__ctor_mD8749A515B4E54A5941D9482E905262F7C29C0E8 (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, const RuntimeMethod* method) 
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
// System.Void OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToSpeedU3Ed__17__ctor_mB0644DFE449B8E167768389988830FD1FBC2B821 (U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToSpeedU3Ed__17_System_IDisposable_Dispose_mA1BA58911F6872F07E9D7E89BC473072D366F4C6 (U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLerpToSpeedU3Ed__17_MoveNext_mB46512E32F3D74D7BC66EAEDA128948660250003 (U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ec;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var totalTime = 0f;
		__this->___U3CtotalTimeU3E5__2_4 = (0.0f);
		// var startSpeed = _currentSpeed;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->____currentSpeed_10;
		__this->___U3CstartSpeedU3E5__3_5 = L_5;
		// if (_audioChangeCr != null)
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_6 = V_1;
		NullCheck(L_6);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7 = L_6->____audioChangeCr_12;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// StopCoroutine(_audioChangeCr);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_8 = V_1;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_9 = V_1;
		NullCheck(L_9);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10 = L_9->____audioChangeCr_12;
		NullCheck(L_8);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_8, L_10, NULL);
	}

IL_004c:
	{
		// if (IsMoving)
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_11 = V_1;
		NullCheck(L_11);
		bool L_12;
		L_12 = WindmillBladesController_get_IsMoving_mD9B1B60A86AAD2EA43A7F88C45ECD4256D024540_inline(L_11, NULL);
		if (!L_12)
		{
			goto IL_0085;
		}
	}
	{
		// _audioChangeCr = StartCoroutine(PlaySoundDelayed(_windMillStartSound,
		//   _windMillRotationSound, _windMillStartSound.length * 0.95f));
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_13 = V_1;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_14 = V_1;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_15 = V_1;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_16 = V_1;
		NullCheck(L_16);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_17 = L_16->____windMillStartSound_7;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_18 = V_1;
		NullCheck(L_18);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = L_18->____windMillRotationSound_6;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_20 = V_1;
		NullCheck(L_20);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_21 = L_20->____windMillStartSound_7;
		NullCheck(L_21);
		float L_22;
		L_22 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_21, NULL);
		NullCheck(L_15);
		RuntimeObject* L_23;
		L_23 = WindmillBladesController_PlaySoundDelayed_m2F25974FC738C03CBAB13838C100CC4616A28272(L_15, L_17, L_19, ((float)il2cpp_codegen_multiply(L_22, (0.949999988f))), NULL);
		NullCheck(L_14);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_24;
		L_24 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_14, L_23, NULL);
		NullCheck(L_13);
		L_13->____audioChangeCr_12 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____audioChangeCr_12), (void*)L_24);
		goto IL_0092;
	}

IL_0085:
	{
		// PlaySound(_windMillStopSound);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_25 = V_1;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_26 = V_1;
		NullCheck(L_26);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = L_26->____windMillStopSound_8;
		NullCheck(L_25);
		WindmillBladesController_PlaySound_m18ED2161A9FB0F7F84AA0A42BC5B0FCF3E4B2B89(L_25, L_27, (bool)0, NULL);
	}

IL_0092:
	{
		// var diffSpeeds = Mathf.Abs(_currentSpeed - goalSpeed);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_28 = V_1;
		NullCheck(L_28);
		float L_29 = L_28->____currentSpeed_10;
		float L_30 = __this->___goalSpeed_3;
		float L_31;
		L_31 = fabsf(((float)il2cpp_codegen_subtract(L_29, L_30)));
		V_2 = L_31;
		goto IL_0106;
	}

IL_00a7:
	{
		// _currentSpeed = Mathf.Lerp(startSpeed, goalSpeed, totalTime / MAX_TIME);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_32 = V_1;
		float L_33 = __this->___U3CstartSpeedU3E5__3_5;
		float L_34 = __this->___goalSpeed_3;
		float L_35 = __this->___U3CtotalTimeU3E5__2_4;
		float L_36;
		L_36 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_33, L_34, ((float)(L_35/(1.0f))), NULL);
		NullCheck(L_32);
		L_32->____currentSpeed_10 = L_36;
		// totalTime += Time.deltaTime;
		float L_37 = __this->___U3CtotalTimeU3E5__2_4;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtotalTimeU3E5__2_4 = ((float)il2cpp_codegen_add(L_37, L_38));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ec:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// diffSpeeds = Mathf.Abs(_currentSpeed - goalSpeed);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_39 = V_1;
		NullCheck(L_39);
		float L_40 = L_39->____currentSpeed_10;
		float L_41 = __this->___goalSpeed_3;
		float L_42;
		L_42 = fabsf(((float)il2cpp_codegen_subtract(L_40, L_41)));
		V_2 = L_42;
	}

IL_0106:
	{
		// while (diffSpeeds > Mathf.Epsilon)
		float L_43 = V_2;
		float L_44 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((((float)L_43) > ((float)L_44)))
		{
			goto IL_00a7;
		}
	}
	{
		// _lerpSpeedCoroutine = null;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_45 = V_1;
		NullCheck(L_45);
		L_45->____lerpSpeedCoroutine_11 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->____lerpSpeedCoroutine_11), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLerpToSpeedU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE04418CACED10038CC1F2DF0E9810983E2215DB9 (U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpToSpeedU3Ed__17_System_Collections_IEnumerator_Reset_mE335D544A3E213AA1C592DD7794424E3787FA2BE (U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLerpToSpeedU3Ed__17_System_Collections_IEnumerator_Reset_mE335D544A3E213AA1C592DD7794424E3787FA2BE_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.WindmillBladesController/<LerpToSpeed>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLerpToSpeedU3Ed__17_System_Collections_IEnumerator_get_Current_m520A472FF79A101F69C0C2E37158581DFE34ADE7 (U3CLerpToSpeedU3Ed__17_tBDEFD966D36EEA28609905A804622FEAC6054D40* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySoundDelayedU3Ed__18__ctor_mA399B2FD06607BD5B6C8EAA9A1B97B164B27E033 (U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySoundDelayedU3Ed__18_System_IDisposable_Dispose_mB7EDAFD404A39D0F4479FF96C636C0D3DE427D4F (U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlaySoundDelayedU3Ed__18_MoveNext_m3DEC57B570F5AFD8C19255D1BC14D8B871CAB792 (U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlaySound(initial, false);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_4 = V_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___initial_3;
		NullCheck(L_4);
		WindmillBladesController_PlaySound_m18ED2161A9FB0F7F84AA0A42BC5B0FCF3E4B2B89(L_4, L_5, (bool)0, NULL);
		// yield return new WaitForSeconds(timeDelayAfterInitial);
		float L_6 = __this->___timeDelayAfterInitial_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, L_6, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlaySound(clip, true);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_8 = V_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___clip_5;
		NullCheck(L_8);
		WindmillBladesController_PlaySound_m18ED2161A9FB0F7F84AA0A42BC5B0FCF3E4B2B89(L_8, L_9, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlaySoundDelayedU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAA13BE8436B3C557546B7EFE5A20B43D67EC737A (U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySoundDelayedU3Ed__18_System_Collections_IEnumerator_Reset_m8DAD6960C34AAE47BB8F758A3739AFCA20B79F8C (U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlaySoundDelayedU3Ed__18_System_Collections_IEnumerator_Reset_m8DAD6960C34AAE47BB8F758A3739AFCA20B79F8C_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.WindmillBladesController/<PlaySoundDelayed>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlaySoundDelayedU3Ed__18_System_Collections_IEnumerator_get_Current_mDA08F30D2D7014FA02490EA5566C3E06CA24460C (U3CPlaySoundDelayedU3Ed__18_tBE94A17594158C3B2FFB6425EBEFE88FBF6E58B1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void OculusSampleFramework.WindmillController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillController_Awake_mB36486AE1BE5B22F034052A6094DFADE12367918 (WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisWindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616_m53755224721F80FC4D0EB82D4A8BAA35EFF514C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bladesRotation = GetComponentInChildren<WindmillBladesController>();
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_0;
		L_0 = Component_GetComponentInChildren_TisWindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616_m53755224721F80FC4D0EB82D4A8BAA35EFF514C4(__this, Component_GetComponentInChildren_TisWindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616_m53755224721F80FC4D0EB82D4A8BAA35EFF514C4_RuntimeMethod_var);
		__this->____bladesRotation_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bladesRotation_7), (void*)L_0);
		// _bladesRotation.SetMoveState(true, _maxSpeed);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_1 = __this->____bladesRotation_7;
		float L_2 = __this->____maxSpeed_5;
		NullCheck(L_1);
		WindmillBladesController_SetMoveState_mDD25E6E8190A0584599E3B3E7B44DF5ED1204BCE(L_1, (bool)1, L_2, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.WindmillController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillController_OnEnable_m4C79FE499AD7BB5F894AA99E4EECD73CF83CC9E1 (WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInteractable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2_m0CDEA8EF47A15EFA3EB104C354E834030C56E3D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m35712670895235C4BB2182DB1E18A434907F5623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindmillController_StartStopStateChanged_m4F5830906DDB74D0F1DC45D689478F869163446B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startStopButton.GetComponent<Interactable>().InteractableStateChanged.AddListener(StartStopStateChanged);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____startStopButton_4;
		NullCheck(L_0);
		Interactable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2* L_1;
		L_1 = GameObject_GetComponent_TisInteractable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2_m0CDEA8EF47A15EFA3EB104C354E834030C56E3D3(L_0, GameObject_GetComponent_TisInteractable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2_m0CDEA8EF47A15EFA3EB104C354E834030C56E3D3_RuntimeMethod_var);
		NullCheck(L_1);
		InteractableStateArgsEvent_tAE90140049B5BEA21987B055A652C8CBA4D67D41* L_2 = L_1->___InteractableStateChanged_10;
		UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644* L_3 = (UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644*)il2cpp_codegen_object_new(UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD32C805751448D299B2AD38CB38D9B216645D7EF(L_3, __this, (intptr_t)((void*)WindmillController_StartStopStateChanged_m4F5830906DDB74D0F1DC45D689478F869163446B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m35712670895235C4BB2182DB1E18A434907F5623(L_2, L_3, UnityEvent_1_AddListener_m35712670895235C4BB2182DB1E18A434907F5623_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.WindmillController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillController_OnDisable_mBF4689DDF616CD9C2705ACC0B007244995BFE239 (WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInteractable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2_m0CDEA8EF47A15EFA3EB104C354E834030C56E3D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mF45099DCD5F62281322F30AF7675AC22B695B39E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindmillController_StartStopStateChanged_m4F5830906DDB74D0F1DC45D689478F869163446B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_startStopButton != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____startStopButton_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// _startStopButton.GetComponent<Interactable>().InteractableStateChanged.RemoveListener(StartStopStateChanged);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____startStopButton_4;
		NullCheck(L_2);
		Interactable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2* L_3;
		L_3 = GameObject_GetComponent_TisInteractable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2_m0CDEA8EF47A15EFA3EB104C354E834030C56E3D3(L_2, GameObject_GetComponent_TisInteractable_tC2DBF86B740EB02367138A8BCF634242CA3B93D2_m0CDEA8EF47A15EFA3EB104C354E834030C56E3D3_RuntimeMethod_var);
		NullCheck(L_3);
		InteractableStateArgsEvent_tAE90140049B5BEA21987B055A652C8CBA4D67D41* L_4 = L_3->___InteractableStateChanged_10;
		UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644* L_5 = (UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644*)il2cpp_codegen_object_new(UnityAction_1_t678924284150AF04511FDFDB52D96859D5876644_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mD32C805751448D299B2AD38CB38D9B216645D7EF(L_5, __this, (intptr_t)((void*)WindmillController_StartStopStateChanged_m4F5830906DDB74D0F1DC45D689478F869163446B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_mF45099DCD5F62281322F30AF7675AC22B695B39E(L_4, L_5, UnityEvent_1_RemoveListener_mF45099DCD5F62281322F30AF7675AC22B695B39E_RuntimeMethod_var);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.WindmillController::StartStopStateChanged(OculusSampleFramework.InteractableStateArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillController_StartStopStateChanged_m4F5830906DDB74D0F1DC45D689478F869163446B (WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53* __this, InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906* ___obj0, const RuntimeMethod* method) 
{
	WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53* G_B6_0 = NULL;
	WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53* G_B5_0 = NULL;
	InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* G_B7_0 = NULL;
	WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53* G_B7_1 = NULL;
	{
		// bool inActionState = obj.NewInteractableState == InteractableState.ActionState;
		InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906* L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___NewInteractableState_4;
		// if (inActionState)
		if (!((((int32_t)L_1) == ((int32_t)3))? 1 : 0))
		{
			goto IL_003d;
		}
	}
	{
		// if (_bladesRotation.IsMoving)
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_2 = __this->____bladesRotation_7;
		NullCheck(L_2);
		bool L_3;
		L_3 = WindmillBladesController_get_IsMoving_mD9B1B60A86AAD2EA43A7F88C45ECD4256D024540_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// _bladesRotation.SetMoveState(false, 0.0f);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_4 = __this->____bladesRotation_7;
		NullCheck(L_4);
		WindmillBladesController_SetMoveState_mDD25E6E8190A0584599E3B3E7B44DF5ED1204BCE(L_4, (bool)0, (0.0f), NULL);
		goto IL_003d;
	}

IL_002b:
	{
		// _bladesRotation.SetMoveState(true, _maxSpeed);
		WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* L_5 = __this->____bladesRotation_7;
		float L_6 = __this->____maxSpeed_5;
		NullCheck(L_5);
		WindmillBladesController_SetMoveState_mDD25E6E8190A0584599E3B3E7B44DF5ED1204BCE(L_5, (bool)1, L_6, NULL);
	}

IL_003d:
	{
		// _toolInteractingWithMe = obj.NewInteractableState > InteractableState.Default ?
		//   obj.Tool : null;
		InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906* L_7 = ___obj0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___NewInteractableState_4;
		G_B5_0 = __this;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			G_B6_0 = __this;
			goto IL_004a;
		}
	}
	{
		G_B7_0 = ((InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED*)(NULL));
		G_B7_1 = G_B5_0;
		goto IL_0050;
	}

IL_004a:
	{
		InteractableStateArgs_t21F5AD383C32E6D8656D9EBAE447A111F6188906* L_9 = ___obj0;
		NullCheck(L_9);
		InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* L_10 = L_9->___Tool_2;
		G_B7_0 = L_10;
		G_B7_1 = G_B6_0;
	}

IL_0050:
	{
		NullCheck(G_B7_1);
		G_B7_1->____toolInteractingWithMe_8 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->____toolInteractingWithMe_8), (void*)G_B7_0);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.WindmillController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillController_Update_m7936B43435F6796D8C99E444B10C6309B701986E (WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* G_B5_0 = NULL;
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* G_B3_0 = NULL;
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* G_B6_1 = NULL;
	{
		// if (_toolInteractingWithMe == null)
		InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* L_0 = __this->____toolInteractingWithMe_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _selectionCylinder.CurrSelectionState = SelectionCylinder.SelectionState.Off;
		SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* L_2 = __this->____selectionCylinder_6;
		NullCheck(L_2);
		SelectionCylinder_set_CurrSelectionState_m6A22A6076B7C0F359A67BB3F92C5F44891F88546(L_2, 0, NULL);
		return;
	}

IL_001b:
	{
		// _selectionCylinder.CurrSelectionState = (
		//   _toolInteractingWithMe.ToolInputState == ToolInputState.PrimaryInputDown ||
		//   _toolInteractingWithMe.ToolInputState == ToolInputState.PrimaryInputDownStay)
		//   ? SelectionCylinder.SelectionState.Highlighted
		//   : SelectionCylinder.SelectionState.Selected;
		SelectionCylinder_tB79C20E28823E6A7C8933C2A86C953A990F4480E* L_3 = __this->____selectionCylinder_6;
		InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* L_4 = __this->____toolInteractingWithMe_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* OculusSampleFramework.ToolInputState OculusSampleFramework.InteractableTool::get_ToolInputState() */, L_4);
		G_B3_0 = L_3;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B5_0 = L_3;
			goto IL_0040;
		}
	}
	{
		InteractableTool_tE776D26F7B0DC18FA2B9D288AB8ED143B98988ED* L_6 = __this->____toolInteractingWithMe_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* OculusSampleFramework.ToolInputState OculusSampleFramework.InteractableTool::get_ToolInputState() */, L_6);
		G_B4_0 = G_B3_0;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0040;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 2;
		G_B6_1 = G_B5_0;
	}

IL_0041:
	{
		NullCheck(G_B6_1);
		SelectionCylinder_set_CurrSelectionState_m6A22A6076B7C0F359A67BB3F92C5F44891F88546(G_B6_1, G_B6_0, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.WindmillController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindmillController__ctor_mA7C3B30A878710289E9A967EEBB2DE87CEB53174 (WindmillController_t48184B7B7519BC2EAE5A80F03C239213E815EE53* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float _maxSpeed = 10f;
		__this->____maxSpeed_5 = (10.0f);
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
// System.Void OculusSampleFramework.OVROverlaySample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_Start_mFD7DBA6452D912CBE50E6FAE191D1E255E5E3473 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVROverlaySample_TriggerLoad_m700D3A873346D40C61B4E35D6222810766FB7C1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVROverlaySample_TriggerUnload_mC2BCD58945AE57A99E5C988C844126C2CC74706E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVROverlaySample_U3CStartU3Eb__24_0_mBF39A5A801A25E8938E5E0163A22FD1DB4BD45E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVROverlaySample_U3CStartU3Eb__24_1_m1970159E2C8C7043DBC6797017C840EA7A9429FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVROverlaySample_U3CStartU3Eb__24_2_m9DCDFEF1326B4909B69D2FE1E754D18C7C289EB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D58C254A6B34D95CA1A2DAB761F42AD1EE1A371);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14DF90F7B7B1D0C29E073C07C92DBA6A25DAA187);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B3D9B0AAE35211614438B3160DC944B9155D26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75AB8BCFD46EFD61011E81C209870785F7C0429A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78B861D9789220F101E6A2B45F723663B75C06E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD75F043211EC7F57B7E6A391486703462CE7633);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7A03396ACA66C7D8DF8563B2D34692EDC276118);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugUIBuilder.instance.AddLabel("OVROverlay Sample");
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_0 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = DebugUIBuilder_AddLabel_mDA7A36FB7E174675CF6B89ADB36DFA9942041BF5(L_0, _stringLiteral14DF90F7B7B1D0C29E073C07C92DBA6A25DAA187, 0, NULL);
		// DebugUIBuilder.instance.AddDivider();
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_2 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = DebugUIBuilder_AddDivider_m422E4FFC43FA0E01952FD54C4824D2FFD7D66B36(L_2, 0, NULL);
		// DebugUIBuilder.instance.AddLabel("Level Loading Example");
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_4 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = DebugUIBuilder_AddLabel_mDA7A36FB7E174675CF6B89ADB36DFA9942041BF5(L_4, _stringLiteral78B861D9789220F101E6A2B45F723663B75C06E9, 0, NULL);
		// DebugUIBuilder.instance.AddButton("Simulate Level Load", TriggerLoad);
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_6 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A* L_7 = (OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A*)il2cpp_codegen_object_new(OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OnClick__ctor_mD9D3372ACB4997A58C1906B38F2DCFDFB6FFC43C(L_7, __this, (intptr_t)((void*)OVROverlaySample_TriggerLoad_m700D3A873346D40C61B4E35D6222810766FB7C1D_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = DebugUIBuilder_AddButton_m44565B7C2818D3257AEA9F089D4543BB4DC2A281(L_6, _stringLiteralE7A03396ACA66C7D8DF8563B2D34692EDC276118, L_7, (-1), 0, (bool)0, NULL);
		// DebugUIBuilder.instance.AddButton("Destroy Cubes", TriggerUnload);
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_9 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A* L_10 = (OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A*)il2cpp_codegen_object_new(OnClick_tE915BFC88D1C91D68F96A97D675ECCCF91B8D46A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OnClick__ctor_mD9D3372ACB4997A58C1906B38F2DCFDFB6FFC43C(L_10, __this, (intptr_t)((void*)OVROverlaySample_TriggerUnload_mC2BCD58945AE57A99E5C988C844126C2CC74706E_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11;
		L_11 = DebugUIBuilder_AddButton_m44565B7C2818D3257AEA9F089D4543BB4DC2A281(L_9, _stringLiteral42B3D9B0AAE35211614438B3160DC944B9155D26, L_10, (-1), 0, (bool)0, NULL);
		// DebugUIBuilder.instance.AddDivider();
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_12 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		NullCheck(L_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13;
		L_13 = DebugUIBuilder_AddDivider_m422E4FFC43FA0E01952FD54C4824D2FFD7D66B36(L_12, 0, NULL);
		// DebugUIBuilder.instance.AddLabel("OVROverlay vs. Application Render Comparison");
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_14 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = DebugUIBuilder_AddLabel_mDA7A36FB7E174675CF6B89ADB36DFA9942041BF5(L_14, _stringLiteral0D58C254A6B34D95CA1A2DAB761F42AD1EE1A371, 0, NULL);
		// DebugUIBuilder.instance.AddRadio("OVROverlay", "group", delegate (Toggle t) { RadioPressed(ovrOverlayID, "group", t); }).GetComponentInChildren<Toggle>();
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_16 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF* L_17 = (OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF*)il2cpp_codegen_object_new(OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		OnToggleValueChange__ctor_m81EEBC5B36970EDB4EACDE8894B2B7B9EEB6C329(L_17, __this, (intptr_t)((void*)OVROverlaySample_U3CStartU3Eb__24_0_mBF39A5A801A25E8938E5E0163A22FD1DB4BD45E9_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = DebugUIBuilder_AddRadio_m31C361F6A061B4AF438965B4B419716D8A83BBA8(L_16, _stringLiteralDD75F043211EC7F57B7E6A391486703462CE7633, _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B, L_17, 0, NULL);
		NullCheck(L_18);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_19;
		L_19 = Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C(L_18, Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C_RuntimeMethod_var);
		// applicationRadioButton = DebugUIBuilder.instance.AddRadio("Application", "group", delegate (Toggle t) { RadioPressed(applicationID, "group", t); }).GetComponentInChildren<Toggle>();
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_20 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF* L_21 = (OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF*)il2cpp_codegen_object_new(OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		OnToggleValueChange__ctor_m81EEBC5B36970EDB4EACDE8894B2B7B9EEB6C329(L_21, __this, (intptr_t)((void*)OVROverlaySample_U3CStartU3Eb__24_1_m1970159E2C8C7043DBC6797017C840EA7A9429FE_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22;
		L_22 = DebugUIBuilder_AddRadio_m31C361F6A061B4AF438965B4B419716D8A83BBA8(L_20, _stringLiteral75AB8BCFD46EFD61011E81C209870785F7C0429A, _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B, L_21, 0, NULL);
		NullCheck(L_22);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_23;
		L_23 = Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C(L_22, Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C_RuntimeMethod_var);
		__this->___applicationRadioButton_8 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___applicationRadioButton_8), (void*)L_23);
		// noneRadioButton = DebugUIBuilder.instance.AddRadio("None", "group", delegate (Toggle t) { RadioPressed(noneID, "group", t); }).GetComponentInChildren<Toggle>();
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_24 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF* L_25 = (OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF*)il2cpp_codegen_object_new(OnToggleValueChange_tD8DB8B3514D20938EF5BC2B343F5B5824217DBDF_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		OnToggleValueChange__ctor_m81EEBC5B36970EDB4EACDE8894B2B7B9EEB6C329(L_25, __this, (intptr_t)((void*)OVROverlaySample_U3CStartU3Eb__24_2_m9DCDFEF1326B4909B69D2FE1E754D18C7C289EB4_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26;
		L_26 = DebugUIBuilder_AddRadio_m31C361F6A061B4AF438965B4B419716D8A83BBA8(L_24, _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318, _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B, L_25, 0, NULL);
		NullCheck(L_26);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_27;
		L_27 = Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C(L_26, Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C_RuntimeMethod_var);
		__this->___noneRadioButton_9 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___noneRadioButton_9), (void*)L_27);
		// DebugUIBuilder.instance.Show();
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_28 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		NullCheck(L_28);
		DebugUIBuilder_Show_mC497EDD3C65CD45F75CB8E5EBBF09FD2C114762B(L_28, NULL);
		// CameraAndRenderTargetSetup();
		OVROverlaySample_CameraAndRenderTargetSetup_m11F17E86B063E668865D6609C34F35CD7B2971D4(__this, NULL);
		// cameraRenderOverlay.enabled = true;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_29 = __this->___cameraRenderOverlay_14;
		NullCheck(L_29);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)1, NULL);
		// cameraRenderOverlay.currentOverlayShape = OVROverlay.OverlayShape.Quad;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_30 = __this->___cameraRenderOverlay_14;
		NullCheck(L_30);
		L_30->___currentOverlayShape_27 = 0;
		// spawnedCubes.Capacity = numObjectsPerLevel * numLevels;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_31 = __this->___spawnedCubes_27;
		int32_t L_32 = __this->___numObjectsPerLevel_24;
		int32_t L_33 = __this->___numLevels_25;
		NullCheck(L_31);
		List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C(L_31, ((int32_t)il2cpp_codegen_multiply(L_32, L_33)), List_1_set_Capacity_m47E6556844CFB1C459EC7CB191184BDD3D0B2E7C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_Update_m00DF9462DB8DA2377B84FA17EF68D6B82368E902 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OVRInput.GetDown(OVRInput.Button.Two) || OVRInput.GetDown(OVRInput.Button.Start))
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = OVRInput_GetDown_mEC4F71AEC93D3AF1A041934CA4C61680C6DB9AC7(2, ((int32_t)-2147483648LL), NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = OVRInput_GetDown_mEC4F71AEC93D3AF1A041934CA4C61680C6DB9AC7(((int32_t)256), ((int32_t)-2147483648LL), NULL);
		if (!L_1)
		{
			goto IL_004b;
		}
	}

IL_001e:
	{
		// if (inMenu) DebugUIBuilder.instance.Hide();
		bool L_2 = __this->___inMenu_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if (inMenu) DebugUIBuilder.instance.Hide();
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_3 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		NullCheck(L_3);
		DebugUIBuilder_Hide_mF366B8F84533FB83A4C33F0F67D6B0CF3E24398D(L_3, NULL);
		goto IL_003c;
	}

IL_0032:
	{
		// else DebugUIBuilder.instance.Show();
		DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71* L_4 = ((DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_StaticFields*)il2cpp_codegen_static_fields_for(DebugUIBuilder_tC18B19AE08445BA1378C7DABB0E4858217E02E71_il2cpp_TypeInfo_var))->___instance_20;
		NullCheck(L_4);
		DebugUIBuilder_Show_mC497EDD3C65CD45F75CB8E5EBBF09FD2C114762B(L_4, NULL);
	}

IL_003c:
	{
		// inMenu = !inMenu;
		bool L_5 = __this->___inMenu_4;
		__this->___inMenu_4 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_004b:
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		// TriggerLoad();
		OVROverlaySample_TriggerLoad_m700D3A873346D40C61B4E35D6222810766FB7C1D(__this, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::ActivateWorldGeo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_ActivateWorldGeo_m74C9008C097DBA62BE342D8AF7E46F84ED5F6EDF (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B065FCE4F717615DF020D641986901AC7DA270);
		s_Il2CppMethodInitialized = true;
	}
	{
		// worldspaceGeoParent.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___worldspaceGeoParent_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// uiGeoParent.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___uiGeoParent_12;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// uiCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___uiCamera_11;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// cameraRenderOverlay.enabled = false;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_3 = __this->___cameraRenderOverlay_14;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		// renderingLabelOverlay.enabled = true;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_4 = __this->___renderingLabelOverlay_15;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		// renderingLabelOverlay.textures[0] = applicationLabelTexture;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_5 = __this->___renderingLabelOverlay_15;
		NullCheck(L_5);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_6 = L_5->___textures_29;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = __this->___applicationLabelTexture_16;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		// Debug.Log("Switched to ActivateWorldGeo");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral51B065FCE4F717615DF020D641986901AC7DA270, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::ActivateOVROverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_ActivateOVROverlay_m7FCA427103D87A7C638BEF78FB7AF8948500D5FE (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3C67FF0314F3C94FF7278A2AF1C6B55C36D01B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// worldspaceGeoParent.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___worldspaceGeoParent_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// uiCamera.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___uiCamera_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// cameraRenderOverlay.enabled = true;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_2 = __this->___cameraRenderOverlay_14;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// uiGeoParent.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___uiGeoParent_12;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// renderingLabelOverlay.enabled = true;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_4 = __this->___renderingLabelOverlay_15;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		// renderingLabelOverlay.textures[0] = compositorLabelTexture;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_5 = __this->___renderingLabelOverlay_15;
		NullCheck(L_5);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_6 = L_5->___textures_29;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = __this->___compositorLabelTexture_17;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		// Debug.Log("Switched to ActivateOVROVerlay");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2F3C67FF0314F3C94FF7278A2AF1C6B55C36D01B, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::ActivateNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_ActivateNone_mDD9A990EF43A0880841D0C54EDA214B3D8CA19D7 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral604773D3DBC620869237443189180C03C02206AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// worldspaceGeoParent.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___worldspaceGeoParent_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// uiCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___uiCamera_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// cameraRenderOverlay.enabled = false;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_2 = __this->___cameraRenderOverlay_14;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// uiGeoParent.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___uiGeoParent_12;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// renderingLabelOverlay.enabled = false;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_4 = __this->___renderingLabelOverlay_15;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// Debug.Log("Switched to ActivateNone");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral604773D3DBC620869237443189180C03C02206AE, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::TriggerLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_TriggerLoad_m700D3A873346D40C61B4E35D6222810766FB7C1D (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaitforOVROverlay());
		RuntimeObject* L_0;
		L_0 = OVROverlaySample_WaitforOVROverlay_m95BB31F1A213D15CF49403AE039AF22020A247D4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator OculusSampleFramework.OVROverlaySample::WaitforOVROverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OVROverlaySample_WaitforOVROverlay_m95BB31F1A213D15CF49403AE039AF22020A247D4 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA* L_0 = (U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA*)il2cpp_codegen_object_new(U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitforOVROverlayU3Ed__30__ctor_m0E99904CB71976828C93D3272159FFCA84910576(L_0, 0, NULL);
		U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::TriggerUnload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_TriggerUnload_mC2BCD58945AE57A99E5C988C844126C2CC74706E (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	{
		// ClearObjects();
		OVROverlaySample_ClearObjects_mBA47743D458D9E9D10AB68E7BE3A0D48544AB196(__this, NULL);
		// applicationRadioButton.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___applicationRadioButton_8;
		NullCheck(L_0);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::CameraAndRenderTargetSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_CameraAndRenderTargetSetup_m11F17E86B063E668865D6609C34F35CD7B2971D4 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4A0C460C7F0EA4954EC81E660C43B0182E5295);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDCEC302F0B84B1209C009FA5818F3EA90BC8E64);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_11 = NULL;
	{
		// float overlayWidth = cameraRenderOverlay.transform.localScale.x;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_0 = __this->___cameraRenderOverlay_14;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		V_0 = L_3;
		// float overlayHeight = cameraRenderOverlay.transform.localScale.y;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_4 = __this->___cameraRenderOverlay_14;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___y_3;
		V_1 = L_7;
		// float overlayRadius = cameraRenderOverlay.transform.localScale.z;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_8 = __this->___cameraRenderOverlay_14;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___z_4;
		V_2 = L_11;
		// float hmdPanelResWidth = 2560;
		// float hmdPanelResHeight = 1440;
		V_3 = (1440.0f);
		// float singleEyeScreenPhysicalResX = hmdPanelResWidth * 0.5f;
		// float singleEyeScreenPhysicalResY = hmdPanelResHeight;
		float L_12 = V_3;
		// float halfFovY = mainCamera.GetComponent<Camera>().fieldOfView / 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___mainCamera_10;
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_13, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_14);
		float L_15;
		L_15 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_14, NULL);
		V_4 = ((float)(L_15/(2.0f)));
		// float screenSizeYInWorld = 2 * overlayRadius * Mathf.Tan(Mathf.Deg2Rad * halfFovY);
		float L_16 = V_2;
		float L_17 = V_4;
		float L_18;
		L_18 = tanf(((float)il2cpp_codegen_multiply((0.0174532924f), L_17)));
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_16)), L_18));
		// float pixelDensityYPerWorldUnit = singleEyeScreenPhysicalResY / screenSizeYInWorld;
		float L_19 = V_5;
		// float renderTargetHeight = pixelDensityYPerWorldUnit * overlayWidth;
		float L_20 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply(((float)(L_12/L_19)), L_20));
		// float renderTargetWidth = 0.0f;
		V_7 = (0.0f);
		// float screenSizeXInWorld = screenSizeYInWorld * mainCamera.GetComponent<Camera>().aspect;
		float L_21 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___mainCamera_10;
		NullCheck(L_22);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23;
		L_23 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_22, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_23);
		float L_24;
		L_24 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_23, NULL);
		V_8 = ((float)il2cpp_codegen_multiply(L_21, L_24));
		// float pixelDensityXPerWorldUnit = singleEyeScreenPhysicalResX / screenSizeXInWorld;
		float L_25 = V_8;
		// renderTargetWidth = pixelDensityXPerWorldUnit * overlayWidth;
		float L_26 = V_0;
		V_7 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply((2560.0f), (0.5f)))/L_25)), L_26));
		// float orthographicSize = overlayHeight / 2.0f;
		float L_27 = V_1;
		V_9 = ((float)(L_27/(2.0f)));
		// float orthoCameraAspect = overlayWidth / overlayHeight;
		float L_28 = V_0;
		float L_29 = V_1;
		V_10 = ((float)(L_28/L_29));
		// uiCamera.GetComponent<Camera>().orthographicSize = orthographicSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___uiCamera_11;
		NullCheck(L_30);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31;
		L_31 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_30, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		float L_32 = V_9;
		NullCheck(L_31);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_31, L_32, NULL);
		// uiCamera.GetComponent<Camera>().aspect = orthoCameraAspect;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___uiCamera_11;
		NullCheck(L_33);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34;
		L_34 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_33, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		float L_35 = V_10;
		NullCheck(L_34);
		Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_34, L_35, NULL);
		// if (uiCamera.GetComponent<Camera>().targetTexture != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___uiCamera_11;
		NullCheck(L_36);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_37;
		L_37 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_36, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_37);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38;
		L_38 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_010c;
		}
	}
	{
		// uiCamera.GetComponent<Camera>().targetTexture.Release();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___uiCamera_11;
		NullCheck(L_40);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41;
		L_41 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_40, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_41);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42;
		L_42 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_41, NULL);
		NullCheck(L_42);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_42, NULL);
	}

IL_010c:
	{
		// RenderTexture overlayRT = new RenderTexture(
		//         (int)renderTargetWidth * 2,
		//         (int)renderTargetHeight * 2,
		//         0,
		//         RenderTextureFormat.ARGB32,
		//         RenderTextureReadWrite.sRGB);
		float L_43 = V_7;
		float L_44 = V_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		RenderTexture__ctor_m68A1B9CAA1BE0B597C5F4895C296E21502D0C962(L_45, ((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(L_43), 2)), ((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(L_44), 2)), 0, 0, 2, NULL);
		V_11 = L_45;
		// Debug.Log("Created RT of resolution w: " + renderTargetWidth + " and h: " + renderTargetHeight);
		String_t* L_46;
		L_46 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_47;
		L_47 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_6), NULL);
		String_t* L_48;
		L_48 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralEDCEC302F0B84B1209C009FA5818F3EA90BC8E64, L_46, _stringLiteralCE4A0C460C7F0EA4954EC81E660C43B0182E5295, L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_48, NULL);
		// overlayRT.hideFlags = HideFlags.DontSave;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = V_11;
		NullCheck(L_49);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_49, ((int32_t)52), NULL);
		// overlayRT.useMipMap = true;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_11;
		NullCheck(L_50);
		RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_50, (bool)1, NULL);
		// overlayRT.filterMode = FilterMode.Trilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = V_11;
		NullCheck(L_51);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_51, 2, NULL);
		// overlayRT.anisoLevel = 4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = V_11;
		NullCheck(L_52);
		Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F(L_52, 4, NULL);
		// overlayRT.autoGenerateMips = true;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = V_11;
		NullCheck(L_53);
		RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_53, (bool)1, NULL);
		// uiCamera.GetComponent<Camera>().targetTexture = overlayRT;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___uiCamera_11;
		NullCheck(L_54);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_55;
		L_55 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_54, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_56 = V_11;
		NullCheck(L_55);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_55, L_56, NULL);
		// cameraRenderOverlay.textures[0] = overlayRT;
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_57 = __this->___cameraRenderOverlay_14;
		NullCheck(L_57);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_58 = L_57->___textures_29;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59 = V_11;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_59);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::SimulateLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_SimulateLevelLoad_m05A45D3B3318612EE2234AC0CF95357BC58446BB (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2752A64BA712F6F13A300028AB018ACD9A80434C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90423BAEC36E20DF5579ED0EB88D5B96F533BB4D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_8 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float G_B8_0 = 0.0f;
	{
		// int numToPrint = 0;
		V_0 = 0;
		// for (int p = 0; p < numLoopsTrigger; p++)
		V_2 = 0;
		goto IL_000e;
	}

IL_0006:
	{
		// numToPrint++;
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// for (int p = 0; p < numLoopsTrigger; p++)
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_000e:
	{
		// for (int p = 0; p < numLoopsTrigger; p++)
		int32_t L_2 = V_2;
		int32_t L_3 = __this->___numLoopsTrigger_26;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0006;
		}
	}
	{
		// Debug.Log("Finished " + numToPrint + " Loops");
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral2752A64BA712F6F13A300028AB018ACD9A80434C, L_4, _stringLiteral90423BAEC36E20DF5579ED0EB88D5B96F533BB4D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// Vector3 playerPos = mainCamera.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___mainCamera_10;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_1 = L_8;
		// playerPos.y = 0.5f;
		(&V_1)->___y_3 = (0.5f);
		// for (int j = 0; j < numLevels; j++)
		V_3 = 0;
		goto IL_013c;
	}

IL_0056:
	{
		// for (var i = 0; i < numObjectsPerLevel; i++)
		V_4 = 0;
		goto IL_012b;
	}

IL_005e:
	{
		// var angle = i * Mathf.PI * 2 / numObjectsPerLevel;
		int32_t L_9 = V_4;
		int32_t L_10 = __this->___numObjectsPerLevel_24;
		V_5 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_9), (3.14159274f))), (2.0f)))/((float)L_10)));
		// float stagger = (i % 2 == 0) ? 1.5f : 1.0f;
		int32_t L_11 = V_4;
		if (!((int32_t)(L_11%2)))
		{
			goto IL_0084;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0089;
	}

IL_0084:
	{
		G_B8_0 = (1.5f);
	}

IL_0089:
	{
		V_6 = G_B8_0;
		// var pos = new Vector3(Mathf.Cos(angle), 0, Mathf.Sin(angle)) * cubeSpawnRadius * stagger;
		float L_12 = V_5;
		float L_13;
		L_13 = cosf(L_12);
		float L_14 = V_5;
		float L_15;
		L_15 = sinf(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_13, (0.0f), L_15, /*hidden argument*/NULL);
		float L_17 = __this->___cubeSpawnRadius_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		float L_19 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		V_7 = L_20;
		// pos.y = j * heightBetweenItems;
		int32_t L_21 = V_3;
		float L_22 = __this->___heightBetweenItems_23;
		(&V_7)->___y_3 = ((float)il2cpp_codegen_multiply(((float)L_21), L_22));
		// var newInst = Instantiate(prefabForLevelLoadSim, pos + playerPos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___prefabForLevelLoadSim_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_25, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_23, L_26, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_8 = L_28;
		// var newObjTransform = newInst.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_8;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		// newObjTransform.LookAt(playerPos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = L_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
		NullCheck(L_31);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_31, L_32, NULL);
		// Vector3 newAngle = newObjTransform.rotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = L_31;
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		V_10 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_10), NULL);
		V_9 = L_35;
		// newAngle.x = 0.0f;
		(&V_9)->___x_2 = (0.0f);
		// newObjTransform.rotation = Quaternion.Euler(newAngle);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_36, NULL);
		NullCheck(L_33);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_33, L_37, NULL);
		// spawnedCubes.Add(newInst);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_38 = __this->___spawnedCubes_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_8;
		NullCheck(L_38);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_38, L_39, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (var i = 0; i < numObjectsPerLevel; i++)
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_012b:
	{
		// for (var i = 0; i < numObjectsPerLevel; i++)
		int32_t L_41 = V_4;
		int32_t L_42 = __this->___numObjectsPerLevel_24;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005e;
		}
	}
	{
		// for (int j = 0; j < numLevels; j++)
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_013c:
	{
		// for (int j = 0; j < numLevels; j++)
		int32_t L_44 = V_3;
		int32_t L_45 = __this->___numLevels_25;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0056;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::ClearObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_ClearObjects_mBA47743D458D9E9D10AB68E7BE3A0D48544AB196 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < spawnedCubes.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// DestroyImmediate(spawnedCubes[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___spawnedCubes_27;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// for (int i = 0; i < spawnedCubes.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < spawnedCubes.Count; i++)
		int32_t L_4 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___spawnedCubes_27;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// spawnedCubes.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___spawnedCubes_27;
		NullCheck(L_7);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_7, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// GC.Collect();
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7(NULL);
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::RadioPressed(System.String,System.String,UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_RadioPressed_m6068363BDF1AFFEE1B74DAFD7080B7ADC1393D06 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, String_t* ___radioLabel0, String_t* ___group1, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A848793342F75888D40DE2AEDC507A1035ED454);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83C940CCC7153451903DD8149886EAB029AB7BB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3F2B6A71339D70457CEBD856E50EE4127313E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.Compare(radioLabel, ovrOverlayID) == 0)
		String_t* L_0 = ___radioLabel0;
		int32_t L_1;
		L_1 = String_Compare_mDD60C5A044BA55A136F7B84B48BBD99353F4EB4C(L_0, _stringLiteralBD3F2B6A71339D70457CEBD856E50EE4127313E1, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// ActivateOVROverlay();
		OVROverlaySample_ActivateOVROverlay_m7FCA427103D87A7C638BEF78FB7AF8948500D5FE(__this, NULL);
		return;
	}

IL_0014:
	{
		// else if (string.Compare(radioLabel, applicationID) == 0)
		String_t* L_2 = ___radioLabel0;
		int32_t L_3;
		L_3 = String_Compare_mDD60C5A044BA55A136F7B84B48BBD99353F4EB4C(L_2, _stringLiteral83C940CCC7153451903DD8149886EAB029AB7BB6, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		// ActivateWorldGeo();
		OVROverlaySample_ActivateWorldGeo_m74C9008C097DBA62BE342D8AF7E46F84ED5F6EDF(__this, NULL);
		return;
	}

IL_0028:
	{
		// else if (string.Compare(radioLabel, noneID) == 0)
		String_t* L_4 = ___radioLabel0;
		int32_t L_5;
		L_5 = String_Compare_mDD60C5A044BA55A136F7B84B48BBD99353F4EB4C(L_4, _stringLiteral5A848793342F75888D40DE2AEDC507A1035ED454, NULL);
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		// ActivateNone();
		OVROverlaySample_ActivateNone_mDD9A990EF43A0880841D0C54EDA214B3D8CA19D7(__this, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample__ctor_m2E713616D5B08A0269EFCC729EBEC80D39A72CF5 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int numLoopsTrigger = 500000000;
		__this->___numLoopsTrigger_26 = ((int32_t)500000000);
		// List<GameObject> spawnedCubes = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___spawnedCubes_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedCubes_27), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::<Start>b__24_0(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_U3CStartU3Eb__24_0_mBF39A5A801A25E8938E5E0163A22FD1DB4BD45E9 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3F2B6A71339D70457CEBD856E50EE4127313E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugUIBuilder.instance.AddRadio("OVROverlay", "group", delegate (Toggle t) { RadioPressed(ovrOverlayID, "group", t); }).GetComponentInChildren<Toggle>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = ___t0;
		OVROverlaySample_RadioPressed_m6068363BDF1AFFEE1B74DAFD7080B7ADC1393D06(__this, _stringLiteralBD3F2B6A71339D70457CEBD856E50EE4127313E1, _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B, L_0, NULL);
		// DebugUIBuilder.instance.AddRadio("OVROverlay", "group", delegate (Toggle t) { RadioPressed(ovrOverlayID, "group", t); }).GetComponentInChildren<Toggle>();
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::<Start>b__24_1(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_U3CStartU3Eb__24_1_m1970159E2C8C7043DBC6797017C840EA7A9429FE (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83C940CCC7153451903DD8149886EAB029AB7BB6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// applicationRadioButton = DebugUIBuilder.instance.AddRadio("Application", "group", delegate (Toggle t) { RadioPressed(applicationID, "group", t); }).GetComponentInChildren<Toggle>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = ___t0;
		OVROverlaySample_RadioPressed_m6068363BDF1AFFEE1B74DAFD7080B7ADC1393D06(__this, _stringLiteral83C940CCC7153451903DD8149886EAB029AB7BB6, _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B, L_0, NULL);
		// applicationRadioButton = DebugUIBuilder.instance.AddRadio("Application", "group", delegate (Toggle t) { RadioPressed(applicationID, "group", t); }).GetComponentInChildren<Toggle>();
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample::<Start>b__24_2(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVROverlaySample_U3CStartU3Eb__24_2_m9DCDFEF1326B4909B69D2FE1E754D18C7C289EB4 (OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A848793342F75888D40DE2AEDC507A1035ED454);
		s_Il2CppMethodInitialized = true;
	}
	{
		// noneRadioButton = DebugUIBuilder.instance.AddRadio("None", "group", delegate (Toggle t) { RadioPressed(noneID, "group", t); }).GetComponentInChildren<Toggle>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = ___t0;
		OVROverlaySample_RadioPressed_m6068363BDF1AFFEE1B74DAFD7080B7ADC1393D06(__this, _stringLiteral5A848793342F75888D40DE2AEDC507A1035ED454, _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B, L_0, NULL);
		// noneRadioButton = DebugUIBuilder.instance.AddRadio("None", "group", delegate (Toggle t) { RadioPressed(noneID, "group", t); }).GetComponentInChildren<Toggle>();
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
// System.Void OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitforOVROverlayU3Ed__30__ctor_m0E99904CB71976828C93D3272159FFCA84910576 (U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitforOVROverlayU3Ed__30_System_IDisposable_Dispose_m14C13ECD3FFEBA3DB1FF48E1DB6ACF6E34C08310 (U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitforOVROverlayU3Ed__30_MoveNext_m8238E55519F93CF054F69EBB64C69579BD63FCD8 (U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00b2;
			}
			case 2:
			{
				goto IL_00ed;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Transform camTransform = mainCamera.transform;
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_3 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___mainCamera_10;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		V_2 = L_5;
		// Transform uiTextOverlayTrasnform = loadingTextQuadOverlay.transform;
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_6 = V_1;
		NullCheck(L_6);
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_7 = L_6->___loadingTextQuadOverlay_20;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		// Vector3 newPos = camTransform.position + camTransform.forward * distanceFromCamToLoadText;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_2;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_2;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___distanceFromCamToLoadText_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_15, NULL);
		V_3 = L_16;
		// newPos.y = camTransform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_2;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___y_3;
		(&V_3)->___y_3 = L_19;
		// uiTextOverlayTrasnform.position = newPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_20, NULL);
		// cubemapOverlay.enabled = true;
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_21 = V_1;
		NullCheck(L_21);
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_22 = L_21->___cubemapOverlay_19;
		NullCheck(L_22);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)1, NULL);
		// loadingTextQuadOverlay.enabled = true;
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_23 = V_1;
		NullCheck(L_23);
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_24 = L_23->___loadingTextQuadOverlay_20;
		NullCheck(L_24);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)1, NULL);
		// noneRadioButton.isOn = true;
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_25 = V_1;
		NullCheck(L_25);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_26 = L_25->___noneRadioButton_9;
		NullCheck(L_26);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_26, (bool)1, NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_27 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_27, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ClearObjects();
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_28 = V_1;
		NullCheck(L_28);
		OVROverlaySample_ClearObjects_mBA47743D458D9E9D10AB68E7BE3A0D48544AB196(L_28, NULL);
		// SimulateLevelLoad();
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_29 = V_1;
		NullCheck(L_29);
		OVROverlaySample_SimulateLevelLoad_m05A45D3B3318612EE2234AC0CF95357BC58446BB(L_29, NULL);
		// cubemapOverlay.enabled = false;
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_30 = V_1;
		NullCheck(L_30);
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_31 = L_30->___cubemapOverlay_19;
		NullCheck(L_31);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_31, (bool)0, NULL);
		// loadingTextQuadOverlay.enabled = false;
		OVROverlaySample_tBBD7602EAFB1E4F593A8EC7E30033DC414A661F8* L_32 = V_1;
		NullCheck(L_32);
		OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D* L_33 = L_32->___loadingTextQuadOverlay_20;
		NullCheck(L_33);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_33, (bool)0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ed:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitforOVROverlayU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD760971ACA07042689C1EF1AA4A5965EC3AD3976 (U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitforOVROverlayU3Ed__30_System_Collections_IEnumerator_Reset_m04457336FACD8889D9212E217FA15CD1C9CB91A5 (U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitforOVROverlayU3Ed__30_System_Collections_IEnumerator_Reset_m04457336FACD8889D9212E217FA15CD1C9CB91A5_RuntimeMethod_var)));
	}
}
// System.Object OculusSampleFramework.OVROverlaySample/<WaitforOVROverlay>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitforOVROverlayU3Ed__30_System_Collections_IEnumerator_get_Current_m7CB1015C385FE2077A1B4529EBA7BB70ACD07732 (U3CWaitforOVROverlayU3Ed__30_t25C38D56AC2CF1BD6CBB208C219C7767D98716AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void OVRTouchSample.Hand::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Awake_mD44EDE243771D5E573B74F481D448C80D89B667C (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC_mC820FC13FAD6DC529D204CDC86DF3E1C6A918B9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_grabber = GetComponent<OVRGrabber>();
		OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* L_0;
		L_0 = Component_GetComponent_TisOVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC_mC820FC13FAD6DC529D204CDC86DF3E1C6A918B9A(__this, Component_GetComponent_TisOVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC_mC820FC13FAD6DC529D204CDC86DF3E1C6A918B9A_RuntimeMethod_var);
		__this->___m_grabber_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_grabber_20), (void*)L_0);
		// }
		return;
	}
}
// System.Void OVRTouchSample.Hand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Start_mB0A5FC5F8F424556F4F8273A8399630E4D4BF94F (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m1A489F1406F2CD15719E60F537BD5AA4FB036808_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hand_OnInputFocusAcquired_m0812ABDFE30CE9348919181D77BB8F5E4F5A3490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hand_OnInputFocusLost_mD3FFDE39026F3EEFDFE8212B6E1FE3B064EB8C52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__28_0_m69657F26B241AA6A749CAFAF9534605A3FAC3480_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral149967D8B0B4FF60C95B519437C63F4F13C1E258);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761CAF2881EC72215DE6C3BFBC1BEEEC0E195109);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C04A407FE215D295E25E3D30FD585ED38C7AA05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC09616FC7A1F15CD91C601854596281EF11A6AC);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* G_B2_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* G_B2_1 = NULL;
	Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* G_B2_2 = NULL;
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* G_B1_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* G_B1_1 = NULL;
	Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* G_B1_2 = NULL;
	{
		// m_showAfterInputFocusAcquired = new List<Renderer>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_0 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE(L_0, List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		__this->___m_showAfterInputFocusAcquired_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_showAfterInputFocusAcquired_21), (void*)L_0);
		// m_colliders = this.GetComponentsInChildren<Collider>().Where(childCollider => !childCollider.isTrigger).ToArray();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1;
		L_1 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var);
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_2 = ((U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var))->___U3CU3E9__28_0_1;
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var);
		U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* L_4 = ((U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_5 = (Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04*)il2cpp_codegen_object_new(Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m864A52B06CBC2998220EBC26DE6F9AF4FC6BF864(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__28_0_m69657F26B241AA6A749CAFAF9534605A3FAC3480_RuntimeMethod_var), NULL);
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_6 = L_5;
		((U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var))->___U3CU3E9__28_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var))->___U3CU3E9__28_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0031:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786_RuntimeMethod_var);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_8;
		L_8 = Enumerable_ToArray_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m1A489F1406F2CD15719E60F537BD5AA4FB036808(L_7, Enumerable_ToArray_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m1A489F1406F2CD15719E60F537BD5AA4FB036808_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->___m_colliders_18 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___m_colliders_18), (void*)L_8);
		// CollisionEnable(false);
		Hand_CollisionEnable_mE84E4E5CDE7F8D524DD175035E51B336E09871A4(__this, (bool)0, NULL);
		// m_animLayerIndexPoint = m_animator.GetLayerIndex(ANIM_LAYER_NAME_POINT);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___m_animator_16;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B(L_9, _stringLiteralBC09616FC7A1F15CD91C601854596281EF11A6AC, NULL);
		__this->___m_animLayerIndexPoint_23 = L_10;
		// m_animLayerIndexThumb = m_animator.GetLayerIndex(ANIM_LAYER_NAME_THUMB);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___m_animator_16;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B(L_11, _stringLiteral7C04A407FE215D295E25E3D30FD585ED38C7AA05, NULL);
		__this->___m_animLayerIndexThumb_22 = L_12;
		// m_animParamIndexFlex = Animator.StringToHash(ANIM_PARAM_NAME_FLEX);
		int32_t L_13;
		L_13 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral761CAF2881EC72215DE6C3BFBC1BEEEC0E195109, NULL);
		__this->___m_animParamIndexFlex_24 = L_13;
		// m_animParamIndexPose = Animator.StringToHash(ANIM_PARAM_NAME_POSE);
		int32_t L_14;
		L_14 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral149967D8B0B4FF60C95B519437C63F4F13C1E258, NULL);
		__this->___m_animParamIndexPose_25 = L_14;
		// OVRManager.InputFocusAcquired += OnInputFocusAcquired;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_15, __this, (intptr_t)((void*)Hand_OnInputFocusAcquired_m0812ABDFE30CE9348919181D77BB8F5E4F5A3490_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B(L_15, NULL);
		// OVRManager.InputFocusLost += OnInputFocusLost;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_16, __this, (intptr_t)((void*)Hand_OnInputFocusLost_mD3FFDE39026F3EEFDFE8212B6E1FE3B064EB8C52_RuntimeMethod_var), NULL);
		OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(L_16, NULL);
		// }
		return;
	}
}
// System.Void OVRTouchSample.Hand::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_OnDestroy_m26A4CF0B05FFF8AA55A0B2209770A653E2E51CBC (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hand_OnInputFocusAcquired_m0812ABDFE30CE9348919181D77BB8F5E4F5A3490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hand_OnInputFocusLost_mD3FFDE39026F3EEFDFE8212B6E1FE3B064EB8C52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRManager.InputFocusAcquired -= OnInputFocusAcquired;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Hand_OnInputFocusAcquired_m0812ABDFE30CE9348919181D77BB8F5E4F5A3490_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		OVRManager_remove_InputFocusAcquired_m739A9413A8A163181FB382725F8B9B1975368283(L_0, NULL);
		// OVRManager.InputFocusLost -= OnInputFocusLost;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)Hand_OnInputFocusLost_mD3FFDE39026F3EEFDFE8212B6E1FE3B064EB8C52_RuntimeMethod_var), NULL);
		OVRManager_remove_InputFocusLost_m331F5CDD3BACD07943A5A3380702145A744E7172(L_1, NULL);
		// }
		return;
	}
}
// System.Void OVRTouchSample.Hand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Update_m5B07EF567BA65B05F9FB7577E06A1CCD9F18DE17 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// UpdateCapTouchStates();
		Hand_UpdateCapTouchStates_m00F26FB54506C7C13EA8F4280A7A733E87267272(__this, NULL);
		// m_pointBlend = InputValueRateChange(m_isPointing, m_pointBlend);
		bool L_0 = __this->___m_isPointing_26;
		float L_1 = __this->___m_pointBlend_28;
		float L_2;
		L_2 = Hand_InputValueRateChange_m8EE04E1A0BEB06E82FAED24CC0CEE299EA4EA060(__this, L_0, L_1, NULL);
		__this->___m_pointBlend_28 = L_2;
		// m_thumbsUpBlend = InputValueRateChange(m_isGivingThumbsUp, m_thumbsUpBlend);
		bool L_3 = __this->___m_isGivingThumbsUp_27;
		float L_4 = __this->___m_thumbsUpBlend_29;
		float L_5;
		L_5 = Hand_InputValueRateChange_m8EE04E1A0BEB06E82FAED24CC0CEE299EA4EA060(__this, L_3, L_4, NULL);
		__this->___m_thumbsUpBlend_29 = L_5;
		// float flex = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, m_controller);
		int32_t L_6 = __this->___m_controller_15;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8(4, L_6, NULL);
		V_0 = L_7;
		// bool collisionEnabled = m_grabber.grabbedObject == null && flex >= THRESH_COLLISION_FLEX;
		OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* L_8 = __this->___m_grabber_20;
		NullCheck(L_8);
		OVRGrabbable_t322F6468B588212B888E9397723397A16E7614B5* L_9;
		L_9 = OVRGrabber_get_grabbedObject_m6A1961622740C23EA69222EFAC1C65D9463A0C1A_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		float L_11 = V_0;
		G_B3_0 = ((((int32_t)((!(((float)L_11) >= ((float)(0.899999976f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0064;
	}

IL_0063:
	{
		G_B3_0 = 0;
	}

IL_0064:
	{
		V_1 = (bool)G_B3_0;
		// CollisionEnable(collisionEnabled);
		bool L_12 = V_1;
		Hand_CollisionEnable_mE84E4E5CDE7F8D524DD175035E51B336E09871A4(__this, L_12, NULL);
		// UpdateAnimStates();
		Hand_UpdateAnimStates_mDD57A9E1B68086129F50F12BC2ED46FA26C1D996(__this, NULL);
		// }
		return;
	}
}
// System.Void OVRTouchSample.Hand::UpdateCapTouchStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_UpdateCapTouchStates_m00F26FB54506C7C13EA8F4280A7A733E87267272 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_isPointing = !OVRInput.Get(OVRInput.NearTouch.PrimaryIndexTrigger, m_controller);
		int32_t L_0 = __this->___m_controller_15;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = OVRInput_Get_m3231F0E900AB4B2AF1BCBCB2045C6D2AF125C0C7(1, L_0, NULL);
		__this->___m_isPointing_26 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// m_isGivingThumbsUp = !OVRInput.Get(OVRInput.NearTouch.PrimaryThumbButtons, m_controller);
		int32_t L_2 = __this->___m_controller_15;
		bool L_3;
		L_3 = OVRInput_Get_m3231F0E900AB4B2AF1BCBCB2045C6D2AF125C0C7(2, L_2, NULL);
		__this->___m_isGivingThumbsUp_27 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void OVRTouchSample.Hand::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_LateUpdate_mF00DEEA6A69173F447B896D9A341CC5D9CD084D9 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_collisionEnabled && m_collisionScaleCurrent + Mathf.Epsilon < COLLIDER_SCALE_MAX)
		bool L_0 = __this->___m_collisionEnabled_19;
		if (!L_0)
		{
			goto IL_0079;
		}
	}
	{
		float L_1 = __this->___m_collisionScaleCurrent_31;
		float L_2 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)((float)il2cpp_codegen_add(L_1, L_2))) < ((float)(1.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		// m_collisionScaleCurrent = Mathf.Min(COLLIDER_SCALE_MAX, m_collisionScaleCurrent + Time.deltaTime * COLLIDER_SCALE_PER_SECOND);
		float L_3 = __this->___m_collisionScaleCurrent_31;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5;
		L_5 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((1.0f), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, (1.0f))))), NULL);
		__this->___m_collisionScaleCurrent_31 = L_5;
		// for (int i = 0; i < m_colliders.Length; ++i)
		V_0 = 0;
		goto IL_006e;
	}

IL_0041:
	{
		// Collider collider = m_colliders[i];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = __this->___m_colliders_18;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		// collider.transform.localScale = new Vector3(m_collisionScaleCurrent, m_collisionScaleCurrent, m_collisionScaleCurrent);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		float L_11 = __this->___m_collisionScaleCurrent_31;
		float L_12 = __this->___m_collisionScaleCurrent_31;
		float L_13 = __this->___m_collisionScaleCurrent_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_14, NULL);
		// for (int i = 0; i < m_colliders.Length; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_006e:
	{
		// for (int i = 0; i < m_colliders.Length; ++i)
		int32_t L_16 = V_0;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_17 = __this->___m_colliders_18;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0041;
		}
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void OVRTouchSample.Hand::OnInputFocusLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_OnInputFocusLost_mD3FFDE39026F3EEFDFE8212B6E1FE3B064EB8C52 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		// m_showAfterInputFocusAcquired.Clear();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_2 = __this->___m_showAfterInputFocusAcquired_21;
		NullCheck(L_2);
		List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline(L_2, List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		// Renderer[] renderers = GetComponentsInChildren<Renderer>();
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_3;
		L_3 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(__this, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		V_0 = L_3;
		// for (int i = 0; i < renderers.Length; ++i)
		V_1 = 0;
		goto IL_0048;
	}

IL_0023:
	{
		// if (renderers[i].enabled)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		bool L_8;
		L_8 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_7, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// renderers[i].enabled = false;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_12, (bool)0, NULL);
		// m_showAfterInputFocusAcquired.Add(renderers[i]);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_13 = __this->___m_showAfterInputFocusAcquired_21;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline(L_13, L_17, List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
	}

IL_0044:
	{
		// for (int i = 0; i < renderers.Length; ++i)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0048:
	{
		// for (int i = 0; i < renderers.Length; ++i)
		int32_t L_19 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// CollisionEnable(false);
		Hand_CollisionEnable_mE84E4E5CDE7F8D524DD175035E51B336E09871A4(__this, (bool)0, NULL);
		// m_restoreOnInputAcquired = true;
		__this->___m_restoreOnInputAcquired_30 = (bool)1;
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void OVRTouchSample.Hand::OnInputFocusAcquired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_OnInputFocusAcquired_m0812ABDFE30CE9348919181D77BB8F5E4F5A3490 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_restoreOnInputAcquired)
		bool L_0 = __this->___m_restoreOnInputAcquired_30;
		if (!L_0)
		{
			goto IL_0055;
		}
	}
	{
		// for (int i = 0; i < m_showAfterInputFocusAcquired.Count; ++i)
		V_0 = 0;
		goto IL_0035;
	}

IL_000c:
	{
		// if (m_showAfterInputFocusAcquired[i])
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_1 = __this->___m_showAfterInputFocusAcquired_21;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_1, L_2, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// m_showAfterInputFocusAcquired[i].enabled = true;
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_5 = __this->___m_showAfterInputFocusAcquired_21;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_5, L_6, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		NullCheck(L_7);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)1, NULL);
	}

IL_0031:
	{
		// for (int i = 0; i < m_showAfterInputFocusAcquired.Count; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < m_showAfterInputFocusAcquired.Count; ++i)
		int32_t L_9 = V_0;
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_10 = __this->___m_showAfterInputFocusAcquired_21;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_10, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000c;
		}
	}
	{
		// m_showAfterInputFocusAcquired.Clear();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_12 = __this->___m_showAfterInputFocusAcquired_21;
		NullCheck(L_12);
		List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline(L_12, List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		// m_restoreOnInputAcquired = false;
		__this->___m_restoreOnInputAcquired_30 = (bool)0;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Single OVRTouchSample.Hand::InputValueRateChange(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Hand_InputValueRateChange_m8EE04E1A0BEB06E82FAED24CC0CEE299EA4EA060 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, bool ___isDown0, float ___value1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// float rateDelta = Time.deltaTime * INPUT_RATE_CHANGE;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (20.0f)));
		// float sign = isDown ? 1.0f : -1.0f;
		bool L_1 = ___isDown0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
	}

IL_001b:
	{
		V_1 = G_B3_0;
		// return Mathf.Clamp01(value + rateDelta * sign);
		float L_2 = ___value1;
		float L_3 = V_0;
		float L_4 = V_1;
		float L_5;
		L_5 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_3, L_4)))), NULL);
		return L_5;
	}
}
// System.Void OVRTouchSample.Hand::UpdateAnimStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_UpdateAnimStates_mDD57A9E1B68086129F50F12BC2ED46FA26C1D996 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8_mD6BC519B31A7ED5AF993C7BB5F6291110C4F51F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E85ECCB7093F5018C9F13499309750C0A65403D);
		s_Il2CppMethodInitialized = true;
	}
	HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* V_6 = NULL;
	bool G_B3_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B5_0 = false;
	bool G_B4_0 = false;
	int32_t G_B6_0 = 0;
	bool G_B6_1 = false;
	bool G_B8_0 = false;
	bool G_B7_0 = false;
	float G_B9_0 = 0.0f;
	bool G_B9_1 = false;
	int32_t G_B12_0 = 0;
	float G_B15_0 = 0.0f;
	{
		// bool grabbing = m_grabber.grabbedObject != null;
		OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* L_0 = __this->___m_grabber_20;
		NullCheck(L_0);
		OVRGrabbable_t322F6468B588212B888E9397723397A16E7614B5* L_1;
		L_1 = OVRGrabber_get_grabbedObject_m6A1961622740C23EA69222EFAC1C65D9463A0C1A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// HandPose grabPose = m_defaultGrabPose;
		HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* L_3 = __this->___m_defaultGrabPose_17;
		V_0 = L_3;
		// if (grabbing)
		bool L_4 = L_2;
		G_B1_0 = L_4;
		if (!L_4)
		{
			G_B3_0 = L_4;
			goto IL_003a;
		}
	}
	{
		// HandPose customPose = m_grabber.grabbedObject.GetComponent<HandPose>();
		OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* L_5 = __this->___m_grabber_20;
		NullCheck(L_5);
		OVRGrabbable_t322F6468B588212B888E9397723397A16E7614B5* L_6;
		L_6 = OVRGrabber_get_grabbedObject_m6A1961622740C23EA69222EFAC1C65D9463A0C1A_inline(L_5, NULL);
		NullCheck(L_6);
		HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* L_7;
		L_7 = Component_GetComponent_TisHandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8_mD6BC519B31A7ED5AF993C7BB5F6291110C4F51F9(L_6, Component_GetComponent_TisHandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8_mD6BC519B31A7ED5AF993C7BB5F6291110C4F51F9_RuntimeMethod_var);
		V_6 = L_7;
		// if (customPose != null) grabPose = customPose;
		HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* L_8 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B2_0 = G_B1_0;
		if (!L_9)
		{
			G_B3_0 = G_B1_0;
			goto IL_003a;
		}
	}
	{
		// if (customPose != null) grabPose = customPose;
		HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* L_10 = V_6;
		V_0 = L_10;
		G_B3_0 = G_B2_0;
	}

IL_003a:
	{
		// HandPoseId handPoseId = grabPose.PoseId;
		HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HandPose_get_PoseId_m399F7DCB42FE2A60FFF096C1865DFF5B347F7BDB_inline(L_11, NULL);
		V_1 = L_12;
		// m_animator.SetInteger(m_animParamIndexPose, (int)handPoseId);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___m_animator_16;
		int32_t L_14 = __this->___m_animParamIndexPose_25;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8(L_13, L_14, L_15, NULL);
		// float flex = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, m_controller);
		int32_t L_16 = __this->___m_controller_15;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_17;
		L_17 = OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8(4, L_16, NULL);
		V_2 = L_17;
		// m_animator.SetFloat(m_animParamIndexFlex, flex);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___m_animator_16;
		int32_t L_19 = __this->___m_animParamIndexFlex_24;
		float L_20 = V_2;
		NullCheck(L_18);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_18, L_19, L_20, NULL);
		// bool canPoint = !grabbing || grabPose.AllowPointing;
		bool L_21 = G_B3_0;
		G_B4_0 = L_21;
		if (!L_21)
		{
			G_B5_0 = L_21;
			goto IL_007d;
		}
	}
	{
		HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* L_22 = V_0;
		NullCheck(L_22);
		bool L_23;
		L_23 = HandPose_get_AllowPointing_m19E1786901712E84FD7D2CC113471FF7B2167731_inline(L_22, NULL);
		G_B6_0 = ((int32_t)(L_23));
		G_B6_1 = G_B4_0;
		goto IL_007e;
	}

IL_007d:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_007e:
	{
		// float point = canPoint ? m_pointBlend : 0.0f;
		G_B7_0 = G_B6_1;
		if (G_B6_0)
		{
			G_B8_0 = G_B6_1;
			goto IL_0087;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		goto IL_008d;
	}

IL_0087:
	{
		float L_24 = __this->___m_pointBlend_28;
		G_B9_0 = L_24;
		G_B9_1 = G_B8_0;
	}

IL_008d:
	{
		V_3 = G_B9_0;
		// m_animator.SetLayerWeight(m_animLayerIndexPoint, point);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___m_animator_16;
		int32_t L_26 = __this->___m_animLayerIndexPoint_23;
		float L_27 = V_3;
		NullCheck(L_25);
		Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_25, L_26, L_27, NULL);
		// bool canThumbsUp = !grabbing || grabPose.AllowThumbsUp;
		if (!G_B9_1)
		{
			goto IL_00aa;
		}
	}
	{
		HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* L_28 = V_0;
		NullCheck(L_28);
		bool L_29;
		L_29 = HandPose_get_AllowThumbsUp_m5B0BCD38FCEEB5512FE9FA49DFDDFB61FA5D5EAF_inline(L_28, NULL);
		G_B12_0 = ((int32_t)(L_29));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 1;
	}

IL_00ab:
	{
		// float thumbsUp = canThumbsUp ? m_thumbsUpBlend : 0.0f;
		if (G_B12_0)
		{
			goto IL_00b4;
		}
	}
	{
		G_B15_0 = (0.0f);
		goto IL_00ba;
	}

IL_00b4:
	{
		float L_30 = __this->___m_thumbsUpBlend_29;
		G_B15_0 = L_30;
	}

IL_00ba:
	{
		V_4 = G_B15_0;
		// m_animator.SetLayerWeight(m_animLayerIndexThumb, thumbsUp);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___m_animator_16;
		int32_t L_32 = __this->___m_animLayerIndexThumb_22;
		float L_33 = V_4;
		NullCheck(L_31);
		Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_31, L_32, L_33, NULL);
		// float pinch = OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, m_controller);
		int32_t L_34 = __this->___m_controller_15;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_35;
		L_35 = OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8(1, L_34, NULL);
		V_5 = L_35;
		// m_animator.SetFloat("Pinch", pinch);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_36 = __this->___m_animator_16;
		float L_37 = V_5;
		NullCheck(L_36);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_36, _stringLiteral7E85ECCB7093F5018C9F13499309750C0A65403D, L_37, NULL);
		// }
		return;
	}
}
// System.Void OVRTouchSample.Hand::CollisionEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_CollisionEnable_mE84E4E5CDE7F8D524DD175035E51B336E09871A4 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_collisionEnabled == enabled)
		bool L_0 = __this->___m_collisionEnabled_19;
		bool L_1 = ___enabled0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// m_collisionEnabled = enabled;
		bool L_2 = ___enabled0;
		__this->___m_collisionEnabled_19 = L_2;
		// if (enabled)
		bool L_3 = ___enabled0;
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// m_collisionScaleCurrent = COLLIDER_SCALE_MIN;
		__this->___m_collisionScaleCurrent_31 = (0.00999999978f);
		// for (int i = 0; i < m_colliders.Length; ++i)
		V_0 = 0;
		goto IL_0054;
	}

IL_0023:
	{
		// Collider collider = m_colliders[i];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4 = __this->___m_colliders_18;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// collider.transform.localScale = new Vector3(COLLIDER_SCALE_MIN, COLLIDER_SCALE_MIN, COLLIDER_SCALE_MIN);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = L_7;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.00999999978f), (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// collider.enabled = true;
		NullCheck(L_8);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_8, (bool)1, NULL);
		// for (int i = 0; i < m_colliders.Length; ++i)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < m_colliders.Length; ++i)
		int32_t L_12 = V_0;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_13 = __this->___m_colliders_18;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0060:
	{
		// m_collisionScaleCurrent = COLLIDER_SCALE_MAX;
		__this->___m_collisionScaleCurrent_31 = (1.0f);
		// for (int i = 0; i < m_colliders.Length; ++i)
		V_1 = 0;
		goto IL_00a0;
	}

IL_006f:
	{
		// Collider collider = m_colliders[i];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_14 = __this->___m_colliders_18;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		// collider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18 = L_17;
		NullCheck(L_18);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_18, (bool)0, NULL);
		// collider.transform.localScale = new Vector3(COLLIDER_SCALE_MIN, COLLIDER_SCALE_MIN, COLLIDER_SCALE_MIN);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (0.00999999978f), (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_20, NULL);
		// for (int i = 0; i < m_colliders.Length; ++i)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00a0:
	{
		// for (int i = 0; i < m_colliders.Length; ++i)
		int32_t L_22 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_23 = __this->___m_colliders_18;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_006f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OVRTouchSample.Hand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand__ctor_mC9E9A5AF18238609A8B74564BFF2D74AC60D7B29 (Hand_t0A62347EF4DB551FDA3B99B5637AD55098FE07A8* __this, const RuntimeMethod* method) 
{
	{
		// private bool m_collisionEnabled = true;
		__this->___m_collisionEnabled_19 = (bool)1;
		// private int m_animLayerIndexThumb = -1;
		__this->___m_animLayerIndexThumb_22 = (-1);
		// private int m_animLayerIndexPoint = -1;
		__this->___m_animLayerIndexPoint_23 = (-1);
		// private int m_animParamIndexFlex = -1;
		__this->___m_animParamIndexFlex_24 = (-1);
		// private int m_animParamIndexPose = -1;
		__this->___m_animParamIndexPose_25 = (-1);
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
// System.Void OVRTouchSample.Hand/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF9588185BC1199512F3465836275650F1FD582FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* L_0 = (U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F*)il2cpp_codegen_object_new(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5B6A45FE68FE591E166EC9969E2356BE51CA2E4F(L_0, NULL);
		((U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void OVRTouchSample.Hand/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B6A45FE68FE591E166EC9969E2356BE51CA2E4F (U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean OVRTouchSample.Hand/<>c::<Start>b__28_0(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__28_0_m69657F26B241AA6A749CAFAF9534605A3FAC3480 (U3CU3Ec_tADB0E95203F0A090B7A367EF6CE374F2A78D832F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___childCollider0, const RuntimeMethod* method) 
{
	{
		// m_colliders = this.GetComponentsInChildren<Collider>().Where(childCollider => !childCollider.isTrigger).ToArray();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___childCollider0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Boolean OVRTouchSample.HandPose::get_AllowPointing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPose_get_AllowPointing_m19E1786901712E84FD7D2CC113471FF7B2167731 (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_allowPointing; }
		bool L_0 = __this->___m_allowPointing_4;
		return L_0;
	}
}
// System.Boolean OVRTouchSample.HandPose::get_AllowThumbsUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPose_get_AllowThumbsUp_m5B0BCD38FCEEB5512FE9FA49DFDDFB61FA5D5EAF (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_allowThumbsUp; }
		bool L_0 = __this->___m_allowThumbsUp_5;
		return L_0;
	}
}
// OVRTouchSample.HandPoseId OVRTouchSample.HandPose::get_PoseId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPose_get_PoseId_m399F7DCB42FE2A60FFF096C1865DFF5B347F7BDB (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_poseId; }
		int32_t L_0 = __this->___m_poseId_6;
		return L_0;
	}
}
// System.Void OVRTouchSample.HandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_m021CDC27F6532FDED971F9972D5ECE85C3FF1162 (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
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
// System.Void OVRTouchSample.TouchController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_Update_m2FCE5F2BEC38B9B1448FAD8E8DFF64AF1E3E0A32 (TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchController_OnInputFocusAcquired_m4CE35E8F9CA5C7E611193F2859EF5D72E4C6A106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchController_OnInputFocusLost_m6317EA5E49BEFAB15C37741C92DE17CC0056DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral686B62DC85A76B4D986AD7F54097517BC28F71E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8527477538A58C4D0BEFF1E314F25DFC679B1257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB4E9905F6F550494FF4D258F973A6CC2395CC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C9085A8FC519D61179956F4A28BAD81D661A82);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B4_1 = NULL;
	float G_B6_0 = 0.0f;
	String_t* G_B6_1 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B6_2 = NULL;
	{
		// m_animator.SetFloat("Button 1", OVRInput.Get(OVRInput.Button.One, m_controller) ? 1.0f : 0.0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_animator_5;
		int32_t L_1 = __this->___m_controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(1, L_1, NULL);
		G_B1_0 = _stringLiteral8527477538A58C4D0BEFF1E314F25DFC679B1257;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = _stringLiteral8527477538A58C4D0BEFF1E314F25DFC679B1257;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0025:
	{
		NullCheck(G_B3_2);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(G_B3_2, G_B3_1, G_B3_0, NULL);
		// m_animator.SetFloat("Button 2", OVRInput.Get(OVRInput.Button.Two, m_controller) ? 1.0f : 0.0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___m_animator_5;
		int32_t L_4 = __this->___m_controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(2, L_4, NULL);
		G_B4_0 = _stringLiteral686B62DC85A76B4D986AD7F54097517BC28F71E3;
		G_B4_1 = L_3;
		if (L_5)
		{
			G_B5_0 = _stringLiteral686B62DC85A76B4D986AD7F54097517BC28F71E3;
			G_B5_1 = L_3;
			goto IL_004a;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004f;
	}

IL_004a:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004f:
	{
		NullCheck(G_B6_2);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(G_B6_2, G_B6_1, G_B6_0, NULL);
		// m_animator.SetFloat("Joy X", OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, m_controller).x);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___m_animator_5;
		int32_t L_7 = __this->___m_controller_4;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(1, L_7, NULL);
		float L_9 = L_8.___x_0;
		NullCheck(L_6);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_6, _stringLiteralF4C9085A8FC519D61179956F4A28BAD81D661A82, L_9, NULL);
		// m_animator.SetFloat("Joy Y", OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, m_controller).y);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___m_animator_5;
		int32_t L_11 = __this->___m_controller_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(1, L_11, NULL);
		float L_13 = L_12.___y_1;
		NullCheck(L_10);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_10, _stringLiteral8AB4E9905F6F550494FF4D258F973A6CC2395CC7, L_13, NULL);
		// m_animator.SetFloat("Grip", OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, m_controller));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___m_animator_5;
		int32_t L_15 = __this->___m_controller_4;
		float L_16;
		L_16 = OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8(4, L_15, NULL);
		NullCheck(L_14);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_14, _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, L_16, NULL);
		// m_animator.SetFloat("Trigger", OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, m_controller));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___m_animator_5;
		int32_t L_18 = __this->___m_controller_4;
		float L_19;
		L_19 = OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8(1, L_18, NULL);
		NullCheck(L_17);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_17, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, L_19, NULL);
		// OVRManager.InputFocusAcquired += OnInputFocusAcquired;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_20, __this, (intptr_t)((void*)TouchController_OnInputFocusAcquired_m4CE35E8F9CA5C7E611193F2859EF5D72E4C6A106_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_il2cpp_TypeInfo_var);
		OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B(L_20, NULL);
		// OVRManager.InputFocusLost += OnInputFocusLost;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_21, __this, (intptr_t)((void*)TouchController_OnInputFocusLost_m6317EA5E49BEFAB15C37741C92DE17CC0056DE15_RuntimeMethod_var), NULL);
		OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(L_21, NULL);
		// }
		return;
	}
}
// System.Void OVRTouchSample.TouchController::OnInputFocusLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_OnInputFocusLost_m6317EA5E49BEFAB15C37741C92DE17CC0056DE15 (TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03* __this, const RuntimeMethod* method) 
{
	{
		// if (gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// m_restoreOnInputAcquired = true;
		__this->___m_restoreOnInputAcquired_6 = (bool)1;
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void OVRTouchSample.TouchController::OnInputFocusAcquired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_OnInputFocusAcquired_m4CE35E8F9CA5C7E611193F2859EF5D72E4C6A106 (TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03* __this, const RuntimeMethod* method) 
{
	{
		// if (m_restoreOnInputAcquired)
		bool L_0 = __this->___m_restoreOnInputAcquired_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// m_restoreOnInputAcquired = false;
		__this->___m_restoreOnInputAcquired_6 = (bool)0;
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void OVRTouchSample.TouchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController__ctor_mFEC6542E29C9A706269D2381487265DC207D4B25 (TouchController_t1BCC5F911D1E7987E5DA9A4654DD05D585C32A03* __this, const RuntimeMethod* method) 
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
// Google.Protobuf.Reflection.FileDescriptor CArControls.InputReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* InputReflection_get_Descriptor_mFBB61B9A90717A6D53469B5D7FD25C93520FF6A2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		il2cpp_codegen_runtime_class_init_inline(InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_StaticFields*)il2cpp_codegen_static_fields_for(InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var))->___descriptor_0;
		return L_0;
	}
}
// System.Void CArControls.InputReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReflection__cctor_mBB523B39E4BF01F070170678C889858135FAA98E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADE2817B0E7EB8CE7D77305F699E8E0D8C89996);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E09BBE03AB231A5C5EB67A982C0103CF560CF92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ABB55FE81934EC75A837DA60878C55C5D087571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral821832F7D61486539B4FAC1CBC51815EC2012381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB1149D3A1CF7CD4BD5D2A797F9C0EFDF1790ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB51A7D1EC8D91F79814484C0BA85D0C8D9DE79B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "ChVjQVItcHJvdG8vSW5wdXQucHJvdG8SDWNfYXJfY29udHJvbHMiPgoTVGh1",
		//       "bWJzdGlja0RpcmVjdGlvbhIKCgJkeBgBIAEoARIKCgJkeRgCIAEoARIPCgdz",
		//       "ZXFfbnVtGAMgASgDYgZwcm90bzM="));
		String_t* L_0;
		L_0 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral2E09BBE03AB231A5C5EB67A982C0103CF560CF92, _stringLiteral2ADE2817B0E7EB8CE7D77305F699E8E0D8C89996, _stringLiteralAAB1149D3A1CF7CD4BD5D2A797F9C0EFDF1790ED, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_0, NULL);
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { },
		//     new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::CArControls.ThumbstickDirection), global::CArControls.ThumbstickDirection.Parser, new[]{ "Dx", "Dy", "SeqNum" }, null, null, null, null)
		//     }));
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_2 = (FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)SZArrayNew(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var, (uint32_t)0);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_3 = (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var, (uint32_t)1);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_4 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581* L_7;
		L_7 = ThumbstickDirection_get_Parser_m92D7B7F69B42723A21368CA9048C6765EB606078_inline(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral821832F7D61486539B4FAC1CBC51815EC2012381);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral821832F7D61486539B4FAC1CBC51815EC2012381);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralB51A7D1EC8D91F79814484C0BA85D0C8D9DE79B0);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB51A7D1EC8D91F79814484C0BA85D0C8D9DE79B0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral6ABB55FE81934EC75A837DA60878C55C5D087571);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6ABB55FE81934EC75A837DA60878C55C5D087571);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_12 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_12, L_6, L_7, L_11, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_12);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_12);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_13 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		GeneratedClrTypeInfo__ctor_m6C6F4A657670674B74F3AF88AA06251E4C8DD022(L_13, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_14;
		L_14 = FileDescriptor_FromGeneratedCode_mE8458CBFAFB2D3121B5EFC55182A02EAC93E0823(L_1, L_2, L_13, NULL);
		((InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_StaticFields*)il2cpp_codegen_static_fields_for(InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var))->___descriptor_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_StaticFields*)il2cpp_codegen_static_fields_for(InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var))->___descriptor_0), (void*)L_14);
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
// Google.Protobuf.MessageParser`1<CArControls.ThumbstickDirection> CArControls.ThumbstickDirection::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581* ThumbstickDirection_get_Parser_m92D7B7F69B42723A21368CA9048C6765EB606078 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<ThumbstickDirection> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581* L_0 = ((ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_StaticFields*)il2cpp_codegen_static_fields_for(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CArControls.ThumbstickDirection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ThumbstickDirection_get_Descriptor_m0BA090C078AC6DC6D1B626BBFCDD9E9A1D0AFF88 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::CArControls.InputReflection.Descriptor.MessageTypes[0]; }
		il2cpp_codegen_runtime_class_init_inline(InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = InputReflection_get_Descriptor_mFBB61B9A90717A6D53469B5D7FD25C93520FF6A2_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CArControls.ThumbstickDirection::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ThumbstickDirection_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m0F7F47560560CA0ACAE554C50B5E9AEDCEE2C0EF (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = ThumbstickDirection_get_Descriptor_m0BA090C078AC6DC6D1B626BBFCDD9E9A1D0AFF88(NULL);
		return L_0;
	}
}
// System.Void CArControls.ThumbstickDirection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection__ctor_m263618303267A4FFFFD7B773CFCAE38A5E5BDDC8 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	{
		// public ThumbstickDirection() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void CArControls.ThumbstickDirection::.ctor(CArControls.ThumbstickDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection__ctor_m8DD8657E94E72BDDCA75F95F9FD4D99AC8D4C2A7 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* ___other0, const RuntimeMethod* method) 
{
	{
		// public ThumbstickDirection(ThumbstickDirection other) : this() {
		ThumbstickDirection__ctor_m263618303267A4FFFFD7B773CFCAE38A5E5BDDC8(__this, NULL);
		// dx_ = other.dx_;
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_0 = ___other0;
		NullCheck(L_0);
		double L_1 = L_0->___dx__3;
		__this->___dx__3 = L_1;
		// dy_ = other.dy_;
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_2 = ___other0;
		NullCheck(L_2);
		double L_3 = L_2->___dy__5;
		__this->___dy__5 = L_3;
		// seqNum_ = other.seqNum_;
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_4 = ___other0;
		NullCheck(L_4);
		int64_t L_5 = L_4->___seqNum__7;
		__this->___seqNum__7 = L_5;
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_6 = ___other0;
		NullCheck(L_6);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_7 = L_6->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_8;
		L_8 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_7, NULL);
		__this->____unknownFields_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_8);
		// }
		return;
	}
}
// CArControls.ThumbstickDirection CArControls.ThumbstickDirection::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* ThumbstickDirection_Clone_m544BD7437EBE7E293EB4469CFE008AF759BBA952 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ThumbstickDirection(this);
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_0 = (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30*)il2cpp_codegen_object_new(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ThumbstickDirection__ctor_m8DD8657E94E72BDDCA75F95F9FD4D99AC8D4C2A7(L_0, __this, NULL);
		return L_0;
	}
}
// System.Double CArControls.ThumbstickDirection::get_Dx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	{
		// get { return dx_; }
		double L_0 = __this->___dx__3;
		return L_0;
	}
}
// System.Void CArControls.ThumbstickDirection::set_Dx(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection_set_Dx_m05B03AAB29A4E608B72E7CA9E25AF3ECD51BD546 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// dx_ = value;
		double L_0 = ___value0;
		__this->___dx__3 = L_0;
		// }
		return;
	}
}
// System.Double CArControls.ThumbstickDirection::get_Dy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	{
		// get { return dy_; }
		double L_0 = __this->___dy__5;
		return L_0;
	}
}
// System.Void CArControls.ThumbstickDirection::set_Dy(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection_set_Dy_m2A3E989D42A4ED17562A3C3FB75AE4B6F723F122 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// dy_ = value;
		double L_0 = ___value0;
		__this->___dy__5 = L_0;
		// }
		return;
	}
}
// System.Int64 CArControls.ThumbstickDirection::get_SeqNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	{
		// get { return seqNum_; }
		int64_t L_0 = __this->___seqNum__7;
		return L_0;
	}
}
// System.Void CArControls.ThumbstickDirection::set_SeqNum(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection_set_SeqNum_m59F042E3B9664136E9F909DD8410513076B573BE (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// seqNum_ = value;
		int64_t L_0 = ___value0;
		__this->___seqNum__7 = L_0;
		// }
		return;
	}
}
// System.Boolean CArControls.ThumbstickDirection::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThumbstickDirection_Equals_mC638CFF8E789AE45AFC725D0368314D743AEF15D (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as ThumbstickDirection);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = ThumbstickDirection_Equals_mCF0A070F9DD09AB4AE3F21F1592E070D31FCFD6D(__this, ((ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30*)IsInstSealed((RuntimeObject*)L_0, ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean CArControls.ThumbstickDirection::Equals(CArControls.ThumbstickDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThumbstickDirection_Equals_mCF0A070F9DD09AB4AE3F21F1592E070D31FCFD6D (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(other, null)) {
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_1 = ___other0;
		if ((!(((RuntimeObject*)(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30*)L_1) == ((RuntimeObject*)(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30*)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(Dx, other.Dx)) return false;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_2;
		L_2 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline(NULL);
		double L_3;
		L_3 = ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline(__this, NULL);
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_4 = ___other0;
		NullCheck(L_4);
		double L_5;
		L_5 = ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline(L_4, NULL);
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, double, double >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Double>::Equals(T,T) */, L_2, L_3, L_5);
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(Dx, other.Dx)) return false;
		return (bool)0;
	}

IL_0025:
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(Dy, other.Dy)) return false;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_7;
		L_7 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline(NULL);
		double L_8;
		L_8 = ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline(__this, NULL);
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_9 = ___other0;
		NullCheck(L_9);
		double L_10;
		L_10 = ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline(L_9, NULL);
		NullCheck(L_7);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, double, double >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Double>::Equals(T,T) */, L_7, L_8, L_10);
		if (L_11)
		{
			goto IL_003f;
		}
	}
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(Dy, other.Dy)) return false;
		return (bool)0;
	}

IL_003f:
	{
		// if (SeqNum != other.SeqNum) return false;
		int64_t L_12;
		L_12 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(__this, NULL);
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_13 = ___other0;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(L_13, NULL);
		if ((((int64_t)L_12) == ((int64_t)L_14)))
		{
			goto IL_004f;
		}
	}
	{
		// if (SeqNum != other.SeqNum) return false;
		return (bool)0;
	}

IL_004f:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_15 = __this->____unknownFields_1;
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_16 = ___other0;
		NullCheck(L_16);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_17 = L_16->____unknownFields_1;
		bool L_18;
		L_18 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_15, L_17, NULL);
		return L_18;
	}
}
// System.Int32 CArControls.ThumbstickDirection::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThumbstickDirection_GetHashCode_mDBCEE6E3EB309974DD8D0A4E8D782A1020FC4E39 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (Dx != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(Dx);
		double L_0;
		L_0 = ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline(__this, NULL);
		if ((((double)L_0) == ((double)(0.0))))
		{
			goto IL_0026;
		}
	}
	{
		// if (Dx != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(Dx);
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_2;
		L_2 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline(NULL);
		double L_3;
		L_3 = ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, double >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Double>::GetHashCode(T) */, L_2, L_3);
		V_0 = ((int32_t)(L_1^L_4));
	}

IL_0026:
	{
		// if (Dy != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(Dy);
		double L_5;
		L_5 = ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline(__this, NULL);
		if ((((double)L_5) == ((double)(0.0))))
		{
			goto IL_004a;
		}
	}
	{
		// if (Dy != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(Dy);
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_7;
		L_7 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline(NULL);
		double L_8;
		L_8 = ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_9;
		L_9 = VirtualFuncInvoker1< int32_t, double >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Double>::GetHashCode(T) */, L_7, L_8);
		V_0 = ((int32_t)(L_6^L_9));
	}

IL_004a:
	{
		// if (SeqNum != 0L) hash ^= SeqNum.GetHashCode();
		int64_t L_10;
		L_10 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		// if (SeqNum != 0L) hash ^= SeqNum.GetHashCode();
		int32_t L_11 = V_0;
		int64_t L_12;
		L_12 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(__this, NULL);
		V_1 = L_12;
		int32_t L_13;
		L_13 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_1), NULL);
		V_0 = ((int32_t)(L_11^L_13));
	}

IL_0063:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_14 = __this->____unknownFields_1;
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_15 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_16 = __this->____unknownFields_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_16);
		V_0 = ((int32_t)(L_15^L_17));
	}

IL_0079:
	{
		// return hash;
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.String CArControls.ThumbstickDirection::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThumbstickDirection_ToString_m845628DB27B5F5CBF25D8B8334136B655F4C9DDF (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void CArControls.ThumbstickDirection::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection_WriteTo_m0F5EF671AC40B91200C2CDDE09D3C7A2F7732B6A (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CArControls.ThumbstickDirection::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_mD46151D0DE786C23605E61A4DFA813BEC0284671 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	{
		// if (Dx != 0D) {
		double L_0;
		L_0 = ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline(__this, NULL);
		if ((((double)L_0) == ((double)(0.0))))
		{
			goto IL_0025;
		}
	}
	{
		// output.WriteRawTag(9);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_1 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_1, (uint8_t)((int32_t)9), NULL);
		// output.WriteDouble(Dx);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		double L_3;
		L_3 = ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline(__this, NULL);
		WriteContext_WriteDouble_m69D9DDADB079FC8C652BBE0672212126C7BB66E6(L_2, L_3, NULL);
	}

IL_0025:
	{
		// if (Dy != 0D) {
		double L_4;
		L_4 = ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline(__this, NULL);
		if ((((double)L_4) == ((double)(0.0))))
		{
			goto IL_004a;
		}
	}
	{
		// output.WriteRawTag(17);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_5 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_5, (uint8_t)((int32_t)17), NULL);
		// output.WriteDouble(Dy);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_6 = ___output0;
		double L_7;
		L_7 = ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline(__this, NULL);
		WriteContext_WriteDouble_m69D9DDADB079FC8C652BBE0672212126C7BB66E6(L_6, L_7, NULL);
	}

IL_004a:
	{
		// if (SeqNum != 0L) {
		int64_t L_8;
		L_8 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(__this, NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// output.WriteRawTag(24);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_9 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_9, (uint8_t)((int32_t)24), NULL);
		// output.WriteInt64(SeqNum);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_10 = ___output0;
		int64_t L_11;
		L_11 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(__this, NULL);
		WriteContext_WriteInt64_m67B44E95DD3431514A71527605A53F59875C05EC(L_10, L_11, NULL);
	}

IL_0066:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12 = __this->____unknownFields_1;
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_14 = ___output0;
		NullCheck(L_13);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_13, L_14, NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Int32 CArControls.ThumbstickDirection::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThumbstickDirection_CalculateSize_mA90A8DBF7B981213A13AFD285B2E37425E0D2B81 (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (Dx != 0D) {
		double L_0;
		L_0 = ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline(__this, NULL);
		if ((((double)L_0) == ((double)(0.0))))
		{
			goto IL_0018;
		}
	}
	{
		// size += 1 + 8;
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)9)));
	}

IL_0018:
	{
		// if (Dy != 0D) {
		double L_2;
		L_2 = ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline(__this, NULL);
		if ((((double)L_2) == ((double)(0.0))))
		{
			goto IL_002e;
		}
	}
	{
		// size += 1 + 8;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)9)));
	}

IL_002e:
	{
		// if (SeqNum != 0L) {
		int64_t L_4;
		L_4 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeInt64Size(SeqNum);
		int32_t L_5 = V_0;
		int64_t L_6;
		L_6 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = CodedOutputStream_ComputeInt64Size_mA138368189B4AE2787BE7B4A5FC8FBC0C4CF48C8(L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_add(1, L_7))));
	}

IL_0046:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_8 = __this->____unknownFields_1;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_9 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_10, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, L_11));
	}

IL_005c:
	{
		// return size;
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Void CArControls.ThumbstickDirection::MergeFrom(CArControls.ThumbstickDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection_MergeFrom_mB715E48E0A2C1AB88869EEE0387DCFFEB989739C (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other == null) {
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (other.Dx != 0D) {
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_1 = ___other0;
		NullCheck(L_1);
		double L_2;
		L_2 = ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline(L_1, NULL);
		if ((((double)L_2) == ((double)(0.0))))
		{
			goto IL_0021;
		}
	}
	{
		// Dx = other.Dx;
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_3 = ___other0;
		NullCheck(L_3);
		double L_4;
		L_4 = ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline(L_3, NULL);
		ThumbstickDirection_set_Dx_m05B03AAB29A4E608B72E7CA9E25AF3ECD51BD546_inline(__this, L_4, NULL);
	}

IL_0021:
	{
		// if (other.Dy != 0D) {
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_5 = ___other0;
		NullCheck(L_5);
		double L_6;
		L_6 = ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline(L_5, NULL);
		if ((((double)L_6) == ((double)(0.0))))
		{
			goto IL_003e;
		}
	}
	{
		// Dy = other.Dy;
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_7 = ___other0;
		NullCheck(L_7);
		double L_8;
		L_8 = ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline(L_7, NULL);
		ThumbstickDirection_set_Dy_m2A3E989D42A4ED17562A3C3FB75AE4B6F723F122_inline(__this, L_8, NULL);
	}

IL_003e:
	{
		// if (other.SeqNum != 0L) {
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_9 = ___other0;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(L_9, NULL);
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// SeqNum = other.SeqNum;
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_11 = ___other0;
		NullCheck(L_11);
		int64_t L_12;
		L_12 = ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline(L_11, NULL);
		ThumbstickDirection_set_SeqNum_m59F042E3B9664136E9F909DD8410513076B573BE_inline(__this, L_12, NULL);
	}

IL_0052:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_14 = ___other0;
		NullCheck(L_14);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_15 = L_14->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_16;
		L_16 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_13, L_15, NULL);
		__this->____unknownFields_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_16);
		// }
		return;
	}
}
// System.Void CArControls.ThumbstickDirection::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection_MergeFrom_m780257521FC78B82639542D76EE8937E9704EE0B (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CArControls.ThumbstickDirection::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_m6D8CFBB406BF5C2E7478235435A769A78437261C (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_004d;
	}

IL_0002:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)9))))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)17))))
		{
			goto IL_0033;
		}
	}
	{
		uint32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)24))))
		{
			goto IL_0041;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_3 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_4 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_5;
		L_5 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_3, L_4, NULL);
		__this->____unknownFields_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_5);
		// break;
		goto IL_004d;
	}

IL_0025:
	{
		// Dx = input.ReadDouble();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_6 = ___input0;
		double L_7;
		L_7 = ParseContext_ReadDouble_m472E820A5560DEDA7DB0C3E9FBBAAB1D9889A521_inline(L_6, NULL);
		ThumbstickDirection_set_Dx_m05B03AAB29A4E608B72E7CA9E25AF3ECD51BD546_inline(__this, L_7, NULL);
		// break;
		goto IL_004d;
	}

IL_0033:
	{
		// Dy = input.ReadDouble();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_8 = ___input0;
		double L_9;
		L_9 = ParseContext_ReadDouble_m472E820A5560DEDA7DB0C3E9FBBAAB1D9889A521_inline(L_8, NULL);
		ThumbstickDirection_set_Dy_m2A3E989D42A4ED17562A3C3FB75AE4B6F723F122_inline(__this, L_9, NULL);
		// break;
		goto IL_004d;
	}

IL_0041:
	{
		// SeqNum = input.ReadInt64();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_10 = ___input0;
		int64_t L_11;
		L_11 = ParseContext_ReadInt64_mEA0F773A37DBAA193C4146023EABA449F35DB876_inline(L_10, NULL);
		ThumbstickDirection_set_SeqNum_m59F042E3B9664136E9F909DD8410513076B573BE_inline(__this, L_11, NULL);
	}

IL_004d:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_12 = ___input0;
		uint32_t L_13;
		L_13 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_12, NULL);
		uint32_t L_14 = L_13;
		V_0 = L_14;
		if (L_14)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CArControls.ThumbstickDirection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThumbstickDirection__cctor_m75FBAAD2EF1CD0778E8A527685A337E95754834B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m8979CA50DAD5DB6C06B93C38CBF87A8088291B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__37_0_mB3FDD5F53DE4309C9799CC14C4BD68241837FE34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ThumbstickDirection> _parser = new pb::MessageParser<ThumbstickDirection>(() => new ThumbstickDirection());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_il2cpp_TypeInfo_var);
		U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6* L_0 = ((U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20* L_1 = (Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20*)il2cpp_codegen_object_new(Func_1_tCB107264B063A3B144D34F6FD869113D0417FC20_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m56D6652CB45DEF3E594237257CBF6D4E3219D00F(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__37_0_mB3FDD5F53DE4309C9799CC14C4BD68241837FE34_RuntimeMethod_var), NULL);
		MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581* L_2 = (MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581*)il2cpp_codegen_object_new(MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_m8979CA50DAD5DB6C06B93C38CBF87A8088291B4A(L_2, L_1, MessageParser_1__ctor_m8979CA50DAD5DB6C06B93C38CBF87A8088291B4A_RuntimeMethod_var);
		((ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_StaticFields*)il2cpp_codegen_static_fields_for(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_StaticFields*)il2cpp_codegen_static_fields_for(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
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
// System.Void CArControls.ThumbstickDirection/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4279047149E0D78FCC5839B5E085A8D7EBEA0D10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6* L_0 = (U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6*)il2cpp_codegen_object_new(U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1862CB59C8D1DB6A2FB74822741041976CC6B7C2(L_0, NULL);
		((U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CArControls.ThumbstickDirection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1862CB59C8D1DB6A2FB74822741041976CC6B7C2 (U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CArControls.ThumbstickDirection CArControls.ThumbstickDirection/<>c::<.cctor>b__37_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* U3CU3Ec_U3C_cctorU3Eb__37_0_mB3FDD5F53DE4309C9799CC14C4BD68241837FE34 (U3CU3Ec_t379026F72B1C3343D9CF3456CA1352492C3C92E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ThumbstickDirection> _parser = new pb::MessageParser<ThumbstickDirection>(() => new ThumbstickDirection());
		ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* L_0 = (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30*)il2cpp_codegen_object_new(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ThumbstickDirection__ctor_m263618303267A4FFFFD7B773CFCAE38A5E5BDDC8(L_0, NULL);
		return L_0;
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
// Google.Protobuf.Reflection.FileDescriptor CAr.ControlReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ControlReflection_get_Descriptor_mF06AA872BCEBD18766A2E54C8DE8F3D8A4329F68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		il2cpp_codegen_runtime_class_init_inline(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_StaticFields*)il2cpp_codegen_static_fields_for(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var))->___descriptor_0;
		return L_0;
	}
}
// System.Void CAr.ControlReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlReflection__cctor_m00EFF0A0D55F8FA4ED0F3DA278DCA5DE9E475873 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdpType_t23A00C03CC0AEE41DFE504BCAB41A24B7C8BE0F2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077201B88DA5EBE6BCD89C10E9462C2AFCBDC270);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E8802B48724FAE68F2562989D0BC6414633BEA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36FE550DAE233DBB1A4453958A2155B540FF2E6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656BE69C6758A271805383E0A18CE996531A3EDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EDC7D44836FB5023F14411B8C43CDDE68A50895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4F026A08CF218CEEAB24FE7C08190D0FFA8788);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C572D7E80154DD1A39D6A68D447FA164689FC12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral888CE0F0EA1CFA03014C3B3685817B5523378BF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BE930D1113E1F4E079D8BEA1F5770DD38A4A1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9834B0E1156678E178780AFC5E20BAD59E8EE1C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B875B155618040EFCF8D3AEE9F39271ADCA03F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8D930B9AD60A6077F0007E319442FE353470081);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDCDDEA60C5E255F5631B753F3A5B926A1F61178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00880D907D6D67D86710475D1F7BC9CFF891AA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD17DD637DB39F3E85513720D2D63811B3DD7E783);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC24456BF1D0B9CE18660F74F513161368E6B88A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4AF7A913F31F5B9DF39DAD2E5E539A63FC2AD2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8CE300AA60ADAF83138A365C863C0CD87398AE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "ChdjQVItcHJvdG8vQ29udHJvbC5wcm90bxIEY19hciIUChJIZWFsdGhDaGVj",
		//       "a1JlcXVlc3QiEgoQSGVhbHRoQ2hlY2tSZXBseSJpChBIYW5kc2hha2VNZXNz",
		//       "YWdlEi4KC2Rlc2NyaXB0aW9uGAEgASgLMhcuY19hci5Ob3RpZnlEZXNjcmlw",
		//       "dGlvbkgAEh4KA2ljZRgCIAEoCzIPLmNfYXIuTm90aWZ5SWNlSABCBQoDbXNn",
		//       "IkEKEU5vdGlmeURlc2NyaXB0aW9uEh8KCHNkcF90eXBlGAEgASgOMg0uY19h",
		//       "ci5TZHBUeXBlEgsKA3NkcBgCIAEoCSIgCglOb3RpZnlJY2USEwoLanNvbl9i",
		//       "YXNlNjQYASABKAkqTQoHU2RwVHlwZRIJCgVPZmZlchAAEgwKCFByYW5zd2Vy",
		//       "EAESCgoGQW5zd2VyEAISDAoIUm9sbGJhY2sQAxIPCgtVbnNwZWNpZmllZBAE",
		//       "MpMBCgdDb250cm9sEkEKC0hlYWx0aENoZWNrEhguY19hci5IZWFsdGhDaGVj",
		//       "a1JlcXVlc3QaFi5jX2FyLkhlYWx0aENoZWNrUmVwbHkiABJFCg1TZW5kSGFu",
		//       "ZHNoYWtlEhYuY19hci5IYW5kc2hha2VNZXNzYWdlGhYuY19hci5IYW5kc2hh",
		//       "a2VNZXNzYWdlIgAoATABYgZwcm90bzM="));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral077201B88DA5EBE6BCD89C10E9462C2AFCBDC270);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral077201B88DA5EBE6BCD89C10E9462C2AFCBDC270);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralB1B875B155618040EFCF8D3AEE9F39271ADCA03F);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB1B875B155618040EFCF8D3AEE9F39271ADCA03F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral6EDC7D44836FB5023F14411B8C43CDDE68A50895);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6EDC7D44836FB5023F14411B8C43CDDE68A50895);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD17DD637DB39F3E85513720D2D63811B3DD7E783);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD17DD637DB39F3E85513720D2D63811B3DD7E783);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralF8CE300AA60ADAF83138A365C863C0CD87398AE9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF8CE300AA60ADAF83138A365C863C0CD87398AE9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral0E8802B48724FAE68F2562989D0BC6414633BEA6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0E8802B48724FAE68F2562989D0BC6414633BEA6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralB8D930B9AD60A6077F0007E319442FE353470081);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB8D930B9AD60A6077F0007E319442FE353470081);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral888CE0F0EA1CFA03014C3B3685817B5523378BF2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral888CE0F0EA1CFA03014C3B3685817B5523378BF2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral8BE930D1113E1F4E079D8BEA1F5770DD38A4A1F2);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral8BE930D1113E1F4E079D8BEA1F5770DD38A4A1F2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralC00880D907D6D67D86710475D1F7BC9CFF891AA1);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralC00880D907D6D67D86710475D1F7BC9CFF891AA1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral36FE550DAE233DBB1A4453958A2155B540FF2E6F);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral36FE550DAE233DBB1A4453958A2155B540FF2E6F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral7B4F026A08CF218CEEAB24FE7C08190D0FFA8788);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral7B4F026A08CF218CEEAB24FE7C08190D0FFA8788);
		String_t* L_13;
		L_13 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_13, NULL);
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { },
		//     new pbr::GeneratedClrTypeInfo(new[] {typeof(global::CAr.SdpType), }, null, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::CAr.HealthCheckRequest), global::CAr.HealthCheckRequest.Parser, null, null, null, null, null),
		//       new pbr::GeneratedClrTypeInfo(typeof(global::CAr.HealthCheckReply), global::CAr.HealthCheckReply.Parser, null, null, null, null, null),
		//       new pbr::GeneratedClrTypeInfo(typeof(global::CAr.HandshakeMessage), global::CAr.HandshakeMessage.Parser, new[]{ "Description", "Ice" }, new[]{ "Msg" }, null, null, null),
		//       new pbr::GeneratedClrTypeInfo(typeof(global::CAr.NotifyDescription), global::CAr.NotifyDescription.Parser, new[]{ "SdpType", "Sdp" }, null, null, null, null),
		//       new pbr::GeneratedClrTypeInfo(typeof(global::CAr.NotifyIce), global::CAr.NotifyIce.Parser, new[]{ "JsonBase64" }, null, null, null, null)
		//     }));
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_15 = (FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)SZArrayNew(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var, (uint32_t)0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17 = L_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (SdpType_t23A00C03CC0AEE41DFE504BCAB41A24B7C8BE0F2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_19);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_20 = (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var, (uint32_t)5);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_21 = L_20;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* L_24;
		L_24 = HealthCheckRequest_get_Parser_mF64B315384900033E8622653381D7E692EA0B1CC_inline(NULL);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_25 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_25, L_23, L_24, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_25);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_26 = L_21;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* L_29;
		L_29 = HealthCheckReply_get_Parser_m3E6E9533528075258109C3B3C3129BC8F0288BC8_inline(NULL);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_30 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_30, L_28, L_29, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_30);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_31 = L_26;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* L_34;
		L_34 = HandshakeMessage_get_Parser_mEE267FFE1DE214403E34C5D2E086E46EE036AAD7_inline(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralEC24456BF1D0B9CE18660F74F513161368E6B88A);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC24456BF1D0B9CE18660F74F513161368E6B88A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral656BE69C6758A271805383E0A18CE996531A3EDC);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral656BE69C6758A271805383E0A18CE996531A3EDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral7C572D7E80154DD1A39D6A68D447FA164689FC12);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7C572D7E80154DD1A39D6A68D447FA164689FC12);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_40 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_40, L_33, L_34, L_37, L_39, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_40);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_40);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_41 = L_31;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		il2cpp_codegen_runtime_class_init_inline(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F* L_44;
		L_44 = NotifyDescription_get_Parser_m1A35C020064486614FAE01D1EFC85532F3BEABAB_inline(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteralF4AF7A913F31F5B9DF39DAD2E5E539A63FC2AD2A);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF4AF7A913F31F5B9DF39DAD2E5E539A63FC2AD2A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral9834B0E1156678E178780AFC5E20BAD59E8EE1C5);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9834B0E1156678E178780AFC5E20BAD59E8EE1C5);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_48 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_48, L_43, L_44, L_47, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_48);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_48);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_49 = L_41;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_0_0_0_var) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		il2cpp_codegen_runtime_class_init_inline(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E* L_52;
		L_52 = NotifyIce_get_Parser_m556B31799E65ADB0659E6F3B5A78C1CA6C6BAB2F_inline(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteralBDCDDEA60C5E255F5631B753F3A5B926A1F61178);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBDCDDEA60C5E255F5631B753F3A5B926A1F61178);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_55 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_55, L_51, L_52, L_54, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_55);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_55);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_56 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		GeneratedClrTypeInfo__ctor_m6C6F4A657670674B74F3AF88AA06251E4C8DD022(L_56, L_17, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_57;
		L_57 = FileDescriptor_FromGeneratedCode_mE8458CBFAFB2D3121B5EFC55182A02EAC93E0823(L_14, L_15, L_56, NULL);
		((ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_StaticFields*)il2cpp_codegen_static_fields_for(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var))->___descriptor_0 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&((ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_StaticFields*)il2cpp_codegen_static_fields_for(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var))->___descriptor_0), (void*)L_57);
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
// Google.Protobuf.MessageParser`1<CAr.HealthCheckRequest> CAr.HealthCheckRequest::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* HealthCheckRequest_get_Parser_mF64B315384900033E8622653381D7E692EA0B1CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<HealthCheckRequest> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* L_0 = ((HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_StaticFields*)il2cpp_codegen_static_fields_for(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.HealthCheckRequest::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* HealthCheckRequest_get_Descriptor_m74F729B9510BDE751A085AB1B5E58CE3FED5449A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::CAr.ControlReflection.Descriptor.MessageTypes[0]; }
		il2cpp_codegen_runtime_class_init_inline(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = ControlReflection_get_Descriptor_mF06AA872BCEBD18766A2E54C8DE8F3D8A4329F68_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.HealthCheckRequest::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* HealthCheckRequest_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mCD0CAC1A2EBBD686B3F397EC6DC5DD10E0E52FB3 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = HealthCheckRequest_get_Descriptor_m74F729B9510BDE751A085AB1B5E58CE3FED5449A(NULL);
		return L_0;
	}
}
// System.Void CAr.HealthCheckRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest__ctor_mDCB793D6A261AE4EEDE9F4C10C846D42F94014F8 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, const RuntimeMethod* method) 
{
	{
		// public HealthCheckRequest() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void CAr.HealthCheckRequest::.ctor(CAr.HealthCheckRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest__ctor_mD920DFDCEEB380FBE79DC8A8B1944895BFFE3388 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___other0, const RuntimeMethod* method) 
{
	{
		// public HealthCheckRequest(HealthCheckRequest other) : this() {
		HealthCheckRequest__ctor_mDCB793D6A261AE4EEDE9F4C10C846D42F94014F8(__this, NULL);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_0 = ___other0;
		NullCheck(L_0);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_1 = L_0->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2;
		L_2 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_1, NULL);
		__this->____unknownFields_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_2);
		// }
		return;
	}
}
// CAr.HealthCheckRequest CAr.HealthCheckRequest::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* HealthCheckRequest_Clone_m59A3EE10B68ED336E83E3A51EBD03C280655399E (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new HealthCheckRequest(this);
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_0 = (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7*)il2cpp_codegen_object_new(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HealthCheckRequest__ctor_mD920DFDCEEB380FBE79DC8A8B1944895BFFE3388(L_0, __this, NULL);
		return L_0;
	}
}
// System.Boolean CAr.HealthCheckRequest::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HealthCheckRequest_Equals_m4D4E01F5BDA3F447BDBDE0B26505C5CA6006C73A (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as HealthCheckRequest);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = HealthCheckRequest_Equals_m407DAF23714EC1E6F6098701D4D1ED5E6FEF2815(__this, ((HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7*)IsInstSealed((RuntimeObject*)L_0, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean CAr.HealthCheckRequest::Equals(CAr.HealthCheckRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HealthCheckRequest_Equals_m407DAF23714EC1E6F6098701D4D1ED5E6FEF2815 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(other, null)) {
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_1 = ___other0;
		if ((!(((RuntimeObject*)(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7*)L_1) == ((RuntimeObject*)(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7*)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2 = __this->____unknownFields_1;
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_3 = ___other0;
		NullCheck(L_3);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4 = L_3->____unknownFields_1;
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_2, L_4, NULL);
		return L_5;
	}
}
// System.Int32 CAr.HealthCheckRequest::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HealthCheckRequest_GetHashCode_m920CE6C24997255EB4FE890F329206A1DF47D969 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_0 = __this->____unknownFields_1;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_1 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2 = __this->____unknownFields_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		V_0 = ((int32_t)(L_1^L_3));
	}

IL_0018:
	{
		// return hash;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String CAr.HealthCheckRequest::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HealthCheckRequest_ToString_m018FBD218957F76BFA8BE946003C582CB65B129A (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void CAr.HealthCheckRequest::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest_WriteTo_m5DFDC507191D636FFD08C1AB133DF1067D33B123 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.HealthCheckRequest::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_mD3F7631499EB9A5D43E61C1498260BD47E6A27CB (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_0 = __this->____unknownFields_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_1 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		NullCheck(L_1);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Int32 CAr.HealthCheckRequest::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HealthCheckRequest_CalculateSize_mAFC437187A17EC51E7058AD7F0504139287F885E (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_0 = __this->____unknownFields_1;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_1 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2 = __this->____unknownFields_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
	}

IL_0018:
	{
		// return size;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void CAr.HealthCheckRequest::MergeFrom(CAr.HealthCheckRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest_MergeFrom_m170F9986CFD65EBDC6DE5402FEEC963E12C318FE (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other == null) {
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_1 = __this->____unknownFields_1;
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_2 = ___other0;
		NullCheck(L_2);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_3 = L_2->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4;
		L_4 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_1, L_3, NULL);
		__this->____unknownFields_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_4);
		// }
		return;
	}
}
// System.Void CAr.HealthCheckRequest::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest_MergeFrom_m45B6662B772599E11100F67E4F7B1F3328BD9206 (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.HealthCheckRequest::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_m467F7133C55CB4E12D9C099C49D95A30BB991D8F (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	{
		goto IL_0014;
	}

IL_0002:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_0 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_1 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2;
		L_2 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_0, L_1, NULL);
		__this->____unknownFields_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_2);
	}

IL_0014:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_3 = ___input0;
		uint32_t L_4;
		L_4 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CAr.HealthCheckRequest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckRequest__cctor_mAA778698EAFF0A8C20F83FCEAEFA82283E726856 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_mFD28D9810816C383C349EB9DCECCAD71083F1254_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__22_0_mD9ACB648FFFD72FB93B29DCEBC2D317C73FBCBC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<HealthCheckRequest> _parser = new pb::MessageParser<HealthCheckRequest>(() => new HealthCheckRequest());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_il2cpp_TypeInfo_var);
		U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE* L_0 = ((U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9* L_1 = (Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9*)il2cpp_codegen_object_new(Func_1_t2925EF9E3C6EDE430BF7D3C62286B567F8FA8AD9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mB55E2EC1F36F646213CED154463F9F598B76A6A4(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__22_0_mD9ACB648FFFD72FB93B29DCEBC2D317C73FBCBC6_RuntimeMethod_var), NULL);
		MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* L_2 = (MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680*)il2cpp_codegen_object_new(MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_mFD28D9810816C383C349EB9DCECCAD71083F1254(L_2, L_1, MessageParser_1__ctor_mFD28D9810816C383C349EB9DCECCAD71083F1254_RuntimeMethod_var);
		((HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_StaticFields*)il2cpp_codegen_static_fields_for(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_StaticFields*)il2cpp_codegen_static_fields_for(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
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
// System.Void CAr.HealthCheckRequest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB723CAD2CADCD441A0A47E22B5C87D8B4C850979 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE* L_0 = (U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE*)il2cpp_codegen_object_new(U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFA67008A28EAA742025E8AEF8AE1CE52580B261E(L_0, NULL);
		((U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CAr.HealthCheckRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA67008A28EAA742025E8AEF8AE1CE52580B261E (U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CAr.HealthCheckRequest CAr.HealthCheckRequest/<>c::<.cctor>b__22_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* U3CU3Ec_U3C_cctorU3Eb__22_0_mD9ACB648FFFD72FB93B29DCEBC2D317C73FBCBC6 (U3CU3Ec_t3AD820AA50ACB209E2152E909DB97C01C7527FEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<HealthCheckRequest> _parser = new pb::MessageParser<HealthCheckRequest>(() => new HealthCheckRequest());
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_0 = (HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7*)il2cpp_codegen_object_new(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HealthCheckRequest__ctor_mDCB793D6A261AE4EEDE9F4C10C846D42F94014F8(L_0, NULL);
		return L_0;
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
// Google.Protobuf.MessageParser`1<CAr.HealthCheckReply> CAr.HealthCheckReply::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* HealthCheckReply_get_Parser_m3E6E9533528075258109C3B3C3129BC8F0288BC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<HealthCheckReply> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* L_0 = ((HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_StaticFields*)il2cpp_codegen_static_fields_for(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.HealthCheckReply::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* HealthCheckReply_get_Descriptor_m6A10BA9B0F42A54DB950AAC22685E4152EEF9FAF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::CAr.ControlReflection.Descriptor.MessageTypes[1]; }
		il2cpp_codegen_runtime_class_init_inline(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = ControlReflection_get_Descriptor_mF06AA872BCEBD18766A2E54C8DE8F3D8A4329F68_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 1);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.HealthCheckReply::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* HealthCheckReply_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m9B96F3A5C42117081111D8E491916BF0EDE9FF51 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = HealthCheckReply_get_Descriptor_m6A10BA9B0F42A54DB950AAC22685E4152EEF9FAF(NULL);
		return L_0;
	}
}
// System.Void CAr.HealthCheckReply::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply__ctor_m0B3200528D43E4244FB6D41544918F88AEE157A3 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, const RuntimeMethod* method) 
{
	{
		// public HealthCheckReply() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void CAr.HealthCheckReply::.ctor(CAr.HealthCheckReply)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply__ctor_m9AA49AB5D749F7558F6FCD11F03156B247832012 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* ___other0, const RuntimeMethod* method) 
{
	{
		// public HealthCheckReply(HealthCheckReply other) : this() {
		HealthCheckReply__ctor_m0B3200528D43E4244FB6D41544918F88AEE157A3(__this, NULL);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_0 = ___other0;
		NullCheck(L_0);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_1 = L_0->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2;
		L_2 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_1, NULL);
		__this->____unknownFields_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_2);
		// }
		return;
	}
}
// CAr.HealthCheckReply CAr.HealthCheckReply::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* HealthCheckReply_Clone_m266B56A77E13624D88901F11D4D0D39F8664F359 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new HealthCheckReply(this);
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_0 = (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09*)il2cpp_codegen_object_new(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HealthCheckReply__ctor_m9AA49AB5D749F7558F6FCD11F03156B247832012(L_0, __this, NULL);
		return L_0;
	}
}
// System.Boolean CAr.HealthCheckReply::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HealthCheckReply_Equals_m90B901C34853E52009C756A484D6D6B15D5B6F8F (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as HealthCheckReply);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = HealthCheckReply_Equals_m6D6F34E2CC6C22BF917C9FE549F85F09D0CDEB14(__this, ((HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09*)IsInstSealed((RuntimeObject*)L_0, HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean CAr.HealthCheckReply::Equals(CAr.HealthCheckReply)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HealthCheckReply_Equals_m6D6F34E2CC6C22BF917C9FE549F85F09D0CDEB14 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(other, null)) {
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_1 = ___other0;
		if ((!(((RuntimeObject*)(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09*)L_1) == ((RuntimeObject*)(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09*)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2 = __this->____unknownFields_1;
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_3 = ___other0;
		NullCheck(L_3);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4 = L_3->____unknownFields_1;
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_2, L_4, NULL);
		return L_5;
	}
}
// System.Int32 CAr.HealthCheckReply::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HealthCheckReply_GetHashCode_mC55AA23B55A5DA8D1E1D2A9EA5FFF908198EA0BC (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_0 = __this->____unknownFields_1;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_1 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2 = __this->____unknownFields_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		V_0 = ((int32_t)(L_1^L_3));
	}

IL_0018:
	{
		// return hash;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String CAr.HealthCheckReply::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HealthCheckReply_ToString_mAEC247C698C07A5233B29375093BD456CCBBB488 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void CAr.HealthCheckReply::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply_WriteTo_mEC44D2335377853B5B7AAB72E366016BF23D97D2 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.HealthCheckReply::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_m43194BE3D78CBC621A935EB8886FD4632CA253B2 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_0 = __this->____unknownFields_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_1 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		NullCheck(L_1);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Int32 CAr.HealthCheckReply::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HealthCheckReply_CalculateSize_m1743AC540FBB459F6195F2BEC53D011BF63275A5 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_0 = __this->____unknownFields_1;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_1 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2 = __this->____unknownFields_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
	}

IL_0018:
	{
		// return size;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void CAr.HealthCheckReply::MergeFrom(CAr.HealthCheckReply)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply_MergeFrom_m79E702F20E9FBCF02EBA2AB6EA41BAD7E7757247 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other == null) {
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_1 = __this->____unknownFields_1;
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_2 = ___other0;
		NullCheck(L_2);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_3 = L_2->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4;
		L_4 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_1, L_3, NULL);
		__this->____unknownFields_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_4);
		// }
		return;
	}
}
// System.Void CAr.HealthCheckReply::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply_MergeFrom_m0256C5C33E98D0F21B1AEDCDC9B1776BC6B19066 (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.HealthCheckReply::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_m28F13C13CA36DA756C66B504B88B5E7E17B6B32D (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	{
		goto IL_0014;
	}

IL_0002:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_0 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_1 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2;
		L_2 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_0, L_1, NULL);
		__this->____unknownFields_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_2);
	}

IL_0014:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_3 = ___input0;
		uint32_t L_4;
		L_4 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CAr.HealthCheckReply::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCheckReply__cctor_m08BBE1C2FEB41CA91D0E8663AADD6F9252E00998 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_mFF36608820300235AEF72EF32A67171425CAB9DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__22_0_mCCE65CBF07930E0A62BF758C62694497FCA1734D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<HealthCheckReply> _parser = new pb::MessageParser<HealthCheckReply>(() => new HealthCheckReply());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_il2cpp_TypeInfo_var);
		U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400* L_0 = ((U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B* L_1 = (Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B*)il2cpp_codegen_object_new(Func_1_t9D9327D213DC1B7D4F95DC1798445CB0E0360B5B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mAF3D38A26F1C06C06A472693AD6005F97947E3DC(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__22_0_mCCE65CBF07930E0A62BF758C62694497FCA1734D_RuntimeMethod_var), NULL);
		MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* L_2 = (MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F*)il2cpp_codegen_object_new(MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_mFF36608820300235AEF72EF32A67171425CAB9DF(L_2, L_1, MessageParser_1__ctor_mFF36608820300235AEF72EF32A67171425CAB9DF_RuntimeMethod_var);
		((HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_StaticFields*)il2cpp_codegen_static_fields_for(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_StaticFields*)il2cpp_codegen_static_fields_for(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
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
// System.Void CAr.HealthCheckReply/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m733075ECAA0C14C465B711A7E9887EDD9EF9E534 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400* L_0 = (U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400*)il2cpp_codegen_object_new(U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m404FDE9F6B7B3DD503A3DD28ABB811BBE6150106(L_0, NULL);
		((U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CAr.HealthCheckReply/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m404FDE9F6B7B3DD503A3DD28ABB811BBE6150106 (U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CAr.HealthCheckReply CAr.HealthCheckReply/<>c::<.cctor>b__22_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* U3CU3Ec_U3C_cctorU3Eb__22_0_mCCE65CBF07930E0A62BF758C62694497FCA1734D (U3CU3Ec_t290D8D144DA0C35CC8744E1BB1B2306600692400* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<HealthCheckReply> _parser = new pb::MessageParser<HealthCheckReply>(() => new HealthCheckReply());
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_0 = (HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09*)il2cpp_codegen_object_new(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HealthCheckReply__ctor_m0B3200528D43E4244FB6D41544918F88AEE157A3(L_0, NULL);
		return L_0;
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
// Google.Protobuf.MessageParser`1<CAr.HandshakeMessage> CAr.HandshakeMessage::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* HandshakeMessage_get_Parser_mEE267FFE1DE214403E34C5D2E086E46EE036AAD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<HandshakeMessage> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* L_0 = ((HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_StaticFields*)il2cpp_codegen_static_fields_for(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.HandshakeMessage::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* HandshakeMessage_get_Descriptor_m75FA95DF010ECBF58AB7EDA37FCD659ABC552A1A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::CAr.ControlReflection.Descriptor.MessageTypes[2]; }
		il2cpp_codegen_runtime_class_init_inline(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = ControlReflection_get_Descriptor_mF06AA872BCEBD18766A2E54C8DE8F3D8A4329F68_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 2);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.HandshakeMessage::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* HandshakeMessage_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m43F8F422E2B172802F57191213D6CC9A8F9AC79E (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = HandshakeMessage_get_Descriptor_m75FA95DF010ECBF58AB7EDA37FCD659ABC552A1A(NULL);
		return L_0;
	}
}
// System.Void CAr.HandshakeMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage__ctor_mB0FB785585B7C133A399B85FE75CE1048F13E34B (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	{
		// public HandshakeMessage() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void CAr.HandshakeMessage::.ctor(CAr.HandshakeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage__ctor_mECF3B59B3255E7077AD38BC39FE79AF6BACE3257 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* ___other0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public HandshakeMessage(HandshakeMessage other) : this() {
		HandshakeMessage__ctor_mB0FB785585B7C133A399B85FE75CE1048F13E34B(__this, NULL);
		// switch (other.MsgCase) {
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HandshakeMessage_get_MsgCase_m64012CBBD5C57AFAF48B065845AD0F6F79CEB5CD_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_003b;
	}

IL_0017:
	{
		// Description = other.Description.Clone();
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_4 = ___other0;
		NullCheck(L_4);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_5;
		L_5 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(L_4, NULL);
		NullCheck(L_5);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_6;
		L_6 = NotifyDescription_Clone_m261E05EAEA88B7F68472061219470E34E3DBA0C0(L_5, NULL);
		HandshakeMessage_set_Description_mA9CCBAF268EED61AB0F058832789D0B90C0BFEE9(__this, L_6, NULL);
		// break;
		goto IL_003b;
	}

IL_002a:
	{
		// Ice = other.Ice.Clone();
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_7 = ___other0;
		NullCheck(L_7);
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_8;
		L_8 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(L_7, NULL);
		NullCheck(L_8);
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_9;
		L_9 = NotifyIce_Clone_m10C918C1763285CBE09F6A367EF59B4B3AAC2227(L_8, NULL);
		HandshakeMessage_set_Ice_mDF97AF403E92FFBC09ABDEA19C142EBBF290EBDD(__this, L_9, NULL);
	}

IL_003b:
	{
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_10 = ___other0;
		NullCheck(L_10);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_11 = L_10->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12;
		L_12 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_11, NULL);
		__this->____unknownFields_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_12);
		// }
		return;
	}
}
// CAr.HandshakeMessage CAr.HandshakeMessage::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* HandshakeMessage_Clone_mAA252A6103D383D8526E2620D3863E4F22EE409B (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new HandshakeMessage(this);
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_0 = (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803*)il2cpp_codegen_object_new(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandshakeMessage__ctor_mECF3B59B3255E7077AD38BC39FE79AF6BACE3257(L_0, __this, NULL);
		return L_0;
	}
}
// CAr.NotifyDescription CAr.HandshakeMessage::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return msgCase_ == MsgOneofCase.Description ? (global::CAr.NotifyDescription) msg_ : null; }
		int32_t L_0 = __this->___msgCase__5;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		return (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29*)NULL;
	}

IL_000b:
	{
		RuntimeObject* L_1 = __this->___msg__4;
		return ((NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29*)CastclassSealed((RuntimeObject*)L_1, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var));
	}
}
// System.Void CAr.HandshakeMessage::set_Description(CAr.NotifyDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_set_Description_mA9CCBAF268EED61AB0F058832789D0B90C0BFEE9 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* ___value0, const RuntimeMethod* method) 
{
	HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* G_B2_0 = NULL;
	HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* G_B3_1 = NULL;
	{
		// msg_ = value;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_0 = ___value0;
		__this->___msg__4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg__4), (void*)L_0);
		// msgCase_ = value == null ? MsgOneofCase.None : MsgOneofCase.Description;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_1 = ___value0;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___msgCase__5 = G_B3_0;
		// }
		return;
	}
}
// CAr.NotifyIce CAr.HandshakeMessage::get_Ice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return msgCase_ == MsgOneofCase.Ice ? (global::CAr.NotifyIce) msg_ : null; }
		int32_t L_0 = __this->___msgCase__5;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		return (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1*)NULL;
	}

IL_000b:
	{
		RuntimeObject* L_1 = __this->___msg__4;
		return ((NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1*)CastclassSealed((RuntimeObject*)L_1, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var));
	}
}
// System.Void CAr.HandshakeMessage::set_Ice(CAr.NotifyIce)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_set_Ice_mDF97AF403E92FFBC09ABDEA19C142EBBF290EBDD (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* ___value0, const RuntimeMethod* method) 
{
	HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* G_B2_0 = NULL;
	HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* G_B3_1 = NULL;
	{
		// msg_ = value;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_0 = ___value0;
		__this->___msg__4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg__4), (void*)L_0);
		// msgCase_ = value == null ? MsgOneofCase.None : MsgOneofCase.Ice;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_1 = ___value0;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___msgCase__5 = G_B3_0;
		// }
		return;
	}
}
// CAr.HandshakeMessage/MsgOneofCase CAr.HandshakeMessage::get_MsgCase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandshakeMessage_get_MsgCase_m64012CBBD5C57AFAF48B065845AD0F6F79CEB5CD (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	{
		// get { return msgCase_; }
		int32_t L_0 = __this->___msgCase__5;
		return L_0;
	}
}
// System.Void CAr.HandshakeMessage::ClearMsg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_ClearMsg_m3B4001EAA5D2489FE18CD8B7ED209E519853996E (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	{
		// msgCase_ = MsgOneofCase.None;
		__this->___msgCase__5 = 0;
		// msg_ = null;
		__this->___msg__4 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg__4), (void*)NULL);
		// }
		return;
	}
}
// System.Boolean CAr.HandshakeMessage::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandshakeMessage_Equals_m835F4A7769940BE1378D8846FA1D8E4E292F5A08 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as HandshakeMessage);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = HandshakeMessage_Equals_m45F6B85EC9D218DE79F2D0EE2138DD9DF27719EE(__this, ((HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803*)IsInstSealed((RuntimeObject*)L_0, HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean CAr.HandshakeMessage::Equals(CAr.HandshakeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandshakeMessage_Equals_m45F6B85EC9D218DE79F2D0EE2138DD9DF27719EE (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(other, null)) {
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_1 = ___other0;
		if ((!(((RuntimeObject*)(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803*)L_1) == ((RuntimeObject*)(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803*)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (!object.Equals(Description, other.Description)) return false;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_2;
		L_2 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(__this, NULL);
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_3 = ___other0;
		NullCheck(L_3);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_4;
		L_4 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(L_3, NULL);
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (!object.Equals(Description, other.Description)) return false;
		return (bool)0;
	}

IL_0020:
	{
		// if (!object.Equals(Ice, other.Ice)) return false;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_6;
		L_6 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(__this, NULL);
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_7 = ___other0;
		NullCheck(L_7);
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_8;
		L_8 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(L_7, NULL);
		bool L_9;
		L_9 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_0035;
		}
	}
	{
		// if (!object.Equals(Ice, other.Ice)) return false;
		return (bool)0;
	}

IL_0035:
	{
		// if (MsgCase != other.MsgCase) return false;
		int32_t L_10;
		L_10 = HandshakeMessage_get_MsgCase_m64012CBBD5C57AFAF48B065845AD0F6F79CEB5CD_inline(__this, NULL);
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_11 = ___other0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HandshakeMessage_get_MsgCase_m64012CBBD5C57AFAF48B065845AD0F6F79CEB5CD_inline(L_11, NULL);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_0045;
		}
	}
	{
		// if (MsgCase != other.MsgCase) return false;
		return (bool)0;
	}

IL_0045:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_14 = ___other0;
		NullCheck(L_14);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_15 = L_14->____unknownFields_1;
		bool L_16;
		L_16 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_13, L_15, NULL);
		return L_16;
	}
}
// System.Int32 CAr.HandshakeMessage::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandshakeMessage_GetHashCode_mE10B4670E152B1298E0DF006C00322C09F459228 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (msgCase_ == MsgOneofCase.Description) hash ^= Description.GetHashCode();
		int32_t L_0 = __this->___msgCase__5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (msgCase_ == MsgOneofCase.Description) hash ^= Description.GetHashCode();
		int32_t L_1 = V_0;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_2;
		L_2 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		V_0 = ((int32_t)(L_1^L_3));
	}

IL_0019:
	{
		// if (msgCase_ == MsgOneofCase.Ice) hash ^= Ice.GetHashCode();
		int32_t L_4 = __this->___msgCase__5;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0030;
		}
	}
	{
		// if (msgCase_ == MsgOneofCase.Ice) hash ^= Ice.GetHashCode();
		int32_t L_5 = V_0;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_6;
		L_6 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		V_0 = ((int32_t)(L_5^L_7));
	}

IL_0030:
	{
		// hash ^= (int) msgCase_;
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___msgCase__5;
		V_0 = ((int32_t)(L_8^(int32_t)L_9));
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_11 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12 = __this->____unknownFields_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_12);
		V_0 = ((int32_t)(L_11^L_13));
	}

IL_004f:
	{
		// return hash;
		int32_t L_14 = V_0;
		return L_14;
	}
}
// System.String CAr.HandshakeMessage::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HandshakeMessage_ToString_m832EDE6C1D59C92313FD25B7006E652B5068575D (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void CAr.HandshakeMessage::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_WriteTo_m046C7F835E8DF12C4499C4B61D74394E0F3E20D2 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.HandshakeMessage::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_m2CCA46A37F2117B69986240D3E07055D867253FE (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	{
		// if (msgCase_ == MsgOneofCase.Description) {
		int32_t L_0 = __this->___msgCase__5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// output.WriteRawTag(10);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_1 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_1, (uint8_t)((int32_t)10), NULL);
		// output.WriteMessage(Description);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_3;
		L_3 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(__this, NULL);
		WriteContext_WriteMessage_m2F77C0E66BE30E7D27F74713F4C2967F9CB67575(L_2, L_3, NULL);
	}

IL_001d:
	{
		// if (msgCase_ == MsgOneofCase.Ice) {
		int32_t L_4 = __this->___msgCase__5;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_003a;
		}
	}
	{
		// output.WriteRawTag(18);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_5 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_5, (uint8_t)((int32_t)18), NULL);
		// output.WriteMessage(Ice);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_6 = ___output0;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_7;
		L_7 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(__this, NULL);
		WriteContext_WriteMessage_m2F77C0E66BE30E7D27F74713F4C2967F9CB67575(L_6, L_7, NULL);
	}

IL_003a:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_8 = __this->____unknownFields_1;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_9 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_10 = ___output0;
		NullCheck(L_9);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_9, L_10, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Int32 CAr.HandshakeMessage::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandshakeMessage_CalculateSize_mDF4F44B0BE5331A7F424CCCAA0B247E661CB2C12 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (msgCase_ == MsgOneofCase.Description) {
		int32_t L_0 = __this->___msgCase__5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeMessageSize(Description);
		int32_t L_1 = V_0;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_2;
		L_2 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CodedOutputStream_ComputeMessageSize_m96CA0965A80BAE333592894886B82CF0F5B357C2(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(1, L_3))));
	}

IL_001b:
	{
		// if (msgCase_ == MsgOneofCase.Ice) {
		int32_t L_4 = __this->___msgCase__5;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeMessageSize(Ice);
		int32_t L_5 = V_0;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_6;
		L_6 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = CodedOutputStream_ComputeMessageSize_m96CA0965A80BAE333592894886B82CF0F5B357C2(L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_add(1, L_7))));
	}

IL_0034:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_8 = __this->____unknownFields_1;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_9 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_10, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, L_11));
	}

IL_004a:
	{
		// return size;
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Void CAr.HandshakeMessage::MergeFrom(CAr.HandshakeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_MergeFrom_m82B82A5C6BB0CF57B161AF4B38DADE6021A414C8 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other == null) {
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// switch (other.MsgCase) {
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_1 = ___other0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = HandshakeMessage_get_MsgCase_m64012CBBD5C57AFAF48B065845AD0F6F79CEB5CD_inline(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_005f;
	}

IL_0015:
	{
		// if (Description == null) {
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_5;
		L_5 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(__this, NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		// Description = new global::CAr.NotifyDescription();
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_6 = (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29*)il2cpp_codegen_object_new(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		NotifyDescription__ctor_m08D7633712E29BF3634BAE65D3CF70E4FF6C8511(L_6, NULL);
		HandshakeMessage_set_Description_mA9CCBAF268EED61AB0F058832789D0B90C0BFEE9(__this, L_6, NULL);
	}

IL_0028:
	{
		// Description.MergeFrom(other.Description);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_7;
		L_7 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(__this, NULL);
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_8 = ___other0;
		NullCheck(L_8);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_9;
		L_9 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(L_8, NULL);
		NullCheck(L_7);
		NotifyDescription_MergeFrom_m9B2F70BEDDDC48BB350B9C9FE8CEA5775968E333(L_7, L_9, NULL);
		// break;
		goto IL_005f;
	}

IL_003b:
	{
		// if (Ice == null) {
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_10;
		L_10 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(__this, NULL);
		if (L_10)
		{
			goto IL_004e;
		}
	}
	{
		// Ice = new global::CAr.NotifyIce();
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_11 = (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1*)il2cpp_codegen_object_new(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		NotifyIce__ctor_mBF33DCB706C13C70047524B65FC672C9E496AF08(L_11, NULL);
		HandshakeMessage_set_Ice_mDF97AF403E92FFBC09ABDEA19C142EBBF290EBDD(__this, L_11, NULL);
	}

IL_004e:
	{
		// Ice.MergeFrom(other.Ice);
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_12;
		L_12 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(__this, NULL);
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_13 = ___other0;
		NullCheck(L_13);
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_14;
		L_14 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(L_13, NULL);
		NullCheck(L_12);
		NotifyIce_MergeFrom_m3040F4FC5CC286103AE95EF84EED8449F2058EE5(L_12, L_14, NULL);
	}

IL_005f:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_15 = __this->____unknownFields_1;
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_16 = ___other0;
		NullCheck(L_16);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_17 = L_16->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_18;
		L_18 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_15, L_17, NULL);
		__this->____unknownFields_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_18);
		// }
		return;
	}
}
// System.Void CAr.HandshakeMessage::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_MergeFrom_m1E8CE93434487A9A6DCD9EE01088A586D603F866 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.HandshakeMessage::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_m0719B6AA368172707F8092851718A2147AE9F239 (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* V_1 = NULL;
	NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* V_2 = NULL;
	{
		goto IL_0074;
	}

IL_0002:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_0020;
		}
	}
	{
		uint32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)18))))
		{
			goto IL_004b;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_3 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4;
		L_4 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_2, L_3, NULL);
		__this->____unknownFields_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_4);
		// break;
		goto IL_0074;
	}

IL_0020:
	{
		// global::CAr.NotifyDescription subBuilder = new global::CAr.NotifyDescription();
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_5 = (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29*)il2cpp_codegen_object_new(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		NotifyDescription__ctor_m08D7633712E29BF3634BAE65D3CF70E4FF6C8511(L_5, NULL);
		V_1 = L_5;
		// if (msgCase_ == MsgOneofCase.Description) {
		int32_t L_6 = __this->___msgCase__5;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_003b;
		}
	}
	{
		// subBuilder.MergeFrom(Description);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_7 = V_1;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_8;
		L_8 = HandshakeMessage_get_Description_mB0F2B4AC403E3EF8A9934C1EC8CE1A6C1C4B6C6C(__this, NULL);
		NullCheck(L_7);
		NotifyDescription_MergeFrom_m9B2F70BEDDDC48BB350B9C9FE8CEA5775968E333(L_7, L_8, NULL);
	}

IL_003b:
	{
		// input.ReadMessage(subBuilder);
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_9 = ___input0;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_10 = V_1;
		ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline(L_9, L_10, NULL);
		// Description = subBuilder;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_11 = V_1;
		HandshakeMessage_set_Description_mA9CCBAF268EED61AB0F058832789D0B90C0BFEE9(__this, L_11, NULL);
		// break;
		goto IL_0074;
	}

IL_004b:
	{
		// global::CAr.NotifyIce subBuilder = new global::CAr.NotifyIce();
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_12 = (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1*)il2cpp_codegen_object_new(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		NotifyIce__ctor_mBF33DCB706C13C70047524B65FC672C9E496AF08(L_12, NULL);
		V_2 = L_12;
		// if (msgCase_ == MsgOneofCase.Ice) {
		int32_t L_13 = __this->___msgCase__5;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0066;
		}
	}
	{
		// subBuilder.MergeFrom(Ice);
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_14 = V_2;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_15;
		L_15 = HandshakeMessage_get_Ice_m1B3934A7D3750FAA8F3D4E093D30891A584D0086(__this, NULL);
		NullCheck(L_14);
		NotifyIce_MergeFrom_m3040F4FC5CC286103AE95EF84EED8449F2058EE5(L_14, L_15, NULL);
	}

IL_0066:
	{
		// input.ReadMessage(subBuilder);
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_16 = ___input0;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_17 = V_2;
		ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline(L_16, L_17, NULL);
		// Ice = subBuilder;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_18 = V_2;
		HandshakeMessage_set_Ice_mDF97AF403E92FFBC09ABDEA19C142EBBF290EBDD(__this, L_18, NULL);
	}

IL_0074:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_19 = ___input0;
		uint32_t L_20;
		L_20 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_19, NULL);
		uint32_t L_21 = L_20;
		V_0 = L_21;
		if (L_21)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CAr.HandshakeMessage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeMessage__cctor_mA7505331CC79E1EEDB3DBF763DDDE86489A09AF0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m5FA55DDADE84E0A40348BA8EC52777E9DCC41D69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__36_0_mDA4D648A4DC82E2CEC29D65C755F9A7FFEDDAA8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<HandshakeMessage> _parser = new pb::MessageParser<HandshakeMessage>(() => new HandshakeMessage());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_il2cpp_TypeInfo_var);
		U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A* L_0 = ((U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF* L_1 = (Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF*)il2cpp_codegen_object_new(Func_1_t0D6B43180F65AC739E769BF6509C40FE1D817EFF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m32C341B1D42FE24F26669F3567907D080CB9674C(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__36_0_mDA4D648A4DC82E2CEC29D65C755F9A7FFEDDAA8D_RuntimeMethod_var), NULL);
		MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* L_2 = (MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3*)il2cpp_codegen_object_new(MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_m5FA55DDADE84E0A40348BA8EC52777E9DCC41D69(L_2, L_1, MessageParser_1__ctor_m5FA55DDADE84E0A40348BA8EC52777E9DCC41D69_RuntimeMethod_var);
		((HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_StaticFields*)il2cpp_codegen_static_fields_for(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_StaticFields*)il2cpp_codegen_static_fields_for(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
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
// System.Void CAr.HandshakeMessage/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD4473DE2F454ABB6D654BA838538A1D3328BB9FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A* L_0 = (U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A*)il2cpp_codegen_object_new(U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m668C7AE6EF6B024887A65FAA8CE8A96F600A150D(L_0, NULL);
		((U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CAr.HandshakeMessage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m668C7AE6EF6B024887A65FAA8CE8A96F600A150D (U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CAr.HandshakeMessage CAr.HandshakeMessage/<>c::<.cctor>b__36_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* U3CU3Ec_U3C_cctorU3Eb__36_0_mDA4D648A4DC82E2CEC29D65C755F9A7FFEDDAA8D (U3CU3Ec_t4560EE8BED2758960E8A302AC997FDBFD46C866A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<HandshakeMessage> _parser = new pb::MessageParser<HandshakeMessage>(() => new HandshakeMessage());
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_0 = (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803*)il2cpp_codegen_object_new(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandshakeMessage__ctor_mB0FB785585B7C133A399B85FE75CE1048F13E34B(L_0, NULL);
		return L_0;
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
// Google.Protobuf.MessageParser`1<CAr.NotifyDescription> CAr.NotifyDescription::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F* NotifyDescription_get_Parser_m1A35C020064486614FAE01D1EFC85532F3BEABAB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<NotifyDescription> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F* L_0 = ((NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_StaticFields*)il2cpp_codegen_static_fields_for(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.NotifyDescription::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* NotifyDescription_get_Descriptor_m1112AEB00119C88AB61C968848E76355F16CEA56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::CAr.ControlReflection.Descriptor.MessageTypes[3]; }
		il2cpp_codegen_runtime_class_init_inline(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = ControlReflection_get_Descriptor_mF06AA872BCEBD18766A2E54C8DE8F3D8A4329F68_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 3);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.NotifyDescription::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* NotifyDescription_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m2E83A234073585D9DEA5A0018E1C01ECCB9DBFD6 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = NotifyDescription_get_Descriptor_m1112AEB00119C88AB61C968848E76355F16CEA56(NULL);
		return L_0;
	}
}
// System.Void CAr.NotifyDescription::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription__ctor_m08D7633712E29BF3634BAE65D3CF70E4FF6C8511 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string sdp_ = "";
		__this->___sdp__5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sdp__5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public NotifyDescription() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void CAr.NotifyDescription::.ctor(CAr.NotifyDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription__ctor_m656A7C54927E2E2E13C5D6A2BC752D8726293E9C (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* ___other0, const RuntimeMethod* method) 
{
	{
		// public NotifyDescription(NotifyDescription other) : this() {
		NotifyDescription__ctor_m08D7633712E29BF3634BAE65D3CF70E4FF6C8511(__this, NULL);
		// sdpType_ = other.sdpType_;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sdpType__3;
		__this->___sdpType__3 = L_1;
		// sdp_ = other.sdp_;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___sdp__5;
		__this->___sdp__5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sdp__5), (void*)L_3);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_4 = ___other0;
		NullCheck(L_4);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_5 = L_4->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_6;
		L_6 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_5, NULL);
		__this->____unknownFields_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_6);
		// }
		return;
	}
}
// CAr.NotifyDescription CAr.NotifyDescription::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* NotifyDescription_Clone_m261E05EAEA88B7F68472061219470E34E3DBA0C0 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NotifyDescription(this);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_0 = (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29*)il2cpp_codegen_object_new(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NotifyDescription__ctor_m656A7C54927E2E2E13C5D6A2BC752D8726293E9C(L_0, __this, NULL);
		return L_0;
	}
}
// CAr.SdpType CAr.NotifyDescription::get_SdpType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	{
		// get { return sdpType_; }
		int32_t L_0 = __this->___sdpType__3;
		return L_0;
	}
}
// System.Void CAr.NotifyDescription::set_SdpType(CAr.SdpType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription_set_SdpType_m26343856BAE1905739A94A521B1D0CFCA0112D78 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// sdpType_ = value;
		int32_t L_0 = ___value0;
		__this->___sdpType__3 = L_0;
		// }
		return;
	}
}
// System.String CAr.NotifyDescription::get_Sdp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	{
		// get { return sdp_; }
		String_t* L_0 = __this->___sdp__5;
		return L_0;
	}
}
// System.Void CAr.NotifyDescription::set_Sdp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription_set_Sdp_m83C13D6AED0A6F8384BDE31CE10A0A91C901AF9D (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sdp_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
		String_t* L_0 = ___value0;
		String_t* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414_RuntimeMethod_var);
		__this->___sdp__5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sdp__5), (void*)L_1);
		// }
		return;
	}
}
// System.Boolean CAr.NotifyDescription::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotifyDescription_Equals_m29F15AE08E155B5177B6346AB9E23EEECEC402F7 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as NotifyDescription);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = NotifyDescription_Equals_m451C84E81B0D9A0904C684A96C7DF048464768D8(__this, ((NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29*)IsInstSealed((RuntimeObject*)L_0, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean CAr.NotifyDescription::Equals(CAr.NotifyDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotifyDescription_Equals_m451C84E81B0D9A0904C684A96C7DF048464768D8 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(other, null)) {
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_1 = ___other0;
		if ((!(((RuntimeObject*)(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29*)L_1) == ((RuntimeObject*)(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29*)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (SdpType != other.SdpType) return false;
		int32_t L_2;
		L_2 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(__this, NULL);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(L_3, NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		// if (SdpType != other.SdpType) return false;
		return (bool)0;
	}

IL_001b:
	{
		// if (Sdp != other.Sdp) return false;
		String_t* L_5;
		L_5 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(__this, NULL);
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(L_6, NULL);
		bool L_8;
		L_8 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		// if (Sdp != other.Sdp) return false;
		return (bool)0;
	}

IL_0030:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_9 = __this->____unknownFields_1;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_10 = ___other0;
		NullCheck(L_10);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_11 = L_10->____unknownFields_1;
		bool L_12;
		L_12 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_9, L_11, NULL);
		return L_12;
	}
}
// System.Int32 CAr.NotifyDescription::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotifyDescription_GetHashCode_m754D7C821350393608A3C64E027CB23037CFF562 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (SdpType != global::CAr.SdpType.Offer) hash ^= SdpType.GetHashCode();
		int32_t L_0;
		L_0 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (SdpType != global::CAr.SdpType.Offer) hash ^= SdpType.GetHashCode();
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&V_1), NULL);
		V_0 = ((int32_t)(L_1^L_3));
	}

IL_0021:
	{
		// if (Sdp.Length != 0) hash ^= Sdp.GetHashCode();
		String_t* L_4;
		L_4 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// if (Sdp.Length != 0) hash ^= Sdp.GetHashCode();
		int32_t L_6 = V_0;
		String_t* L_7;
		L_7 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_7);
		V_0 = ((int32_t)(L_6^L_8));
	}

IL_003c:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_9 = __this->____unknownFields_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_10 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_11 = __this->____unknownFields_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_11);
		V_0 = ((int32_t)(L_10^L_12));
	}

IL_0052:
	{
		// return hash;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.String CAr.NotifyDescription::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotifyDescription_ToString_m9424F66BDEE014EA3949D7E285DBA0F33D218EA2 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void CAr.NotifyDescription::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription_WriteTo_m00DDDF5DD258683FFF4D96F93A84830FF2351459 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.NotifyDescription::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_mE3594EEBB4C231CE3C41E571696AF37AFA23672E (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	{
		// if (SdpType != global::CAr.SdpType.Offer) {
		int32_t L_0;
		L_0 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// output.WriteRawTag(8);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_1 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_1, (uint8_t)8, NULL);
		// output.WriteEnum((int) SdpType);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		int32_t L_3;
		L_3 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(__this, NULL);
		WriteContext_WriteEnum_m9D943000AEB1B4AF9DA9BF3E506F1CD1A79C623F(L_2, L_3, NULL);
	}

IL_001b:
	{
		// if (Sdp.Length != 0) {
		String_t* L_4;
		L_4 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// output.WriteRawTag(18);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_6 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_6, (uint8_t)((int32_t)18), NULL);
		// output.WriteString(Sdp);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_7 = ___output0;
		String_t* L_8;
		L_8 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(__this, NULL);
		WriteContext_WriteString_m5B3A03676A3834F59391E025BDF7A6E173A6D864(L_7, L_8, NULL);
	}

IL_003c:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_9 = __this->____unknownFields_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_11 = ___output0;
		NullCheck(L_10);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_10, L_11, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Int32 CAr.NotifyDescription::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotifyDescription_CalculateSize_m85973F19C2BBC97CFD3865A74D77C0BE95B867D6 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (SdpType != global::CAr.SdpType.Offer) {
		int32_t L_0;
		L_0 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) SdpType);
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CodedOutputStream_ComputeEnumSize_mA1836D9E8169C256E0EF161A0A7CA86FE3CE0402(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(1, L_3))));
	}

IL_001a:
	{
		// if (Sdp.Length != 0) {
		String_t* L_4;
		L_4 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeStringSize(Sdp);
		int32_t L_6 = V_0;
		String_t* L_7;
		L_7 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = CodedOutputStream_ComputeStringSize_m92DC0377FB211F101BD116CA72093D148E0C1A8C(L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_add(1, L_8))));
	}

IL_0037:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_9 = __this->____unknownFields_1;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_10 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_11 = __this->____unknownFields_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, L_12));
	}

IL_004d:
	{
		// return size;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Void CAr.NotifyDescription::MergeFrom(CAr.NotifyDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription_MergeFrom_m9B2F70BEDDDC48BB350B9C9FE8CEA5775968E333 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other == null) {
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (other.SdpType != global::CAr.SdpType.Offer) {
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_1 = ___other0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// SdpType = other.SdpType;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline(L_3, NULL);
		NotifyDescription_set_SdpType_m26343856BAE1905739A94A521B1D0CFCA0112D78_inline(__this, L_4, NULL);
	}

IL_0018:
	{
		// if (other.Sdp.Length != 0) {
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// Sdp = other.Sdp;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_8 = ___other0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline(L_8, NULL);
		NotifyDescription_set_Sdp_m83C13D6AED0A6F8384BDE31CE10A0A91C901AF9D(__this, L_9, NULL);
	}

IL_0031:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_11 = ___other0;
		NullCheck(L_11);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12 = L_11->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13;
		L_13 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_10, L_12, NULL);
		__this->____unknownFields_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_13);
		// }
		return;
	}
}
// System.Void CAr.NotifyDescription::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription_MergeFrom_m83FF28FC27F2B3A02C91BAEC1B4FE48C0C7C1BB9 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.NotifyDescription::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_mF1FBAF7CF3E3653DCB61228C7F0F9FF9B28C2DD8 (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_0039;
	}

IL_0002:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)18))))
		{
			goto IL_002d;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_2 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_3 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4;
		L_4 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_2, L_3, NULL);
		__this->____unknownFields_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_4);
		// break;
		goto IL_0039;
	}

IL_001f:
	{
		// SdpType = (global::CAr.SdpType) input.ReadEnum();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_5 = ___input0;
		int32_t L_6;
		L_6 = ParseContext_ReadEnum_mF3B58B12A29DD615F9EC6FD424CF4FFAED1A6E51_inline(L_5, NULL);
		NotifyDescription_set_SdpType_m26343856BAE1905739A94A521B1D0CFCA0112D78_inline(__this, L_6, NULL);
		// break;
		goto IL_0039;
	}

IL_002d:
	{
		// Sdp = input.ReadString();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_7 = ___input0;
		String_t* L_8;
		L_8 = ParseContext_ReadString_mB36C526257EBC5893769F25359B11B65E2E54D3D_inline(L_7, NULL);
		NotifyDescription_set_Sdp_m83C13D6AED0A6F8384BDE31CE10A0A91C901AF9D(__this, L_8, NULL);
	}

IL_0039:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_9 = ___input0;
		uint32_t L_10;
		L_10 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_9, NULL);
		uint32_t L_11 = L_10;
		V_0 = L_11;
		if (L_11)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CAr.NotifyDescription::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDescription__cctor_m7DC53D5374ECC84A71FB9EA04A695F9D7870DAF2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_mD51316658FC972F420349A452DC816B08148EC11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__32_0_mE58940F67147D9828A753342B77E650A60B5CB4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<NotifyDescription> _parser = new pb::MessageParser<NotifyDescription>(() => new NotifyDescription());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_il2cpp_TypeInfo_var);
		U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C* L_0 = ((U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0* L_1 = (Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0*)il2cpp_codegen_object_new(Func_1_t0DF70E921D7BEF1325219ED688AE2ECEB6E7B7A0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m870B16D6172F29FD1407AB42E01D2D71020FB944(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__32_0_mE58940F67147D9828A753342B77E650A60B5CB4C_RuntimeMethod_var), NULL);
		MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F* L_2 = (MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F*)il2cpp_codegen_object_new(MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_mD51316658FC972F420349A452DC816B08148EC11(L_2, L_1, MessageParser_1__ctor_mD51316658FC972F420349A452DC816B08148EC11_RuntimeMethod_var);
		((NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_StaticFields*)il2cpp_codegen_static_fields_for(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_StaticFields*)il2cpp_codegen_static_fields_for(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
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
// System.Void CAr.NotifyDescription/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDE22241F0662E919539CFC901544B40379855864 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C* L_0 = (U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C*)il2cpp_codegen_object_new(U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA05534BAC064C27DA6157C2BE42966709C9C28A4(L_0, NULL);
		((U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CAr.NotifyDescription/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA05534BAC064C27DA6157C2BE42966709C9C28A4 (U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CAr.NotifyDescription CAr.NotifyDescription/<>c::<.cctor>b__32_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* U3CU3Ec_U3C_cctorU3Eb__32_0_mE58940F67147D9828A753342B77E650A60B5CB4C (U3CU3Ec_tF0D3FD1378AFB6057028D62D3CFCF1871E03D84C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<NotifyDescription> _parser = new pb::MessageParser<NotifyDescription>(() => new NotifyDescription());
		NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* L_0 = (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29*)il2cpp_codegen_object_new(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NotifyDescription__ctor_m08D7633712E29BF3634BAE65D3CF70E4FF6C8511(L_0, NULL);
		return L_0;
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
// Google.Protobuf.MessageParser`1<CAr.NotifyIce> CAr.NotifyIce::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E* NotifyIce_get_Parser_m556B31799E65ADB0659E6F3B5A78C1CA6C6BAB2F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<NotifyIce> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E* L_0 = ((NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_StaticFields*)il2cpp_codegen_static_fields_for(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.NotifyIce::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* NotifyIce_get_Descriptor_m4BD272C65738DF250EED00ECDF61CF1C95B60EA6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::CAr.ControlReflection.Descriptor.MessageTypes[4]; }
		il2cpp_codegen_runtime_class_init_inline(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = ControlReflection_get_Descriptor_mF06AA872BCEBD18766A2E54C8DE8F3D8A4329F68_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 4);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor CAr.NotifyIce::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* NotifyIce_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m110B9ED9EE454E2EA9E60127AB8C6EE738A163B5 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = NotifyIce_get_Descriptor_m4BD272C65738DF250EED00ECDF61CF1C95B60EA6(NULL);
		return L_0;
	}
}
// System.Void CAr.NotifyIce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce__ctor_mBF33DCB706C13C70047524B65FC672C9E496AF08 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string jsonBase64_ = "";
		__this->___jsonBase64__3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonBase64__3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public NotifyIce() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void CAr.NotifyIce::.ctor(CAr.NotifyIce)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce__ctor_mC4BC365BCEF2A1F0C63BDCA9686A7B9FFEA0CD80 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* ___other0, const RuntimeMethod* method) 
{
	{
		// public NotifyIce(NotifyIce other) : this() {
		NotifyIce__ctor_mBF33DCB706C13C70047524B65FC672C9E496AF08(__this, NULL);
		// jsonBase64_ = other.jsonBase64_;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___jsonBase64__3;
		__this->___jsonBase64__3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonBase64__3), (void*)L_1);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_2 = ___other0;
		NullCheck(L_2);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_3 = L_2->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4;
		L_4 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_3, NULL);
		__this->____unknownFields_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_4);
		// }
		return;
	}
}
// CAr.NotifyIce CAr.NotifyIce::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* NotifyIce_Clone_m10C918C1763285CBE09F6A367EF59B4B3AAC2227 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NotifyIce(this);
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_0 = (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1*)il2cpp_codegen_object_new(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NotifyIce__ctor_mC4BC365BCEF2A1F0C63BDCA9686A7B9FFEA0CD80(L_0, __this, NULL);
		return L_0;
	}
}
// System.String CAr.NotifyIce::get_JsonBase64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) 
{
	{
		// get { return jsonBase64_; }
		String_t* L_0 = __this->___jsonBase64__3;
		return L_0;
	}
}
// System.Void CAr.NotifyIce::set_JsonBase64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce_set_JsonBase64_m40549B6A6BCCE047A1BE2E8FAC3ACAED895CFDDF (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jsonBase64_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
		String_t* L_0 = ___value0;
		String_t* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414_RuntimeMethod_var);
		__this->___jsonBase64__3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonBase64__3), (void*)L_1);
		// }
		return;
	}
}
// System.Boolean CAr.NotifyIce::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotifyIce_Equals_mEDCC47BB7BB3B86862B1CD1F4BAEEA1209BC6C8F (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as NotifyIce);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = NotifyIce_Equals_m46D325B2854A59B89324CA01219641792850D27E(__this, ((NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1*)IsInstSealed((RuntimeObject*)L_0, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean CAr.NotifyIce::Equals(CAr.NotifyIce)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotifyIce_Equals_m46D325B2854A59B89324CA01219641792850D27E (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(other, null)) {
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_1 = ___other0;
		if ((!(((RuntimeObject*)(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1*)L_1) == ((RuntimeObject*)(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1*)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (JsonBase64 != other.JsonBase64) return false;
		String_t* L_2;
		L_2 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(__this, NULL);
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_3 = ___other0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(L_3, NULL);
		bool L_5;
		L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (JsonBase64 != other.JsonBase64) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_6 = __this->____unknownFields_1;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_7 = ___other0;
		NullCheck(L_7);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_8 = L_7->____unknownFields_1;
		bool L_9;
		L_9 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_6, L_8, NULL);
		return L_9;
	}
}
// System.Int32 CAr.NotifyIce::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotifyIce_GetHashCode_mAA9ECEC72F05C82C5A465C46DA30937F18A65F13 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (JsonBase64.Length != 0) hash ^= JsonBase64.GetHashCode();
		String_t* L_0;
		L_0 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (JsonBase64.Length != 0) hash ^= JsonBase64.GetHashCode();
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		V_0 = ((int32_t)(L_2^L_4));
	}

IL_001d:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_5 = __this->____unknownFields_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_6 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_7 = __this->____unknownFields_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_7);
		V_0 = ((int32_t)(L_6^L_8));
	}

IL_0033:
	{
		// return hash;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.String CAr.NotifyIce::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotifyIce_ToString_m69398D76BEF96DEDB9AAF9FEFF127C50088AB1ED (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void CAr.NotifyIce::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce_WriteTo_mA9ABE8976DEFB7248161C51CA9D3E3A21DFEBC5E (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.NotifyIce::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_m126767F69143920FA89D0E0FB78C69633BE0B9A9 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	{
		// if (JsonBase64.Length != 0) {
		String_t* L_0;
		L_0 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// output.WriteRawTag(10);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_2, (uint8_t)((int32_t)10), NULL);
		// output.WriteString(JsonBase64);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_3 = ___output0;
		String_t* L_4;
		L_4 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(__this, NULL);
		WriteContext_WriteString_m5B3A03676A3834F59391E025BDF7A6E173A6D864(L_3, L_4, NULL);
	}

IL_0021:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_5 = __this->____unknownFields_1;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_6 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_7 = ___output0;
		NullCheck(L_6);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_6, L_7, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Int32 CAr.NotifyIce::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotifyIce_CalculateSize_m25135331BE0C7EC555A552786A26B646C20F9FF0 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (JsonBase64.Length != 0) {
		String_t* L_0;
		L_0 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeStringSize(JsonBase64);
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeStringSize_m92DC0377FB211F101BD116CA72093D148E0C1A8C(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(1, L_4))));
	}

IL_001f:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_5 = __this->____unknownFields_1;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_6 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_7 = __this->____unknownFields_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, L_8));
	}

IL_0035:
	{
		// return size;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void CAr.NotifyIce::MergeFrom(CAr.NotifyIce)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce_MergeFrom_m3040F4FC5CC286103AE95EF84EED8449F2058EE5 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other == null) {
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (other.JsonBase64.Length != 0) {
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// JsonBase64 = other.JsonBase64;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline(L_4, NULL);
		NotifyIce_set_JsonBase64_m40549B6A6BCCE047A1BE2E8FAC3ACAED895CFDDF(__this, L_5, NULL);
	}

IL_001d:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_6 = __this->____unknownFields_1;
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_7 = ___other0;
		NullCheck(L_7);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_8 = L_7->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_9;
		L_9 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_6, L_8, NULL);
		__this->____unknownFields_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_9);
		// }
		return;
	}
}
// System.Void CAr.NotifyIce::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce_MergeFrom_m2BEE58C4349C0D1682E84D5D5CC414B64E542984 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CAr.NotifyIce::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_mF57F23484DCA25D9E05F3559BF6284C80F6BBDE9 (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_0027;
	}

IL_0002:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_001b;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_1 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_2 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_3;
		L_3 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_1, L_2, NULL);
		__this->____unknownFields_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_3);
		// break;
		goto IL_0027;
	}

IL_001b:
	{
		// JsonBase64 = input.ReadString();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_4 = ___input0;
		String_t* L_5;
		L_5 = ParseContext_ReadString_mB36C526257EBC5893769F25359B11B65E2E54D3D_inline(L_4, NULL);
		NotifyIce_set_JsonBase64_m40549B6A6BCCE047A1BE2E8FAC3ACAED895CFDDF(__this, L_5, NULL);
	}

IL_0027:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_6 = ___input0;
		uint32_t L_7;
		L_7 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_6, NULL);
		uint32_t L_8 = L_7;
		V_0 = L_8;
		if (L_8)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CAr.NotifyIce::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyIce__cctor_mAF39870DF5103C295024E8DC772256316B4B8A51 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m98F488779771FA13C656CE1DC417518E3CB2C20A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__27_0_mA9ED2963D6ADDD7A4A9CC63DE6D5B5B696EB9DA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<NotifyIce> _parser = new pb::MessageParser<NotifyIce>(() => new NotifyIce());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_il2cpp_TypeInfo_var);
		U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E* L_0 = ((U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F* L_1 = (Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F*)il2cpp_codegen_object_new(Func_1_t5B0CC4D02938B3413EAE6C08C30EBC1244F41C9F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mA02C5F5BFC0A49C5CCD4E3AEBE3AA50B6265E897(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__27_0_mA9ED2963D6ADDD7A4A9CC63DE6D5B5B696EB9DA2_RuntimeMethod_var), NULL);
		MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E* L_2 = (MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E*)il2cpp_codegen_object_new(MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_m98F488779771FA13C656CE1DC417518E3CB2C20A(L_2, L_1, MessageParser_1__ctor_m98F488779771FA13C656CE1DC417518E3CB2C20A_RuntimeMethod_var);
		((NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_StaticFields*)il2cpp_codegen_static_fields_for(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_StaticFields*)il2cpp_codegen_static_fields_for(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
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
// System.Void CAr.NotifyIce/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAB361BDBD47541233CDDC7A08AD8210CBAFB1E4F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E* L_0 = (U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E*)il2cpp_codegen_object_new(U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m46CA550618DFB6091C14F2BF056624DA5430FDDB(L_0, NULL);
		((U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CAr.NotifyIce/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m46CA550618DFB6091C14F2BF056624DA5430FDDB (U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CAr.NotifyIce CAr.NotifyIce/<>c::<.cctor>b__27_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* U3CU3Ec_U3C_cctorU3Eb__27_0_mA9ED2963D6ADDD7A4A9CC63DE6D5B5B696EB9DA2 (U3CU3Ec_t476455E128A153A62623A6612BD8A81078AD862E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<NotifyIce> _parser = new pb::MessageParser<NotifyIce>(() => new NotifyIce());
		NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* L_0 = (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1*)il2cpp_codegen_object_new(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NotifyIce__ctor_mBF33DCB706C13C70047524B65FC672C9E496AF08(L_0, NULL);
		return L_0;
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
// System.Void CAr.Control::__Helper_SerializeMessage(Google.Protobuf.IMessage,Grpc.Core.SerializationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control___Helper_SerializeMessage_m29C8672B9B95A3A6D060E3B4C3260011998784A4 (RuntimeObject* ___message0, SerializationContext_tB58A48F5BD333BD147B799711A88A26662D09ADB* ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferMessage_t301A70FA6757072BFBDBBC1C4D02D81085D8B22A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (message is global::Google.Protobuf.IBufferMessage)
		RuntimeObject* L_0 = ___message0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBufferMessage_t301A70FA6757072BFBDBBC1C4D02D81085D8B22A_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		// context.SetPayloadLength(message.CalculateSize());
		SerializationContext_tB58A48F5BD333BD147B799711A88A26662D09ADB* L_1 = ___context1;
		RuntimeObject* L_2 = ___message0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Google.Protobuf.IMessage::CalculateSize() */, IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(6 /* System.Void Grpc.Core.SerializationContext::SetPayloadLength(System.Int32) */, L_1, L_3);
		// global::Google.Protobuf.MessageExtensions.WriteTo(message, context.GetBufferWriter());
		RuntimeObject* L_4 = ___message0;
		SerializationContext_tB58A48F5BD333BD147B799711A88A26662D09ADB* L_5 = ___context1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Buffers.IBufferWriter`1<System.Byte> Grpc.Core.SerializationContext::GetBufferWriter() */, L_5);
		MessageExtensions_WriteTo_mD5D8A6CCD05C38B2DCCF2A4841467B30D2B9A6EE(L_4, L_6, NULL);
		// context.Complete();
		SerializationContext_tB58A48F5BD333BD147B799711A88A26662D09ADB* L_7 = ___context1;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(7 /* System.Void Grpc.Core.SerializationContext::Complete() */, L_7);
		// return;
		return;
	}

IL_0027:
	{
		// context.Complete(global::Google.Protobuf.MessageExtensions.ToByteArray(message));
		SerializationContext_tB58A48F5BD333BD147B799711A88A26662D09ADB* L_8 = ___context1;
		RuntimeObject* L_9 = ___message0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = MessageExtensions_ToByteArray_m8BACFCA8D5CD4C6C70FBC7ACBD92161FF107DC4C(L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Void Grpc.Core.SerializationContext::Complete(System.Byte[]) */, L_8, L_10);
		// }
		return;
	}
}
// Google.Protobuf.Reflection.ServiceDescriptor CAr.Control::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* Control_get_Descriptor_mFFD58C9643FF394A76017545FDFD58690FAE9E72 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t9B74854C0814D339537A7FFF6105D1D25A39C180_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::CAr.ControlReflection.Descriptor.Services[0]; }
		il2cpp_codegen_runtime_class_init_inline(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = ControlReflection_get_Descriptor_mF06AA872BCEBD18766A2E54C8DE8F3D8A4329F68_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_Services_m32AE49DE554CD6104A5792813F458B1E1A065A8D_inline(L_0, NULL);
		NullCheck(L_1);
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_2;
		L_2 = InterfaceFuncInvoker1< ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>::get_Item(System.Int32) */, IList_1_t9B74854C0814D339537A7FFF6105D1D25A39C180_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Grpc.Core.ServerServiceDefinition CAr.Control::BindService(CAr.Control/ControlBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerServiceDefinition_t16402F50122B2FADAD587780C17A2671596DC5D0* Control_BindService_m8DEEE1FAF67C0C78841ABA8221E80EE58906A503 (ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* ___serviceImpl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_AddMethod_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mB8F5B490D6E3E96F627B593427EEDF555673C445_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_AddMethod_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mD110ACC2A64F7EF0AEA33A0165F60D18D8A15D15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return grpc::ServerServiceDefinition.CreateBuilder()
		//     .AddMethod(__Method_HealthCheck, serviceImpl.HealthCheck)
		//     .AddMethod(__Method_SendHandshake, serviceImpl.SendHandshake).Build();
		Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* L_0;
		L_0 = ServerServiceDefinition_CreateBuilder_mA1E7CF4CE4D0D2AD1A3A6C9595502C50CDD555AA(NULL);
		il2cpp_codegen_runtime_class_init_inline(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* L_1 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_HealthCheck_4;
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_2 = ___serviceImpl0;
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_3 = L_2;
		UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117* L_4 = (UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117*)il2cpp_codegen_object_new(UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnaryServerMethod_2__ctor_m7F3CA10F141B5F6445789097BF0EE4915B721B02(L_4, L_3, (intptr_t)((void*)GetVirtualMethodInfo(L_3, 4)), NULL);
		NullCheck(L_0);
		Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* L_5;
		L_5 = Builder_AddMethod_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mD110ACC2A64F7EF0AEA33A0165F60D18D8A15D15(L_0, L_1, L_4, Builder_AddMethod_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mD110ACC2A64F7EF0AEA33A0165F60D18D8A15D15_RuntimeMethod_var);
		Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* L_6 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_SendHandshake_5;
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_7 = ___serviceImpl0;
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_8 = L_7;
		DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE* L_9 = (DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE*)il2cpp_codegen_object_new(DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		DuplexStreamingServerMethod_2__ctor_mB8763C50A2EA2FA4515DBA941ACBA58469BC5655(L_9, L_8, (intptr_t)((void*)GetVirtualMethodInfo(L_8, 5)), NULL);
		NullCheck(L_5);
		Builder_tDC19B0BF69D67D0E1C6E9B7D9696F754AA822C32* L_10;
		L_10 = Builder_AddMethod_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mB8F5B490D6E3E96F627B593427EEDF555673C445(L_5, L_6, L_9, Builder_AddMethod_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mB8F5B490D6E3E96F627B593427EEDF555673C445_RuntimeMethod_var);
		NullCheck(L_10);
		ServerServiceDefinition_t16402F50122B2FADAD587780C17A2671596DC5D0* L_11;
		L_11 = Builder_Build_m09BE41A1247701FABFF203159FF8872EEC2A021F(L_10, NULL);
		return L_11;
	}
}
// System.Void CAr.Control::BindService(Grpc.Core.ServiceBinderBase,CAr.Control/ControlBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_BindService_m0B775A3DCD05EEF5FC0DA836E7E00467989C89A8 (ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A* ___serviceBinder0, ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* ___serviceImpl1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceBinderBase_AddMethod_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m998D0F127CF12E6E5EB362B3F7AC7B92026D60F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceBinderBase_AddMethod_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_m171F1DA58DCEC5B4F17593F5D16246491C6CDFD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* G_B2_0 = NULL;
	ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A* G_B2_1 = NULL;
	Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* G_B1_0 = NULL;
	ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A* G_B1_1 = NULL;
	UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117* G_B3_0 = NULL;
	Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* G_B3_1 = NULL;
	ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A* G_B3_2 = NULL;
	Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* G_B5_0 = NULL;
	ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A* G_B5_1 = NULL;
	Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* G_B4_0 = NULL;
	ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A* G_B4_1 = NULL;
	DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE* G_B6_0 = NULL;
	Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* G_B6_1 = NULL;
	ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A* G_B6_2 = NULL;
	{
		// serviceBinder.AddMethod(__Method_HealthCheck, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::CAr.HealthCheckRequest, global::CAr.HealthCheckReply>(serviceImpl.HealthCheck));
		ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A* L_0 = ___serviceBinder0;
		il2cpp_codegen_runtime_class_init_inline(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* L_1 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_HealthCheck_4;
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_2 = ___serviceImpl1;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0018;
		}
	}
	{
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_3 = ___serviceImpl1;
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_4 = L_3;
		UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117* L_5 = (UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117*)il2cpp_codegen_object_new(UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnaryServerMethod_2__ctor_m7F3CA10F141B5F6445789097BF0EE4915B721B02(L_5, L_4, (intptr_t)((void*)GetVirtualMethodInfo(L_4, 4)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = ((UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117*)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		NullCheck(G_B3_2);
		GenericVirtualActionInvoker2< Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090*, UnaryServerMethod_2_tA77392292C404EC758AC0357891472E9B9995117* >::Invoke(ServiceBinderBase_AddMethod_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_m171F1DA58DCEC5B4F17593F5D16246491C6CDFD3_RuntimeMethod_var, G_B3_2, G_B3_1, G_B3_0);
		// serviceBinder.AddMethod(__Method_SendHandshake, serviceImpl == null ? null : new grpc::DuplexStreamingServerMethod<global::CAr.HandshakeMessage, global::CAr.HandshakeMessage>(serviceImpl.SendHandshake));
		ServiceBinderBase_tFB0E641375E302B3D9DEC054D9D9BA8197FC104A* L_6 = ___serviceBinder0;
		il2cpp_codegen_runtime_class_init_inline(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* L_7 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_SendHandshake_5;
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_8 = ___serviceImpl1;
		G_B4_0 = L_7;
		G_B4_1 = L_6;
		if (!L_8)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_6;
			goto IL_0036;
		}
	}
	{
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_9 = ___serviceImpl1;
		ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* L_10 = L_9;
		DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE* L_11 = (DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE*)il2cpp_codegen_object_new(DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DuplexStreamingServerMethod_2__ctor_mB8763C50A2EA2FA4515DBA941ACBA58469BC5655(L_11, L_10, (intptr_t)((void*)GetVirtualMethodInfo(L_10, 5)), NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0037;
	}

IL_0036:
	{
		G_B6_0 = ((DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE*)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0037:
	{
		NullCheck(G_B6_2);
		GenericVirtualActionInvoker2< Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF*, DuplexStreamingServerMethod_2_tA8F201713D039908D91EEF94652464511F9E3EAE* >::Invoke(ServiceBinderBase_AddMethod_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m998D0F127CF12E6E5EB362B3F7AC7B92026D60F2_RuntimeMethod_var, G_B6_2, G_B6_1, G_B6_0);
		// }
		return;
	}
}
// System.Void CAr.Control::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control__cctor_m7B49CCCF9D266A8EB463C706BB8C36C0531DD775 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control___Helper_SerializeMessage_m29C8672B9B95A3A6D060E3B4C3260011998784A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshallers_Create_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mFC6C69AADDBBB6CB2115EC66E5C233083AAE155E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshallers_Create_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mF34E8AE6DC477E58C31E6DEBE95E9E74DEC49DE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshallers_Create_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_mA849078B1FD41DB58B48D4EFAC8DF971D72ACA5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Method_2__ctor_m4BBB824274E71F83F8A84E97848EC436FE6DE32E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Method_2__ctor_mE345955774A1730E69F80FC0D2C6B6F8A854390E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__15_0_mF5FFB7F4267E7094A9D0A2CEEE75528257848156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__15_1_mFC4B88AD23EF5CD1E502BA88FBF286EEDB9E604D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__15_2_m6CD72496A8B8C866966F8901A679B1BF99F46768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C324DBC6724F3535B914AE036A4C3C8F1B5E200);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A7A6BEA8C7D25447D30AF82742C86B5C4EE190D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF183B9DCCD1C62885274C340782B7E76D24D4020);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly string __ServiceName = "c_ar.Control";
		((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____ServiceName_0 = _stringLiteralF183B9DCCD1C62885274C340782B7E76D24D4020;
		Il2CppCodeGenWriteBarrier((void**)(&((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____ServiceName_0), (void*)_stringLiteralF183B9DCCD1C62885274C340782B7E76D24D4020);
		// static readonly grpc::Marshaller<global::CAr.HealthCheckRequest> __Marshaller_c_ar_HealthCheckRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::CAr.HealthCheckRequest.Parser));
		Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9* L_0 = (Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9*)il2cpp_codegen_object_new(Action_2_tD0818FDD52AC5220C4DF9653183FD5AA34F5E9F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_2__ctor_mA030D09705F2EC92EE19FB326A2CF3ED5BC2F39E(L_0, NULL, (intptr_t)((void*)Control___Helper_SerializeMessage_m29C8672B9B95A3A6D060E3B4C3260011998784A4_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var);
		U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* L_1 = ((U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB* L_2 = (Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB*)il2cpp_codegen_object_new(Func_2_tC7831771823933B5C5EDD32809E663B1A53B00BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_mDFB2641ACA6665B40BBA69826D22517FEE63133B(L_2, L_1, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__15_0_mF5FFB7F4267E7094A9D0A2CEEE75528257848156_RuntimeMethod_var), NULL);
		Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA* L_3;
		L_3 = Marshallers_Create_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_mA849078B1FD41DB58B48D4EFAC8DF971D72ACA5C(L_0, L_2, Marshallers_Create_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_mA849078B1FD41DB58B48D4EFAC8DF971D72ACA5C_RuntimeMethod_var);
		((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HealthCheckRequest_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HealthCheckRequest_1), (void*)L_3);
		// static readonly grpc::Marshaller<global::CAr.HealthCheckReply> __Marshaller_c_ar_HealthCheckReply = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::CAr.HealthCheckReply.Parser));
		Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86* L_4 = (Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86*)il2cpp_codegen_object_new(Action_2_t9CC14E89D419DADD8E731B7D60BB4B39BDBD8C86_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_2__ctor_m02B4AC0C5FDA221D71A29EF5CDBA63692937A286(L_4, NULL, (intptr_t)((void*)Control___Helper_SerializeMessage_m29C8672B9B95A3A6D060E3B4C3260011998784A4_RuntimeMethod_var), NULL);
		U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* L_5 = ((U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727* L_6 = (Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727*)il2cpp_codegen_object_new(Func_2_t4972767B9077036A966FA95C1574AA1CF5CB3727_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mF41AC7F652E74809D46690C5218D72BFF6AF8040(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__15_1_mFC4B88AD23EF5CD1E502BA88FBF286EEDB9E604D_RuntimeMethod_var), NULL);
		Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D* L_7;
		L_7 = Marshallers_Create_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mF34E8AE6DC477E58C31E6DEBE95E9E74DEC49DE1(L_4, L_6, Marshallers_Create_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mF34E8AE6DC477E58C31E6DEBE95E9E74DEC49DE1_RuntimeMethod_var);
		((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HealthCheckReply_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HealthCheckReply_2), (void*)L_7);
		// static readonly grpc::Marshaller<global::CAr.HandshakeMessage> __Marshaller_c_ar_HandshakeMessage = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::CAr.HandshakeMessage.Parser));
		Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62* L_8 = (Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62*)il2cpp_codegen_object_new(Action_2_t307D0F38AA0582D16F506DE632950E17BE344B62_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_2__ctor_m9CA7D6CEA9BCA4FCF8ACD5C4B0CBAE9BF0539166(L_8, NULL, (intptr_t)((void*)Control___Helper_SerializeMessage_m29C8672B9B95A3A6D060E3B4C3260011998784A4_RuntimeMethod_var), NULL);
		U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* L_9 = ((U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972* L_10 = (Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972*)il2cpp_codegen_object_new(Func_2_t3CD5EF255E845A9CE3EBF39C245146C112FA3972_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_mEB3F3A4095444431C7A20E5783E4195E0B101FF4(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__15_2_m6CD72496A8B8C866966F8901A679B1BF99F46768_RuntimeMethod_var), NULL);
		Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* L_11;
		L_11 = Marshallers_Create_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mFC6C69AADDBBB6CB2115EC66E5C233083AAE155E(L_8, L_10, Marshallers_Create_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_mFC6C69AADDBBB6CB2115EC66E5C233083AAE155E_RuntimeMethod_var);
		((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HandshakeMessage_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HandshakeMessage_3), (void*)L_11);
		// static readonly grpc::Method<global::CAr.HealthCheckRequest, global::CAr.HealthCheckReply> __Method_HealthCheck = new grpc::Method<global::CAr.HealthCheckRequest, global::CAr.HealthCheckReply>(
		//     grpc::MethodType.Unary,
		//     __ServiceName,
		//     "HealthCheck",
		//     __Marshaller_c_ar_HealthCheckRequest,
		//     __Marshaller_c_ar_HealthCheckReply);
		String_t* L_12 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____ServiceName_0;
		Marshaller_1_tE611FCFBA08E02321241CCF8853B4D7B87EA92CA* L_13 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HealthCheckRequest_1;
		Marshaller_1_t24F0B0C7D807039754B589EA2E793F63F045866D* L_14 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HealthCheckReply_2;
		Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* L_15 = (Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090*)il2cpp_codegen_object_new(Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Method_2__ctor_mE345955774A1730E69F80FC0D2C6B6F8A854390E(L_15, 0, L_12, _stringLiteral1C324DBC6724F3535B914AE036A4C3C8F1B5E200, L_13, L_14, Method_2__ctor_mE345955774A1730E69F80FC0D2C6B6F8A854390E_RuntimeMethod_var);
		((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_HealthCheck_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_HealthCheck_4), (void*)L_15);
		// static readonly grpc::Method<global::CAr.HandshakeMessage, global::CAr.HandshakeMessage> __Method_SendHandshake = new grpc::Method<global::CAr.HandshakeMessage, global::CAr.HandshakeMessage>(
		//     grpc::MethodType.DuplexStreaming,
		//     __ServiceName,
		//     "SendHandshake",
		//     __Marshaller_c_ar_HandshakeMessage,
		//     __Marshaller_c_ar_HandshakeMessage);
		String_t* L_16 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____ServiceName_0;
		Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* L_17 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HandshakeMessage_3;
		Marshaller_1_tB723E85E7D34A2DC9AEBD2169490DCA54C220DE4* L_18 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Marshaller_c_ar_HandshakeMessage_3;
		Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* L_19 = (Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF*)il2cpp_codegen_object_new(Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Method_2__ctor_m4BBB824274E71F83F8A84E97848EC436FE6DE32E(L_19, 3, L_16, _stringLiteral8A7A6BEA8C7D25447D30AF82742C86B5C4EE190D, L_17, L_18, Method_2__ctor_m4BBB824274E71F83F8A84E97848EC436FE6DE32E_RuntimeMethod_var);
		((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_SendHandshake_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_SendHandshake_5), (void*)L_19);
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
// System.Threading.Tasks.Task`1<CAr.HealthCheckReply> CAr.Control/ControlBase::HealthCheck(CAr.HealthCheckRequest,Grpc.Core.ServerCallContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEE4277B3335B1EB3CDF55D66111D9DBD3C4B5A32* ControlBase_HealthCheck_m3548C765EEC7FE0C46B62750268CAA0616CCEEC5 (ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___request0, ServerCallContext_t03C40610542F091E955B15B4AB225ED1A909C5E9* ___context1, const RuntimeMethod* method) 
{
	{
		// throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
		Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Status__ctor_mC9E29F2BD60C9C3C1A3AD4A834052ABD9CBC89FF((&L_0), ((int32_t)12), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), /*hidden argument*/NULL);
		RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72* L_1 = (RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		RpcException__ctor_m06D2314D26D2BC163E2753D66137EC3DFEBE3E56(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBase_HealthCheck_m3548C765EEC7FE0C46B62750268CAA0616CCEEC5_RuntimeMethod_var)));
	}
}
// System.Threading.Tasks.Task CAr.Control/ControlBase::SendHandshake(Grpc.Core.IAsyncStreamReader`1<CAr.HandshakeMessage>,Grpc.Core.IServerStreamWriter`1<CAr.HandshakeMessage>,Grpc.Core.ServerCallContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ControlBase_SendHandshake_m391C8E31C2BA698C660D573DDBD719784A772552 (ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* __this, RuntimeObject* ___requestStream0, RuntimeObject* ___responseStream1, ServerCallContext_t03C40610542F091E955B15B4AB225ED1A909C5E9* ___context2, const RuntimeMethod* method) 
{
	{
		// throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
		Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Status__ctor_mC9E29F2BD60C9C3C1A3AD4A834052ABD9CBC89FF((&L_0), ((int32_t)12), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), /*hidden argument*/NULL);
		RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72* L_1 = (RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		RpcException__ctor_m06D2314D26D2BC163E2753D66137EC3DFEBE3E56(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBase_SendHandshake_m391C8E31C2BA698C660D573DDBD719784A772552_RuntimeMethod_var)));
	}
}
// System.Void CAr.Control/ControlBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlBase__ctor_mBBDD8A61518617D1C53B096D1ABF7DA28D1F0ED2 (ControlBase_t453F16C386602C8A79F0F647ACC2374ED39E313E* __this, const RuntimeMethod* method) 
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
// System.Void CAr.Control/ControlClient::.ctor(Grpc.Core.ChannelBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlClient__ctor_m32C8AF6E96F1B72493D1D10BF81C2CE4CD7D6D9A (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, ChannelBase_tD276AC64DE64B8C1BFD85654A280D93E69DA40E5* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_1__ctor_mE55CFFEC4C7D3838AD25FBA5678D6C8D4354E59E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ControlClient(grpc::ChannelBase channel) : base(channel)
		ChannelBase_tD276AC64DE64B8C1BFD85654A280D93E69DA40E5* L_0 = ___channel0;
		ClientBase_1__ctor_mE55CFFEC4C7D3838AD25FBA5678D6C8D4354E59E(__this, L_0, ClientBase_1__ctor_mE55CFFEC4C7D3838AD25FBA5678D6C8D4354E59E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CAr.Control/ControlClient::.ctor(Grpc.Core.CallInvoker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlClient__ctor_mEC2F7B664F295CBD7177CAC8F0AEF5B02E5E27DA (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* ___callInvoker0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_1__ctor_m28A7AA58B59BFADDF2D7CCE12A92A45648B79935_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ControlClient(grpc::CallInvoker callInvoker) : base(callInvoker)
		CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* L_0 = ___callInvoker0;
		ClientBase_1__ctor_m28A7AA58B59BFADDF2D7CCE12A92A45648B79935(__this, L_0, ClientBase_1__ctor_m28A7AA58B59BFADDF2D7CCE12A92A45648B79935_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CAr.Control/ControlClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlClient__ctor_m7F1F9E9EC3186A8E5605868E00EE83ABF5C87DDA (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_1__ctor_m7D38CE6EB1AD2688EB1F5C98A6EC610C96070B64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ControlClient() : base()
		ClientBase_1__ctor_m7D38CE6EB1AD2688EB1F5C98A6EC610C96070B64(__this, ClientBase_1__ctor_m7D38CE6EB1AD2688EB1F5C98A6EC610C96070B64_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CAr.Control/ControlClient::.ctor(Grpc.Core.ClientBase/ClientBaseConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlClient__ctor_m0B0142D9B5B8B663C0CADAD140D3FD98341F4E3B (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_1__ctor_m2A39107B53469978102ED15F66B5AB2619ED21BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ControlClient(ClientBaseConfiguration configuration) : base(configuration)
		ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D* L_0 = ___configuration0;
		ClientBase_1__ctor_m2A39107B53469978102ED15F66B5AB2619ED21BE(__this, L_0, ClientBase_1__ctor_m2A39107B53469978102ED15F66B5AB2619ED21BE_RuntimeMethod_var);
		// }
		return;
	}
}
// CAr.HealthCheckReply CAr.Control/ControlClient::HealthCheck(CAr.HealthCheckRequest,Grpc.Core.Metadata,System.Nullable`1<System.DateTime>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* ControlClient_HealthCheck_mEC9E7016E37E7C794670D0CEE65DB4EDD33AAA9F (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___request0, Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___headers1, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___deadline2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	{
		// return HealthCheck(request, new grpc::CallOptions(headers, deadline, cancellationToken));
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_0 = ___request0;
		Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* L_1 = ___headers1;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2 = ___deadline2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken3;
		CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E L_4;
		memset((&L_4), 0, sizeof(L_4));
		CallOptions__ctor_m3CA2A09D88B01048E1C33BAA895BD8133F098CA2((&L_4), L_1, L_2, L_3, (WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050*)NULL, (ContextPropagationToken_t3D20D09B421D355689C95D8C5F1BA4B1C4D18751*)NULL, (CallCredentials_t937C403ED70D8E5BC712464E26D2CD3EF0144466*)NULL, /*hidden argument*/NULL);
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_5;
		L_5 = VirtualFuncInvoker2< HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09*, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7*, CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E >::Invoke(6 /* CAr.HealthCheckReply CAr.Control/ControlClient::HealthCheck(CAr.HealthCheckRequest,Grpc.Core.CallOptions) */, __this, L_0, L_4);
		return L_5;
	}
}
// CAr.HealthCheckReply CAr.Control/ControlClient::HealthCheck(CAr.HealthCheckRequest,Grpc.Core.CallOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* ControlClient_HealthCheck_m39FCF67AEE229D52469BA7625A9543F4E5157462 (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___request0, CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallInvoker_BlockingUnaryCall_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_m9D8B022C8DB0967C30E7A66520E04E9067412275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CallInvoker.BlockingUnaryCall(__Method_HealthCheck, null, options, request);
		CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* L_0;
		L_0 = ClientBase_get_CallInvoker_mF3E51D6FE5AA4B3A732F085DEDE995249ECF4788_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* L_1 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_HealthCheck_4;
		CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E L_2 = ___options1;
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_3 = ___request0;
		NullCheck(L_0);
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_4;
		L_4 = GenericVirtualFuncInvoker4< HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09*, Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090*, String_t*, CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* >::Invoke(CallInvoker_BlockingUnaryCall_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_m9D8B022C8DB0967C30E7A66520E04E9067412275_RuntimeMethod_var, L_0, L_1, (String_t*)NULL, L_2, L_3);
		return L_4;
	}
}
// Grpc.Core.AsyncUnaryCall`1<CAr.HealthCheckReply> CAr.Control/ControlClient::HealthCheckAsync(CAr.HealthCheckRequest,Grpc.Core.Metadata,System.Nullable`1<System.DateTime>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUnaryCall_1_tD54FF260DA799468191108F1D0F41138E0A82273* ControlClient_HealthCheckAsync_m7030CE6AA56D5F8E803B3450D25C985E56F04593 (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___request0, Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___headers1, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___deadline2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	{
		// return HealthCheckAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_0 = ___request0;
		Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* L_1 = ___headers1;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2 = ___deadline2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken3;
		CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E L_4;
		memset((&L_4), 0, sizeof(L_4));
		CallOptions__ctor_m3CA2A09D88B01048E1C33BAA895BD8133F098CA2((&L_4), L_1, L_2, L_3, (WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050*)NULL, (ContextPropagationToken_t3D20D09B421D355689C95D8C5F1BA4B1C4D18751*)NULL, (CallCredentials_t937C403ED70D8E5BC712464E26D2CD3EF0144466*)NULL, /*hidden argument*/NULL);
		AsyncUnaryCall_1_tD54FF260DA799468191108F1D0F41138E0A82273* L_5;
		L_5 = VirtualFuncInvoker2< AsyncUnaryCall_1_tD54FF260DA799468191108F1D0F41138E0A82273*, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7*, CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E >::Invoke(8 /* Grpc.Core.AsyncUnaryCall`1<CAr.HealthCheckReply> CAr.Control/ControlClient::HealthCheckAsync(CAr.HealthCheckRequest,Grpc.Core.CallOptions) */, __this, L_0, L_4);
		return L_5;
	}
}
// Grpc.Core.AsyncUnaryCall`1<CAr.HealthCheckReply> CAr.Control/ControlClient::HealthCheckAsync(CAr.HealthCheckRequest,Grpc.Core.CallOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUnaryCall_1_tD54FF260DA799468191108F1D0F41138E0A82273* ControlClient_HealthCheckAsync_m3B385699D964026DDF4F179DCBDE0EC7B3065ED8 (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* ___request0, CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallInvoker_AsyncUnaryCall_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mBA648E811F641005F6A9A95076CCFCFCF5CD876C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CallInvoker.AsyncUnaryCall(__Method_HealthCheck, null, options, request);
		CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* L_0;
		L_0 = ClientBase_get_CallInvoker_mF3E51D6FE5AA4B3A732F085DEDE995249ECF4788_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090* L_1 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_HealthCheck_4;
		CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E L_2 = ___options1;
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_3 = ___request0;
		NullCheck(L_0);
		AsyncUnaryCall_1_tD54FF260DA799468191108F1D0F41138E0A82273* L_4;
		L_4 = GenericVirtualFuncInvoker4< AsyncUnaryCall_1_tD54FF260DA799468191108F1D0F41138E0A82273*, Method_2_t8EE3B1BE0658D200CF580B54BFB8D760E0D68090*, String_t*, CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E, HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* >::Invoke(CallInvoker_AsyncUnaryCall_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mBA648E811F641005F6A9A95076CCFCFCF5CD876C_RuntimeMethod_var, L_0, L_1, (String_t*)NULL, L_2, L_3);
		return L_4;
	}
}
// Grpc.Core.AsyncDuplexStreamingCall`2<CAr.HandshakeMessage,CAr.HandshakeMessage> CAr.Control/ControlClient::SendHandshake(Grpc.Core.Metadata,System.Nullable`1<System.DateTime>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncDuplexStreamingCall_2_tAC5737587D11205F5BD0A279930DACB0BF8FA7D9* ControlClient_SendHandshake_m39B56A8675253FD820884D572BA0074D7F0D483F (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___headers0, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___deadline1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, const RuntimeMethod* method) 
{
	{
		// return SendHandshake(new grpc::CallOptions(headers, deadline, cancellationToken));
		Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* L_0 = ___headers0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1 = ___deadline1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken2;
		CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E L_3;
		memset((&L_3), 0, sizeof(L_3));
		CallOptions__ctor_m3CA2A09D88B01048E1C33BAA895BD8133F098CA2((&L_3), L_0, L_1, L_2, (WriteOptions_tABB8D5678E45F0698B1B14FC5A59F1C55FACF050*)NULL, (ContextPropagationToken_t3D20D09B421D355689C95D8C5F1BA4B1C4D18751*)NULL, (CallCredentials_t937C403ED70D8E5BC712464E26D2CD3EF0144466*)NULL, /*hidden argument*/NULL);
		AsyncDuplexStreamingCall_2_tAC5737587D11205F5BD0A279930DACB0BF8FA7D9* L_4;
		L_4 = VirtualFuncInvoker1< AsyncDuplexStreamingCall_2_tAC5737587D11205F5BD0A279930DACB0BF8FA7D9*, CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E >::Invoke(10 /* Grpc.Core.AsyncDuplexStreamingCall`2<CAr.HandshakeMessage,CAr.HandshakeMessage> CAr.Control/ControlClient::SendHandshake(Grpc.Core.CallOptions) */, __this, L_3);
		return L_4;
	}
}
// Grpc.Core.AsyncDuplexStreamingCall`2<CAr.HandshakeMessage,CAr.HandshakeMessage> CAr.Control/ControlClient::SendHandshake(Grpc.Core.CallOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncDuplexStreamingCall_2_tAC5737587D11205F5BD0A279930DACB0BF8FA7D9* ControlClient_SendHandshake_m8D5EBDDDF933208B1EAA35D361723F84AA0D3FB6 (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallInvoker_AsyncDuplexStreamingCall_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m04710705B4950CACE379A03F1258F26A8AB303C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CallInvoker.AsyncDuplexStreamingCall(__Method_SendHandshake, null, options);
		CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* L_0;
		L_0 = ClientBase_get_CallInvoker_mF3E51D6FE5AA4B3A732F085DEDE995249ECF4788_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF* L_1 = ((Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_StaticFields*)il2cpp_codegen_static_fields_for(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var))->_____Method_SendHandshake_5;
		CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E L_2 = ___options0;
		NullCheck(L_0);
		AsyncDuplexStreamingCall_2_tAC5737587D11205F5BD0A279930DACB0BF8FA7D9* L_3;
		L_3 = GenericVirtualFuncInvoker3< AsyncDuplexStreamingCall_2_tAC5737587D11205F5BD0A279930DACB0BF8FA7D9*, Method_2_tA03E7E831CC65724708D66CF6693D9B98331C7CF*, String_t*, CallOptions_t2092F3EA4E07BACD81EF531A7952510B8058218E >::Invoke(CallInvoker_AsyncDuplexStreamingCall_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m04710705B4950CACE379A03F1258F26A8AB303C8_RuntimeMethod_var, L_0, L_1, (String_t*)NULL, L_2);
		return L_3;
	}
}
// CAr.Control/ControlClient CAr.Control/ControlClient::NewInstance(Grpc.Core.ClientBase/ClientBaseConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* ControlClient_NewInstance_mC606660AB6EDB2E4842C616B80CBFC3E5B2EA577 (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* __this, ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ControlClient(configuration);
		ClientBaseConfiguration_t6683C515CEA1065CA71E4BC27396CA44DBA8F46D* L_0 = ___configuration0;
		ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447* L_1 = (ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447*)il2cpp_codegen_object_new(ControlClient_t59984EDF20AA423FF53BBF97EFB8B9B8EF8A1447_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ControlClient__ctor_m0B0142D9B5B8B663C0CADAD140D3FD98341F4E3B(L_1, L_0, NULL);
		return L_1;
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
// System.Void CAr.Control/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m06E910F81EDE8D071349172769B9A27238BB3724 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* L_0 = (U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F*)il2cpp_codegen_object_new(U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m20286A915691D4C2DE46917920463EFA1CAF776D(L_0, NULL);
		((U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CAr.Control/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m20286A915691D4C2DE46917920463EFA1CAF776D (U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CAr.HealthCheckRequest CAr.Control/<>c::<.cctor>b__15_0(Grpc.Core.DeserializationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* U3CU3Ec_U3C_cctorU3Eb__15_0_mF5FFB7F4267E7094A9D0A2CEEE75528257848156 (U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* __this, DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control___Helper_DeserializeMessage_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_m16AAD0E3D1DCCDDF25003F2F59FEBED6AD8043C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly grpc::Marshaller<global::CAr.HealthCheckRequest> __Marshaller_c_ar_HealthCheckRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::CAr.HealthCheckRequest.Parser));
		DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* L_0 = ___context0;
		il2cpp_codegen_runtime_class_init_inline(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* L_1;
		L_1 = HealthCheckRequest_get_Parser_mF64B315384900033E8622653381D7E692EA0B1CC_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7* L_2;
		L_2 = Control___Helper_DeserializeMessage_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_m16AAD0E3D1DCCDDF25003F2F59FEBED6AD8043C8(L_0, L_1, Control___Helper_DeserializeMessage_TisHealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_m16AAD0E3D1DCCDDF25003F2F59FEBED6AD8043C8_RuntimeMethod_var);
		return L_2;
	}
}
// CAr.HealthCheckReply CAr.Control/<>c::<.cctor>b__15_1(Grpc.Core.DeserializationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* U3CU3Ec_U3C_cctorU3Eb__15_1_mFC4B88AD23EF5CD1E502BA88FBF286EEDB9E604D (U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* __this, DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control___Helper_DeserializeMessage_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mB706476EBB728B29802262AA46020FC3AB530E30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly grpc::Marshaller<global::CAr.HealthCheckReply> __Marshaller_c_ar_HealthCheckReply = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::CAr.HealthCheckReply.Parser));
		DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* L_0 = ___context0;
		il2cpp_codegen_runtime_class_init_inline(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* L_1;
		L_1 = HealthCheckReply_get_Parser_m3E6E9533528075258109C3B3C3129BC8F0288BC8_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09* L_2;
		L_2 = Control___Helper_DeserializeMessage_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mB706476EBB728B29802262AA46020FC3AB530E30(L_0, L_1, Control___Helper_DeserializeMessage_TisHealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_mB706476EBB728B29802262AA46020FC3AB530E30_RuntimeMethod_var);
		return L_2;
	}
}
// CAr.HandshakeMessage CAr.Control/<>c::<.cctor>b__15_2(Grpc.Core.DeserializationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* U3CU3Ec_U3C_cctorU3Eb__15_2_m6CD72496A8B8C866966F8901A679B1BF99F46768 (U3CU3Ec_t968FE08D8661FC0A274A54C262A7903508E61B4F* __this, DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control___Helper_DeserializeMessage_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m38C56265528E827698180489ACD2280B3E8523A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly grpc::Marshaller<global::CAr.HandshakeMessage> __Marshaller_c_ar_HandshakeMessage = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::CAr.HandshakeMessage.Parser));
		DeserializationContext_t8C084AFEE582F438C6A9F8392DB3C4A92A930FAC* L_0 = ___context0;
		il2cpp_codegen_runtime_class_init_inline(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* L_1;
		L_1 = HandshakeMessage_get_Parser_mEE267FFE1DE214403E34C5D2E086E46EE036AAD7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Control_t8FC2EA103F3A7B120EE3F3D701EECDE36AB3CFFC_il2cpp_TypeInfo_var);
		HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* L_2;
		L_2 = Control___Helper_DeserializeMessage_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m38C56265528E827698180489ACD2280B3E8523A6(L_0, L_1, Control___Helper_DeserializeMessage_TisHandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_m38C56265528E827698180489ACD2280B3E8523A6_RuntimeMethod_var);
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TrainCarBase_get_Distance_m6B93FAF6496C152333743CEA7AAB979B5456A044_inline (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, const RuntimeMethod* method) 
{
	{
		// public float Distance { get; protected set; }
		float L_0 = __this->___U3CDistanceU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrainCarBase_set_Distance_mF9D78037A307E9060BC95667FA44CF820A0F13DD_inline (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Distance { get; protected set; }
		float L_0 = ___value0;
		__this->___U3CDistanceU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TrainTrack_get_TrackLength_m007CB823F48E12E88CCC143F734431A3148B99AE_inline (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, const RuntimeMethod* method) 
{
	{
		// return _trainLength;
		float L_0 = __this->____trainLength_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TrackSegment_get_StartDistance_mBC42F0134B39A7E31F1278FB09717ABB946E97BF_inline (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, const RuntimeMethod* method) 
{
	{
		// public float StartDistance { get; set; }
		float L_0 = __this->___U3CStartDistanceU3Ek__BackingField_13;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrainTrack_set_TrackLength_mBD68D6F4FD33127524693DA99B9FD30A0577B7C4_inline (TrainTrack_t327DBFA324D407E9D3EF3533C4AD8399B8DBDB09* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _trainLength = value;
		float L_0 = ___value0;
		__this->____trainLength_9 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackSegment_set_SubDivCount_mAEB68B90E1330424ADEBF83CDE32D99F267DDE7C_inline (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _subDivCount = value;
		int32_t L_0 = ___value0;
		__this->____subDivCount_9 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackSegment_set_StartDistance_mF619D4B1E344E9677DB748117EB3FF4043BB6408_inline (TrackSegment_t564FB15D19598A8A893D0EB2ACBF5EA66BCF5680* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float StartDistance { get; set; }
		float L_0 = ___value0;
		__this->___U3CStartDistanceU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrainCarBase_set_Scale_m79E7EF54132ABFF88F00D49ED9C11D7E611D7626_inline (TrainCarBase_t705A8BBC9FCF8E55A9BCFA43EDBEE3FFB1528616* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { scale = value; }
		float L_0 = ___value0;
		__this->___scale_12 = L_0;
		// set { scale = value; }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindmillBladesController_set_IsMoving_m35BF95FD16ABE573A75F2EC033A2D7068A02B1A2_inline (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsMoving { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsMovingU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindmillBladesController_get_IsMoving_mD9B1B60A86AAD2EA43A7F88C45ECD4256D024540_inline (WindmillBladesController_t3D939B222C0BA9D7509B92B44060A9051E477616* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsMoving { get; private set; }
		bool L_0 = __this->___U3CIsMovingU3Ek__BackingField_9;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRGrabbable_t322F6468B588212B888E9397723397A16E7614B5* OVRGrabber_get_grabbedObject_m6A1961622740C23EA69222EFAC1C65D9463A0C1A_inline (OVRGrabber_tC16FABB1A90FB635BDE98E18F032A793D7033FCC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_grabbedObj; }
		OVRGrabbable_t322F6468B588212B888E9397723397A16E7614B5* L_0 = __this->___m_grabbedObj_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPose_get_PoseId_m399F7DCB42FE2A60FFF096C1865DFF5B347F7BDB_inline (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_poseId; }
		int32_t L_0 = __this->___m_poseId_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPose_get_AllowPointing_m19E1786901712E84FD7D2CC113471FF7B2167731_inline (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_allowPointing; }
		bool L_0 = __this->___m_allowPointing_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPose_get_AllowThumbsUp_m5B0BCD38FCEEB5512FE9FA49DFDDFB61FA5D5EAF_inline (HandPose_t07CBF9E66547E7ADC0D785A41DCCD8150DBCB5C8* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_allowThumbsUp; }
		bool L_0 = __this->___m_allowThumbsUp_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581* ThumbstickDirection_get_Parser_m92D7B7F69B42723A21368CA9048C6765EB606078_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<ThumbstickDirection> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var);
		MessageParser_1_tA4DB57C66972C32A5528CBADB4A036A2CC5B6581* L_0 = ((ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_StaticFields*)il2cpp_codegen_static_fields_for(ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* InputReflection_get_Descriptor_mFBB61B9A90717A6D53469B5D7FD25C93520FF6A2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		il2cpp_codegen_runtime_class_init_inline(InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_StaticFields*)il2cpp_codegen_static_fields_for(InputReflection_t6CC29D192FD06897F29C23D16C923BA27B8660DD_il2cpp_TypeInfo_var))->___descriptor_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ThumbstickDirection_get_Dx_mCDF7B274BF31E1C0AC892FB6C5179805BEFE1150_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	{
		// get { return dx_; }
		double L_0 = __this->___dx__3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ThumbstickDirection_get_Dy_mFB0A6B61C5A7B86103ADC77D6F7F1A1610D77BF4_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	{
		// get { return dy_; }
		double L_0 = __this->___dy__5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ThumbstickDirection_get_SeqNum_mD23D5F1C8F5546FD5745A8A59205104924E84129_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, const RuntimeMethod* method) 
{
	{
		// get { return seqNum_; }
		int64_t L_0 = __this->___seqNum__7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThumbstickDirection_set_Dx_m05B03AAB29A4E608B72E7CA9E25AF3ECD51BD546_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// dx_ = value;
		double L_0 = ___value0;
		__this->___dx__3 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThumbstickDirection_set_Dy_m2A3E989D42A4ED17562A3C3FB75AE4B6F723F122_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// dy_ = value;
		double L_0 = ___value0;
		__this->___dy__5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThumbstickDirection_set_SeqNum_m59F042E3B9664136E9F909DD8410513076B573BE_inline (ThumbstickDirection_t5614228F8536AB086229B5EA748E86A22C0FBA30* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// seqNum_ = value;
		int64_t L_0 = ___value0;
		__this->___seqNum__7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ParseContext_ReadDouble_m472E820A5560DEDA7DB0C3E9FBBAAB1D9889A521_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		double L_2;
		L_2 = ParsingPrimitives_ParseDouble_m64081914C3D679EB6B86F5E435EFB7059F0A744F(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ParseContext_ReadInt64_mEA0F773A37DBAA193C4146023EABA449F35DB876_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		uint64_t L_2;
		L_2 = ParsingPrimitives_ParseRawVarint64_m5F7ECE8A6E0DED9DCF88966D02F68695B1961F03(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		uint32_t L_2;
		L_2 = ParsingPrimitives_ParseTag_mC3CDF9E540F71AEAB45BC4BAFAE69C8FB097DB64(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* HealthCheckRequest_get_Parser_mF64B315384900033E8622653381D7E692EA0B1CC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<HealthCheckRequest> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var);
		MessageParser_1_t623A3811068CDB8C67DB32552DD8D091DC552680* L_0 = ((HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_StaticFields*)il2cpp_codegen_static_fields_for(HealthCheckRequest_tA17086F062F6F8C87F50627135AE667114D284B7_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* HealthCheckReply_get_Parser_m3E6E9533528075258109C3B3C3129BC8F0288BC8_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<HealthCheckReply> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var);
		MessageParser_1_tBCF2C629A518DA82CC2B343B27E6BF737A49CB9F* L_0 = ((HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_StaticFields*)il2cpp_codegen_static_fields_for(HealthCheckReply_t4E732C48E05769544646A9DB19D450F4CC67AC09_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* HandshakeMessage_get_Parser_mEE267FFE1DE214403E34C5D2E086E46EE036AAD7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<HandshakeMessage> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var);
		MessageParser_1_t2556D4E35EE57EC0C0ACA3696A6A2FE39AC23DD3* L_0 = ((HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_StaticFields*)il2cpp_codegen_static_fields_for(HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F* NotifyDescription_get_Parser_m1A35C020064486614FAE01D1EFC85532F3BEABAB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<NotifyDescription> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var);
		MessageParser_1_t35B54ED202932FDA28B1B8BB90E6A0CCB943493F* L_0 = ((NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_StaticFields*)il2cpp_codegen_static_fields_for(NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E* NotifyIce_get_Parser_m556B31799E65ADB0659E6F3B5A78C1CA6C6BAB2F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<NotifyIce> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var);
		MessageParser_1_t94EE43CFA3DB3B076B934026EDB5D42DB64DED8E* L_0 = ((NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_StaticFields*)il2cpp_codegen_static_fields_for(NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ControlReflection_get_Descriptor_mF06AA872BCEBD18766A2E54C8DE8F3D8A4329F68_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		il2cpp_codegen_runtime_class_init_inline(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_StaticFields*)il2cpp_codegen_static_fields_for(ControlReflection_tF5013D76E8D4ED8353735D8CFC5E5968A739D569_il2cpp_TypeInfo_var))->___descriptor_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandshakeMessage_get_MsgCase_m64012CBBD5C57AFAF48B065845AD0F6F79CEB5CD_inline (HandshakeMessage_t342CC26D9422F5B79BB2F8FC19ED6627A058C803* __this, const RuntimeMethod* method) 
{
	{
		// get { return msgCase_; }
		int32_t L_0 = __this->___msgCase__5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var);
		ParsingPrimitivesMessages_ReadMessage_mB316DADE7E701D2EA0E45CDB6100F4E3654C49EF(__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NotifyDescription_get_SdpType_m649063BB21C158C96C9B61BE6F655773ECAC2845_inline (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	{
		// get { return sdpType_; }
		int32_t L_0 = __this->___sdpType__3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NotifyDescription_get_Sdp_m73D0B0D9607CEAAB0A92B36E61C4A516A49E1CE3_inline (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, const RuntimeMethod* method) 
{
	{
		// get { return sdp_; }
		String_t* L_0 = __this->___sdp__5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotifyDescription_set_SdpType_m26343856BAE1905739A94A521B1D0CFCA0112D78_inline (NotifyDescription_tB3BEBF85F54797E4D0BCA8D118EDC8B805A22B29* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// sdpType_ = value;
		int32_t L_0 = ___value0;
		__this->___sdpType__3 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParseContext_ReadEnum_mF3B58B12A29DD615F9EC6FD424CF4FFAED1A6E51_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		uint32_t L_2;
		L_2 = ParsingPrimitives_ParseRawVarint32_m12E76CAA773AAED8FDAF192EBFAF830E615798BF(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParseContext_ReadString_mB36C526257EBC5893769F25359B11B65E2E54D3D_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		String_t* L_2;
		L_2 = ParsingPrimitives_ReadString_m7D4986A2946DB4734B717580778BB75160508D7A_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NotifyIce_get_JsonBase64_m89633FE84EAC665DD2177255B53F5561999A961A_inline (NotifyIce_tA2380899D44351FB4E314DF324A6B89237D30CA1* __this, const RuntimeMethod* method) 
{
	{
		// get { return jsonBase64_; }
		String_t* L_0 = __this->___jsonBase64__3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Services_m32AE49DE554CD6104A5792813F458B1E1A065A8D_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CServicesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* ClientBase_get_CallInvoker_mF3E51D6FE5AA4B3A732F085DEDE995249ECF4788_inline (ClientBase_tD3AE7DEE97761650B2A6CCB19E3B501FEF713391* __this, const RuntimeMethod* method) 
{
	{
		CallInvoker_t4CBA795695863F40520DEBAEBA67550CC2D854AF* L_0 = __this->___callInvoker_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParsingPrimitives_ReadString_m7D4986A2946DB4734B717580778BB75160508D7A_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = ___buffer0;
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = ___state1;
		int32_t L_2;
		L_2 = ParsingPrimitives_ParseLength_mF93B4D567E4CC5CC9B575050C30448BFDB466C52_inline(L_0, L_1, NULL);
		V_0 = L_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_3 = ___buffer0;
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_4 = ___state1;
		int32_t L_5 = V_0;
		String_t* L_6;
		L_6 = ParsingPrimitives_ReadRawString_m18F4AF4946FA46A62BFBDEB1A807A17839F745B8(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParsingPrimitives_ParseLength_mF93B4D567E4CC5CC9B575050C30448BFDB466C52_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = ___buffer0;
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = ___state1;
		uint32_t L_2;
		L_2 = ParsingPrimitives_ParseRawVarint32_m12E76CAA773AAED8FDAF192EBFAF830E615798BF(L_0, L_1, NULL);
		return L_2;
	}
}
