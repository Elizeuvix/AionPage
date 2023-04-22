#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AccountController
struct AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DatabasesController
struct DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// HashcodeGenerator
struct HashcodeGenerator_t0172D3F77BA4E70D25FD7EF2F3B17B010D3D79EA;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// ItemConfig
struct ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PanelController
struct PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// AccountController/<ShowMessage>d__71
struct U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F;
// AccountController/<Start>d__57
struct U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// DatabasesController/<UpdateAbyss>d__45
struct U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07;
// DatabasesController/<UpdateKinah>d__46
struct U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E;
// DatabasesController/<UpdateLegions>d__47
struct U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC;
// DatabasesController/<UpdateMembers>d__48
struct U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E;
// DatabasesController/<UpdatePlayers>d__44
struct U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01F123C54BAB9FF01C9E226B15CF801E68AA5B3C;
IL2CPP_EXTERN_C String_t* _stringLiteral030F16BC0F990A3372162DAD27610D3E3B1C745C;
IL2CPP_EXTERN_C String_t* _stringLiteral03489ECB3C2DA90C1A27C968B4CCBF2D631BB03A;
IL2CPP_EXTERN_C String_t* _stringLiteral07734A0D0FCDFA1D06FBE39F1A342E02E9945108;
IL2CPP_EXTERN_C String_t* _stringLiteral07A1EF185BA3E731C90C374323FE65C9972A771F;
IL2CPP_EXTERN_C String_t* _stringLiteral08AC20EE8EDAF0682E5226C36C2927A5B29CB1F3;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97;
IL2CPP_EXTERN_C String_t* _stringLiteral0F540DC73E7918F2986E2035FF401FADE5070178;
IL2CPP_EXTERN_C String_t* _stringLiteral0F56241073C692EA251B172E7D230EB00260A779;
IL2CPP_EXTERN_C String_t* _stringLiteral12C2223C5A2B3B3D1078DBDB393866FF8FB2CBB9;
IL2CPP_EXTERN_C String_t* _stringLiteral15190CA1318A6715E4BD7B284EBA51829E582AA7;
IL2CPP_EXTERN_C String_t* _stringLiteral186728018354DD5A345662365525D1905258CFCE;
IL2CPP_EXTERN_C String_t* _stringLiteral196834A32301D2A9E17AC7901E15283E120F5A5A;
IL2CPP_EXTERN_C String_t* _stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F;
IL2CPP_EXTERN_C String_t* _stringLiteral1A1184EA1E82988D99A1B56F425065C0A8595C54;
IL2CPP_EXTERN_C String_t* _stringLiteral1AF60E124910CBC4D649903160A22D3AEFA7BA87;
IL2CPP_EXTERN_C String_t* _stringLiteral1B2305DD4F982A49FC0790DAE2CFD8386692D9F8;
IL2CPP_EXTERN_C String_t* _stringLiteral20ACB49333EED829465C61BCA5A97687BA6C074E;
IL2CPP_EXTERN_C String_t* _stringLiteral22E972F1BD1EA0A843AA6C22A05B81A33C1C9736;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24C10FCA31285FFC89270A643584901BF00BDA87;
IL2CPP_EXTERN_C String_t* _stringLiteral26D75FF671E6F09E6ED64A016553D42501475490;
IL2CPP_EXTERN_C String_t* _stringLiteral289AD221E512BD27941854A4B9E58975FFB33BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral2B3AD6333F669606E87648FD08F4CF7B98B051B5;
IL2CPP_EXTERN_C String_t* _stringLiteral3286B8846F3F2A4AA18A81E68195CB88C06C98B1;
IL2CPP_EXTERN_C String_t* _stringLiteral353B4D65C1B2F185776486689A5F7ACBA9363D4E;
IL2CPP_EXTERN_C String_t* _stringLiteral37E234BE1F02DECDF60E288E0D81CAE673F43976;
IL2CPP_EXTERN_C String_t* _stringLiteral3A33957D85CB2A50D0A311346A69ADEA61540D2E;
IL2CPP_EXTERN_C String_t* _stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A;
IL2CPP_EXTERN_C String_t* _stringLiteral3FE09FA37FC6E72FF9D8869C66DD1C3D7801B098;
IL2CPP_EXTERN_C String_t* _stringLiteral420957ECA2CE9283693EA75554F96EA3ACCAD441;
IL2CPP_EXTERN_C String_t* _stringLiteral441E816B5D9089D617190701600ACAC19D39A420;
IL2CPP_EXTERN_C String_t* _stringLiteral49EA153F87817AAA7A31C220FA0AE24ABEAD425F;
IL2CPP_EXTERN_C String_t* _stringLiteral4AF27E8EB6B424A7BBF443B78F6CBB98366CF15C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0A58B91F58F7D3C5039E01EE455503B686B769;
IL2CPP_EXTERN_C String_t* _stringLiteral4DC2C47D6DD84E69008084D114E5AF9848B39EC6;
IL2CPP_EXTERN_C String_t* _stringLiteral4F3BD1698513EAFAB952C879CB140F37391E3570;
IL2CPP_EXTERN_C String_t* _stringLiteral555EF4BA7AFB2D2397A914C021673FB81BDD2A98;
IL2CPP_EXTERN_C String_t* _stringLiteral57B762EF6B7A525CDE80D3F400DA3CFFFBD5CAA5;
IL2CPP_EXTERN_C String_t* _stringLiteral5A53B0C4B966CB7E5B0BDEBAACEE41D9E39675F5;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3619C0131C2F9DF376A8C64D83473484337701;
IL2CPP_EXTERN_C String_t* _stringLiteral60AEB8A203BF23524FC74BE0ADEEA3C90DD9A429;
IL2CPP_EXTERN_C String_t* _stringLiteral631E528293AC38E744257B0AE6F4889531E0FDC7;
IL2CPP_EXTERN_C String_t* _stringLiteral646CA5258EB95E43F153A98440BBE85229E6B5CC;
IL2CPP_EXTERN_C String_t* _stringLiteral6803B1012EDF65A170A0415C22F4F77BFF00497E;
IL2CPP_EXTERN_C String_t* _stringLiteral6A31BC52E5305A6E92147A55D69FDC8344179016;
IL2CPP_EXTERN_C String_t* _stringLiteral6AA9ED5D2AC4E0421DC76A927D1D6DE51F831A45;
IL2CPP_EXTERN_C String_t* _stringLiteral71374DF935888E0953B9B8234717BCFBBDC00CA4;
IL2CPP_EXTERN_C String_t* _stringLiteral7201A52ADEE21D9912326D0751CEB16DA71DC41D;
IL2CPP_EXTERN_C String_t* _stringLiteral76665EC7E8DA3B0D57E33E44DC288D212A9E73BE;
IL2CPP_EXTERN_C String_t* _stringLiteral76EF9D0B5C42EFB496921BA036360A2D6C2BE0E4;
IL2CPP_EXTERN_C String_t* _stringLiteral77FC2F66174DBDCC5BE93721BB8F79BC4DADEF14;
IL2CPP_EXTERN_C String_t* _stringLiteral7BDB71B80D33F3A9A67AA43EA24C28C45FF2410C;
IL2CPP_EXTERN_C String_t* _stringLiteral7D4FF0184A4A79FAB1173BD1C7626D6AC13225A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7E3F0867B7BFEAAB3FBA09305140F97020715FFB;
IL2CPP_EXTERN_C String_t* _stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76;
IL2CPP_EXTERN_C String_t* _stringLiteral832B0291560BC2189BC979D77FCF2E1B37C24EC6;
IL2CPP_EXTERN_C String_t* _stringLiteral83931E04BA8B23B2FE65ADADAAB8343DAA3D9DA9;
IL2CPP_EXTERN_C String_t* _stringLiteral848068D1E5D232B2055A0E4545DCB53F0F6CF18B;
IL2CPP_EXTERN_C String_t* _stringLiteral853C3CD84D5C41D061EE7DA18561825FE16BD86E;
IL2CPP_EXTERN_C String_t* _stringLiteral8BC320BB85EBFFB6FFDDFC1AA9F32B1DA2E5B9DD;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral969185362AFA3C937F980AACE75732DFCFBA3C57;
IL2CPP_EXTERN_C String_t* _stringLiteral9C0D0D7D7F900C507D584E2FF879D8B498E914E1;
IL2CPP_EXTERN_C String_t* _stringLiteral9C5DC689F2A849F0CB7135B0BA822E210C1663D8;
IL2CPP_EXTERN_C String_t* _stringLiteral9C6E836A58B7DE42279ADEF1C841C4151E9AE3A4;
IL2CPP_EXTERN_C String_t* _stringLiteral9DB4D1DFFDA5137B7B696C570E8AA30429EB94AA;
IL2CPP_EXTERN_C String_t* _stringLiteralA203B8A96188CD68997A4A1E16D8DC323E3F249B;
IL2CPP_EXTERN_C String_t* _stringLiteralA2AD821658DA79C01191BBD3BD43012E5C08CFDB;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA5CE1D7AED43A0190589E02FEA1A5262F82435FA;
IL2CPP_EXTERN_C String_t* _stringLiteralA80E40578FF312F07602F5DCA6A32DC4B852194A;
IL2CPP_EXTERN_C String_t* _stringLiteralA94EAA33BCCD18BFAD560E130C78CF1C48A8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralAA693C0072C92490801B3905DA2D442D9864373D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB1FFF8FA40C54374DE1806FB8BE0662EF0810D6;
IL2CPP_EXTERN_C String_t* _stringLiteralB01D53BA71E8F5218B393B96E92FFA1C69B93029;
IL2CPP_EXTERN_C String_t* _stringLiteralB03998622C2A73776184FC3439107F83698B618D;
IL2CPP_EXTERN_C String_t* _stringLiteralB59DB46FAA074DAB60930C4081694E7774E4F023;
IL2CPP_EXTERN_C String_t* _stringLiteralB92988FBF233C1338710A604DDFC37CA4BF585C8;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC9755CD05B2C971391C4C78FAF856BDCFA4BA7;
IL2CPP_EXTERN_C String_t* _stringLiteralBD88F7ABD34800BFA7DF5DB79ED81C32BA8736CB;
IL2CPP_EXTERN_C String_t* _stringLiteralC0AD273EE126EDEB1E1314E719EF570133619432;
IL2CPP_EXTERN_C String_t* _stringLiteralC481C043E5196CA58AF237680B7863F318730265;
IL2CPP_EXTERN_C String_t* _stringLiteralC4FAF8C1C9FB3219F33A83C35B7080669AADB29B;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AB6D7CAAA2C71C1F92EEDF9509A983DD93155B;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0D1ABD36DF5A2F8A3DC1FE29ECFE90B5938E85;
IL2CPP_EXTERN_C String_t* _stringLiteralCF434128317AFD46713683E11F61F9AEEAB40ADA;
IL2CPP_EXTERN_C String_t* _stringLiteralD149AAC3DF8956F03AD5942F1E83FB341D9C4AE5;
IL2CPP_EXTERN_C String_t* _stringLiteralD2901C8360385F51919B4AE0533C0130C664E70D;
IL2CPP_EXTERN_C String_t* _stringLiteralD6CFAA9A8F507F384B1008F247D2327A3D2F1426;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C7B9D233CF6A9D0DAB9731AC8AD815983688E3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7EB11E2207A7B5B407CAE225BC43D7865F0EE3;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127;
IL2CPP_EXTERN_C String_t* _stringLiteralDD50EFB99A97900688536A7A197054A07C7F9A07;
IL2CPP_EXTERN_C String_t* _stringLiteralDFD3FC73AC7C839757DEF9B58CF965A6AF2EF0D1;
IL2CPP_EXTERN_C String_t* _stringLiteralE476AE81DFEF36801B560E96E60E07AAD2FDD950;
IL2CPP_EXTERN_C String_t* _stringLiteralE938F40FDC2C7A8D447AE14AF71009F0A8ACE7EA;
IL2CPP_EXTERN_C String_t* _stringLiteralE9796D4223EC8FC4092CA634C739783BA21DF435;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3D753EAC5F04835FA29EF2BAEA37660AF28CE8;
IL2CPP_EXTERN_C String_t* _stringLiteralEC10EADFBB8E6A514AC6A0692D5EE89500B5C78F;
IL2CPP_EXTERN_C String_t* _stringLiteralF113E6A59A1F969701A6DBC486BD64FA978D59A5;
IL2CPP_EXTERN_C String_t* _stringLiteralF40372F18424A17BEC0E677DD4D8DBE2100AEA1E;
IL2CPP_EXTERN_C String_t* _stringLiteralF67824E6FB9BB499761CFB981CBCD81090183D25;
IL2CPP_EXTERN_C String_t* _stringLiteralF7A5E86D9AA4843690FAA42EA33D846C750DB528;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E75E2980B7A700FACAC3AA968D5CA735A1E1CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF9FB4738C1EAC260DD55DA381E279B8EB63050E6;
IL2CPP_EXTERN_C String_t* _stringLiteralFA13E20F643CD2529BBF9115F06105DEC8D55A5C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB959CA30F30304AD69950831326A63B4F102186;
IL2CPP_EXTERN_C String_t* _stringLiteralFDEBB01761E29CA7D3CCB55549E82E116AD0FFCD;
IL2CPP_EXTERN_C String_t* _stringLiteralFE34A5566036903FCE3E0CEBAC53DFD920F981F0;
IL2CPP_EXTERN_C String_t* _stringLiteralFE66F51410AE9E46A95118DEAC7E947FBD748061;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE0A580F48877DEA2C0DA055F84AB388A27CDFF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA_mC4E5E8A07F44FD1ACA707F649E07D6AFB43D6C0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6_m0E630474CED10A89CB1E99FC495AAEDDC3EFB3BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27_mA8391CE63278EC8B545241B95C43623F5AD13466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowMessageU3Ed__71_System_Collections_IEnumerator_Reset_mFA2290377DAEDB39406D264ED7A815255C3B0E50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__57_System_Collections_IEnumerator_Reset_m62238490E4A140F7E8B923EF077DC1F9D88FDD06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateAbyssU3Ed__45_System_Collections_IEnumerator_Reset_mA881987AAAA1298E52236694EE0962BFA76A3265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateKinahU3Ed__46_System_Collections_IEnumerator_Reset_mA37D2120118A482606C41B624EF834D5B58489E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateLegionsU3Ed__47_System_Collections_IEnumerator_Reset_mA450041787A0B587313D36E179FA4A7F43D9AD31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateMembersU3Ed__48_System_Collections_IEnumerator_Reset_m1B10AB841A152BFB064105BAE5984949033CA84E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdatePlayersU3Ed__44_System_Collections_IEnumerator_Reset_m6A8098BBD2DAC51EC57061669D400CFCC9B75282_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
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

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
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

// AccountController/<ShowMessage>d__71
struct U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F  : public RuntimeObject
{
	// System.Int32 AccountController/<ShowMessage>d__71::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AccountController/<ShowMessage>d__71::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AccountController AccountController/<ShowMessage>d__71::<>4__this
	AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* ___U3CU3E4__this_2;
	// System.String AccountController/<ShowMessage>d__71::mess
	String_t* ___mess_3;
};

// AccountController/<Start>d__57
struct U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89  : public RuntimeObject
{
	// System.Int32 AccountController/<Start>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AccountController/<Start>d__57::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AccountController AccountController/<Start>d__57::<>4__this
	AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* ___U3CU3E4__this_2;
	// UnityEngine.WWW AccountController/<Start>d__57::<users>5__2
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3CusersU3E5__2_3;
};

// DatabasesController/<UpdateAbyss>d__45
struct U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07  : public RuntimeObject
{
	// System.Int32 DatabasesController/<UpdateAbyss>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DatabasesController/<UpdateAbyss>d__45::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DatabasesController DatabasesController/<UpdateAbyss>d__45::<>4__this
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* ___U3CU3E4__this_2;
	// UnityEngine.WWW DatabasesController/<UpdateAbyss>d__45::<abyss>5__2
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3CabyssU3E5__2_3;
};

// DatabasesController/<UpdateKinah>d__46
struct U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E  : public RuntimeObject
{
	// System.Int32 DatabasesController/<UpdateKinah>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DatabasesController/<UpdateKinah>d__46::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DatabasesController DatabasesController/<UpdateKinah>d__46::<>4__this
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* ___U3CU3E4__this_2;
	// UnityEngine.WWW DatabasesController/<UpdateKinah>d__46::<kinah>5__2
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3CkinahU3E5__2_3;
};

// DatabasesController/<UpdateLegions>d__47
struct U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC  : public RuntimeObject
{
	// System.Int32 DatabasesController/<UpdateLegions>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DatabasesController/<UpdateLegions>d__47::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DatabasesController DatabasesController/<UpdateLegions>d__47::<>4__this
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* ___U3CU3E4__this_2;
	// UnityEngine.WWW DatabasesController/<UpdateLegions>d__47::<legions>5__2
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3ClegionsU3E5__2_3;
};

// DatabasesController/<UpdateMembers>d__48
struct U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E  : public RuntimeObject
{
	// System.Int32 DatabasesController/<UpdateMembers>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DatabasesController/<UpdateMembers>d__48::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DatabasesController DatabasesController/<UpdateMembers>d__48::<>4__this
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* ___U3CU3E4__this_2;
	// UnityEngine.WWW DatabasesController/<UpdateMembers>d__48::<legionMembers>5__2
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3ClegionMembersU3E5__2_3;
};

// DatabasesController/<UpdatePlayers>d__44
struct U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E  : public RuntimeObject
{
	// System.Int32 DatabasesController/<UpdatePlayers>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DatabasesController/<UpdatePlayers>d__44::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DatabasesController DatabasesController/<UpdatePlayers>d__44::<>4__this
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* ___U3CU3E4__this_2;
	// UnityEngine.WWW DatabasesController/<UpdatePlayers>d__44::<players>5__2
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3CplayersU3E5__2_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____uwr_0;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AccountController
struct AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AccountController::allLoginName
	String_t* ___allLoginName_4;
	// System.String[] AccountController::registeredUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___registeredUsers_5;
	// System.String AccountController::adress
	String_t* ___adress_6;
	// System.String AccountController::forumUrl
	String_t* ___forumUrl_7;
	// System.String AccountController::client1Download
	String_t* ___client1Download_8;
	// System.String AccountController::launcherDownload
	String_t* ___launcherDownload_9;
	// System.String AccountController::duvidasForum
	String_t* ___duvidasForum_10;
	// System.Boolean AccountController::isLoggedIn
	bool ___isLoggedIn_11;
	// System.String AccountController::loginName
	String_t* ___loginName_12;
	// TMPro.TMP_Text AccountController::textLogInfo
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textLogInfo_13;
	// UnityEngine.UI.Button AccountController::btLogin
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btLogin_14;
	// Languages AccountController::languages
	int32_t ___languages_15;
	// TMPro.TMP_Dropdown AccountController::languageDown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___languageDown_16;
	// UnityEngine.UI.Button AccountController::btHome
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btHome_17;
	// UnityEngine.UI.Button AccountController::btPlayers
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btPlayers_18;
	// UnityEngine.UI.Button AccountController::btLegion
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btLegion_19;
	// UnityEngine.UI.Button AccountController::btDownload
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btDownload_20;
	// UnityEngine.UI.Button AccountController::btForum
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btForum_21;
	// UnityEngine.UI.Button AccountController::btDonation
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btDonation_22;
	// UnityEngine.UI.Button AccountController::btRegister
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btRegister_23;
	// SitePage AccountController::sitePage
	int32_t ___sitePage_24;
	// UnityEngine.GameObject AccountController::panelRegister
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelRegister_25;
	// UnityEngine.GameObject AccountController::panelHome
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelHome_26;
	// UnityEngine.GameObject AccountController::panelDownload
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelDownload_27;
	// UnityEngine.GameObject AccountController::panelDonate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelDonate_28;
	// TMPro.TMP_Text AccountController::textStatusTitle
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textStatusTitle_29;
	// TMPro.TMP_Text AccountController::textWelcome
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textWelcome_30;
	// TMPro.TMP_Text AccountController::textBulletinTitle
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textBulletinTitle_31;
	// TMPro.TMP_Text AccountController::textBulletin
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textBulletin_32;
	// UnityEngine.GameObject AccountController::panelTop10Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelTop10Player_33;
	// TMPro.TMP_Dropdown AccountController::top10Type
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___top10Type_34;
	// UnityEngine.GameObject AccountController::top10Title
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___top10Title_35;
	// UnityEngine.GameObject AccountController::panelMessage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelMessage_36;
	// TMPro.TMP_Text AccountController::textMessage
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textMessage_37;
	// TMPro.TMP_InputField AccountController::usernameInput
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___usernameInput_38;
	// TMPro.TMP_InputField AccountController::emailInput
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___emailInput_39;
	// TMPro.TMP_InputField AccountController::passwordInput
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___passwordInput_40;
	// System.String AccountController::pageTitle
	String_t* ___pageTitle_41;
	// System.String AccountController::menuHome
	String_t* ___menuHome_42;
	// System.String AccountController::menuTopPlayer
	String_t* ___menuTopPlayer_43;
	// System.String AccountController::menuLegion
	String_t* ___menuLegion_44;
	// System.String AccountController::menuDownload
	String_t* ___menuDownload_45;
	// System.String AccountController::menuForum
	String_t* ___menuForum_46;
	// System.String AccountController::menuDonation
	String_t* ___menuDonation_47;
	// System.String AccountController::menuRegister
	String_t* ___menuRegister_48;
	// System.String AccountController::messCreateAccount
	String_t* ___messCreateAccount_49;
	// System.String AccountController::messageError
	String_t* ___messageError_50;
	// System.String AccountController::loggedInInfo
	String_t* ___loggedInInfo_51;
	// System.String AccountController::loggedOffInfo
	String_t* ___loggedOffInfo_52;
	// System.String AccountController::btLoginLabel
	String_t* ___btLoginLabel_53;
	// System.String AccountController::btLogoutLabel
	String_t* ___btLogoutLabel_54;
	// System.String AccountController::bulletin
	String_t* ___bulletin_55;
	// System.String AccountController::bulletinTitle
	String_t* ___bulletinTitle_56;
	// System.String AccountController::serverStatusTitle
	String_t* ___serverStatusTitle_57;
	// System.String AccountController::welcome
	String_t* ___welcome_58;
	// PanelController AccountController::panelController
	PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* ___panelController_59;
	// DatabasesController AccountController::dbControl
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* ___dbControl_60;
};

// DatabasesController
struct DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> DatabasesController::topPlayerList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___topPlayerList_4;
	// System.Collections.Generic.List`1<System.String> DatabasesController::topLegionList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___topLegionList_5;
	// System.String[] DatabasesController::dataPlayers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dataPlayers_6;
	// System.String[] DatabasesController::dataAbyss
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dataAbyss_7;
	// System.String[] DatabasesController::dataLegions
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dataLegions_8;
	// System.String[] DatabasesController::dataMembers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dataMembers_9;
	// System.String[] DatabasesController::dataKinah
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dataKinah_10;
	// System.String DatabasesController::abyssGiantString
	String_t* ___abyssGiantString_11;
	// System.String DatabasesController::playersGiantString
	String_t* ___playersGiantString_12;
	// System.String DatabasesController::legionsGiantString
	String_t* ___legionsGiantString_13;
	// System.String DatabasesController::legionMembersGiantString
	String_t* ___legionMembersGiantString_14;
	// System.String DatabasesController::kinahGiantString
	String_t* ___kinahGiantString_15;
	// System.String[] DatabasesController::id_player
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___id_player_16;
	// System.String[] DatabasesController::name_player
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___name_player_17;
	// System.String[] DatabasesController::level_player
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___level_player_18;
	// System.String[] DatabasesController::race_player
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___race_player_19;
	// System.String[] DatabasesController::class_player
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___class_player_20;
	// System.String[] DatabasesController::id_player_Abyss
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___id_player_Abyss_21;
	// System.String[] DatabasesController::ap_Abyss
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ap_Abyss_22;
	// System.String[] DatabasesController::rank_Abyss
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rank_Abyss_23;
	// System.String[] DatabasesController::dailyKill_Abyss
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dailyKill_Abyss_24;
	// System.String[] DatabasesController::allKill_Abyss
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allKill_Abyss_25;
	// System.String[] DatabasesController::id_Legion
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___id_Legion_26;
	// System.String[] DatabasesController::name_Legion
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___name_Legion_27;
	// System.String[] DatabasesController::level_Legion
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___level_Legion_28;
	// System.String[] DatabasesController::cp_Legion
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___cp_Legion_29;
	// System.String[] DatabasesController::rankCp_Legion
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rankCp_Legion_30;
	// System.String[] DatabasesController::rankPos_Legion
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rankPos_Legion_31;
	// System.String[] DatabasesController::id_Legion_Member
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___id_Legion_Member_32;
	// System.String[] DatabasesController::id_Player_Member
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___id_Player_Member_33;
	// System.String[] DatabasesController::rank_Member
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rank_Member_34;
	// System.String[] DatabasesController::challenge_score_Member
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___challenge_score_Member_35;
	// System.String[] DatabasesController::id_PlayerKinah
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___id_PlayerKinah_36;
	// System.String[] DatabasesController::playerKinah
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playerKinah_37;
	// System.String DatabasesController::adress
	String_t* ___adress_38;
	// System.Int32 DatabasesController::counter
	int32_t ___counter_39;
	// System.Boolean DatabasesController::playerOk
	bool ___playerOk_40;
	// System.Boolean DatabasesController::abyssOk
	bool ___abyssOk_41;
	// System.Boolean DatabasesController::legionsOk
	bool ___legionsOk_42;
	// System.Boolean DatabasesController::membersOk
	bool ___membersOk_43;
	// System.Boolean DatabasesController::kinahOk
	bool ___kinahOk_44;
	// AccountController DatabasesController::acc
	AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* ___acc_45;
};

// HashcodeGenerator
struct HashcodeGenerator_t0172D3F77BA4E70D25FD7EF2F3B17B010D3D79EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ItemConfig
struct ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text ItemConfig::textIndex
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textIndex_4;
	// TMPro.TMP_Text ItemConfig::textName
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textName_5;
	// TMPro.TMP_Text ItemConfig::textRace
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textRace_6;
	// TMPro.TMP_Text ItemConfig::textLegion
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textLegion_7;
	// TMPro.TMP_Text ItemConfig::textKills
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textKills_8;
};

// PanelController
struct PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PanelController::itemPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___itemPrefab_4;
	// UnityEngine.Transform PanelController::content
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___content_5;
	// TMPro.TMP_Text PanelController::typeTitleOwner
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___typeTitleOwner_6;
	// TMPro.TMP_Text PanelController::typeTitleLeaderOrLegion
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___typeTitleLeaderOrLegion_7;
	// TMPro.TMP_Text PanelController::typeTitlePoint
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___typeTitlePoint_8;
	// DatabasesController PanelController::dbControl
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* ___dbControl_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
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

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// <PrivateImplementationDetails>

// <PrivateImplementationDetails>

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Security.Cryptography.HashAlgorithm

// System.Security.Cryptography.HashAlgorithm

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// UnityEngine.WWWForm

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// AccountController/<ShowMessage>d__71

// AccountController/<ShowMessage>d__71

// AccountController/<Start>d__57

// AccountController/<Start>d__57

// DatabasesController/<UpdateAbyss>d__45

// DatabasesController/<UpdateAbyss>d__45

// DatabasesController/<UpdateKinah>d__46

// DatabasesController/<UpdateKinah>d__46

// DatabasesController/<UpdateLegions>d__47

// DatabasesController/<UpdateLegions>d__47

// DatabasesController/<UpdateMembers>d__48

// DatabasesController/<UpdateMembers>d__48

// DatabasesController/<UpdatePlayers>d__44

// DatabasesController/<UpdatePlayers>d__44

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Rect

// UnityEngine.Rect

// System.Security.Cryptography.SHA1

// System.Security.Cryptography.SHA1

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// System.UInt32

// System.UInt32

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

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WWW

// UnityEngine.WWW

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AccountController

// AccountController

// DatabasesController

// DatabasesController

// HashcodeGenerator

// HashcodeGenerator

// ItemConfig

// ItemConfig

// PanelController

// PanelController

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
};

// TMPro.TMP_Dropdown

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_InputField

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void AccountController/<Start>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__57__ctor_m5F0A0EA2A5DB1298A992D9F4E14781E77FB9AF48 (U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean DatabasesController::DatabaseIsLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabasesController_DatabaseIsLoad_m23415A493A4FAF7291AD3BAECD657B26BE4689B3 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void TMPro.TMP_Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_options, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void AccountController::UpdateLangStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_UpdateLangStrings_mD72CD7EB2084B1CF9E258EE1CD4221328C54FEA9 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void AccountController::UpdateTop10List()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_UpdateTop10List_mF5C83189A47854D0B5F0F7367788C95C90798B77 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) ;
// System.Void PanelController::ClearChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_ClearChildren_mFBCB76FDDC84911E8F403F0BDEF7EA3DBA8CBF8E (PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* __this, const RuntimeMethod* method) ;
// System.Void PanelController::GetTopLegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_GetTopLegion_mC55C5ECCB422D808732CAFE72001B489698F732C (PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void PanelController::GetTopPlayer(TopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_GetTopPlayer_m8EF187323A2DC31F868063CFE4370D3C65DAFE07 (PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean AccountController::IsAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccountController_IsAllowed_m2CD2561A4EE1F617740CF6564AB8FF1BB8DE1D0B (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) ;
// System.Void AccountController::RegisterUser(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_RegisterUser_m5531F983216E92FB191E6690CB25440807A582BB (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, String_t* ___0_name, String_t* ___1_pass, String_t* ___2_email, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AccountController::ShowMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AccountController_ShowMessage_mB52849608EFA694F37370C2F882536634A02AA3F (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, String_t* ___0_mess, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___0_fieldName, String_t* ___1_value, const RuntimeMethod* method) ;
// System.String AccountController::EncodedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountController_EncodedString_mB3CBA21892C00B815088A8E94DC8A3D1A5C6DB04 (String_t* ___0_input, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mAA7DCD89AE9B79BD685BA8A1853C42C9A9B0C533 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___1_form, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void AccountController/<ShowMessage>d__71::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowMessageU3Ed__71__ctor_m735DCC6AF2F306D7190CB0C1AD542E4820217414 (U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void AccountController::UpdatePage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_UpdatePage_m9E6F45159317059506B2FE87D8B31B2D60750287 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, String_t* ___0_page, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PanelController>()
inline PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* Component_GetComponent_TisPanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27_mA8391CE63278EC8B545241B95C43623F5AD13466 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<DatabasesController>()
inline DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* Component_GetComponent_TisDatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6_m0E630474CED10A89CB1E99FC495AAEDDC3EFB3BA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void AccountController::ConfigDropTop10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_ConfigDropTop10_m8111443E1D806A72B9A8D4F0C2AFBC46457C6AAC (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) ;
// System.Void AccountController::ConfigDropdownnLang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_ConfigDropdownnLang_m07323C03EA00F867656CB882E8981BC9FD2FA14A (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.String UnityEngine.WWW::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void AccountController::UpdateLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_UpdateLanguage_mE6F89EBFCA2586D1F1B6EDD85BDF68942C159C0A (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AccountController>()
inline AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* Component_GetComponent_TisAccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA_mC4E5E8A07F44FD1ACA707F649E07D6AFB43D6C0D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void DatabasesController::RefreshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabasesController_RefreshData_mC285CF09286A8693D6829C3C2C40C215BB9A4A55 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void DatabasesController/<UpdatePlayers>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayersU3Ed__44__ctor_mEE6E21607FF25F51D153D3DF4D47BB63EB861C7E (U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void DatabasesController/<UpdateAbyss>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateAbyssU3Ed__45__ctor_m0BE70A3E92514015EED1FB060C65DC41A5F07C53 (U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void DatabasesController/<UpdateKinah>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateKinahU3Ed__46__ctor_m41FD0AC9EA467D65D5CDCA477C968FE423F6FC3B (U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void DatabasesController/<UpdateLegions>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateLegionsU3Ed__47__ctor_mB1E79A17BDFB7A0A1FBD32AF78951C5301C26456 (U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void DatabasesController/<UpdateMembers>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateMembersU3Ed__48__ctor_mA5219292B2D2DF45C30661B0C22CEB0896412A29 (U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.String DatabasesController::GetTopKillerData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabasesController_GetTopKillerData_m8EE00864105A3D37B16A252B08A835B8FE4009C6 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String DatabasesController::GetTopRichData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabasesController_GetTopRichData_m90C6D73CDADC135270C3B1EED6049F1D9C11E961 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String DatabasesController::GetTopLegionsData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabasesController_GetTopLegionsData_m9A223CC10EA151E781F53C324AA2B6E8C7E2DBF1 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> DatabasesController::GetTopLegionList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* DatabasesController_GetTopLegionList_mCBC0B95FBCEF54B30E29231140E527E3CDEE65BC (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ItemConfig>()
inline ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1* GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ItemConfig::SetupItem(System.String,System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemConfig_SetupItem_m68EDD6CAE35CF12C44195D07BB4F89926E33D664 (ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1* __this, String_t* ___0_name, String_t* ___1_race, String_t* ___2_legion, String_t* ___3_record, int32_t ___4_index, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> DatabasesController::GetTopPlayerList(TopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* DatabasesController_GetTopPlayerList_m1523A789F0CB95D34987E6A6C884F1135AFA42CC (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Collections.IEnumerator AccountController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AccountController_Start_m405467A4564CC06A7A92FA36786B2D57DAA5BF03 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89* L_0 = (U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89*)il2cpp_codegen_object_new(U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89_il2cpp_TypeInfo_var);
		U3CStartU3Ed__57__ctor_m5F0A0EA2A5DB1298A992D9F4E14781E77FB9AF48(L_0, 0, NULL);
		U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void AccountController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_Update_m8885E255FC72E7C69BD6C54F25B7384022CE0F1C (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btPlayers.interactable = dbControl.DatabaseIsLoad();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btPlayers_18;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_1 = __this->___dbControl_60;
		bool L_2;
		L_2 = DatabasesController_DatabaseIsLoad_m23415A493A4FAF7291AD3BAECD657B26BE4689B3(L_1, NULL);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, L_2, NULL);
		// btLegion.interactable = dbControl.DatabaseIsLoad();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___btLegion_19;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_4 = __this->___dbControl_60;
		bool L_5;
		L_5 = DatabasesController_DatabaseIsLoad_m23415A493A4FAF7291AD3BAECD657B26BE4689B3(L_4, NULL);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_3, L_5, NULL);
		// top10Type.interactable = dbControl.DatabaseIsLoad();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_6 = __this->___top10Type_34;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_7 = __this->___dbControl_60;
		bool L_8;
		L_8 = DatabasesController_DatabaseIsLoad_m23415A493A4FAF7291AD3BAECD657B26BE4689B3(L_7, NULL);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_6, L_8, NULL);
		// top10Type.gameObject.SetActive(!top10Title.activeSelf);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_9 = __this->___top10Type_34;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___top10Title_35;
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_11, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), NULL);
		// if (isLoggedIn)
		bool L_13 = __this->___isLoggedIn_11;
		if (!L_13)
		{
			goto IL_00a0;
		}
	}
	{
		// textLogInfo.text = $"{loggedInInfo} {loginName}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_14 = __this->___textLogInfo_13;
		String_t* L_15 = __this->___loggedInInfo_51;
		String_t* L_16 = __this->___loginName_12;
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_15, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_16, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_17);
		// TextMeshProUGUI textHome = btLogin.GetComponentInChildren<TextMeshProUGUI>(); textHome.text = btLogoutLabel;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___btLogin_14;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19;
		L_19 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_18, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// TextMeshProUGUI textHome = btLogin.GetComponentInChildren<TextMeshProUGUI>(); textHome.text = btLogoutLabel;
		String_t* L_20 = __this->___btLogoutLabel_54;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_20);
		return;
	}

IL_00a0:
	{
		// textLogInfo.text = loggedOffInfo;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_21 = __this->___textLogInfo_13;
		String_t* L_22 = __this->___loggedOffInfo_52;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_21, L_22);
		// TextMeshProUGUI textHome = btLogin.GetComponentInChildren<TextMeshProUGUI>(); textHome.text = btLoginLabel;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___btLogin_14;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24;
		L_24 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_23, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// TextMeshProUGUI textHome = btLogin.GetComponentInChildren<TextMeshProUGUI>(); textHome.text = btLoginLabel;
		String_t* L_25 = __this->___btLoginLabel_53;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_25);
		// }
		return;
	}
}
// System.Void AccountController::ConfigDropTop10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_ConfigDropTop10_m8111443E1D806A72B9A8D4F0C2AFBC46457C6AAC (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01F123C54BAB9FF01C9E226B15CF801E68AA5B3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral646CA5258EB95E43F153A98440BBE85229E6B5CC);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// List<string> topType = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// topType.Add("Top 10 Killer");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = V_0;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteral646CA5258EB95E43F153A98440BBE85229E6B5CC, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// topType.Add("Top 10 Rich");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = V_0;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteral01F123C54BAB9FF01C9E226B15CF801E68AA5B3C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// top10Type.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_3 = __this->___top10Type_34;
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_3, NULL);
		// top10Type.AddOptions(topType);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_4 = __this->___top10Type_34;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = V_0;
		TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void AccountController::ConfigDropdownnLang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_ConfigDropdownnLang_m07323C03EA00F867656CB882E8981BC9FD2FA14A (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6803B1012EDF65A170A0415C22F4F77BFF00497E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral832B0291560BC2189BC979D77FCF2E1B37C24EC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83931E04BA8B23B2FE65ADADAAB8343DAA3D9DA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB959CA30F30304AD69950831326A63B4F102186);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// List<string> lang = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// lang.Add("English");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = V_0;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteralDCCF22B1EB35EC58FFEB04A8C396594903C38127, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// lang.Add("Portugu?s");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = V_0;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteral832B0291560BC2189BC979D77FCF2E1B37C24EC6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// lang.Add("Fran?ais");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = V_0;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteral83931E04BA8B23B2FE65ADADAAB8343DAA3D9DA9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// lang.Add("Deutsch");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = V_0;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteral6803B1012EDF65A170A0415C22F4F77BFF00497E, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// lang.Add("???????");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = V_0;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, _stringLiteralFB959CA30F30304AD69950831326A63B4F102186, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// languageDown.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_6 = __this->___languageDown_16;
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_6, NULL);
		// languageDown.AddOptions(lang);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_7 = __this->___languageDown_16;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = V_0;
		TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void AccountController::UpdateLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_UpdateLanguage_mE6F89EBFCA2586D1F1B6EDD85BDF68942C159C0A (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (languageDown.value)
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___languageDown_16;
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_003a;
			}
			case 3:
			{
				goto IL_0043;
			}
			case 4:
			{
				goto IL_004c;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_0028:
	{
		// languages = Languages.ENGLISH;
		__this->___languages_15 = 0;
		// break;
		goto IL_0053;
	}

IL_0031:
	{
		// languages = Languages.PORTUGUES;
		__this->___languages_15 = 1;
		// break;
		goto IL_0053;
	}

IL_003a:
	{
		// languages = Languages.FRANCAIS;
		__this->___languages_15 = 2;
		// break;
		goto IL_0053;
	}

IL_0043:
	{
		// languages = Languages.DEUTSCH;
		__this->___languages_15 = 3;
		// break;
		goto IL_0053;
	}

IL_004c:
	{
		// languages = Languages.PYCCKNN;
		__this->___languages_15 = 4;
	}

IL_0053:
	{
		// UpdateLangStrings();
		AccountController_UpdateLangStrings_mD72CD7EB2084B1CF9E258EE1CD4221328C54FEA9(__this, NULL);
		// TextMeshProUGUI textHome = btHome.GetComponentInChildren<TextMeshProUGUI>(); textHome.text = menuHome;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___btHome_17;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4;
		L_4 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_3, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// TextMeshProUGUI textHome = btHome.GetComponentInChildren<TextMeshProUGUI>(); textHome.text = menuHome;
		String_t* L_5 = __this->___menuHome_42;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_5);
		// TextMeshProUGUI textPlayers = btPlayers.GetComponentInChildren<TextMeshProUGUI>(); textPlayers.text = menuTopPlayer;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___btPlayers_18;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7;
		L_7 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_6, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// TextMeshProUGUI textPlayers = btPlayers.GetComponentInChildren<TextMeshProUGUI>(); textPlayers.text = menuTopPlayer;
		String_t* L_8 = __this->___menuTopPlayer_43;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_8);
		// TextMeshProUGUI textLegion = btLegion.GetComponentInChildren<TextMeshProUGUI>(); textLegion.text = menuLegion;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___btLegion_19;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10;
		L_10 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_9, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// TextMeshProUGUI textLegion = btLegion.GetComponentInChildren<TextMeshProUGUI>(); textLegion.text = menuLegion;
		String_t* L_11 = __this->___menuLegion_44;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_11);
		// TextMeshProUGUI textDownload = btDownload.GetComponentInChildren<TextMeshProUGUI>(); textDownload.text = menuDownload;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___btDownload_20;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13;
		L_13 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_12, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// TextMeshProUGUI textDownload = btDownload.GetComponentInChildren<TextMeshProUGUI>(); textDownload.text = menuDownload;
		String_t* L_14 = __this->___menuDownload_45;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_14);
		// TextMeshProUGUI textForum = btForum.GetComponentInChildren<TextMeshProUGUI>(); textForum.text = menuForum;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = __this->___btForum_21;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16;
		L_16 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_15, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// TextMeshProUGUI textForum = btForum.GetComponentInChildren<TextMeshProUGUI>(); textForum.text = menuForum;
		String_t* L_17 = __this->___menuForum_46;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_17);
		// TextMeshProUGUI textDonate = btDonation.GetComponentInChildren<TextMeshProUGUI>(); textDonate.text = menuDonation;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___btDonation_22;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19;
		L_19 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_18, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// TextMeshProUGUI textDonate = btDonation.GetComponentInChildren<TextMeshProUGUI>(); textDonate.text = menuDonation;
		String_t* L_20 = __this->___menuDonation_47;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_20);
		// TextMeshProUGUI textRegister = btRegister.GetComponentInChildren<TextMeshProUGUI>(); textRegister.text = menuRegister;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = __this->___btRegister_23;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_22;
		L_22 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_21, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		// TextMeshProUGUI textRegister = btRegister.GetComponentInChildren<TextMeshProUGUI>(); textRegister.text = menuRegister;
		String_t* L_23 = __this->___menuRegister_48;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_22, L_23);
		// textStatusTitle.text = serverStatusTitle;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_24 = __this->___textStatusTitle_29;
		String_t* L_25 = __this->___serverStatusTitle_57;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_25);
		// textBulletinTitle.text = bulletinTitle;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_26 = __this->___textBulletinTitle_31;
		String_t* L_27 = __this->___bulletinTitle_56;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_27);
		// textBulletin.text = bulletin;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_28 = __this->___textBulletin_32;
		String_t* L_29 = __this->___bulletin_55;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_28, L_29);
		// textWelcome.text = welcome;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_30 = __this->___textWelcome_30;
		String_t* L_31 = __this->___welcome_58;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_30, L_31);
		// }
		return;
	}
}
// System.Void AccountController::UpdatePage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_UpdatePage_m9E6F45159317059506B2FE87D8B31B2D60750287 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, String_t* ___0_page, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F540DC73E7918F2986E2035FF401FADE5070178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20ACB49333EED829465C61BCA5A97687BA6C074E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C5DC689F2A849F0CB7135B0BA822E210C1663D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0AD273EE126EDEB1E1314E719EF570133619432);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC481C043E5196CA58AF237680B7863F318730265);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6CFAA9A8F507F384B1008F247D2327A3D2F1426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7EB11E2207A7B5B407CAE225BC43D7865F0EE3);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// top10Title.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___top10Title_35;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		String_t* L_1 = ___0_page;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)850362378)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)761819584)))))
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)385437235))))
		{
			goto IL_00bb;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)761819584))))
		{
			goto IL_0088;
		}
	}
	{
		return;
	}

IL_0037:
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)822653945))))
		{
			goto IL_0099;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)850362378))))
		{
			goto IL_00dd;
		}
	}
	{
		return;
	}

IL_004b:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-1434350201)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1786409130))))
		{
			goto IL_00ee;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1434350201))))
		{
			goto IL_00cc;
		}
	}
	{
		return;
	}

IL_0067:
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-996130575))))
		{
			goto IL_00aa;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-758594930)))))
		{
			goto IL_02dd;
		}
	}
	{
		String_t* L_14 = ___0_page;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97, NULL);
		if (L_15)
		{
			goto IL_00ff;
		}
	}
	{
		return;
	}

IL_0088:
	{
		String_t* L_16 = ___0_page;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralD6CFAA9A8F507F384B1008F247D2327A3D2F1426, NULL);
		if (L_17)
		{
			goto IL_013c;
		}
	}
	{
		return;
	}

IL_0099:
	{
		String_t* L_18 = ___0_page;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral9C5DC689F2A849F0CB7135B0BA822E210C1663D8, NULL);
		if (L_19)
		{
			goto IL_0179;
		}
	}
	{
		return;
	}

IL_00aa:
	{
		String_t* L_20 = ___0_page;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralDA7EB11E2207A7B5B407CAE225BC43D7865F0EE3, NULL);
		if (L_21)
		{
			goto IL_01b6;
		}
	}
	{
		return;
	}

IL_00bb:
	{
		String_t* L_22 = ___0_page;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralC0AD273EE126EDEB1E1314E719EF570133619432, NULL);
		if (L_23)
		{
			goto IL_01f9;
		}
	}
	{
		return;
	}

IL_00cc:
	{
		String_t* L_24 = ___0_page;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralC481C043E5196CA58AF237680B7863F318730265, NULL);
		if (L_25)
		{
			goto IL_0258;
		}
	}
	{
		return;
	}

IL_00dd:
	{
		String_t* L_26 = ___0_page;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0F540DC73E7918F2986E2035FF401FADE5070178, NULL);
		if (L_27)
		{
			goto IL_0295;
		}
	}
	{
		return;
	}

IL_00ee:
	{
		String_t* L_28 = ___0_page;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral20ACB49333EED829465C61BCA5A97687BA6C074E, NULL);
		if (L_29)
		{
			goto IL_02d2;
		}
	}
	{
		return;
	}

IL_00ff:
	{
		// panelRegister.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// panelTop10Player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___panelTop10Player_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
		// panelHome.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___panelHome_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)1, NULL);
		// panelDownload.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___panelDownload_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// panelDonate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___panelDonate_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
		// break;
		return;
	}

IL_013c:
	{
		// panelRegister.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
		// panelTop10Player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___panelTop10Player_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
		// panelHome.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___panelHome_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
		// panelDownload.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___panelDownload_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// panelDonate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___panelDonate_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// break;
		return;
	}

IL_0179:
	{
		// panelDownload.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___panelDownload_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)1, NULL);
		// panelRegister.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// panelTop10Player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___panelTop10Player_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// panelHome.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___panelHome_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// panelDonate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___panelDonate_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)0, NULL);
		// break;
		return;
	}

IL_01b6:
	{
		// UpdateTop10List();
		AccountController_UpdateTop10List_mF5C83189A47854D0B5F0F7367788C95C90798B77(__this, NULL);
		// panelRegister.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
		// panelTop10Player.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___panelTop10Player_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		// panelHome.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___panelHome_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// panelDownload.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___panelDownload_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
		// panelDonate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___panelDonate_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
		// break;
		return;
	}

IL_01f9:
	{
		// top10Title.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___top10Title_35;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)1, NULL);
		// panelController.ClearChildren();
		PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* L_51 = __this->___panelController_59;
		PanelController_ClearChildren_mFBCB76FDDC84911E8F403F0BDEF7EA3DBA8CBF8E(L_51, NULL);
		// panelController.GetTopLegion();
		PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* L_52 = __this->___panelController_59;
		PanelController_GetTopLegion_mC55C5ECCB422D808732CAFE72001B489698F732C(L_52, NULL);
		// panelRegister.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)0, NULL);
		// panelTop10Player.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___panelTop10Player_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)1, NULL);
		// panelHome.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___panelHome_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)0, NULL);
		// panelDownload.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___panelDownload_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)0, NULL);
		// panelDonate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___panelDonate_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)0, NULL);
		// break;
		return;
	}

IL_0258:
	{
		// panelRegister.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)0, NULL);
		// panelTop10Player.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___panelTop10Player_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)1, NULL);
		// panelHome.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___panelHome_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)0, NULL);
		// panelDownload.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = __this->___panelDownload_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_61, (bool)0, NULL);
		// panelDonate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___panelDonate_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
		// break;
		return;
	}

IL_0295:
	{
		// panelRegister.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_63, (bool)0, NULL);
		// panelTop10Player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = __this->___panelTop10Player_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)0, NULL);
		// panelHome.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = __this->___panelHome_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_65, (bool)0, NULL);
		// panelDownload.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___panelDownload_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_66, (bool)0, NULL);
		// panelDonate.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___panelDonate_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_67, (bool)1, NULL);
		// break;
		return;
	}

IL_02d2:
	{
		// Application.OpenURL(forumUrl);
		String_t* L_68 = __this->___forumUrl_7;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_68, NULL);
	}

IL_02dd:
	{
		// }
		return;
	}
}
// System.Void AccountController::DownloadClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_DownloadClient_m7FA25085F0344F24F7521F32DFCC78A306818EE1 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(client1Download);
		String_t* L_0 = __this->___client1Download_8;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// panelRegister.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// panelTop10Player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___panelTop10Player_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// panelHome.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___panelHome_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// panelDownload.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___panelDownload_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// panelDonate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___panelDonate_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AccountController::DownloadLauncher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_DownloadLauncher_mF8B7E425DFB3F6B5823944DA976FBF911F184136 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(launcherDownload);
		String_t* L_0 = __this->___launcherDownload_9;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// panelRegister.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// panelTop10Player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___panelTop10Player_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// panelHome.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___panelHome_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// panelDownload.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___panelDownload_27;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// panelDonate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___panelDonate_28;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AccountController::UpdateTop10List()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_UpdateTop10List_mF5C83189A47854D0B5F0F7367788C95C90798B77 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// panelController.ClearChildren();
		PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* L_0 = __this->___panelController_59;
		PanelController_ClearChildren_mFBCB76FDDC84911E8F403F0BDEF7EA3DBA8CBF8E(L_0, NULL);
		// switch (top10Type.value)
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_1 = __this->___top10Type_34;
		int32_t L_2;
		L_2 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_001f:
	{
		// panelController.GetTopPlayer(TopType.KILLER);
		PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* L_5 = __this->___panelController_59;
		PanelController_GetTopPlayer_m8EF187323A2DC31F868063CFE4370D3C65DAFE07(L_5, 0, NULL);
		// break;
		return;
	}

IL_002c:
	{
		// panelController.GetTopPlayer(TopType.RICH);
		PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* L_6 = __this->___panelController_59;
		PanelController_GetTopPlayer_m8EF187323A2DC31F868063CFE4370D3C65DAFE07(L_6, 1, NULL);
		// }
		return;
	}
}
// System.Void AccountController::TryToRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_TryToRegister_mC3178B73B1C06055588DA30B4DB9D44D7C4560A3 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral030F16BC0F990A3372162DAD27610D3E3B1C745C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FE09FA37FC6E72FF9D8869C66DD1C3D7801B098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A53B0C4B966CB7E5B0BDEBAACEE41D9E39675F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA80E40578FF312F07602F5DCA6A32DC4B852194A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7A5E86D9AA4843690FAA42EA33D846C750DB528);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(usernameInput.text == "" || passwordInput.text == "" || emailInput.text == "")
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___usernameInput_38;
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_2)
		{
			goto IL_0045;
		}
	}
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___passwordInput_40;
		String_t* L_4;
		L_4 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = __this->___emailInput_39;
		String_t* L_7;
		L_7 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}

IL_0045:
	{
		// Debug.Log("Username, Email or Password can't be empty!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF7A5E86D9AA4843690FAA42EA33D846C750DB528, NULL);
		return;
	}

IL_0050:
	{
		// if(usernameInput.text.Length < 4)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_9 = __this->___usernameInput_38;
		String_t* L_10;
		L_10 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_9, NULL);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_11) >= ((int32_t)4)))
		{
			goto IL_006e;
		}
	}
	{
		// Debug.Log("Username, deve conter no m?nimo 4 caracteres!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral030F16BC0F990A3372162DAD27610D3E3B1C745C, NULL);
		return;
	}

IL_006e:
	{
		// }else if (!IsAllowed())
		bool L_12;
		L_12 = AccountController_IsAllowed_m2CD2561A4EE1F617740CF6564AB8FF1BB8DE1D0B(__this, NULL);
		if (L_12)
		{
			goto IL_0081;
		}
	}
	{
		// Debug.Log("Username, j? cadastrado por outro player!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA80E40578FF312F07602F5DCA6A32DC4B852194A, NULL);
		return;
	}

IL_0081:
	{
		// if(emailInput.text.Length < 6)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_13 = __this->___emailInput_39;
		String_t* L_14;
		L_14 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_13, NULL);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((((int32_t)L_15) >= ((int32_t)6)))
		{
			goto IL_009f;
		}
	}
	{
		// Debug.Log("Email inv?lido!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3FE09FA37FC6E72FF9D8869C66DD1C3D7801B098, NULL);
		return;
	}

IL_009f:
	{
		// }else if (passwordInput.text.Length < 6)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_16 = __this->___passwordInput_40;
		String_t* L_17;
		L_17 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_16, NULL);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		if ((((int32_t)L_18) >= ((int32_t)6)))
		{
			goto IL_00bd;
		}
	}
	{
		// Debug.Log("A senha deve conter no minimo 6 caracteres!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5A53B0C4B966CB7E5B0BDEBAACEE41D9E39675F5, NULL);
		return;
	}

IL_00bd:
	{
		// RegisterUser(usernameInput.text, passwordInput.text, emailInput.text);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_19 = __this->___usernameInput_38;
		String_t* L_20;
		L_20 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_19, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_21 = __this->___passwordInput_40;
		String_t* L_22;
		L_22 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_21, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_23 = __this->___emailInput_39;
		String_t* L_24;
		L_24 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_23, NULL);
		AccountController_RegisterUser_m5531F983216E92FB191E6690CB25440807A582BB(__this, L_20, L_22, L_24, NULL);
		// panelRegister.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___panelRegister_25;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// UpdateLangStrings();
		AccountController_UpdateLangStrings_mD72CD7EB2084B1CF9E258EE1CD4221328C54FEA9(__this, NULL);
		// StartCoroutine(ShowMessage(messCreateAccount));
		String_t* L_26 = __this->___messCreateAccount_49;
		RuntimeObject* L_27;
		L_27 = AccountController_ShowMessage_mB52849608EFA694F37370C2F882536634A02AA3F(__this, L_26, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_28;
		L_28 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_27, NULL);
		// }
		return;
	}
}
// System.Void AccountController::RegisterUser(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_RegisterUser_m5531F983216E92FB191E6690CB25440807A582BB (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, String_t* ___0_name, String_t* ___1_pass, String_t* ___2_email, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E3F0867B7BFEAAB3FBA09305140F97020715FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB03998622C2A73776184FC3439107F83698B618D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD88F7ABD34800BFA7DF5DB79ED81C32BA8736CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9796D4223EC8FC4092CA634C739783BA21DF435);
		s_Il2CppMethodInitialized = true;
	}
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_0 = NULL;
	{
		// WWWForm form = new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_0 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_0, NULL);
		V_0 = L_0;
		// form.AddField("namePost", name);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_1 = V_0;
		String_t* L_2 = ___0_name;
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_1, _stringLiteralBD88F7ABD34800BFA7DF5DB79ED81C32BA8736CB, L_2, NULL);
		// form.AddField("passwordPost", EncodedString(pass));
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_3 = V_0;
		String_t* L_4 = ___1_pass;
		String_t* L_5;
		L_5 = AccountController_EncodedString_mB3CBA21892C00B815088A8E94DC8A3D1A5C6DB04(L_4, NULL);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_3, _stringLiteralE9796D4223EC8FC4092CA634C739783BA21DF435, L_5, NULL);
		// form.AddField("emailPost", email);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_6 = V_0;
		String_t* L_7 = ___2_email;
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_6, _stringLiteralB03998622C2A73776184FC3439107F83698B618D, L_7, NULL);
		// WWW register = new WWW($"http://{adress}/insertuser.php", form);
		String_t* L_8 = __this->___adress_6;
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C, L_8, _stringLiteral7E3F0867B7BFEAAB3FBA09305140F97020715FFB, NULL);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_10 = V_0;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		WWW__ctor_mAA7DCD89AE9B79BD685BA8A1853C42C9A9B0C533(L_11, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.String AccountController::Base64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountController_Base64_m7DFA7491CF28E10A41E0B5A39720403693810F13 (String_t* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] data = Encoding.UTF8.GetBytes(input);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		// return Convert.ToBase64String(data);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_2, NULL);
		return L_3;
	}
}
// System.String AccountController::EncodedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountController_EncodedString_mB3CBA21892C00B815088A8E94DC8A3D1A5C6DB04 (String_t* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* V_2 = NULL;
	{
		// byte[] inputBytes = Encoding.UTF8.GetBytes(input);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// using (SHA1 sha1 = SHA1.Create())
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_3;
		L_3 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				{
					SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0025;
					}
				}
				{
					SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_5 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0025:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// hashBytes = sha1.ComputeHash(inputBytes);
			SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_6 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_6, L_7, NULL);
			V_1 = L_8;
			// }
			goto IL_0026;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0026:
	{
		// return Convert.ToBase64String(hashBytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_9, NULL);
		return L_10;
	}
}
// System.String AccountController::ConvertToSha1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountController_ConvertToSha1_m33CA060BE24E17D0092A0A047B868D2CFD17B187 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, String_t* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* V_2 = NULL;
	{
		// byte[] inputBytes = Encoding.UTF8.GetBytes(input);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// using (SHA1 sha1 = SHA1.Create())
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_3;
		L_3 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				{
					SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0025;
					}
				}
				{
					SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_5 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0025:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// hashBytes = sha1.ComputeHash(inputBytes);
			SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_6 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_6, L_7, NULL);
			V_1 = L_8;
			// }
			goto IL_0026;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0026:
	{
		// string hashString = BitConverter.ToString(hashBytes).Replace("-", "").ToLower();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420(L_9, NULL);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_10, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		String_t* L_12;
		L_12 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_11, NULL);
		// return hashString;
		return L_12;
	}
}
// System.Collections.IEnumerator AccountController::ShowMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AccountController_ShowMessage_mB52849608EFA694F37370C2F882536634A02AA3F (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, String_t* ___0_mess, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* L_0 = (U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F*)il2cpp_codegen_object_new(U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F_il2cpp_TypeInfo_var);
		U3CShowMessageU3Ed__71__ctor_m735DCC6AF2F306D7190CB0C1AD542E4820217414(L_0, 0, NULL);
		U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* L_2 = L_1;
		String_t* L_3 = ___0_mess;
		L_2->___mess_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___mess_3), (void*)L_3);
		return L_2;
	}
}
// System.Void AccountController::CloseMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_CloseMessage_m7B37767B9A01540AB02840346A39C2EC7C8D4CEF (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA13E20F643CD2529BBF9115F06105DEC8D55A5C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine("ShowMessage");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteralFA13E20F643CD2529BBF9115F06105DEC8D55A5C, NULL);
		// panelMessage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panelMessage_36;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AccountController::ClosePanel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_ClosePanel_m5D73CB1AE24AF29ABA79529A4DC6CF5CAC2E732A (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// panel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_panel;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// UpdatePage("home");
		AccountController_UpdatePage_m9E6F45159317059506B2FE87D8B31B2D60750287(__this, _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97, NULL);
		// }
		return;
	}
}
// System.Boolean AccountController::IsAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccountController_IsAllowed_m2CD2561A4EE1F617740CF6564AB8FF1BB8DE1D0B (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (string user in registeredUsers)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___registeredUsers_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000b:
	{
		// foreach (string user in registeredUsers)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// if(user == usernameInput.text)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_5 = __this->___usernameInput_38;
		String_t* L_6;
		L_6 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		// foreach (string user in registeredUsers)
		int32_t L_9 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void AccountController::UpdateLangStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController_UpdateLangStrings_mD72CD7EB2084B1CF9E258EE1CD4221328C54FEA9 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03489ECB3C2DA90C1A27C968B4CCBF2D631BB03A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07734A0D0FCDFA1D06FBE39F1A342E02E9945108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07A1EF185BA3E731C90C374323FE65C9972A771F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F56241073C692EA251B172E7D230EB00260A779);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12C2223C5A2B3B3D1078DBDB393866FF8FB2CBB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15190CA1318A6715E4BD7B284EBA51829E582AA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral196834A32301D2A9E17AC7901E15283E120F5A5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AF60E124910CBC4D649903160A22D3AEFA7BA87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B2305DD4F982A49FC0790DAE2CFD8386692D9F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22E972F1BD1EA0A843AA6C22A05B81A33C1C9736);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral289AD221E512BD27941854A4B9E58975FFB33BB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B3AD6333F669606E87648FD08F4CF7B98B051B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3286B8846F3F2A4AA18A81E68195CB88C06C98B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B4D65C1B2F185776486689A5F7ACBA9363D4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37E234BE1F02DECDF60E288E0D81CAE673F43976);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420957ECA2CE9283693EA75554F96EA3ACCAD441);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral441E816B5D9089D617190701600ACAC19D39A420);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49EA153F87817AAA7A31C220FA0AE24ABEAD425F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AF27E8EB6B424A7BBF443B78F6CBB98366CF15C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DC2C47D6DD84E69008084D114E5AF9848B39EC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F3BD1698513EAFAB952C879CB140F37391E3570);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral555EF4BA7AFB2D2397A914C021673FB81BDD2A98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57B762EF6B7A525CDE80D3F400DA3CFFFBD5CAA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60AEB8A203BF23524FC74BE0ADEEA3C90DD9A429);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral631E528293AC38E744257B0AE6F4889531E0FDC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A31BC52E5305A6E92147A55D69FDC8344179016);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AA9ED5D2AC4E0421DC76A927D1D6DE51F831A45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71374DF935888E0953B9B8234717BCFBBDC00CA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76665EC7E8DA3B0D57E33E44DC288D212A9E73BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76EF9D0B5C42EFB496921BA036360A2D6C2BE0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D4FF0184A4A79FAB1173BD1C7626D6AC13225A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral853C3CD84D5C41D061EE7DA18561825FE16BD86E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BC320BB85EBFFB6FFDDFC1AA9F32B1DA2E5B9DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969185362AFA3C937F980AACE75732DFCFBA3C57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C6E836A58B7DE42279ADEF1C841C4151E9AE3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DB4D1DFFDA5137B7B696C570E8AA30429EB94AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2AD821658DA79C01191BBD3BD43012E5C08CFDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA94EAA33BCCD18BFAD560E130C78CF1C48A8410C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA693C0072C92490801B3905DA2D442D9864373D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1FFF8FA40C54374DE1806FB8BE0662EF0810D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB01D53BA71E8F5218B393B96E92FFA1C69B93029);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92988FBF233C1338710A604DDFC37CA4BF585C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC9755CD05B2C971391C4C78FAF856BDCFA4BA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4FAF8C1C9FB3219F33A83C35B7080669AADB29B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7AB6D7CAAA2C71C1F92EEDF9509A983DD93155B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD149AAC3DF8956F03AD5942F1E83FB341D9C4AE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2901C8360385F51919B4AE0533C0130C664E70D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD50EFB99A97900688536A7A197054A07C7F9A07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE938F40FDC2C7A8D447AE14AF71009F0A8ACE7EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3D753EAC5F04835FA29EF2BAEA37660AF28CE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC10EADFBB8E6A514AC6A0692D5EE89500B5C78F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF40372F18424A17BEC0E677DD4D8DBE2100AEA1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67824E6FB9BB499761CFB981CBCD81090183D25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9FB4738C1EAC260DD55DA381E279B8EB63050E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDEBB01761E29CA7D3CCB55549E82E116AD0FFCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE34A5566036903FCE3E0CEBAC53DFD920F981F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE66F51410AE9E46A95118DEAC7E947FBD748061);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEE0A580F48877DEA2C0DA055F84AB388A27CDFF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (languages)
		int32_t L_0 = __this->___languages_15;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d3;
			}
			case 2:
			{
				goto IL_0184;
			}
			case 3:
			{
				goto IL_0209;
			}
			case 4:
			{
				goto IL_028e;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		// menuHome = "Home";
		__this->___menuHome_42 = _stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuHome_42), (void*)_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F);
		// welcome = "Welcome to";
		__this->___welcome_58 = _stringLiteralF9FB4738C1EAC260DD55DA381E279B8EB63050E6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___welcome_58), (void*)_stringLiteralF9FB4738C1EAC260DD55DA381E279B8EB63050E6);
		// bulletin = "Register!<br>Download the Aion 7.7 client and install our launcher.<br>Come and have fun with us in this new world!";
		__this->___bulletin_55 = _stringLiteralFEE0A580F48877DEA2C0DA055F84AB388A27CDFF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bulletin_55), (void*)_stringLiteralFEE0A580F48877DEA2C0DA055F84AB388A27CDFF);
		// serverStatusTitle = "Server Status:";
		__this->___serverStatusTitle_57 = _stringLiteral60AEB8A203BF23524FC74BE0ADEEA3C90DD9A429;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serverStatusTitle_57), (void*)_stringLiteral60AEB8A203BF23524FC74BE0ADEEA3C90DD9A429);
		// bulletinTitle = "Bulletin Board";
		__this->___bulletinTitle_56 = _stringLiteral76EF9D0B5C42EFB496921BA036360A2D6C2BE0E4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bulletinTitle_56), (void*)_stringLiteral76EF9D0B5C42EFB496921BA036360A2D6C2BE0E4);
		// btLoginLabel = "Login";
		__this->___btLoginLabel_53 = _stringLiteral2B3AD6333F669606E87648FD08F4CF7B98B051B5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLoginLabel_53), (void*)_stringLiteral2B3AD6333F669606E87648FD08F4CF7B98B051B5);
		// btLogoutLabel = "Logout";
		__this->___btLogoutLabel_54 = _stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLogoutLabel_54), (void*)_stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76);
		// loggedOffInfo = "You're logged out!";
		__this->___loggedOffInfo_52 = _stringLiteral49EA153F87817AAA7A31C220FA0AE24ABEAD425F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedOffInfo_52), (void*)_stringLiteral49EA153F87817AAA7A31C220FA0AE24ABEAD425F);
		// loggedInInfo = "You are logged in as:";
		__this->___loggedInInfo_51 = _stringLiteralF67824E6FB9BB499761CFB981CBCD81090183D25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedInInfo_51), (void*)_stringLiteralF67824E6FB9BB499761CFB981CBCD81090183D25);
		// menuTopPlayer = "Top Players";
		__this->___menuTopPlayer_43 = _stringLiteralE938F40FDC2C7A8D447AE14AF71009F0A8ACE7EA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuTopPlayer_43), (void*)_stringLiteralE938F40FDC2C7A8D447AE14AF71009F0A8ACE7EA);
		// menuLegion = "Legions";
		__this->___menuLegion_44 = _stringLiteral420957ECA2CE9283693EA75554F96EA3ACCAD441;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuLegion_44), (void*)_stringLiteral420957ECA2CE9283693EA75554F96EA3ACCAD441);
		// menuDownload = "Downloads";
		__this->___menuDownload_45 = _stringLiteral12C2223C5A2B3B3D1078DBDB393866FF8FB2CBB9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDownload_45), (void*)_stringLiteral12C2223C5A2B3B3D1078DBDB393866FF8FB2CBB9);
		// menuForum = "Forum";
		__this->___menuForum_46 = _stringLiteralFDEBB01761E29CA7D3CCB55549E82E116AD0FFCD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuForum_46), (void*)_stringLiteralFDEBB01761E29CA7D3CCB55549E82E116AD0FFCD);
		// menuDonation = "Donation";
		__this->___menuDonation_47 = _stringLiteral07A1EF185BA3E731C90C374323FE65C9972A771F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDonation_47), (void*)_stringLiteral07A1EF185BA3E731C90C374323FE65C9972A771F);
		// menuRegister = "Register";
		__this->___menuRegister_48 = _stringLiteralFE34A5566036903FCE3E0CEBAC53DFD920F981F0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuRegister_48), (void*)_stringLiteralFE34A5566036903FCE3E0CEBAC53DFD920F981F0);
		// messCreateAccount = "Account created successfully!<br>Now download the Aion client and have fun!<br>Ask your questions in our forum.<br>Enjoy!";
		__this->___messCreateAccount_49 = _stringLiteral853C3CD84D5C41D061EE7DA18561825FE16BD86E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messCreateAccount_49), (void*)_stringLiteral853C3CD84D5C41D061EE7DA18561825FE16BD86E);
		// break;
		return;
	}

IL_00d3:
	{
		// bulletinTitle = "Avisos:";
		__this->___bulletinTitle_56 = _stringLiteralEB3D753EAC5F04835FA29EF2BAEA37660AF28CE8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bulletinTitle_56), (void*)_stringLiteralEB3D753EAC5F04835FA29EF2BAEA37660AF28CE8);
		// bulletin = "Registre-se!<br>Fa?a o download do client Aion 7.7 e instale o nosso launcher.<br>Venha se divertir conosco nesse novo mundo!";
		__this->___bulletin_55 = _stringLiteral76665EC7E8DA3B0D57E33E44DC288D212A9E73BE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bulletin_55), (void*)_stringLiteral76665EC7E8DA3B0D57E33E44DC288D212A9E73BE);
		// serverStatusTitle = "Server Status:";
		__this->___serverStatusTitle_57 = _stringLiteral60AEB8A203BF23524FC74BE0ADEEA3C90DD9A429;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serverStatusTitle_57), (void*)_stringLiteral60AEB8A203BF23524FC74BE0ADEEA3C90DD9A429);
		// loggedInInfo = "Voc? est? logado como:";
		__this->___loggedInInfo_51 = _stringLiteral7D4FF0184A4A79FAB1173BD1C7626D6AC13225A1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedInInfo_51), (void*)_stringLiteral7D4FF0184A4A79FAB1173BD1C7626D6AC13225A1);
		// loggedOffInfo = "Voc? est? desconectado!";
		__this->___loggedOffInfo_52 = _stringLiteral8BC320BB85EBFFB6FFDDFC1AA9F32B1DA2E5B9DD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedOffInfo_52), (void*)_stringLiteral8BC320BB85EBFFB6FFDDFC1AA9F32B1DA2E5B9DD);
		// btLoginLabel = "Logar";
		__this->___btLoginLabel_53 = _stringLiteral969185362AFA3C937F980AACE75732DFCFBA3C57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLoginLabel_53), (void*)_stringLiteral969185362AFA3C937F980AACE75732DFCFBA3C57);
		// btLogoutLabel = "Sair";
		__this->___btLogoutLabel_54 = _stringLiteralB01D53BA71E8F5218B393B96E92FFA1C69B93029;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLogoutLabel_54), (void*)_stringLiteralB01D53BA71E8F5218B393B96E92FFA1C69B93029);
		// menuHome = "Inicio";
		__this->___menuHome_42 = _stringLiteralF40372F18424A17BEC0E677DD4D8DBE2100AEA1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuHome_42), (void*)_stringLiteralF40372F18424A17BEC0E677DD4D8DBE2100AEA1E);
		// welcome = "Seja bem-vindo ao";
		__this->___welcome_58 = _stringLiteral9C6E836A58B7DE42279ADEF1C841C4151E9AE3A4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___welcome_58), (void*)_stringLiteral9C6E836A58B7DE42279ADEF1C841C4151E9AE3A4);
		// menuTopPlayer = "Top Players";
		__this->___menuTopPlayer_43 = _stringLiteralE938F40FDC2C7A8D447AE14AF71009F0A8ACE7EA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuTopPlayer_43), (void*)_stringLiteralE938F40FDC2C7A8D447AE14AF71009F0A8ACE7EA);
		// menuLegion = "Legi?es";
		__this->___menuLegion_44 = _stringLiteral15190CA1318A6715E4BD7B284EBA51829E582AA7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuLegion_44), (void*)_stringLiteral15190CA1318A6715E4BD7B284EBA51829E582AA7);
		// menuDownload = "Downloads";
		__this->___menuDownload_45 = _stringLiteral12C2223C5A2B3B3D1078DBDB393866FF8FB2CBB9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDownload_45), (void*)_stringLiteral12C2223C5A2B3B3D1078DBDB393866FF8FB2CBB9);
		// menuForum = "F?rum";
		__this->___menuForum_46 = _stringLiteralD149AAC3DF8956F03AD5942F1E83FB341D9C4AE5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuForum_46), (void*)_stringLiteralD149AAC3DF8956F03AD5942F1E83FB341D9C4AE5);
		// menuDonation = "Doa??es";
		__this->___menuDonation_47 = _stringLiteralB92988FBF233C1338710A604DDFC37CA4BF585C8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDonation_47), (void*)_stringLiteralB92988FBF233C1338710A604DDFC37CA4BF585C8);
		// menuRegister = "Criar Conta";
		__this->___menuRegister_48 = _stringLiteral631E528293AC38E744257B0AE6F4889531E0FDC7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuRegister_48), (void*)_stringLiteral631E528293AC38E744257B0AE6F4889531E0FDC7);
		// messCreateAccount = "Conta criada com sucesso!<br>Agora baixe o cliente Aion e divirta-se!<br>Fa?a suas perguntas em nosso f?rum.<br>Aproveite!";
		__this->___messCreateAccount_49 = _stringLiteralC4FAF8C1C9FB3219F33A83C35B7080669AADB29B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messCreateAccount_49), (void*)_stringLiteralC4FAF8C1C9FB3219F33A83C35B7080669AADB29B);
		// break;
		return;
	}

IL_0184:
	{
		// loggedInInfo = "Vous ?tes connect? en tant que :";
		__this->___loggedInInfo_51 = _stringLiteralAB1FFF8FA40C54374DE1806FB8BE0662EF0810D6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedInInfo_51), (void*)_stringLiteralAB1FFF8FA40C54374DE1806FB8BE0662EF0810D6);
		// loggedOffInfo = "Vous ?tes d?connect? !";
		__this->___loggedOffInfo_52 = _stringLiteral4DC2C47D6DD84E69008084D114E5AF9848B39EC6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedOffInfo_52), (void*)_stringLiteral4DC2C47D6DD84E69008084D114E5AF9848B39EC6);
		// btLoginLabel = "Conn";
		__this->___btLoginLabel_53 = _stringLiteralFE66F51410AE9E46A95118DEAC7E947FBD748061;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLoginLabel_53), (void*)_stringLiteralFE66F51410AE9E46A95118DEAC7E947FBD748061);
		// btLogoutLabel = "D?conn";
		__this->___btLogoutLabel_54 = _stringLiteralA2AD821658DA79C01191BBD3BD43012E5C08CFDB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLogoutLabel_54), (void*)_stringLiteralA2AD821658DA79C01191BBD3BD43012E5C08CFDB);
		// menuHome = "Accueil";
		__this->___menuHome_42 = _stringLiteral6AA9ED5D2AC4E0421DC76A927D1D6DE51F831A45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuHome_42), (void*)_stringLiteral6AA9ED5D2AC4E0421DC76A927D1D6DE51F831A45);
		// menuTopPlayer = "Top Players";
		__this->___menuTopPlayer_43 = _stringLiteralE938F40FDC2C7A8D447AE14AF71009F0A8ACE7EA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuTopPlayer_43), (void*)_stringLiteralE938F40FDC2C7A8D447AE14AF71009F0A8ACE7EA);
		// menuLegion = "L?gions";
		__this->___menuLegion_44 = _stringLiteral07734A0D0FCDFA1D06FBE39F1A342E02E9945108;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuLegion_44), (void*)_stringLiteral07734A0D0FCDFA1D06FBE39F1A342E02E9945108);
		// menuDownload = "T?l?charg.";
		__this->___menuDownload_45 = _stringLiteral441E816B5D9089D617190701600ACAC19D39A420;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDownload_45), (void*)_stringLiteral441E816B5D9089D617190701600ACAC19D39A420);
		// menuForum = "Forum";
		__this->___menuForum_46 = _stringLiteralFDEBB01761E29CA7D3CCB55549E82E116AD0FFCD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuForum_46), (void*)_stringLiteralFDEBB01761E29CA7D3CCB55549E82E116AD0FFCD);
		// menuDonation = "Don";
		__this->___menuDonation_47 = _stringLiteral353B4D65C1B2F185776486689A5F7ACBA9363D4E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDonation_47), (void*)_stringLiteral353B4D65C1B2F185776486689A5F7ACBA9363D4E);
		// menuRegister = "Enregistrer";
		__this->___menuRegister_48 = _stringLiteralA94EAA33BCCD18BFAD560E130C78CF1C48A8410C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuRegister_48), (void*)_stringLiteralA94EAA33BCCD18BFAD560E130C78CF1C48A8410C);
		// messCreateAccount = "Compte cr?? avec succ?s! < br >Maintenant, t?l?chargez le client Aion et amusez-vous! < br >Posez vos questions dans notre forum. < br >Profitez - en!";
		__this->___messCreateAccount_49 = _stringLiteralAA693C0072C92490801B3905DA2D442D9864373D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messCreateAccount_49), (void*)_stringLiteralAA693C0072C92490801B3905DA2D442D9864373D);
		// break;
		return;
	}

IL_0209:
	{
		// loggedInInfo = "Sie sind angemeldet als:";
		__this->___loggedInInfo_51 = _stringLiteral3286B8846F3F2A4AA18A81E68195CB88C06C98B1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedInInfo_51), (void*)_stringLiteral3286B8846F3F2A4AA18A81E68195CB88C06C98B1);
		// loggedOffInfo = "Sie sind ausgeloggt!";
		__this->___loggedOffInfo_52 = _stringLiteralBAC9755CD05B2C971391C4C78FAF856BDCFA4BA7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedOffInfo_52), (void*)_stringLiteralBAC9755CD05B2C971391C4C78FAF856BDCFA4BA7);
		// btLoginLabel = "Login";
		__this->___btLoginLabel_53 = _stringLiteral2B3AD6333F669606E87648FD08F4CF7B98B051B5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLoginLabel_53), (void*)_stringLiteral2B3AD6333F669606E87648FD08F4CF7B98B051B5);
		// btLogoutLabel = "Abmelden";
		__this->___btLogoutLabel_54 = _stringLiteral57B762EF6B7A525CDE80D3F400DA3CFFFBD5CAA5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLogoutLabel_54), (void*)_stringLiteral57B762EF6B7A525CDE80D3F400DA3CFFFBD5CAA5);
		// menuHome = "Startseite";
		__this->___menuHome_42 = _stringLiteral4F3BD1698513EAFAB952C879CB140F37391E3570;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuHome_42), (void*)_stringLiteral4F3BD1698513EAFAB952C879CB140F37391E3570);
		// menuTopPlayer = "Top-Spieler";
		__this->___menuTopPlayer_43 = _stringLiteral196834A32301D2A9E17AC7901E15283E120F5A5A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuTopPlayer_43), (void*)_stringLiteral196834A32301D2A9E17AC7901E15283E120F5A5A);
		// menuLegion = "Legionen";
		__this->___menuLegion_44 = _stringLiteral289AD221E512BD27941854A4B9E58975FFB33BB5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuLegion_44), (void*)_stringLiteral289AD221E512BD27941854A4B9E58975FFB33BB5);
		// menuDownload = "Downloads";
		__this->___menuDownload_45 = _stringLiteral12C2223C5A2B3B3D1078DBDB393866FF8FB2CBB9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDownload_45), (void*)_stringLiteral12C2223C5A2B3B3D1078DBDB393866FF8FB2CBB9);
		// menuForum = "Forum";
		__this->___menuForum_46 = _stringLiteralFDEBB01761E29CA7D3CCB55549E82E116AD0FFCD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuForum_46), (void*)_stringLiteralFDEBB01761E29CA7D3CCB55549E82E116AD0FFCD);
		// menuDonation = "Spende";
		__this->___menuDonation_47 = _stringLiteral6A31BC52E5305A6E92147A55D69FDC8344179016;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDonation_47), (void*)_stringLiteral6A31BC52E5305A6E92147A55D69FDC8344179016);
		// menuRegister = "Registrieren";
		__this->___menuRegister_48 = _stringLiteralC7AB6D7CAAA2C71C1F92EEDF9509A983DD93155B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuRegister_48), (void*)_stringLiteralC7AB6D7CAAA2C71C1F92EEDF9509A983DD93155B);
		// messCreateAccount = "Konto erfolgreich erstellt! < br >Laden Sie jetzt den Aion-Client herunter und haben Sie Spa?! < br >Stellen Sie Ihre Fragen in unserem Forum. < br >Viel Spa?!";
		__this->___messCreateAccount_49 = _stringLiteral37E234BE1F02DECDF60E288E0D81CAE673F43976;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messCreateAccount_49), (void*)_stringLiteral37E234BE1F02DECDF60E288E0D81CAE673F43976);
		// break;
		return;
	}

IL_028e:
	{
		// loggedOffInfo = "?? ????? ?? ???????!";
		__this->___loggedOffInfo_52 = _stringLiteral555EF4BA7AFB2D2397A914C021673FB81BDD2A98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedOffInfo_52), (void*)_stringLiteral555EF4BA7AFB2D2397A914C021673FB81BDD2A98);
		// loggedInInfo = "?? ????? ? ??????? ???:";
		__this->___loggedInInfo_51 = _stringLiteral03489ECB3C2DA90C1A27C968B4CCBF2D631BB03A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loggedInInfo_51), (void*)_stringLiteral03489ECB3C2DA90C1A27C968B4CCBF2D631BB03A);
		// btLoginLabel = "????";
		__this->___btLoginLabel_53 = _stringLiteral4AF27E8EB6B424A7BBF443B78F6CBB98366CF15C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLoginLabel_53), (void*)_stringLiteral4AF27E8EB6B424A7BBF443B78F6CBB98366CF15C);
		// btLogoutLabel = "B????";
		__this->___btLogoutLabel_54 = _stringLiteral1AF60E124910CBC4D649903160A22D3AEFA7BA87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btLogoutLabel_54), (void*)_stringLiteral1AF60E124910CBC4D649903160A22D3AEFA7BA87);
		// menuHome = "???????";
		__this->___menuHome_42 = _stringLiteral22E972F1BD1EA0A843AA6C22A05B81A33C1C9736;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuHome_42), (void*)_stringLiteral22E972F1BD1EA0A843AA6C22A05B81A33C1C9736);
		// menuTopPlayer = "?????? ??????";
		__this->___menuTopPlayer_43 = _stringLiteral71374DF935888E0953B9B8234717BCFBBDC00CA4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuTopPlayer_43), (void*)_stringLiteral71374DF935888E0953B9B8234717BCFBBDC00CA4);
		// menuLegion = "???????";
		__this->___menuLegion_44 = _stringLiteral1B2305DD4F982A49FC0790DAE2CFD8386692D9F8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuLegion_44), (void*)_stringLiteral1B2305DD4F982A49FC0790DAE2CFD8386692D9F8);
		// menuDownload = "????????";
		__this->___menuDownload_45 = _stringLiteralDD50EFB99A97900688536A7A197054A07C7F9A07;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDownload_45), (void*)_stringLiteralDD50EFB99A97900688536A7A197054A07C7F9A07);
		// menuForum = "?????";
		__this->___menuForum_46 = _stringLiteral9DB4D1DFFDA5137B7B696C570E8AA30429EB94AA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuForum_46), (void*)_stringLiteral9DB4D1DFFDA5137B7B696C570E8AA30429EB94AA);
		// menuDonation = "?????????????";
		__this->___menuDonation_47 = _stringLiteral0F56241073C692EA251B172E7D230EB00260A779;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuDonation_47), (void*)_stringLiteral0F56241073C692EA251B172E7D230EB00260A779);
		// menuRegister = "???????????";
		__this->___menuRegister_48 = _stringLiteralD2901C8360385F51919B4AE0533C0130C664E70D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuRegister_48), (void*)_stringLiteralD2901C8360385F51919B4AE0533C0130C664E70D);
		// messCreateAccount = "??????? ??????? ??????! <br>?????? ???????? ?????? Aion ? ????????? ????????????! <br>????????? ???? ??????? ?? ????? ??????. <br>?????????????!";
		__this->___messCreateAccount_49 = _stringLiteralEC10EADFBB8E6A514AC6A0692D5EE89500B5C78F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messCreateAccount_49), (void*)_stringLiteralEC10EADFBB8E6A514AC6A0692D5EE89500B5C78F);
		// }
		return;
	}
}
// System.Void AccountController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountController__ctor_mF8C351A6FF25EDCC574A25B01A28910F9D94D4A6 (AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A33957D85CB2A50D0A311346A69ADEA61540D2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5CE1D7AED43A0190589E02FEA1A5262F82435FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE476AE81DFEF36801B560E96E60E07AAD2FDD950);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF113E6A59A1F969701A6DBC486BD64FA978D59A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E75E2980B7A700FACAC3AA968D5CA735A1E1CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string adress = "44.192.121.79";
		__this->___adress_6 = _stringLiteralA5CE1D7AED43A0190589E02FEA1A5262F82435FA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adress_6), (void*)_stringLiteralA5CE1D7AED43A0190589E02FEA1A5262F82435FA);
		// public string forumUrl = "https://aion-alpha.forumeiros.com/";
		__this->___forumUrl_7 = _stringLiteral3A33957D85CB2A50D0A311346A69ADEA61540D2E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___forumUrl_7), (void*)_stringLiteral3A33957D85CB2A50D0A311346A69ADEA61540D2E);
		// public string client1Download = "https://aion-alpha.forumeiros.com/t2-links-para-download-do-client-aion-7-7";
		__this->___client1Download_8 = _stringLiteralF113E6A59A1F969701A6DBC486BD64FA978D59A5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client1Download_8), (void*)_stringLiteralF113E6A59A1F969701A6DBC486BD64FA978D59A5);
		// public string launcherDownload = "https://aion-alpha.forumeiros.com/t3-download-do-launcher";
		__this->___launcherDownload_9 = _stringLiteralE476AE81DFEF36801B560E96E60E07AAD2FDD950;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___launcherDownload_9), (void*)_stringLiteralE476AE81DFEF36801B560E96E60E07AAD2FDD950);
		// public string duvidasForum = "https://aion-alpha.forumeiros.com/f5-duvidas";
		__this->___duvidasForum_10 = _stringLiteralF7E75E2980B7A700FACAC3AA968D5CA735A1E1CF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___duvidasForum_10), (void*)_stringLiteralF7E75E2980B7A700FACAC3AA968D5CA735A1E1CF);
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
// System.Void AccountController/<Start>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__57__ctor_m5F0A0EA2A5DB1298A992D9F4E14781E77FB9AF48 (U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AccountController/<Start>d__57::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__57_System_IDisposable_Dispose_m86B864E759138BFE15CA76185C3D5867520C8732 (U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AccountController/<Start>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__57_MoveNext_mAF89E4FD3085407B55D50169F8CEE69F2DF6215F (U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6_m0E630474CED10A89CB1E99FC495AAEDDC3EFB3BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27_mA8391CE63278EC8B545241B95C43623F5AD13466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FC2F66174DBDCC5BE93721BB8F79BC4DADEF14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_007d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// panelController = GetComponent<PanelController>();
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_4 = V_1;
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_5 = V_1;
		PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* L_6;
		L_6 = Component_GetComponent_TisPanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27_mA8391CE63278EC8B545241B95C43623F5AD13466(L_5, Component_GetComponent_TisPanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27_mA8391CE63278EC8B545241B95C43623F5AD13466_RuntimeMethod_var);
		L_4->___panelController_59 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___panelController_59), (void*)L_6);
		// dbControl = GetComponent<DatabasesController>();
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_7 = V_1;
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_8 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_9;
		L_9 = Component_GetComponent_TisDatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6_m0E630474CED10A89CB1E99FC495AAEDDC3EFB3BA(L_8, Component_GetComponent_TisDatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6_m0E630474CED10A89CB1E99FC495AAEDDC3EFB3BA_RuntimeMethod_var);
		L_7->___dbControl_60 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___dbControl_60), (void*)L_9);
		// UpdatePage();
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_10 = V_1;
		AccountController_UpdatePage_m9E6F45159317059506B2FE87D8B31B2D60750287(L_10, _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97, NULL);
		// ConfigDropTop10();
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_11 = V_1;
		AccountController_ConfigDropTop10_m8111443E1D806A72B9A8D4F0C2AFBC46457C6AAC(L_11, NULL);
		// ConfigDropdownnLang();
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_12 = V_1;
		AccountController_ConfigDropdownnLang_m07323C03EA00F867656CB882E8981BC9FD2FA14A(L_12, NULL);
		// WWW users = new WWW(adress + "/read.php");
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_13 = V_1;
		String_t* L_14 = L_13->___adress_6;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, _stringLiteral77FC2F66174DBDCC5BE93721BB8F79BC4DADEF14, NULL);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_16 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_16, L_15, NULL);
		__this->___U3CusersU3E5__2_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CusersU3E5__2_3), (void*)L_16);
		// yield return users;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_17 = __this->___U3CusersU3E5__2_3;
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// allLoginName = users.text;
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_18 = V_1;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_19 = __this->___U3CusersU3E5__2_3;
		String_t* L_20;
		L_20 = WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F(L_19, NULL);
		L_18->___allLoginName_4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___allLoginName_4), (void*)L_20);
		// registeredUsers = allLoginName.Split("|");
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_21 = V_1;
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_22 = V_1;
		String_t* L_23 = L_22->___allLoginName_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24;
		L_24 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_23, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, 0, NULL);
		L_21->___registeredUsers_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___registeredUsers_5), (void*)L_24);
		// UpdateLanguage();
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_25 = V_1;
		AccountController_UpdateLanguage_mE6F89EBFCA2586D1F1B6EDD85BDF68942C159C0A(L_25, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AccountController/<Start>d__57::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__57_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD9C6DCEFE376356230C5EFE9E573C8DCA1A9D465 (U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AccountController/<Start>d__57::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__57_System_Collections_IEnumerator_Reset_m62238490E4A140F7E8B923EF077DC1F9D88FDD06 (U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__57_System_Collections_IEnumerator_Reset_m62238490E4A140F7E8B923EF077DC1F9D88FDD06_RuntimeMethod_var)));
	}
}
// System.Object AccountController/<Start>d__57::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__57_System_Collections_IEnumerator_get_Current_m12FA6675195DAEC44263F92CE705B1E71A2BD955 (U3CStartU3Ed__57_tCEA25E5C725199BE46D18F349ADDE32E0FABDF89* __this, const RuntimeMethod* method) 
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
// System.Void AccountController/<ShowMessage>d__71::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowMessageU3Ed__71__ctor_m735DCC6AF2F306D7190CB0C1AD542E4820217414 (U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AccountController/<ShowMessage>d__71::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowMessageU3Ed__71_System_IDisposable_Dispose_mB12172F6C57A577867F5B22F8859CC798CAC6281 (U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AccountController/<ShowMessage>d__71::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowMessageU3Ed__71_MoveNext_m14704844B13F3DDBC666CA5E5A0A15CF08D7B49F (U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// panelMessage.SetActive(true);
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___panelMessage_36;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// textMessage.text = mess;
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_6 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = L_6->___textMessage_37;
		String_t* L_8 = __this->___mess_3;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_8);
		// yield return new WaitForSeconds(10);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// panelMessage.SetActive(false);
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_10 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___panelMessage_36;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AccountController/<ShowMessage>d__71::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowMessageU3Ed__71_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF0023FBF1610A150399648405CD515D373C5D82A (U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AccountController/<ShowMessage>d__71::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowMessageU3Ed__71_System_Collections_IEnumerator_Reset_mFA2290377DAEDB39406D264ED7A815255C3B0E50 (U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowMessageU3Ed__71_System_Collections_IEnumerator_Reset_mFA2290377DAEDB39406D264ED7A815255C3B0E50_RuntimeMethod_var)));
	}
}
// System.Object AccountController/<ShowMessage>d__71::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowMessageU3Ed__71_System_Collections_IEnumerator_get_Current_m724DF1C42DEC986B3A3C6A37FCF33FD5A9D8BCCB (U3CShowMessageU3Ed__71_tB34659C0D632F0A14B75461DE2779462CF7CD58F* __this, const RuntimeMethod* method) 
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
// System.Void DatabasesController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabasesController_Start_m5F861D57CCD335F583CE81FD0FD1F320BF61D28F (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA_mC4E5E8A07F44FD1ACA707F649E07D6AFB43D6C0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// acc = GetComponent<AccountController>();
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_0;
		L_0 = Component_GetComponent_TisAccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA_mC4E5E8A07F44FD1ACA707F649E07D6AFB43D6C0D(__this, Component_GetComponent_TisAccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA_mC4E5E8A07F44FD1ACA707F649E07D6AFB43D6C0D_RuntimeMethod_var);
		__this->___acc_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___acc_45), (void*)L_0);
		// adress = acc.adress;
		AccountController_t75C340A76E3859C3728667ABA3DDC448EDBB81BA* L_1 = __this->___acc_45;
		String_t* L_2 = L_1->___adress_6;
		__this->___adress_38 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adress_38), (void*)L_2);
		// Debug.Log(adress);
		String_t* L_3 = __this->___adress_38;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// topPlayerList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_4, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___topPlayerList_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topPlayerList_4), (void*)L_4);
		// topLegionList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_5, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___topLegionList_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topLegionList_5), (void*)L_5);
		// RefreshData();
		DatabasesController_RefreshData_mC285CF09286A8693D6829C3C2C40C215BB9A4A55(__this, NULL);
		// }
		return;
	}
}
// System.Void DatabasesController::RefreshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabasesController_RefreshData_mC285CF09286A8693D6829C3C2C40C215BB9A4A55 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7201A52ADEE21D9912326D0751CEB16DA71DC41D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0D0D7D7F900C507D584E2FF879D8B498E914E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59DB46FAA074DAB60930C4081694E7774E4F023);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF434128317AFD46713683E11F61F9AEEAB40ADA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C7B9D233CF6A9D0DAB9731AC8AD815983688E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerOk = false; abyssOk = false; legionsOk = false; membersOk = false; kinahOk = false;
		__this->___playerOk_40 = (bool)0;
		// playerOk = false; abyssOk = false; legionsOk = false; membersOk = false; kinahOk = false;
		__this->___abyssOk_41 = (bool)0;
		// playerOk = false; abyssOk = false; legionsOk = false; membersOk = false; kinahOk = false;
		__this->___legionsOk_42 = (bool)0;
		// playerOk = false; abyssOk = false; legionsOk = false; membersOk = false; kinahOk = false;
		__this->___membersOk_43 = (bool)0;
		// playerOk = false; abyssOk = false; legionsOk = false; membersOk = false; kinahOk = false;
		__this->___kinahOk_44 = (bool)0;
		// StartCoroutine("UpdatePlayers");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralB59DB46FAA074DAB60930C4081694E7774E4F023, NULL);
		// StartCoroutine("UpdateAbyss");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral7201A52ADEE21D9912326D0751CEB16DA71DC41D, NULL);
		// StartCoroutine("UpdateKinah");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral9C0D0D7D7F900C507D584E2FF879D8B498E914E1, NULL);
		// StartCoroutine("UpdateLegions");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralD7C7B9D233CF6A9D0DAB9731AC8AD815983688E3, NULL);
		// StartCoroutine("UpdateMembers");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralCF434128317AFD46713683E11F61F9AEEAB40ADA, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DatabasesController::UpdatePlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatabasesController_UpdatePlayers_m8773D57864C6B53911A11F19EA376D0D69DB17E2 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E* L_0 = (U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E*)il2cpp_codegen_object_new(U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E_il2cpp_TypeInfo_var);
		U3CUpdatePlayersU3Ed__44__ctor_mEE6E21607FF25F51D153D3DF4D47BB63EB861C7E(L_0, 0, NULL);
		U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator DatabasesController::UpdateAbyss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatabasesController_UpdateAbyss_m695FE4069EFD71D635B2797236CF2ED9D40E71A5 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07* L_0 = (U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07*)il2cpp_codegen_object_new(U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07_il2cpp_TypeInfo_var);
		U3CUpdateAbyssU3Ed__45__ctor_m0BE70A3E92514015EED1FB060C65DC41A5F07C53(L_0, 0, NULL);
		U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator DatabasesController::UpdateKinah()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatabasesController_UpdateKinah_mB61F21F21450BFB05D074AE570C77F721275A96C (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E* L_0 = (U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E*)il2cpp_codegen_object_new(U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E_il2cpp_TypeInfo_var);
		U3CUpdateKinahU3Ed__46__ctor_m41FD0AC9EA467D65D5CDCA477C968FE423F6FC3B(L_0, 0, NULL);
		U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator DatabasesController::UpdateLegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatabasesController_UpdateLegions_m7252F85364A0038F92025FCA048DE77231376A10 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC* L_0 = (U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC*)il2cpp_codegen_object_new(U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC_il2cpp_TypeInfo_var);
		U3CUpdateLegionsU3Ed__47__ctor_mB1E79A17BDFB7A0A1FBD32AF78951C5301C26456(L_0, 0, NULL);
		U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator DatabasesController::UpdateMembers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatabasesController_UpdateMembers_mA349A8AE163EC4D9EF234711D0D30C7E706F6025 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E* L_0 = (U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E*)il2cpp_codegen_object_new(U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E_il2cpp_TypeInfo_var);
		U3CUpdateMembersU3Ed__48__ctor_mA5219292B2D2DF45C30661B0C22CEB0896412A29(L_0, 0, NULL);
		U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean DatabasesController::DatabaseIsLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabasesController_DatabaseIsLoad_m23415A493A4FAF7291AD3BAECD657B26BE4689B3 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
{
	{
		// if (playerOk && abyssOk && legionsOk && membersOk && kinahOk)
		bool L_0 = __this->___playerOk_40;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		bool L_1 = __this->___abyssOk_41;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		bool L_2 = __this->___legionsOk_42;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		bool L_3 = __this->___membersOk_43;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		bool L_4 = __this->___kinahOk_44;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<System.String> DatabasesController::GetTopPlayerList(TopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* DatabasesController_GetTopPlayerList_m1523A789F0CB95D34987E6A6C884F1135AFA42CC (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(dataPlayers.Length <= 10)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___dataPlayers_6;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) > ((int32_t)((int32_t)10))))
		{
			goto IL_001e;
		}
	}
	{
		// counter = dataPlayers.Length - 1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___dataPlayers_6;
		__this->___counter_39 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
		goto IL_0026;
	}

IL_001e:
	{
		// counter = 10;
		__this->___counter_39 = ((int32_t)10);
	}

IL_0026:
	{
		// topPlayerList.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___topPlayerList_4;
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_2, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		int32_t L_3 = ___0_type;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_008d;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_0045:
	{
		// for (int i = 0; i < counter; i++)
		V_0 = 0;
		goto IL_005f;
	}

IL_0049:
	{
		// topPlayerList.Add(GetTopKillerData(i));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___topPlayerList_4;
		int32_t L_5 = V_0;
		String_t* L_6;
		L_6 = DatabasesController_GetTopKillerData_m8EE00864105A3D37B16A252B08A835B8FE4009C6(__this, L_5, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < counter; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_005f:
	{
		// for (int i = 0; i < counter; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___counter_39;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0049;
		}
	}
	{
		// break;
		goto IL_008d;
	}

IL_006a:
	{
		// for (int i = 0; i < counter; i++)
		V_1 = 0;
		goto IL_0084;
	}

IL_006e:
	{
		// topPlayerList.Add(GetTopRichData(i));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = __this->___topPlayerList_4;
		int32_t L_11 = V_1;
		String_t* L_12;
		L_12 = DatabasesController_GetTopRichData_m90C6D73CDADC135270C3B1EED6049F1D9C11E961(__this, L_11, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, L_12, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < counter; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0084:
	{
		// for (int i = 0; i < counter; i++)
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___counter_39;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_006e;
		}
	}

IL_008d:
	{
		// return topPlayerList;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = __this->___topPlayerList_4;
		return L_16;
	}
}
// System.String DatabasesController::GetTopKillerData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabasesController_GetTopKillerData_m8EE00864105A3D37B16A252B08A835B8FE4009C6 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA203B8A96188CD68997A4A1E16D8DC323E3F249B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// string tempPlayer = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string tempIdPlayer = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string tempIdLegion = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string tempLegion = "No Legion";
		V_3 = _stringLiteralA203B8A96188CD68997A4A1E16D8DC323E3F249B;
		// for (int i = 0; i < id_player_Abyss.Length; i++)
		V_4 = 0;
		goto IL_0122;
	}

IL_0020:
	{
		// if (i == index)
		int32_t L_0 = V_4;
		int32_t L_1 = ___0_index;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_011c;
		}
	}
	{
		// for (int x = 0; x < id_player.Length; x++)
		V_5 = 0;
		goto IL_010d;
	}

IL_0030:
	{
		// if (id_player[x] == id_player_Abyss[i])
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___id_player_16;
		int32_t L_3 = V_5;
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___id_player_Abyss_21;
		int32_t L_7 = V_4;
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_9, NULL);
		if (!L_10)
		{
			goto IL_0107;
		}
	}
	{
		// tempPlayer = $"{name_player[x]};{race_player[x]}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = __this->___name_player_17;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = __this->___race_player_19;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, L_18, NULL);
		V_0 = L_19;
		// tempIdPlayer = id_player_Abyss[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___id_player_Abyss_21;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = L_23;
		// for (int j = 0; j < id_Player_Member.Length; j++)
		V_6 = 0;
		goto IL_0099;
	}

IL_0078:
	{
		// if (tempIdPlayer == id_Player_Member[j])
		String_t* L_24 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = __this->___id_Player_Member_33;
		int32_t L_26 = V_6;
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, L_28, NULL);
		if (!L_29)
		{
			goto IL_0093;
		}
	}
	{
		// tempIdLegion = id_Legion_Member[j];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = __this->___id_Legion_Member_32;
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		V_2 = L_33;
	}

IL_0093:
	{
		// for (int j = 0; j < id_Player_Member.Length; j++)
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0099:
	{
		// for (int j = 0; j < id_Player_Member.Length; j++)
		int32_t L_35 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = __this->___id_Player_Member_33;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		// for (int j = 0; j < id_Legion.Length; j++)
		V_7 = 0;
		goto IL_00cb;
	}

IL_00aa:
	{
		// if (id_Legion[j] == tempIdLegion)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___id_Legion_26;
		int32_t L_38 = V_7;
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		String_t* L_41 = V_2;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_00c5;
		}
	}
	{
		// tempLegion = name_Legion[j];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = __this->___name_Legion_27;
		int32_t L_44 = V_7;
		int32_t L_45 = L_44;
		String_t* L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = L_46;
	}

IL_00c5:
	{
		// for (int j = 0; j < id_Legion.Length; j++)
		int32_t L_47 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00cb:
	{
		// for (int j = 0; j < id_Legion.Length; j++)
		int32_t L_48 = V_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = __this->___id_Legion_26;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_00aa;
		}
	}
	{
		// tempPlayer = $"{tempPlayer};{tempLegion};{allKill_Abyss[i]}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50;
		String_t* L_52 = V_0;
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_52);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_51;
		ArrayElementTypeCheck (L_53, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53;
		String_t* L_55 = V_3;
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_54;
		ArrayElementTypeCheck (L_56, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_56;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = __this->___allKill_Abyss_25;
		int32_t L_59 = V_4;
		int32_t L_60 = L_59;
		String_t* L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		ArrayElementTypeCheck (L_57, L_61);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_61);
		String_t* L_62;
		L_62 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_57, NULL);
		V_0 = L_62;
	}

IL_0107:
	{
		// for (int x = 0; x < id_player.Length; x++)
		int32_t L_63 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_010d:
	{
		// for (int x = 0; x < id_player.Length; x++)
		int32_t L_64 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = __this->___id_player_16;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_011c:
	{
		// for (int i = 0; i < id_player_Abyss.Length; i++)
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0122:
	{
		// for (int i = 0; i < id_player_Abyss.Length; i++)
		int32_t L_67 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = __this->___id_player_Abyss_21;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// if(tempIdPlayer == "" || tempPlayer.Length < 4) { return null; }
		String_t* L_69 = V_1;
		bool L_70;
		L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_69, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_70)
		{
			goto IL_0147;
		}
	}
	{
		String_t* L_71 = V_0;
		int32_t L_72;
		L_72 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_71, NULL);
		if ((((int32_t)L_72) >= ((int32_t)4)))
		{
			goto IL_0149;
		}
	}

IL_0147:
	{
		// if(tempIdPlayer == "" || tempPlayer.Length < 4) { return null; }
		return (String_t*)NULL;
	}

IL_0149:
	{
		// return tempPlayer;
		String_t* L_73 = V_0;
		return L_73;
	}
}
// System.String DatabasesController::GetTopRichData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabasesController_GetTopRichData_m90C6D73CDADC135270C3B1EED6049F1D9C11E961 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA203B8A96188CD68997A4A1E16D8DC323E3F249B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// string tempPlayer = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string tempIdPlayer = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string tempIdLegion = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string tempLegion = "No Legion";
		V_3 = _stringLiteralA203B8A96188CD68997A4A1E16D8DC323E3F249B;
		// for (int i = 0; i < playerKinah.Length; i++)
		V_4 = 0;
		goto IL_0122;
	}

IL_0020:
	{
		// if (i == index)
		int32_t L_0 = V_4;
		int32_t L_1 = ___0_index;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_011c;
		}
	}
	{
		// for (int j = 0; j < id_player.Length; j++)
		V_5 = 0;
		goto IL_010d;
	}

IL_0030:
	{
		// if (id_PlayerKinah[i] == id_player[j])
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___id_PlayerKinah_36;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___id_player_16;
		int32_t L_7 = V_5;
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_9, NULL);
		if (!L_10)
		{
			goto IL_0107;
		}
	}
	{
		// tempPlayer = $"{name_player[j]};{race_player[j]}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = __this->___name_player_17;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = __this->___race_player_19;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, L_18, NULL);
		V_0 = L_19;
		// tempIdPlayer = id_player[j];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___id_player_16;
		int32_t L_21 = V_5;
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = L_23;
		// for (int x = 0; x < id_Player_Member.Length; x++)
		V_6 = 0;
		goto IL_0099;
	}

IL_0078:
	{
		// if (tempIdPlayer == id_Player_Member[x])
		String_t* L_24 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = __this->___id_Player_Member_33;
		int32_t L_26 = V_6;
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, L_28, NULL);
		if (!L_29)
		{
			goto IL_0093;
		}
	}
	{
		// tempIdLegion = id_Legion_Member[x];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = __this->___id_Legion_Member_32;
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		V_2 = L_33;
	}

IL_0093:
	{
		// for (int x = 0; x < id_Player_Member.Length; x++)
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0099:
	{
		// for (int x = 0; x < id_Player_Member.Length; x++)
		int32_t L_35 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = __this->___id_Player_Member_33;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		// for (int y = 0; y < id_Legion.Length; y++)
		V_7 = 0;
		goto IL_00cb;
	}

IL_00aa:
	{
		// if (id_Legion[y] == tempIdLegion)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___id_Legion_26;
		int32_t L_38 = V_7;
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		String_t* L_41 = V_2;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_00c5;
		}
	}
	{
		// tempLegion = name_Legion[y];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = __this->___name_Legion_27;
		int32_t L_44 = V_7;
		int32_t L_45 = L_44;
		String_t* L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = L_46;
	}

IL_00c5:
	{
		// for (int y = 0; y < id_Legion.Length; y++)
		int32_t L_47 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00cb:
	{
		// for (int y = 0; y < id_Legion.Length; y++)
		int32_t L_48 = V_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = __this->___id_Legion_26;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_00aa;
		}
	}
	{
		// tempPlayer = $"{tempPlayer};{tempLegion};{playerKinah[i]}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50;
		String_t* L_52 = V_0;
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_52);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_51;
		ArrayElementTypeCheck (L_53, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53;
		String_t* L_55 = V_3;
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_54;
		ArrayElementTypeCheck (L_56, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_56;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = __this->___playerKinah_37;
		int32_t L_59 = V_4;
		int32_t L_60 = L_59;
		String_t* L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		ArrayElementTypeCheck (L_57, L_61);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_61);
		String_t* L_62;
		L_62 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_57, NULL);
		V_0 = L_62;
	}

IL_0107:
	{
		// for (int j = 0; j < id_player.Length; j++)
		int32_t L_63 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_010d:
	{
		// for (int j = 0; j < id_player.Length; j++)
		int32_t L_64 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = __this->___id_player_16;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_011c:
	{
		// for (int i = 0; i < playerKinah.Length; i++)
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0122:
	{
		// for (int i = 0; i < playerKinah.Length; i++)
		int32_t L_67 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = __this->___playerKinah_37;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// if (tempIdPlayer == "" || tempPlayer.Length < 4) { return null; }
		String_t* L_69 = V_1;
		bool L_70;
		L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_69, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_70)
		{
			goto IL_0147;
		}
	}
	{
		String_t* L_71 = V_0;
		int32_t L_72;
		L_72 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_71, NULL);
		if ((((int32_t)L_72) >= ((int32_t)4)))
		{
			goto IL_0149;
		}
	}

IL_0147:
	{
		// if (tempIdPlayer == "" || tempPlayer.Length < 4) { return null; }
		return (String_t*)NULL;
	}

IL_0149:
	{
		// return tempPlayer;
		String_t* L_73 = V_0;
		return L_73;
	}
}
// System.Collections.Generic.List`1<System.String> DatabasesController::GetTopLegionList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* DatabasesController_GetTopLegionList_mCBC0B95FBCEF54B30E29231140E527E3CDEE65BC (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (dataLegions.Length <= 10)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___dataLegions_8;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) > ((int32_t)((int32_t)10))))
		{
			goto IL_001e;
		}
	}
	{
		// counter = dataLegions.Length - 1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___dataLegions_8;
		__this->___counter_39 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
		goto IL_0026;
	}

IL_001e:
	{
		// counter = 10;
		__this->___counter_39 = ((int32_t)10);
	}

IL_0026:
	{
		// topLegionList.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___topLegionList_5;
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_2, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// for (int i = 0; i < counter; i++)
		V_0 = 0;
		goto IL_004b;
	}

IL_0035:
	{
		// topLegionList.Add(GetTopLegionsData(i));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___topLegionList_5;
		int32_t L_4 = V_0;
		String_t* L_5;
		L_5 = DatabasesController_GetTopLegionsData_m9A223CC10EA151E781F53C324AA2B6E8C7E2DBF1(__this, L_4, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < counter; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < counter; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___counter_39;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0035;
		}
	}
	{
		// return topLegionList;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___topLegionList_5;
		return L_9;
	}
}
// System.String DatabasesController::GetTopLegionsData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabasesController_GetTopLegionsData_m9A223CC10EA151E781F53C324AA2B6E8C7E2DBF1 (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3619C0131C2F9DF376A8C64D83473484337701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* G_B12_0 = NULL;
	String_t* G_B11_0 = NULL;
	{
		// string tempLegion = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string tempIdLegion = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string tempLeaderId = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < id_Legion.Length; i++)
		V_3 = 0;
		goto IL_0129;
	}

IL_0019:
	{
		// if (i == index)
		int32_t L_0 = V_3;
		int32_t L_1 = ___0_index;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0125;
		}
	}
	{
		// for (int j = 0; j < id_Legion_Member.Length; j++)
		V_4 = 0;
		goto IL_006b;
	}

IL_0025:
	{
		// if(id_Legion_Member[j] == id_Legion[i] && rank_Member[j] == "BRIGADE_GENERAL")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___id_Legion_Member_32;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___id_Legion_26;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_9, NULL);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = __this->___rank_Member_34;
		int32_t L_12 = V_4;
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral5B3619C0131C2F9DF376A8C64D83473484337701, NULL);
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		// tempIdLegion = id_Legion[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = __this->___id_Legion_26;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_1 = L_19;
		// tempLeaderId = id_Player_Member[j];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___id_Player_Member_33;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = L_23;
	}

IL_0065:
	{
		// for (int j = 0; j < id_Legion_Member.Length; j++)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006b:
	{
		// for (int j = 0; j < id_Legion_Member.Length; j++)
		int32_t L_25 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = __this->___id_Legion_Member_32;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// for (int x = 0; x < id_Legion.Length; x++)
		V_5 = 0;
		goto IL_00a6;
	}

IL_007c:
	{
		// if(tempIdLegion == id_Legion[x])
		String_t* L_27 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = __this->___id_Legion_26;
		int32_t L_29 = V_5;
		int32_t L_30 = L_29;
		String_t* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, L_31, NULL);
		if (!L_32)
		{
			goto IL_00a0;
		}
	}
	{
		// tempLegion = $"{name_Legion[x]}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = __this->___name_Legion_27;
		int32_t L_34 = V_5;
		int32_t L_35 = L_34;
		String_t* L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		String_t* L_37 = L_36;
		G_B11_0 = L_37;
		if (L_37)
		{
			G_B12_0 = L_37;
			goto IL_009f;
		}
	}
	{
		G_B12_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_009f:
	{
		V_0 = G_B12_0;
	}

IL_00a0:
	{
		// for (int x = 0; x < id_Legion.Length; x++)
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00a6:
	{
		// for (int x = 0; x < id_Legion.Length; x++)
		int32_t L_39 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = __this->___id_Legion_26;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_007c;
		}
	}
	{
		// for (int x = 0; x < id_player.Length; x++)
		V_6 = 0;
		goto IL_0119;
	}

IL_00b7:
	{
		// if(tempLeaderId == id_player[x])
		String_t* L_41 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = __this->___id_player_16;
		int32_t L_43 = V_6;
		int32_t L_44 = L_43;
		String_t* L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, L_45, NULL);
		if (!L_46)
		{
			goto IL_0113;
		}
	}
	{
		// tempLegion = $"{tempLegion};{race_player[x]};{name_player[x]};{rankPos_Legion[i]}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		String_t* L_49 = V_0;
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_48;
		ArrayElementTypeCheck (L_50, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = __this->___race_player_19;
		int32_t L_53 = V_6;
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		ArrayElementTypeCheck (L_51, L_55);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_51;
		ArrayElementTypeCheck (L_56, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_56;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = __this->___name_player_17;
		int32_t L_59 = V_6;
		int32_t L_60 = L_59;
		String_t* L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		ArrayElementTypeCheck (L_57, L_61);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_57;
		ArrayElementTypeCheck (L_62, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_62;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = __this->___rankPos_Legion_31;
		int32_t L_65 = V_3;
		int32_t L_66 = L_65;
		String_t* L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		ArrayElementTypeCheck (L_63, L_67);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_67);
		String_t* L_68;
		L_68 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_63, NULL);
		V_0 = L_68;
	}

IL_0113:
	{
		// for (int x = 0; x < id_player.Length; x++)
		int32_t L_69 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0119:
	{
		// for (int x = 0; x < id_player.Length; x++)
		int32_t L_70 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = __this->___id_player_16;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))))
		{
			goto IL_00b7;
		}
	}

IL_0125:
	{
		// for (int i = 0; i < id_Legion.Length; i++)
		int32_t L_72 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_0129:
	{
		// for (int i = 0; i < id_Legion.Length; i++)
		int32_t L_73 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = __this->___id_Legion_26;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// return tempLegion;
		String_t* L_75 = V_0;
		return L_75;
	}
}
// System.Void DatabasesController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabasesController__ctor_m4459B19DB1C27042C0D68A555A0CB07DE35A6F9B (DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* __this, const RuntimeMethod* method) 
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
// System.Void DatabasesController/<UpdatePlayers>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayersU3Ed__44__ctor_mEE6E21607FF25F51D153D3DF4D47BB63EB861C7E (U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DatabasesController/<UpdatePlayers>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayersU3Ed__44_System_IDisposable_Dispose_m44B63F804C017538A59070290A5BAEA8B1DCCF7A (U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DatabasesController/<UpdatePlayers>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdatePlayersU3Ed__44_MoveNext_mD39A5CEF443C41F915B8768CD2546124B95916FC (U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BDB71B80D33F3A9A67AA43EA24C28C45FF2410C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWW players = new WWW(adress + "/readplayers.php");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_4 = V_1;
		String_t* L_5 = L_4->___adress_38;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral7BDB71B80D33F3A9A67AA43EA24C28C45FF2410C, NULL);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_7 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_7, L_6, NULL);
		__this->___U3CplayersU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayersU3E5__2_3), (void*)L_7);
		// yield return players;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_8 = __this->___U3CplayersU3E5__2_3;
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playerOk = true;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_9 = V_1;
		L_9->___playerOk_40 = (bool)1;
		// playersGiantString = players.text;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_10 = V_1;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = __this->___U3CplayersU3E5__2_3;
		String_t* L_12;
		L_12 = WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F(L_11, NULL);
		L_10->___playersGiantString_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___playersGiantString_12), (void*)L_12);
		// dataPlayers = playersGiantString.Split("|");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_13 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_14 = V_1;
		String_t* L_15 = L_14->___playersGiantString_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_15, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, 0, NULL);
		L_13->___dataPlayers_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___dataPlayers_6), (void*)L_16);
		// id_player = new string[dataPlayers.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_17 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_18 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18->___dataPlayers_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1)));
		L_17->___id_player_16 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___id_player_16), (void*)L_20);
		// name_player = new string[dataPlayers.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_21 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_22 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22->___dataPlayers_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), 1)));
		L_21->___name_player_17 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___name_player_17), (void*)L_24);
		// level_player = new string[dataPlayers.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_25 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_26 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26->___dataPlayers_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), 1)));
		L_25->___level_player_18 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___level_player_18), (void*)L_28);
		// race_player = new string[dataPlayers.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_29 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_30 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30->___dataPlayers_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1)));
		L_29->___race_player_19 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___race_player_19), (void*)L_32);
		// class_player = new string[dataPlayers.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_33 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_34 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34->___dataPlayers_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_35)->max_length)), 1)));
		L_33->___class_player_20 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___class_player_20), (void*)L_36);
		// for (int i = 0; i < dataPlayers.Length; i++)
		V_2 = 0;
		goto IL_014f;
	}

IL_00f1:
	{
		// string[] temp = dataPlayers[i].Split(";");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_37 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37->___dataPlayers_6;
		int32_t L_39 = V_2;
		int32_t L_40 = L_39;
		String_t* L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42;
		L_42 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_41, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, 0, NULL);
		V_3 = L_42;
		// if (temp[0] == "") continue;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_3;
		int32_t L_44 = 0;
		String_t* L_45 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_46)
		{
			goto IL_014b;
		}
	}
	{
		// id_player[i] = temp[0];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_47 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47->___id_player_16;
		int32_t L_49 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = V_3;
		int32_t L_51 = 0;
		String_t* L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		ArrayElementTypeCheck (L_48, L_52);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49), (String_t*)L_52);
		// name_player[i] = temp[1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_53 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53->___name_player_17;
		int32_t L_55 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = V_3;
		int32_t L_57 = 1;
		String_t* L_58 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		ArrayElementTypeCheck (L_54, L_58);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55), (String_t*)L_58);
		// level_player[i] = temp[2];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_59 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_59->___level_player_18;
		int32_t L_61 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = V_3;
		int32_t L_63 = 2;
		String_t* L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		ArrayElementTypeCheck (L_60, L_64);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61), (String_t*)L_64);
		// race_player[i] = temp[3];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65->___race_player_19;
		int32_t L_67 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_3;
		int32_t L_69 = 3;
		String_t* L_70 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		ArrayElementTypeCheck (L_66, L_70);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67), (String_t*)L_70);
		// class_player[i] = temp[4];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_71 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71->___class_player_20;
		int32_t L_73 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = V_3;
		int32_t L_75 = 4;
		String_t* L_76 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		ArrayElementTypeCheck (L_72, L_76);
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73), (String_t*)L_76);
	}

IL_014b:
	{
		// for (int i = 0; i < dataPlayers.Length; i++)
		int32_t L_77 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014f:
	{
		// for (int i = 0; i < dataPlayers.Length; i++)
		int32_t L_78 = V_2;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_79 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_79->___dataPlayers_6;
		if ((((int32_t)L_78) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_00f1;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DatabasesController/<UpdatePlayers>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePlayersU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A111653F728A0968B6BF5C47B418097D7279F72 (U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DatabasesController/<UpdatePlayers>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePlayersU3Ed__44_System_Collections_IEnumerator_Reset_m6A8098BBD2DAC51EC57061669D400CFCC9B75282 (U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdatePlayersU3Ed__44_System_Collections_IEnumerator_Reset_m6A8098BBD2DAC51EC57061669D400CFCC9B75282_RuntimeMethod_var)));
	}
}
// System.Object DatabasesController/<UpdatePlayers>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePlayersU3Ed__44_System_Collections_IEnumerator_get_Current_m90904F27BEC4FAB2A17DA32D87EBF612B31F00E7 (U3CUpdatePlayersU3Ed__44_t8D0E0FA4865EB1FCD3693395486CD37FB748664E* __this, const RuntimeMethod* method) 
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
// System.Void DatabasesController/<UpdateAbyss>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateAbyssU3Ed__45__ctor_m0BE70A3E92514015EED1FB060C65DC41A5F07C53 (U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DatabasesController/<UpdateAbyss>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateAbyssU3Ed__45_System_IDisposable_Dispose_mCCC2234D6D476A3664EB68419F798F0661D877EB (U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DatabasesController/<UpdateAbyss>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateAbyssU3Ed__45_MoveNext_m04270B6F6D5ECD24C8F9DA27C6C61E34907B4C4E (U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFD3FC73AC7C839757DEF9B58CF965A6AF2EF0D1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWW abyss = new WWW(adress + "/readabyss.php");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_4 = V_1;
		String_t* L_5 = L_4->___adress_38;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteralDFD3FC73AC7C839757DEF9B58CF965A6AF2EF0D1, NULL);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_7 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_7, L_6, NULL);
		__this->___U3CabyssU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CabyssU3E5__2_3), (void*)L_7);
		// yield return abyss;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_8 = __this->___U3CabyssU3E5__2_3;
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// abyssOk = true;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_9 = V_1;
		L_9->___abyssOk_41 = (bool)1;
		// abyssGiantString = abyss.text;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_10 = V_1;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = __this->___U3CabyssU3E5__2_3;
		String_t* L_12;
		L_12 = WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F(L_11, NULL);
		L_10->___abyssGiantString_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___abyssGiantString_11), (void*)L_12);
		// dataAbyss = abyssGiantString.Split("|");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_13 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_14 = V_1;
		String_t* L_15 = L_14->___abyssGiantString_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_15, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, 0, NULL);
		L_13->___dataAbyss_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___dataAbyss_7), (void*)L_16);
		// id_player_Abyss = new string[dataAbyss.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_17 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_18 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18->___dataAbyss_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1)));
		L_17->___id_player_Abyss_21 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___id_player_Abyss_21), (void*)L_20);
		// ap_Abyss = new string[dataAbyss.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_21 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_22 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22->___dataAbyss_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), 1)));
		L_21->___ap_Abyss_22 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___ap_Abyss_22), (void*)L_24);
		// rank_Abyss = new string[dataAbyss.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_25 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_26 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26->___dataAbyss_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), 1)));
		L_25->___rank_Abyss_23 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___rank_Abyss_23), (void*)L_28);
		// dailyKill_Abyss = new string[dataAbyss.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_29 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_30 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30->___dataAbyss_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1)));
		L_29->___dailyKill_Abyss_24 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___dailyKill_Abyss_24), (void*)L_32);
		// allKill_Abyss = new string[dataAbyss.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_33 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_34 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34->___dataAbyss_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_35)->max_length)), 1)));
		L_33->___allKill_Abyss_25 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___allKill_Abyss_25), (void*)L_36);
		// for (int i = 0; i < dataAbyss.Length; i++)
		V_2 = 0;
		goto IL_014f;
	}

IL_00f1:
	{
		// string[] temp = dataAbyss[i].Split(";");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_37 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37->___dataAbyss_7;
		int32_t L_39 = V_2;
		int32_t L_40 = L_39;
		String_t* L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42;
		L_42 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_41, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, 0, NULL);
		V_3 = L_42;
		// if (temp[0] == "") continue;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_3;
		int32_t L_44 = 0;
		String_t* L_45 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_46)
		{
			goto IL_014b;
		}
	}
	{
		// id_player_Abyss[i] = temp[0];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_47 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47->___id_player_Abyss_21;
		int32_t L_49 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = V_3;
		int32_t L_51 = 0;
		String_t* L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		ArrayElementTypeCheck (L_48, L_52);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49), (String_t*)L_52);
		// ap_Abyss[i] = temp[1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_53 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53->___ap_Abyss_22;
		int32_t L_55 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = V_3;
		int32_t L_57 = 1;
		String_t* L_58 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		ArrayElementTypeCheck (L_54, L_58);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55), (String_t*)L_58);
		// rank_Abyss[i] = temp[2];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_59 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_59->___rank_Abyss_23;
		int32_t L_61 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = V_3;
		int32_t L_63 = 2;
		String_t* L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		ArrayElementTypeCheck (L_60, L_64);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61), (String_t*)L_64);
		// dailyKill_Abyss[i] = temp[3];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65->___dailyKill_Abyss_24;
		int32_t L_67 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_3;
		int32_t L_69 = 3;
		String_t* L_70 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		ArrayElementTypeCheck (L_66, L_70);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67), (String_t*)L_70);
		// allKill_Abyss[i] = temp[4];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_71 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71->___allKill_Abyss_25;
		int32_t L_73 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = V_3;
		int32_t L_75 = 4;
		String_t* L_76 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		ArrayElementTypeCheck (L_72, L_76);
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73), (String_t*)L_76);
	}

IL_014b:
	{
		// for (int i = 0; i < dataAbyss.Length; i++)
		int32_t L_77 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014f:
	{
		// for (int i = 0; i < dataAbyss.Length; i++)
		int32_t L_78 = V_2;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_79 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_79->___dataAbyss_7;
		if ((((int32_t)L_78) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_00f1;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DatabasesController/<UpdateAbyss>d__45::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateAbyssU3Ed__45_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAAB6AF77393A844E20A360C6898279C285211E16 (U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DatabasesController/<UpdateAbyss>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateAbyssU3Ed__45_System_Collections_IEnumerator_Reset_mA881987AAAA1298E52236694EE0962BFA76A3265 (U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateAbyssU3Ed__45_System_Collections_IEnumerator_Reset_mA881987AAAA1298E52236694EE0962BFA76A3265_RuntimeMethod_var)));
	}
}
// System.Object DatabasesController/<UpdateAbyss>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateAbyssU3Ed__45_System_Collections_IEnumerator_get_Current_mE45E4B2A22B0B3E370857738195A54044DEF54B8 (U3CUpdateAbyssU3Ed__45_tFE3104BEB91ED8F858DE043073518E5CC74DCF07* __this, const RuntimeMethod* method) 
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
// System.Void DatabasesController/<UpdateKinah>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateKinahU3Ed__46__ctor_m41FD0AC9EA467D65D5CDCA477C968FE423F6FC3B (U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DatabasesController/<UpdateKinah>d__46::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateKinahU3Ed__46_System_IDisposable_Dispose_m2AD83929F409CF7E6E369CD914CDD19E5648560F (U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DatabasesController/<UpdateKinah>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateKinahU3Ed__46_MoveNext_m9B9F309419746FFF32854BDF9D94E077075A4648 (U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0D1ABD36DF5A2F8A3DC1FE29ECFE90B5938E85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWW kinah = new WWW(adress + "/readkinah.php");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_4 = V_1;
		String_t* L_5 = L_4->___adress_38;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteralCF0D1ABD36DF5A2F8A3DC1FE29ECFE90B5938E85, NULL);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_7 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_7, L_6, NULL);
		__this->___U3CkinahU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkinahU3E5__2_3), (void*)L_7);
		// yield return kinah;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_8 = __this->___U3CkinahU3E5__2_3;
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// kinahOk = true;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_9 = V_1;
		L_9->___kinahOk_44 = (bool)1;
		// kinahGiantString = kinah.text;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_10 = V_1;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = __this->___U3CkinahU3E5__2_3;
		String_t* L_12;
		L_12 = WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F(L_11, NULL);
		L_10->___kinahGiantString_15 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___kinahGiantString_15), (void*)L_12);
		// dataKinah = kinahGiantString.Split("|");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_13 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_14 = V_1;
		String_t* L_15 = L_14->___kinahGiantString_15;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_15, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, 0, NULL);
		L_13->___dataKinah_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___dataKinah_10), (void*)L_16);
		// id_PlayerKinah = new string[dataKinah.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_17 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_18 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18->___dataKinah_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1)));
		L_17->___id_PlayerKinah_36 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___id_PlayerKinah_36), (void*)L_20);
		// playerKinah = new string[dataKinah.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_21 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_22 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22->___dataKinah_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), 1)));
		L_21->___playerKinah_37 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___playerKinah_37), (void*)L_24);
		// for (int i = 0; i < dataKinah.Length; i++)
		V_2 = 0;
		goto IL_00ef;
	}

IL_00b2:
	{
		// string[] temp = dataKinah[i].Split(";");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_25 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25->___dataKinah_10;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		String_t* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30;
		L_30 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_29, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, 0, NULL);
		V_3 = L_30;
		// if (temp[0] == "") continue;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_3;
		int32_t L_32 = 0;
		String_t* L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_34)
		{
			goto IL_00eb;
		}
	}
	{
		// id_PlayerKinah[i] = temp[0];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_35 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35->___id_PlayerKinah_36;
		int32_t L_37 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_3;
		int32_t L_39 = 0;
		String_t* L_40 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		ArrayElementTypeCheck (L_36, L_40);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37), (String_t*)L_40);
		// playerKinah[i] = temp[1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_41 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41->___playerKinah_37;
		int32_t L_43 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = V_3;
		int32_t L_45 = 1;
		String_t* L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		ArrayElementTypeCheck (L_42, L_46);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43), (String_t*)L_46);
	}

IL_00eb:
	{
		// for (int i = 0; i < dataKinah.Length; i++)
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00ef:
	{
		// for (int i = 0; i < dataKinah.Length; i++)
		int32_t L_48 = V_2;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_49 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49->___dataKinah_10;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_00b2;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DatabasesController/<UpdateKinah>d__46::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateKinahU3Ed__46_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9824429A6169CD13DBEBF98B8CA987C3EB3A1E3D (U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DatabasesController/<UpdateKinah>d__46::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateKinahU3Ed__46_System_Collections_IEnumerator_Reset_mA37D2120118A482606C41B624EF834D5B58489E4 (U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateKinahU3Ed__46_System_Collections_IEnumerator_Reset_mA37D2120118A482606C41B624EF834D5B58489E4_RuntimeMethod_var)));
	}
}
// System.Object DatabasesController/<UpdateKinah>d__46::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateKinahU3Ed__46_System_Collections_IEnumerator_get_Current_mEDC9EA79A6BC534377409BFEEF0D27D202DF39AE (U3CUpdateKinahU3Ed__46_t93C4D9D31AB8A8B58AD20DADA49C56D80CAFA65E* __this, const RuntimeMethod* method) 
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
// System.Void DatabasesController/<UpdateLegions>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateLegionsU3Ed__47__ctor_mB1E79A17BDFB7A0A1FBD32AF78951C5301C26456 (U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DatabasesController/<UpdateLegions>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateLegionsU3Ed__47_System_IDisposable_Dispose_m5162D934E6103AAD3418B903CD87AF3BDE7B8733 (U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DatabasesController/<UpdateLegions>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateLegionsU3Ed__47_MoveNext_m80D2028062B15A921AC7978A1C1FFA9C6B921BA8 (U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848068D1E5D232B2055A0E4545DCB53F0F6CF18B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWW legions = new WWW(adress + "/readlegions.php");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_4 = V_1;
		String_t* L_5 = L_4->___adress_38;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral848068D1E5D232B2055A0E4545DCB53F0F6CF18B, NULL);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_7 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_7, L_6, NULL);
		__this->___U3ClegionsU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClegionsU3E5__2_3), (void*)L_7);
		// yield return legions;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_8 = __this->___U3ClegionsU3E5__2_3;
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// legionsOk = true;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_9 = V_1;
		L_9->___legionsOk_42 = (bool)1;
		// legionsGiantString = legions.text;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_10 = V_1;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = __this->___U3ClegionsU3E5__2_3;
		String_t* L_12;
		L_12 = WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F(L_11, NULL);
		L_10->___legionsGiantString_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___legionsGiantString_13), (void*)L_12);
		// dataLegions = legionsGiantString.Split("|");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_13 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_14 = V_1;
		String_t* L_15 = L_14->___legionsGiantString_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_15, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, 0, NULL);
		L_13->___dataLegions_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___dataLegions_8), (void*)L_16);
		// id_Legion = new string[dataLegions.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_17 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_18 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18->___dataLegions_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1)));
		L_17->___id_Legion_26 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___id_Legion_26), (void*)L_20);
		// name_Legion = new string[dataLegions.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_21 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_22 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22->___dataLegions_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), 1)));
		L_21->___name_Legion_27 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___name_Legion_27), (void*)L_24);
		// level_Legion = new string[dataLegions.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_25 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_26 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26->___dataLegions_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), 1)));
		L_25->___level_Legion_28 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___level_Legion_28), (void*)L_28);
		// cp_Legion = new string[dataLegions.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_29 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_30 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30->___dataLegions_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1)));
		L_29->___cp_Legion_29 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___cp_Legion_29), (void*)L_32);
		// rankCp_Legion = new string[dataLegions.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_33 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_34 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34->___dataLegions_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_35)->max_length)), 1)));
		L_33->___rankCp_Legion_30 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___rankCp_Legion_30), (void*)L_36);
		// rankPos_Legion = new string[dataLegions.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_37 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_38 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38->___dataLegions_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_39)->max_length)), 1)));
		L_37->___rankPos_Legion_31 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->___rankPos_Legion_31), (void*)L_40);
		// for (int i = 0; i < dataLegions.Length; i++)
		V_2 = 0;
		goto IL_016f;
	}

IL_0106:
	{
		// string[] temp = dataLegions[i].Split(";");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_41 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41->___dataLegions_8;
		int32_t L_43 = V_2;
		int32_t L_44 = L_43;
		String_t* L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46;
		L_46 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_45, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, 0, NULL);
		V_3 = L_46;
		// if (temp[0] == "") continue;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_3;
		int32_t L_48 = 0;
		String_t* L_49 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_50)
		{
			goto IL_016b;
		}
	}
	{
		// id_Legion[i] = temp[0];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_51 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_51->___id_Legion_26;
		int32_t L_53 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = V_3;
		int32_t L_55 = 0;
		String_t* L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		ArrayElementTypeCheck (L_52, L_56);
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53), (String_t*)L_56);
		// name_Legion[i] = temp[1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_57 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57->___name_Legion_27;
		int32_t L_59 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = V_3;
		int32_t L_61 = 1;
		String_t* L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		ArrayElementTypeCheck (L_58, L_62);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59), (String_t*)L_62);
		// level_Legion[i] = temp[2];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_63 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_63->___level_Legion_28;
		int32_t L_65 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = V_3;
		int32_t L_67 = 2;
		String_t* L_68 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		ArrayElementTypeCheck (L_64, L_68);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65), (String_t*)L_68);
		// cp_Legion[i] = temp[3];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_69 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_69->___cp_Legion_29;
		int32_t L_71 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = V_3;
		int32_t L_73 = 3;
		String_t* L_74 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		ArrayElementTypeCheck (L_70, L_74);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71), (String_t*)L_74);
		// rankCp_Legion[i] = temp[4];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_75 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = L_75->___rankCp_Legion_30;
		int32_t L_77 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = V_3;
		int32_t L_79 = 4;
		String_t* L_80 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79));
		ArrayElementTypeCheck (L_76, L_80);
		(L_76)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77), (String_t*)L_80);
		// rankPos_Legion[i] = temp[5];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_81 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = L_81->___rankPos_Legion_31;
		int32_t L_83 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = V_3;
		int32_t L_85 = 5;
		String_t* L_86 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		ArrayElementTypeCheck (L_82, L_86);
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83), (String_t*)L_86);
	}

IL_016b:
	{
		// for (int i = 0; i < dataLegions.Length; i++)
		int32_t L_87 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_016f:
	{
		// for (int i = 0; i < dataLegions.Length; i++)
		int32_t L_88 = V_2;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_89 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = L_89->___dataLegions_8;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_90)->max_length)))))
		{
			goto IL_0106;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DatabasesController/<UpdateLegions>d__47::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateLegionsU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5C5792D4E3C67A9828BAA24FCDE53CD672C2DE3E (U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DatabasesController/<UpdateLegions>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateLegionsU3Ed__47_System_Collections_IEnumerator_Reset_mA450041787A0B587313D36E179FA4A7F43D9AD31 (U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateLegionsU3Ed__47_System_Collections_IEnumerator_Reset_mA450041787A0B587313D36E179FA4A7F43D9AD31_RuntimeMethod_var)));
	}
}
// System.Object DatabasesController/<UpdateLegions>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateLegionsU3Ed__47_System_Collections_IEnumerator_get_Current_mFC8E8CC166664DBEA8DC8E2F427719F173B6F9E4 (U3CUpdateLegionsU3Ed__47_t03F7DA22C4FB6DAE5ED4E68F0F895BAFADBFB9DC* __this, const RuntimeMethod* method) 
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
// System.Void DatabasesController/<UpdateMembers>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateMembersU3Ed__48__ctor_mA5219292B2D2DF45C30661B0C22CEB0896412A29 (U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DatabasesController/<UpdateMembers>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateMembersU3Ed__48_System_IDisposable_Dispose_m45427342FF50A8D831B529D10DB97DE259FDC4B9 (U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DatabasesController/<UpdateMembers>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateMembersU3Ed__48_MoveNext_m1B8D78A3D8EF56ADC81D2C7553016C0400F91B5E (U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0A58B91F58F7D3C5039E01EE455503B686B769);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWW legionMembers = new WWW(adress + "/readlegionmembers.php");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_4 = V_1;
		String_t* L_5 = L_4->___adress_38;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral4D0A58B91F58F7D3C5039E01EE455503B686B769, NULL);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_7 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_7, L_6, NULL);
		__this->___U3ClegionMembersU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClegionMembersU3E5__2_3), (void*)L_7);
		// yield return legionMembers;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_8 = __this->___U3ClegionMembersU3E5__2_3;
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// membersOk = true;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_9 = V_1;
		L_9->___membersOk_43 = (bool)1;
		// legionMembersGiantString = legionMembers.text;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_10 = V_1;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = __this->___U3ClegionMembersU3E5__2_3;
		String_t* L_12;
		L_12 = WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F(L_11, NULL);
		L_10->___legionMembersGiantString_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___legionMembersGiantString_14), (void*)L_12);
		// dataMembers = legionMembersGiantString.Split("|");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_13 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_14 = V_1;
		String_t* L_15 = L_14->___legionMembersGiantString_14;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_15, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, 0, NULL);
		L_13->___dataMembers_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___dataMembers_9), (void*)L_16);
		// id_Legion_Member = new string[dataMembers.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_17 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_18 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18->___dataMembers_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1)));
		L_17->___id_Legion_Member_32 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___id_Legion_Member_32), (void*)L_20);
		// id_Player_Member = new string[dataMembers.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_21 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_22 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22->___dataMembers_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), 1)));
		L_21->___id_Player_Member_33 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___id_Player_Member_33), (void*)L_24);
		// rank_Member = new string[dataMembers.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_25 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_26 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26->___dataMembers_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), 1)));
		L_25->___rank_Member_34 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___rank_Member_34), (void*)L_28);
		// challenge_score_Member = new string[dataMembers.Length - 1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_29 = V_1;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_30 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30->___dataMembers_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1)));
		L_29->___challenge_score_Member_35 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___challenge_score_Member_35), (void*)L_32);
		// for (int i = 0; i < dataMembers.Length; i++)
		V_2 = 0;
		goto IL_012f;
	}

IL_00dc:
	{
		// string[] temp = dataMembers[i].Split(";");
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_33 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33->___dataMembers_9;
		int32_t L_35 = V_2;
		int32_t L_36 = L_35;
		String_t* L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38;
		L_38 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_37, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, 0, NULL);
		V_3 = L_38;
		// if (temp[0] == "") continue;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_3;
		int32_t L_40 = 0;
		String_t* L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_42)
		{
			goto IL_012b;
		}
	}
	{
		// id_Legion_Member[i] = temp[0];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_43 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43->___id_Legion_Member_32;
		int32_t L_45 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_3;
		int32_t L_47 = 0;
		String_t* L_48 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		ArrayElementTypeCheck (L_44, L_48);
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45), (String_t*)L_48);
		// id_Player_Member[i] = temp[1];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_49 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49->___id_Player_Member_33;
		int32_t L_51 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_3;
		int32_t L_53 = 1;
		String_t* L_54 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		ArrayElementTypeCheck (L_50, L_54);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51), (String_t*)L_54);
		// rank_Member[i] = temp[2];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_55 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_55->___rank_Member_34;
		int32_t L_57 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = V_3;
		int32_t L_59 = 2;
		String_t* L_60 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		ArrayElementTypeCheck (L_56, L_60);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57), (String_t*)L_60);
		// challenge_score_Member[i] = temp[3];
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_61 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61->___challenge_score_Member_35;
		int32_t L_63 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = V_3;
		int32_t L_65 = 3;
		String_t* L_66 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		ArrayElementTypeCheck (L_62, L_66);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63), (String_t*)L_66);
	}

IL_012b:
	{
		// for (int i = 0; i < dataMembers.Length; i++)
		int32_t L_67 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_012f:
	{
		// for (int i = 0; i < dataMembers.Length; i++)
		int32_t L_68 = V_2;
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_69 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_69->___dataMembers_9;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_00dc;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DatabasesController/<UpdateMembers>d__48::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateMembersU3Ed__48_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5D77627F6429746E58F66E5606C24911308365C4 (U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DatabasesController/<UpdateMembers>d__48::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateMembersU3Ed__48_System_Collections_IEnumerator_Reset_m1B10AB841A152BFB064105BAE5984949033CA84E (U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateMembersU3Ed__48_System_Collections_IEnumerator_Reset_m1B10AB841A152BFB064105BAE5984949033CA84E_RuntimeMethod_var)));
	}
}
// System.Object DatabasesController/<UpdateMembers>d__48::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateMembersU3Ed__48_System_Collections_IEnumerator_get_Current_m0D172BEB0E49575F58A07B4CE8AB19025ED5643D (U3CUpdateMembersU3Ed__48_tAC2014CA43DE89206EF9AE7CF0E2D272DBF5377E* __this, const RuntimeMethod* method) 
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
// System.String HashcodeGenerator::Base64Encode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashcodeGenerator_Base64Encode_mC5AB24FCF8022C0A58CD613C5DBE3D65E72D1A96 (HashcodeGenerator_t0172D3F77BA4E70D25FD7EF2F3B17B010D3D79EA* __this, String_t* ___0_plainText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var plainTextBytes = System.Text.Encoding.UTF8.GetBytes(plainText);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_plainText;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		// return System.Convert.ToBase64String(plainTextBytes);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_2, NULL);
		return L_3;
	}
}
// System.String HashcodeGenerator::Base64Decode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashcodeGenerator_Base64Decode_m430E80A7853310F1C6E12EC1C0046210FADCB81C (HashcodeGenerator_t0172D3F77BA4E70D25FD7EF2F3B17B010D3D79EA* __this, String_t* ___0_base64EncodedData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// var base64EncodedBytes = System.Convert.FromBase64String(base64EncodedData);
		String_t* L_0 = ___0_base64EncodedData;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_0, NULL);
		V_0 = L_1;
		// return System.Text.Encoding.UTF8.GetString(base64EncodedBytes);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.Void HashcodeGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashcodeGenerator__ctor_m1C12FBD9D7425567609E0D6E23C2AA4C6A6BBA2A (HashcodeGenerator_t0172D3F77BA4E70D25FD7EF2F3B17B010D3D79EA* __this, const RuntimeMethod* method) 
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
// System.Void ItemConfig::SetupItem(System.String,System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemConfig_SetupItem_m68EDD6CAE35CF12C44195D07BB4F89926E33D664 (ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1* __this, String_t* ___0_name, String_t* ___1_race, String_t* ___2_legion, String_t* ___3_record, int32_t ___4_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral186728018354DD5A345662365525D1905258CFCE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// textIndex.text = (index + 1).ToString("D2");
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___textIndex_4;
		int32_t L_1 = ___4_index;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		String_t* L_2;
		L_2 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteral186728018354DD5A345662365525D1905258CFCE, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// textName.text = name;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___textName_5;
		String_t* L_4 = ___0_name;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_4);
		// textRace.text = race;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___textRace_6;
		String_t* L_6 = ___1_race;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_6);
		// textLegion.text = legion;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___textLegion_7;
		String_t* L_8 = ___2_legion;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_8);
		// textKills.text = record;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_9 = __this->___textKills_8;
		String_t* L_10 = ___3_record;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_10);
		// }
		return;
	}
}
// System.Void ItemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemConfig__ctor_m2686C7EE53D7DDE1FE07517C4E7BFECEDCD8F116 (ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1* __this, const RuntimeMethod* method) 
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
// System.Void PanelController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_Start_m5AE3E113BE7B457E2DC0EBD8E5A1661868BECE3C (PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6_m0E630474CED10A89CB1E99FC495AAEDDC3EFB3BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dbControl = GetComponent<DatabasesController>();
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_0;
		L_0 = Component_GetComponent_TisDatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6_m0E630474CED10A89CB1E99FC495AAEDDC3EFB3BA(__this, Component_GetComponent_TisDatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6_m0E630474CED10A89CB1E99FC495AAEDDC3EFB3BA_RuntimeMethod_var);
		__this->___dbControl_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dbControl_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void PanelController::ClearChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_ClearChildren_mFBCB76FDDC84911E8F403F0BDEF7EA3DBA8CBF8E (PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < content.childCount; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// Destroy(content.GetChild(i).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___content_5;
		int32_t L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// for (int i = 0; i < content.childCount; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < content.childCount; i++)
		int32_t L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___content_5;
		int32_t L_7;
		L_7 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_6, NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PanelController::GetTopLegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_GetTopLegion_mC55C5ECCB422D808732CAFE72001B489698F732C (PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08AC20EE8EDAF0682E5226C36C2927A5B29CB1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26D75FF671E6F09E6ED64A016553D42501475490);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	{
		// int counter = 10;
		V_0 = ((int32_t)10);
		// List<string> topLegionTemp = dbControl.GetTopLegionList();
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_0 = __this->___dbControl_9;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = DatabasesController_GetTopLegionList_mCBC0B95FBCEF54B30E29231140E527E3CDEE65BC(L_0, NULL);
		V_1 = L_1;
		// if (topLegionTemp.Count <= 10)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = V_1;
		int32_t L_3;
		L_3 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_2, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)((int32_t)10))))
		{
			goto IL_0022;
		}
	}
	{
		// counter = topLegionTemp.Count;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = V_1;
		int32_t L_5;
		L_5 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_4, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0025;
	}

IL_0022:
	{
		// else counter = 10;
		V_0 = ((int32_t)10);
	}

IL_0025:
	{
		// typeTitlePoint.text = "Rank";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___typeTitlePoint_8;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A);
		// typeTitleOwner.text = "Legion";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___typeTitleOwner_6;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteral08AC20EE8EDAF0682E5226C36C2927A5B29CB1F3);
		// typeTitleLeaderOrLegion.text = "Leader";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___typeTitleLeaderOrLegion_7;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteral26D75FF671E6F09E6ED64A016553D42501475490);
		// for (int i = 0; i < counter; i++)
		V_2 = 0;
		goto IL_00a3;
	}

IL_0059:
	{
		// string[] temp = topLegionTemp[i].Split(";");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_1;
		int32_t L_10 = V_2;
		String_t* L_11;
		L_11 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_9, L_10, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_11, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, 0, NULL);
		V_3 = L_12;
		// GameObject go = Instantiate(itemPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___itemPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// go.transform.SetParent(content);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___content_5;
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_16, L_17, NULL);
		// go.GetComponent<ItemConfig>().SetupItem(temp[0], temp[1], temp[2], temp[3], i);
		ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1* L_18;
		L_18 = GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28(L_15, GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_3;
		int32_t L_20 = 0;
		String_t* L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_3;
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_3;
		int32_t L_26 = 2;
		String_t* L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_3;
		int32_t L_29 = 3;
		String_t* L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_2;
		ItemConfig_SetupItem_m68EDD6CAE35CF12C44195D07BB4F89926E33D664(L_18, L_21, L_24, L_27, L_30, L_31, NULL);
		// for (int i = 0; i < counter; i++)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00a3:
	{
		// for (int i = 0; i < counter; i++)
		int32_t L_33 = V_2;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0059;
		}
	}
	{
		// dbControl.RefreshData();
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_35 = __this->___dbControl_9;
		DatabasesController_RefreshData_mC285CF09286A8693D6829C3C2C40C215BB9A4A55(L_35, NULL);
		// }
		return;
	}
}
// System.Void PanelController::GetTopPlayer(TopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_GetTopPlayer_m8EF187323A2DC31F868063CFE4370D3C65DAFE07 (PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08AC20EE8EDAF0682E5226C36C2927A5B29CB1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A1184EA1E82988D99A1B56F425065C0A8595C54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C10FCA31285FFC89270A643584901BF00BDA87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	{
		// int counter = 10;
		V_0 = ((int32_t)10);
		int32_t L_0 = ___0_type;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_type;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_00c1;
		}
	}
	{
		goto IL_0171;
	}

IL_0012:
	{
		// List<string> topPlayerTemp = dbControl.GetTopPlayerList(type);
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_2 = __this->___dbControl_9;
		int32_t L_3 = ___0_type;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4;
		L_4 = DatabasesController_GetTopPlayerList_m1523A789F0CB95D34987E6A6C884F1135AFA42CC(L_2, L_3, NULL);
		V_1 = L_4;
		// if (topPlayerTemp.Count <= 10)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = V_1;
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_6) > ((int32_t)((int32_t)10))))
		{
			goto IL_0032;
		}
	}
	{
		// counter = topPlayerTemp.Count;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = V_1;
		int32_t L_8;
		L_8 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_7, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = L_8;
		goto IL_0035;
	}

IL_0032:
	{
		// else counter = 10;
		V_0 = ((int32_t)10);
	}

IL_0035:
	{
		// typeTitlePoint.text = "Kills";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_9 = __this->___typeTitlePoint_8;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, _stringLiteral24C10FCA31285FFC89270A643584901BF00BDA87);
		// typeTitleOwner.text = "Player";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___typeTitleOwner_6;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		// typeTitleLeaderOrLegion.text = "Legion";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = __this->___typeTitleLeaderOrLegion_7;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, _stringLiteral08AC20EE8EDAF0682E5226C36C2927A5B29CB1F3);
		// for (int i = 0; i < counter; i++){
		V_3 = 0;
		goto IL_00b8;
	}

IL_0069:
	{
		// string[] temp = topPlayerTemp[i].Split(";");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_1;
		int32_t L_13 = V_3;
		String_t* L_14;
		L_14 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_12, L_13, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_14, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, 0, NULL);
		V_4 = L_15;
		// GameObject go = Instantiate(itemPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___itemPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// go.transform.SetParent(content);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___content_5;
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_19, L_20, NULL);
		// go.GetComponent<ItemConfig>().SetupItem(temp[0], temp[1], temp[2], temp[3], i);
		ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1* L_21;
		L_21 = GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28(L_18, GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_4;
		int32_t L_23 = 0;
		String_t* L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_4;
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_4;
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_4;
		int32_t L_32 = 3;
		String_t* L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = V_3;
		ItemConfig_SetupItem_m68EDD6CAE35CF12C44195D07BB4F89926E33D664(L_21, L_24, L_27, L_30, L_33, L_34, NULL);
		// for (int i = 0; i < counter; i++){
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b8:
	{
		// for (int i = 0; i < counter; i++){
		int32_t L_36 = V_3;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0069;
		}
	}
	{
		// break;
		goto IL_0171;
	}

IL_00c1:
	{
		// List<string> topRichTemp = dbControl.GetTopPlayerList(type);
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_38 = __this->___dbControl_9;
		int32_t L_39 = ___0_type;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_40;
		L_40 = DatabasesController_GetTopPlayerList_m1523A789F0CB95D34987E6A6C884F1135AFA42CC(L_38, L_39, NULL);
		V_2 = L_40;
		// if (topRichTemp.Count <= 10)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_41 = V_2;
		int32_t L_42;
		L_42 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_41, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_42) > ((int32_t)((int32_t)10))))
		{
			goto IL_00e1;
		}
	}
	{
		// counter = topRichTemp.Count;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_43 = V_2;
		int32_t L_44;
		L_44 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_43, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = L_44;
		goto IL_00e4;
	}

IL_00e1:
	{
		// else counter = 10;
		V_0 = ((int32_t)10);
	}

IL_00e4:
	{
		// typeTitlePoint.text = "Kinah";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_45 = __this->___typeTitlePoint_8;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_45, _stringLiteral1A1184EA1E82988D99A1B56F425065C0A8595C54);
		// typeTitleOwner.text = "Player";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_46 = __this->___typeTitleOwner_6;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_46, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		// typeTitleLeaderOrLegion.text = "Legion";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_47 = __this->___typeTitleLeaderOrLegion_7;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_47, _stringLiteral08AC20EE8EDAF0682E5226C36C2927A5B29CB1F3);
		// for (int i = 0; i < counter; i++)
		V_5 = 0;
		goto IL_016c;
	}

IL_0119:
	{
		// string[] temp = topRichTemp[i].Split(";");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48 = V_2;
		int32_t L_49 = V_5;
		String_t* L_50;
		L_50 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_48, L_49, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51;
		L_51 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_50, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, 0, NULL);
		V_6 = L_51;
		// GameObject go = Instantiate(itemPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___itemPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_52, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// go.transform.SetParent(content);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = L_53;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = __this->___content_5;
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_55, L_56, NULL);
		// go.GetComponent<ItemConfig>().SetupItem(temp[0], temp[1], temp[2], temp[3], i);
		ItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1* L_57;
		L_57 = GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28(L_54, GameObject_GetComponent_TisItemConfig_t908311A1E0CF49FA9FBE95CFC245422973CAC1B1_m3F04AD76263CCCAE3B143956D898C6261360CE28_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = V_6;
		int32_t L_59 = 0;
		String_t* L_60 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = V_6;
		int32_t L_62 = 1;
		String_t* L_63 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = V_6;
		int32_t L_65 = 2;
		String_t* L_66 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = V_6;
		int32_t L_68 = 3;
		String_t* L_69 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		int32_t L_70 = V_5;
		ItemConfig_SetupItem_m68EDD6CAE35CF12C44195D07BB4F89926E33D664(L_57, L_60, L_63, L_66, L_69, L_70, NULL);
		// for (int i = 0; i < counter; i++)
		int32_t L_71 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_016c:
	{
		// for (int i = 0; i < counter; i++)
		int32_t L_72 = V_5;
		int32_t L_73 = V_0;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0119;
		}
	}

IL_0171:
	{
		// dbControl.RefreshData();
		DatabasesController_tD40F2ACAD18584897EAC59F8F2962971CEFC4AD6* L_74 = __this->___dbControl_9;
		DatabasesController_RefreshData_mC285CF09286A8693D6829C3C2C40C215BB9A4A55(L_74, NULL);
		// }
		return;
	}
}
// System.Void PanelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController__ctor_mD7FA64FF1D8A83D3DDB3E4FE88C75DE84257E58A (PanelController_tE72D326B3217A1E43AB0AB6DB3966CFFB2421C27* __this, const RuntimeMethod* method) 
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
