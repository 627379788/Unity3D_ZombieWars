#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Linq.Expressions.ParameterExpression>
struct Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59;
// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>
struct CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F;
// System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>
struct CacheDict_2_t4D7FFB59CB1E33398FCBBDC6A739780EC97F3F14;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Int32>
struct Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.LambdaExpression>
struct IEqualityComparer_1_t2C0AE3683CC89B34FF5CE3FDF6532EC66B9E42C1;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t25F6568124205E1DCEEEFEF9FFD485B340114892;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>
struct IList_1_t577FCBB6A17E4D24559E5AD6C70155CFF0DFACAC;
// System.Collections.Generic.IReadOnlyList`1<System.Object>
struct IReadOnlyList_1_tF18BCD1A869B672D44C69CED938ED85B570F0C0F;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression>
struct IReadOnlyList_1_tE6BAD4FC299FF548616E8956118F9AC7401DD556;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Linq.Expressions.LambdaExpression,System.Int32>
struct KeyCollection_tB4B4DA31A97860E2107F2E5DEF2961A75987EEEB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Linq.Expressions.ParameterExpression,System.Int32>
struct KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE;
// System.Collections.Generic.Queue`1<System.Linq.Expressions.LambdaExpression>
struct Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Linq.Expressions.LambdaExpression,System.Int32>
struct ValueCollection_tF62AB9B828307BD1C517860FDBF6617EA9F6C4D6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Linq.Expressions.ParameterExpression,System.Int32>
struct ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C;
// System.Collections.Generic.Dictionary`2/Entry<System.Linq.Expressions.LambdaExpression,System.Int32>[]
struct EntryU5BU5D_tDF28F04A4211BF8DCE537E5DE706232AD6F5AE5B;
// System.Dynamic.Utils.CacheDict`2/Entry<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>[]
struct EntryU5BU5D_t3BAA930923C8D5F718EE122863EF00DAD1B633B8;
// System.Collections.Generic.Dictionary`2/Entry<System.Linq.Expressions.ParameterExpression,System.Int32>[]
struct EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B;
// System.Dynamic.Utils.CacheDict`2/Entry<System.Type,System.Reflection.MethodInfo>[]
struct EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Linq.Expressions.LambdaExpression[]
struct LambdaExpressionU5BU5D_tD3201F523981BC8C729BD96280CC3AF47172DED4;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Linq.Expressions.DebugViewWriter
struct DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// System.Linq.Expressions.Expression/ExtensionInfo
struct ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926;
// System.Linq.Expressions.Expression/LambdaExpressionProxy
struct LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609;
// System.Linq.Expressions.Expression/MemberExpressionProxy
struct MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504;
// System.Linq.Expressions.Expression/ParameterExpressionProxy
struct ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063;
// System.Linq.Expressions.Expression/UnaryExpressionProxy
struct UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtils_t0A0AEA36D37671B596506F28FDF658970AA2DC0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A08504CE4D03C27B3393379203A99CADA8CF1A3;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0F144BDAF6EE2C0E6CFB19145B2E6195FD2E6540;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral365B734430D9CF2AB2319E3E14FDC9F33C4F862C;
IL2CPP_EXTERN_C String_t* _stringLiteral4767E340F13B362444D8AE5CE8AE0CF983961DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral581430FB5E2AB80389A430804CEF0F2382806766;
IL2CPP_EXTERN_C String_t* _stringLiteral63A81BF09BF6D663EE7A4CA8E2BF41ACB795C4BF;
IL2CPP_EXTERN_C String_t* _stringLiteral656DE8865223883D9C605D63606CD7138CF8CAD3;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral9B59544A1CA2EADF2F0066331B1D81882C0056C0;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0E978C2541B8A36DFB07E397656689CE9E713F;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBB4AAE395F5083E7D7C5595FA511A533D09D06;
IL2CPP_EXTERN_C String_t* _stringLiteralA6DF45C72270FA2BB1DBC2168AD0472EA600EA70;
IL2CPP_EXTERN_C String_t* _stringLiteralA87EDB7D2DFF313D705623D88378110F080221A9;
IL2CPP_EXTERN_C String_t* _stringLiteralB13824ACB6B914D45875CFF0546C5A0D9350AF2E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7E78BE66617B9AE36B6A6E170E3545EE25C1D11;
IL2CPP_EXTERN_C String_t* _stringLiteralC93C892AC84C59C4074BE475E02FB780CBA8DA7A;
IL2CPP_EXTERN_C String_t* _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFE70A137134F8077A5CA8F99648D9F4975C6BADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2_TryGetValue_mA8C18CAD96C26C76A20CBCCC1DDCEC59C5019618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2__ctor_m379DCD9C493F707E28B3783E27F01B72F41A8868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2_set_Item_m26AE6FDAEB078AC70A914726B262159CC02A9820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_mB176477DA08A63C9BC7C64597C6E3E7985426A9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebugViewWriter_GetId_TisLambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474_m183DDFACF5B9410AE97D0DEAABFB119E45A98A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebugViewWriter_GetId_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mE9C509229924A3D9C05ADC7B1FD91B6FBF583283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebugViewWriter_U3CVisitDeclarationsU3Eb__38_0_mFD45444F6A4FCBAB6E9D4F99A94AFF145D318B79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebugViewWriter_VisitExpressions_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mAE18106253B105306A1A32385EDFCD3087705C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Max_mDCF86A7A86D2A183D045F007906336B3D989B46C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_ReduceAndCheck_mA1B79AA88821432A02C6FF36516E211F5D30844D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Reduce_mA884731A64882F6E9267B56B989756B64D77168E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_VisitChildren_m5E48C3529D41B6386FFC3741E3D510BA929347B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_get_Type_m30E49D13EB342DDADA0D5A54979A5EF120E625E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LambdaExpression_GetOrMakeParameters_m61E8F42E6DA78629933558F71628B44E60DBD54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m090E856DD19F9F73AC6605B1B150AA71FEEBEAF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mD79D5C4587A40EE10BE0407119F0E95ED17E4843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m2CC61A8B5F6A9FD28F252AABAC91172588412CA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD7A92A53AC93772205DA609EE6D57CD672A8EBE1 
{
public:

public:
};


// System.Object


// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>
struct CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F  : public RuntimeObject
{
public:
	// System.Int32 System.Dynamic.Utils.CacheDict`2::_mask
	int32_t ____mask_0;
	// System.Dynamic.Utils.CacheDict`2/Entry<TKey,TValue>[] System.Dynamic.Utils.CacheDict`2::_entries
	EntryU5BU5D_t3BAA930923C8D5F718EE122863EF00DAD1B633B8* ____entries_1;

public:
	inline static int32_t get_offset_of__mask_0() { return static_cast<int32_t>(offsetof(CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F, ____mask_0)); }
	inline int32_t get__mask_0() const { return ____mask_0; }
	inline int32_t* get_address_of__mask_0() { return &____mask_0; }
	inline void set__mask_0(int32_t value)
	{
		____mask_0 = value;
	}

	inline static int32_t get_offset_of__entries_1() { return static_cast<int32_t>(offsetof(CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F, ____entries_1)); }
	inline EntryU5BU5D_t3BAA930923C8D5F718EE122863EF00DAD1B633B8* get__entries_1() const { return ____entries_1; }
	inline EntryU5BU5D_t3BAA930923C8D5F718EE122863EF00DAD1B633B8** get_address_of__entries_1() { return &____entries_1; }
	inline void set__entries_1(EntryU5BU5D_t3BAA930923C8D5F718EE122863EF00DAD1B633B8* value)
	{
		____entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entries_1), (void*)value);
	}
};


// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE  : public RuntimeObject
{
public:
	// System.Int32 System.Dynamic.Utils.CacheDict`2::_mask
	int32_t ____mask_0;
	// System.Dynamic.Utils.CacheDict`2/Entry<TKey,TValue>[] System.Dynamic.Utils.CacheDict`2::_entries
	EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F* ____entries_1;

public:
	inline static int32_t get_offset_of__mask_0() { return static_cast<int32_t>(offsetof(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE, ____mask_0)); }
	inline int32_t get__mask_0() const { return ____mask_0; }
	inline int32_t* get_address_of__mask_0() { return &____mask_0; }
	inline void set__mask_0(int32_t value)
	{
		____mask_0 = value;
	}

	inline static int32_t get_offset_of__entries_1() { return static_cast<int32_t>(offsetof(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE, ____entries_1)); }
	inline EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F* get__entries_1() const { return ____entries_1; }
	inline EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F** get_address_of__entries_1() { return &____entries_1; }
	inline void set__entries_1(EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F* value)
	{
		____entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entries_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* ___data_0;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_1;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815, ___data_0)); }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* get_data_0() const { return ___data_0; }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of__lock_1() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815, ____lock_1)); }
	inline RuntimeObject * get__lock_1() const { return ____lock_1; }
	inline RuntimeObject ** get_address_of__lock_1() { return &____lock_1; }
	inline void set__lock_1(RuntimeObject * value)
	{
		____lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}
};


// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Int32>
struct Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDF28F04A4211BF8DCE537E5DE706232AD6F5AE5B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB4B4DA31A97860E2107F2E5DEF2961A75987EEEB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF62AB9B828307BD1C517860FDBF6617EA9F6C4D6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ___entries_1)); }
	inline EntryU5BU5D_tDF28F04A4211BF8DCE537E5DE706232AD6F5AE5B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDF28F04A4211BF8DCE537E5DE706232AD6F5AE5B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDF28F04A4211BF8DCE537E5DE706232AD6F5AE5B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ___keys_7)); }
	inline KeyCollection_tB4B4DA31A97860E2107F2E5DEF2961A75987EEEB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB4B4DA31A97860E2107F2E5DEF2961A75987EEEB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB4B4DA31A97860E2107F2E5DEF2961A75987EEEB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ___values_8)); }
	inline ValueCollection_tF62AB9B828307BD1C517860FDBF6617EA9F6C4D6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF62AB9B828307BD1C517860FDBF6617EA9F6C4D6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF62AB9B828307BD1C517860FDBF6617EA9F6C4D6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___entries_1)); }
	inline EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___keys_7)); }
	inline KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___values_8)); }
	inline ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Linq.Expressions.LambdaExpression>
struct Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	LambdaExpressionU5BU5D_tD3201F523981BC8C729BD96280CC3AF47172DED4* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125, ____array_0)); }
	inline LambdaExpressionU5BU5D_tD3201F523981BC8C729BD96280CC3AF47172DED4* get__array_0() const { return ____array_0; }
	inline LambdaExpressionU5BU5D_tD3201F523981BC8C729BD96280CC3AF47172DED4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(LambdaExpressionU5BU5D_tD3201F523981BC8C729BD96280CC3AF47172DED4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____array_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Dynamic.Utils.ContractUtils
struct ContractUtils_tFCAD1BFB06E05F1E13A43B506D397A70090980D1  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Linq.Enumerable
struct Enumerable_t928C505614FDD67F6D61FB58BED73235DF569B0E  : public RuntimeObject
{
public:

public:
};


// System.Linq.Error
struct Error_t2D04CC8BAE165E534F2E8EDD93065E47E2C3405D  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Error
struct Error_t664FF1BC68C1CC58CDAD27ADFA76F11566491012  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// SR
struct SR_t20332BC36C60F50CC953F79ADA0CA8C844A21231  : public RuntimeObject
{
public:

public:
};


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


// System.Linq.Expressions.Strings
struct Strings_t9B11E0633D7437BEE624F9A07F5EB7D217E29C07  : public RuntimeObject
{
public:

public:
};


// System.Dynamic.Utils.TypeExtensions
struct TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831  : public RuntimeObject
{
public:

public:
};


// System.Dynamic.Utils.TypeUtils
struct TypeUtils_t0A0AEA36D37671B596506F28FDF658970AA2DC0A  : public RuntimeObject
{
public:

public:
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

// System.Linq.Expressions.Expression/LambdaExpressionProxy
struct LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609  : public RuntimeObject
{
public:
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.Expression/LambdaExpressionProxy::_node
	LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * ____node_0;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609, ____node_0)); }
	inline LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * get__node_0() const { return ____node_0; }
	inline LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____node_0), (void*)value);
	}
};


// System.Linq.Expressions.Expression/MemberExpressionProxy
struct MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504  : public RuntimeObject
{
public:
	// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression/MemberExpressionProxy::_node
	MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * ____node_0;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504, ____node_0)); }
	inline MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * get__node_0() const { return ____node_0; }
	inline MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____node_0), (void*)value);
	}
};


// System.Linq.Expressions.Expression/ParameterExpressionProxy
struct ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression/ParameterExpressionProxy::_node
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ____node_0;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063, ____node_0)); }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * get__node_0() const { return ____node_0; }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____node_0), (void*)value);
	}
};


// System.Linq.Expressions.Expression/UnaryExpressionProxy
struct UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814  : public RuntimeObject
{
public:
	// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression/UnaryExpressionProxy::_node
	UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * ____node_0;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814, ____node_0)); }
	inline UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * get__node_0() const { return ____node_0; }
	inline UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____node_0), (void*)value);
	}
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
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


// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ____body_2;

public:
	inline static int32_t get_offset_of__body_2() { return static_cast<int32_t>(offsetof(LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474, ____body_2)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get__body_2() const { return ____body_2; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of__body_2() { return &____body_2; }
	inline void set__body_2(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		____body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_2), (void*)value);
	}
};


// System.Linq.Expressions.MemberExpression
struct MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::<Expression>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CExpressionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622, ___U3CExpressionU3Ek__BackingField_2)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CExpressionU3Ek__BackingField_2() const { return ___U3CExpressionU3Ek__BackingField_2; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CExpressionU3Ek__BackingField_2() { return &___U3CExpressionU3Ek__BackingField_2; }
	inline void set_U3CExpressionU3Ek__BackingField_2(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CExpressionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExpressionU3Ek__BackingField_2), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_2), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};


// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3COperandU3Ek__BackingField_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t * ___U3CMethodU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3COperandU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3COperandU3Ek__BackingField_2)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3COperandU3Ek__BackingField_2() const { return ___U3COperandU3Ek__BackingField_2; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3COperandU3Ek__BackingField_2() { return &___U3COperandU3Ek__BackingField_2; }
	inline void set_U3COperandU3Ek__BackingField_2(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3COperandU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COperandU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CMethodU3Ek__BackingField_3)); }
	inline MethodInfo_t * get_U3CMethodU3Ek__BackingField_3() const { return ___U3CMethodU3Ek__BackingField_3; }
	inline MethodInfo_t ** get_address_of_U3CMethodU3Ek__BackingField_3() { return &___U3CMethodU3Ek__BackingField_3; }
	inline void set_U3CMethodU3Ek__BackingField_3(MethodInfo_t * value)
	{
		___U3CMethodU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_3), (void*)value);
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


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// System.Linq.Expressions.ExpressionType
struct ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_11;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_12;

public:
	inline static int32_t get_offset_of__sb_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_11)); }
	inline StringBuilder_t * get__sb_11() const { return ____sb_11; }
	inline StringBuilder_t ** get_address_of__sb_11() { return &____sb_11; }
	inline void set__sb_11(StringBuilder_t * value)
	{
		____sb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_11), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}
};


// System.Linq.Expressions.DebugViewWriter/Flow
struct Flow_tE807E778B2B31C740B627F55893BBB20327728FE 
{
public:
	// System.Int32 System.Linq.Expressions.DebugViewWriter/Flow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flow_tE807E778B2B31C740B627F55893BBB20327728FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Linq.Expressions.DebugViewWriter
struct DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.IO.TextWriter System.Linq.Expressions.DebugViewWriter::_out
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ____out_0;
	// System.Int32 System.Linq.Expressions.DebugViewWriter::_column
	int32_t ____column_1;
	// System.Collections.Generic.Stack`1<System.Int32> System.Linq.Expressions.DebugViewWriter::_stack
	Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * ____stack_2;
	// System.Int32 System.Linq.Expressions.DebugViewWriter::_delta
	int32_t ____delta_3;
	// System.Linq.Expressions.DebugViewWriter/Flow System.Linq.Expressions.DebugViewWriter::_flow
	int32_t ____flow_4;
	// System.Collections.Generic.Queue`1<System.Linq.Expressions.LambdaExpression> System.Linq.Expressions.DebugViewWriter::_lambdas
	Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 * ____lambdas_5;
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Int32> System.Linq.Expressions.DebugViewWriter::_lambdaIds
	Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3 * ____lambdaIds_6;
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.DebugViewWriter::_paramIds
	Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * ____paramIds_7;

public:
	inline static int32_t get_offset_of__out_0() { return static_cast<int32_t>(offsetof(DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E, ____out_0)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get__out_0() const { return ____out_0; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of__out_0() { return &____out_0; }
	inline void set__out_0(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		____out_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____out_0), (void*)value);
	}

	inline static int32_t get_offset_of__column_1() { return static_cast<int32_t>(offsetof(DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E, ____column_1)); }
	inline int32_t get__column_1() const { return ____column_1; }
	inline int32_t* get_address_of__column_1() { return &____column_1; }
	inline void set__column_1(int32_t value)
	{
		____column_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E, ____stack_2)); }
	inline Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * get__stack_2() const { return ____stack_2; }
	inline Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_2), (void*)value);
	}

	inline static int32_t get_offset_of__delta_3() { return static_cast<int32_t>(offsetof(DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E, ____delta_3)); }
	inline int32_t get__delta_3() const { return ____delta_3; }
	inline int32_t* get_address_of__delta_3() { return &____delta_3; }
	inline void set__delta_3(int32_t value)
	{
		____delta_3 = value;
	}

	inline static int32_t get_offset_of__flow_4() { return static_cast<int32_t>(offsetof(DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E, ____flow_4)); }
	inline int32_t get__flow_4() const { return ____flow_4; }
	inline int32_t* get_address_of__flow_4() { return &____flow_4; }
	inline void set__flow_4(int32_t value)
	{
		____flow_4 = value;
	}

	inline static int32_t get_offset_of__lambdas_5() { return static_cast<int32_t>(offsetof(DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E, ____lambdas_5)); }
	inline Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 * get__lambdas_5() const { return ____lambdas_5; }
	inline Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 ** get_address_of__lambdas_5() { return &____lambdas_5; }
	inline void set__lambdas_5(Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 * value)
	{
		____lambdas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lambdas_5), (void*)value);
	}

	inline static int32_t get_offset_of__lambdaIds_6() { return static_cast<int32_t>(offsetof(DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E, ____lambdaIds_6)); }
	inline Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3 * get__lambdaIds_6() const { return ____lambdaIds_6; }
	inline Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3 ** get_address_of__lambdaIds_6() { return &____lambdaIds_6; }
	inline void set__lambdaIds_6(Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3 * value)
	{
		____lambdaIds_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lambdaIds_6), (void*)value);
	}

	inline static int32_t get_offset_of__paramIds_7() { return static_cast<int32_t>(offsetof(DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E, ____paramIds_7)); }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * get__paramIds_7() const { return ____paramIds_7; }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 ** get_address_of__paramIds_7() { return &____paramIds_7; }
	inline void set__paramIds_7(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * value)
	{
		____paramIds_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____paramIds_7), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};


// System.Linq.Expressions.Expression/ExtensionInfo
struct ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/ExtensionInfo::NodeType
	int32_t ___NodeType_0;
	// System.Type System.Linq.Expressions.Expression/ExtensionInfo::Type
	Type_t * ___Type_1;

public:
	inline static int32_t get_offset_of_NodeType_0() { return static_cast<int32_t>(offsetof(ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926, ___NodeType_0)); }
	inline int32_t get_NodeType_0() const { return ___NodeType_0; }
	inline int32_t* get_address_of_NodeType_0() { return &___NodeType_0; }
	inline void set_NodeType_0(int32_t value)
	{
		___NodeType_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_1), (void*)value);
	}
};


// System.Action`1<System.Linq.Expressions.ParameterExpression>
struct Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>


// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>


// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>


// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>


// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Int32>


// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Int32>


// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>


// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>


// System.Collections.Generic.Queue`1<System.Linq.Expressions.LambdaExpression>


// System.Collections.Generic.Queue`1<System.Linq.Expressions.LambdaExpression>


// System.Collections.Generic.Queue`1<System.Object>


// System.Collections.Generic.Queue`1<System.Object>


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>


// System.Collections.Generic.Stack`1<System.Int32>


// System.Collections.Generic.Stack`1<System.Int32>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.Dynamic.Utils.ContractUtils


// System.Dynamic.Utils.ContractUtils


// System.Globalization.CultureInfo

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};


// System.Globalization.CultureInfo


// System.Linq.Enumerable


// System.Linq.Enumerable


// System.Linq.Error


// System.Linq.Error


// System.Linq.Expressions.Error


// System.Linq.Expressions.Error


// System.Linq.Expressions.Expression

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_1;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_1)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_1() const { return ___s_legacyCtorSupportTable_1; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_1() { return &___s_legacyCtorSupportTable_1; }
	inline void set_s_legacyCtorSupportTable_1(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_1), (void*)value);
	}
};


// System.Linq.Expressions.Expression


// System.Linq.Expressions.ExpressionVisitor


// System.Linq.Expressions.ExpressionVisitor


// System.MarshalByRefObject


// System.MarshalByRefObject


// System.Reflection.MemberInfo


// System.Reflection.MemberInfo


// SR


// SR


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


// System.Linq.Expressions.Strings


// System.Linq.Expressions.Strings


// System.Dynamic.Utils.TypeExtensions

struct TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]> System.Dynamic.Utils.TypeExtensions::s_paramInfoCache
	CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * ___s_paramInfoCache_0;

public:
	inline static int32_t get_offset_of_s_paramInfoCache_0() { return static_cast<int32_t>(offsetof(TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_StaticFields, ___s_paramInfoCache_0)); }
	inline CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * get_s_paramInfoCache_0() const { return ___s_paramInfoCache_0; }
	inline CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F ** get_address_of_s_paramInfoCache_0() { return &___s_paramInfoCache_0; }
	inline void set_s_paramInfoCache_0(CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * value)
	{
		___s_paramInfoCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_paramInfoCache_0), (void*)value);
	}
};


// System.Dynamic.Utils.TypeExtensions


// System.Dynamic.Utils.TypeUtils

struct TypeUtils_t0A0AEA36D37671B596506F28FDF658970AA2DC0A_StaticFields
{
public:
	// System.Reflection.Assembly System.Dynamic.Utils.TypeUtils::s_mscorlib
	Assembly_t * ___s_mscorlib_0;

public:
	inline static int32_t get_offset_of_s_mscorlib_0() { return static_cast<int32_t>(offsetof(TypeUtils_t0A0AEA36D37671B596506F28FDF658970AA2DC0A_StaticFields, ___s_mscorlib_0)); }
	inline Assembly_t * get_s_mscorlib_0() const { return ___s_mscorlib_0; }
	inline Assembly_t ** get_address_of_s_mscorlib_0() { return &___s_mscorlib_0; }
	inline void set_s_mscorlib_0(Assembly_t * value)
	{
		___s_mscorlib_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_mscorlib_0), (void*)value);
	}
};


// System.Dynamic.Utils.TypeUtils


// System.ValueType


// System.ValueType


// System.Linq.Expressions.Expression/LambdaExpressionProxy


// System.Linq.Expressions.Expression/LambdaExpressionProxy


// System.Linq.Expressions.Expression/MemberExpressionProxy


// System.Linq.Expressions.Expression/MemberExpressionProxy


// System.Linq.Expressions.Expression/ParameterExpressionProxy


// System.Linq.Expressions.Expression/ParameterExpressionProxy


// System.Linq.Expressions.Expression/UnaryExpressionProxy


// System.Linq.Expressions.Expression/UnaryExpressionProxy


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


// System.Char

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Char


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


// System.Linq.Expressions.LambdaExpression


// System.Linq.Expressions.LambdaExpression


// System.Linq.Expressions.MemberExpression


// System.Linq.Expressions.MemberExpression


// System.Reflection.MethodBase


// System.Reflection.MethodBase


// System.Linq.Expressions.ParameterExpression


// System.Linq.Expressions.ParameterExpression


// System.IO.TextWriter

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.IO.TextWriter


// System.Linq.Expressions.UnaryExpression


// System.Linq.Expressions.UnaryExpression


// System.Void


// System.Void


// System.Reflection.Assembly


// System.Reflection.Assembly


// System.Reflection.BindingFlags


// System.Reflection.BindingFlags


// System.Delegate


// System.Delegate


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


// System.Linq.Expressions.ExpressionType


// System.Linq.Expressions.ExpressionType


// System.Reflection.MethodInfo


// System.Reflection.MethodInfo


// System.Reflection.ParameterAttributes


// System.Reflection.ParameterAttributes


// System.RuntimeTypeHandle


// System.RuntimeTypeHandle


// System.IO.StringWriter


// System.IO.StringWriter


// System.Linq.Expressions.DebugViewWriter/Flow


// System.Linq.Expressions.DebugViewWriter/Flow


// System.Linq.Expressions.DebugViewWriter


// System.Linq.Expressions.DebugViewWriter


// System.MulticastDelegate


// System.MulticastDelegate


// System.Reflection.ParameterInfo


// System.Reflection.ParameterInfo


// System.SystemException


// System.SystemException


// System.Type

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Type


// System.Linq.Expressions.Expression/ExtensionInfo


// System.Linq.Expressions.Expression/ExtensionInfo


// System.Action`1<System.Linq.Expressions.ParameterExpression>


// System.Action`1<System.Linq.Expressions.ParameterExpression>


// System.ArgumentException


// System.ArgumentException


// System.InvalidOperationException


// System.InvalidOperationException


// System.ArgumentNullException


// System.ArgumentNullException

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m2CC61A8B5F6A9FD28F252AABAC91172588412CA3_gshared_inline (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Expressions.DebugViewWriter::GetId<System.Object>(T,System.Collections.Generic.Dictionary`2<T,System.Int32>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_GetId_TisRuntimeObject_m29B30D266748C2DE0BD0E6EEFF4C6FD8B6D5A3B4_gshared (RuntimeObject * ___e0, Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 ** ___ids1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::VisitExpressions<System.Object>(System.Char,System.Char,System.Collections.Generic.IReadOnlyList`1<T>,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_VisitExpressions_TisRuntimeObject_mE02805B4910FA232F547F385227EE4BEBA4F8346_gshared (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, Il2CppChar ___open0, Il2CppChar ___separator1, RuntimeObject* ___expressions2, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___visit3, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA862158C8AFAC8C13E7929EBC6C2377B77749884_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheDict_2__ctor_m00697894AA73CE236834AB326F94431441B26B2D_gshared (CacheDict_2_t4D7FFB59CB1E33398FCBBDC6A739780EC97F3F14 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Boolean System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CacheDict_2_TryGetValue_m4BF6D58F71606EEF0E806CF73D81077C74DEE04E_gshared (CacheDict_2_t4D7FFB59CB1E33398FCBBDC6A739780EC97F3F14 * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheDict_2_set_Item_m1A8D1DA2D6709EC9FD2BC57726EBB98A9FBFAE60_gshared (CacheDict_2_t4D7FFB59CB1E33398FCBBDC6A739780EC97F3F14 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954 (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_gshared)(__this, method);
}
// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
inline int32_t Stack_1_get_Count_m2CC61A8B5F6A9FD28F252AABAC91172588412CA3_inline (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1_get_Count_m2CC61A8B5F6A9FD28F252AABAC91172588412CA3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_gshared)(__this, method);
}
// System.Int32 System.Linq.Expressions.DebugViewWriter::get_Base()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_get_Base_m9ADE61E5B742C3C4AAC3B596F0DA7CA06682D416 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Expressions.DebugViewWriter::get_Delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DebugViewWriter_get_Delta_m5A340CD5E59816614646586CFE94B6FA2FED92C7_inline (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Expressions.DebugViewWriter::GetId<System.Linq.Expressions.LambdaExpression>(T,System.Collections.Generic.Dictionary`2<T,System.Int32>&)
inline int32_t DebugViewWriter_GetId_TisLambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474_m183DDFACF5B9410AE97D0DEAABFB119E45A98A34 (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * ___e0, Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3 ** ___ids1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *, Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3 **, const RuntimeMethod*))DebugViewWriter_GetId_TisRuntimeObject_m29B30D266748C2DE0BD0E6EEFF4C6FD8B6D5A3B4_gshared)(___e0, ___ids1, method);
}
// System.Int32 System.Linq.Expressions.DebugViewWriter::GetId<System.Linq.Expressions.ParameterExpression>(T,System.Collections.Generic.Dictionary`2<T,System.Int32>&)
inline int32_t DebugViewWriter_GetId_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mE9C509229924A3D9C05ADC7B1FD91B6FBF583283 (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___e0, Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 ** ___ids1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 **, const RuntimeMethod*))DebugViewWriter_GetId_TisRuntimeObject_m29B30D266748C2DE0BD0E6EEFF4C6FD8B6D5A3B4_gshared)(___e0, ___ids1, method);
}
// System.Void System.Linq.Expressions.DebugViewWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter__ctor_mE2431D1C20D0785EEF2BD3005EF612D8C15F6CC3 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___file0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::WriteTo(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_WriteTo_m0A1D1436DD6350E17FF17A669FE9AC98A8799739 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___node0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::WriteLambda(System.Linq.Expressions.LambdaExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_WriteLambda_m2B1D6186813FDAC20429A303C10E0352C6517534 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * ___lambda0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::WriteLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_WriteLine_m3E8D5B3D62E40FC0D2F7CE13F38DF3154134FB1C (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Linq.Expressions.LambdaExpression>::Dequeue()
inline LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * Queue_1_Dequeue_m090E856DD19F9F73AC6605B1B150AA71FEEBEAF0 (Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 * __this, const RuntimeMethod* method)
{
	return ((  LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * (*) (Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Linq.Expressions.LambdaExpression>::get_Count()
inline int32_t Queue_1_get_Count_mD79D5C4587A40EE10BE0407119F0E95ED17E4843_inline (Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Linq.Expressions.DebugViewWriter::Out(System.Linq.Expressions.DebugViewWriter/Flow,System.String,System.Linq.Expressions.DebugViewWriter/Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Out_mCB3ACA6A777368F20E30386DA0408FF242FB88ED (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, int32_t ___before0, String_t* ___s1, int32_t ___after2, const RuntimeMethod* method);
// System.Linq.Expressions.DebugViewWriter/Flow System.Linq.Expressions.DebugViewWriter::GetFlow(System.Linq.Expressions.DebugViewWriter/Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_GetFlow_m17ADC4580FB0D11A43758036E926A18D43C93F1D (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, int32_t ___flow0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Write_m3A381F210100F8A1BE863CC86ED1133C8EEBF657 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Int32 System.Linq.Expressions.DebugViewWriter::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_get_Depth_m6B959DC41B3AF4A6A2C9A9C699F73A910159813D (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Linq.Expressions.DebugViewWriter/Flow System.Linq.Expressions.DebugViewWriter::CheckBreak(System.Linq.Expressions.DebugViewWriter/Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_CheckBreak_m489ED42D926AE00CE9EA05189A14387067A90F90 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, int32_t ___flow0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFE70A137134F8077A5CA8F99648D9F4975C6BADA (Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Linq.Expressions.DebugViewWriter::VisitExpressions<System.Linq.Expressions.ParameterExpression>(System.Char,System.Char,System.Collections.Generic.IReadOnlyList`1<T>,System.Action`1<T>)
inline void DebugViewWriter_VisitExpressions_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mAE18106253B105306A1A32385EDFCD3087705C4A (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, Il2CppChar ___open0, Il2CppChar ___separator1, RuntimeObject* ___expressions2, Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59 * ___visit3, const RuntimeMethod* method)
{
	((  void (*) (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E *, Il2CppChar, Il2CppChar, RuntimeObject*, Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59 *, const RuntimeMethod*))DebugViewWriter_VisitExpressions_TisRuntimeObject_mE02805B4910FA232F547F385227EE4BEBA4F8346_gshared)(__this, ___open0, ___separator1, ___expressions2, ___visit3, method);
}
// System.Void System.Linq.Expressions.DebugViewWriter::Out(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, String_t* ___s0, const RuntimeMethod* method);
// System.String System.Linq.Expressions.ParameterExpression::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParameterExpression_get_Name_m58AB36FFDA560E226B841C95E436C22F1B7856C8_inline (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Linq.Expressions.DebugViewWriter::GetParamId(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_GetParamId_mF2D7C0DBD2D015183C4144D146FF6CC571828FF5 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m67326AC4F1380817D6F2FDA2AFD61E5085C2E128 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.String System.Linq.Expressions.DebugViewWriter::GetDisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DebugViewWriter_GetDisplayName_m9201AEB9EAFBB38C64C0912B47BF602762D94CEE (String_t* ___name0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m65D1D384B19FD8F7BD8BC71EE2B75E00488853DB (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Indent_m981634432758477A3D6126AAA3E81B59F8FCB8D7 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::Dedent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Dedent_m9BDEB16BB0EAF6F5DB0D91670FDCE68306F27986 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::Out(System.Linq.Expressions.DebugViewWriter/Flow,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Out_mE41A10255369FFD6EA17E155D904921EA5341E60 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, int32_t ___before0, String_t* ___s1, const RuntimeMethod* method);
// System.String System.Linq.Expressions.DebugViewWriter::GetLambdaName(System.Linq.Expressions.LambdaExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DebugViewWriter_GetLambdaName_mEF3000A4C5E3CFA76CE0C0957A7BF013C9F6E8FF (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * ___lambda0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m061EEC38D33A13CC1E98DBD6869E97A0C2989F88 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * LambdaExpression_get_Parameters_mAF114E7D91E405BC84EF2BC075E55E5717759066 (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::VisitDeclarations(System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_VisitDeclarations_m3BECB60FF90D4F415CA424ED58B226AB0F4371F9 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, RuntimeObject* ___expressions0, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// System.String System.Linq.Expressions.LambdaExpression::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LambdaExpression_get_Name_m35878D5E071143E83A06696F1A1B8B1ACFF0EF40 (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Expressions.DebugViewWriter::GetLambdaId(System.Linq.Expressions.LambdaExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_GetLambdaId_m600A3B6601D0A39414128ECCD086D2FC982CE2F8 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * ___le0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_mA78B7CA7BF0CA022525EA150EB6028F45E33C775 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.DebugViewWriter::ContainsWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugViewWriter_ContainsWhiteSpace_m82EB31571A6EB1BE2FF48CF281E7019AE5482977 (String_t* ___name0, const RuntimeMethod* method);
// System.String System.Linq.Expressions.DebugViewWriter::QuoteName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DebugViewWriter_QuoteName_m9207018812DBE8EE87CD7FE6FEF3DBFC5FE08C48 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.ParameterExpression::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterExpression_get_IsByRef_mC47F92A5D61B9A7588509CCAF3A9223CE2E3BA17 (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * __this, const RuntimeMethod* method);
// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (String_t* ___s0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::NoElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (const RuntimeMethod* method);
// System.String System.Linq.Expressions.Strings::get_ReducibleMustOverrideReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_ReducibleMustOverrideReduce_mF5500C3C98D00B4A807A98BCE996F07BA5EA2A09 (const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.Linq.Expressions.Strings::get_MustReduceToDifferent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_MustReduceToDifferent_m64F1E9D0C97AFEF77278E52273100A7A216ADC4E (const RuntimeMethod* method);
// System.String System.Linq.Expressions.Strings::get_ReducedNotCompatible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_ReducedNotCompatible_mEE06DE72A8E559A77150471BDC2DE895E2972FEF (const RuntimeMethod* method);
// System.String System.Linq.Expressions.Strings::get_MustBeReducible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_MustBeReducible_m76BE691A4DB1087255803138960C89AD5FA15C8B (const RuntimeMethod* method);
// System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4 (RuntimeObject * ___p00, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>::TryGetValue(!0,!1&)
inline bool ConditionalWeakTable_2_TryGetValue_mB176477DA08A63C9BC7C64597C6E3E7985426A9B (ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___key0, ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926 **, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA862158C8AFAC8C13E7929EBC6C2377B77749884_gshared)(__this, ___key0, ___value1, method);
}
// System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD (RuntimeObject * ___p00, const RuntimeMethod* method);
// System.Exception System.Linq.Expressions.Error::ReducibleMustOverrideReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ReducibleMustOverrideReduce_m2C7087C6013A9880978BEC12F42E41FAA540B064 (const RuntimeMethod* method);
// System.Exception System.Linq.Expressions.Error::MustBeReducible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MustBeReducible_mBD3B935FFA34E22F696CD4DC5DD7F5BEE26F68DB (const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::ReduceAndCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * Expression_ReduceAndCheck_mA1B79AA88821432A02C6FF36516E211F5D30844D (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, const RuntimeMethod* method);
// System.Exception System.Linq.Expressions.Error::MustReduceToDifferent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MustReduceToDifferent_mF680547D0DD8BFBA23EAFA58AACCCD2453ACCCF2 (const RuntimeMethod* method);
// System.Boolean System.Dynamic.Utils.TypeUtils::AreReferenceAssignable(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreReferenceAssignable_m21E45BA149BEB96E7803876FDCFCF202CB49E5E0 (Type_t * ___dest0, Type_t * ___src1, const RuntimeMethod* method);
// System.Exception System.Linq.Expressions.Error::ReducedNotCompatible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ReducedNotCompatible_m47BC6BDB5A46B36E50AF812744BF038CC31C6222 (const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mDF4AB6FD46E8B9824F2F7A9C26EA086A2C1AE5CF (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.DebugViewWriter::WriteTo(System.Linq.Expressions.Expression,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_WriteTo_mE9FC855F96711325561F2230E5084164E2DD6D3D (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___node0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer1, const RuntimeMethod* method);
// System.Void System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>::.ctor(System.Int32)
inline void CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5 (CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE *, int32_t, const RuntimeMethod*))CacheDict_2__ctor_m00697894AA73CE236834AB326F94431441B26B2D_gshared)(__this, ___size0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::GetInvokeMethod(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * TypeUtils_GetInvokeMethod_m72B1ADCFF5A3533AB362260283CA5252A5A8DF47 (Type_t * ___delegateType0, const RuntimeMethod* method);
// System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205 (const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Boolean System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>::TryGetValue(TKey,TValue&)
inline bool CacheDict_2_TryGetValue_mA8C18CAD96C26C76A20CBCCC1DDCEC59C5019618 (CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * __this, MethodBase_t * ___key0, ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F *, MethodBase_t *, ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B**, const RuntimeMethod*))CacheDict_2_TryGetValue_m4BF6D58F71606EEF0E806CF73D81077C74DEE04E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Dynamic.Utils.TypeUtils::CanCache(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_CanCache_m5E85D32F34B54FAF95BCFB567188BAF6C44B844C (Type_t * ___t0, const RuntimeMethod* method);
// System.Void System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>::set_Item(TKey,TValue)
inline void CacheDict_2_set_Item_m26AE6FDAEB078AC70A914726B262159CC02A9820 (CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * __this, MethodBase_t * ___key0, ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F *, MethodBase_t *, ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B*, const RuntimeMethod*))CacheDict_2_set_Item_m1A8D1DA2D6709EC9FD2BC57726EBB98A9FBFAE60_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>::.ctor(System.Int32)
inline void CacheDict_2__ctor_m379DCD9C493F707E28B3783E27F01B72F41A8868 (CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F *, int32_t, const RuntimeMethod*))CacheDict_2__ctor_m00697894AA73CE236834AB326F94431441B26B2D_gshared)(__this, ___size0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Dynamic.Utils.TypeUtils::AreEquivalent(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreEquivalent_m3D4693A06DB399C83408B8F83DF00FDD80D56E43 (Type_t * ___t10, Type_t * ___t21, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Reflection.Assembly System.Dynamic.Utils.TypeUtils::get_MsCorLib()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * TypeUtils_get_MsCorLib_m6A0A2C9B07667BFEFCC7CCE521194CF4CBE01F6D (const RuntimeMethod* method);
// System.Boolean System.Reflection.Assembly::op_Inequality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Inequality_m029F45303B34324A768B2F5091F7918C5272568C (Assembly_t * ___left0, Assembly_t * ___right1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNullableType_m5E0CD16DC1340A88AB858A19D91E68664814D370 (Type_t * ___type0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t * UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m36E5F5CEC053740C69E67E46BEDA47F9794BC94D (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.TypeExtensions::GetParametersCached(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* TypeExtensions_GetParametersCached_m72979CFFD47C31423A7415BF9FE4CC9285F2FFB1 (MethodBase_t * ___method0, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.UnaryExpression::get_IsLifted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpression_get_IsLifted_mD03B65CD13E5B8453866462CBF3FCD9D793AB9D1 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74 (RuntimeObject * ___value0, String_t* ___paramName1, const RuntimeMethod* method);
// System.String System.Linq.Expressions.Expression::get_DebugView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Expression_get_DebugView_m1776A0E2AFD08E2D63118973941FE45E891DFC95 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, const RuntimeMethod* method);
// System.Type System.Linq.Expressions.LambdaExpression::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * LambdaExpression_get_ReturnType_mB82118BCB1EFB2BF4F6B7A4AAE091F7FEBB873C5 (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.LambdaExpression::get_TailCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LambdaExpression_get_TailCall_mD77B216D0A4F3DAB152D3087BC9CDE969DBD6E1B (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A_inline (MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * __this, const RuntimeMethod* method);
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.UnaryExpression::get_IsLiftedToNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpression_get_IsLiftedToNull_m9AF11583226E58CCBB91B1B8CD47F950DEC13C4D (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method);
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
// System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656DE8865223883D9C605D63606CD7138CF8CAD3);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteral656DE8865223883D9C605D63606CD7138CF8CAD3, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74 (RuntimeObject * ___value0, String_t* ___paramName1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___paramName1;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74_RuntimeMethod_var)));
	}

IL_000a:
	{
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
// System.Void System.Linq.Expressions.DebugViewWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter__ctor_mE2431D1C20D0785EEF2BD3005EF612D8C15F6CC3 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___file0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_0 = (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *)il2cpp_codegen_object_new(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_il2cpp_TypeInfo_var);
		Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954(L_0, /*hidden argument*/Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_RuntimeMethod_var);
		__this->set__stack_2(L_0);
		ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A(__this, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_1 = ___file0;
		__this->set__out_0(L_1);
		return;
	}
}
// System.Int32 System.Linq.Expressions.DebugViewWriter::get_Base()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_get_Base_m9ADE61E5B742C3C4AAC3B596F0DA7CA06682D416 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m2CC61A8B5F6A9FD28F252AABAC91172588412CA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_0 = __this->get__stack_2();
		int32_t L_1;
		L_1 = Stack_1_get_Count_m2CC61A8B5F6A9FD28F252AABAC91172588412CA3_inline(L_0, /*hidden argument*/Stack_1_get_Count_m2CC61A8B5F6A9FD28F252AABAC91172588412CA3_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_2 = __this->get__stack_2();
		int32_t L_3;
		L_3 = Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B(L_2, /*hidden argument*/Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var);
		return L_3;
	}
}
// System.Int32 System.Linq.Expressions.DebugViewWriter::get_Delta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_get_Delta_m5A340CD5E59816614646586CFE94B6FA2FED92C7 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__delta_3();
		return L_0;
	}
}
// System.Int32 System.Linq.Expressions.DebugViewWriter::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_get_Depth_m6B959DC41B3AF4A6A2C9A9C699F73A910159813D (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = DebugViewWriter_get_Base_m9ADE61E5B742C3C4AAC3B596F0DA7CA06682D416(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = DebugViewWriter_get_Delta_m5A340CD5E59816614646586CFE94B6FA2FED92C7_inline(__this, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Indent_m981634432758477A3D6126AAA3E81B59F8FCB8D7 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__delta_3();
		__this->set__delta_3(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)4)));
		return;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::Dedent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Dedent_m9BDEB16BB0EAF6F5DB0D91670FDCE68306F27986 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__delta_3();
		__this->set__delta_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)4)));
		return;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_NewLine_m0CA66BCE5A3CE16386385B4B2C9CA8C6C53959E0 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method)
{
	{
		__this->set__flow_4(2);
		return;
	}
}
// System.Int32 System.Linq.Expressions.DebugViewWriter::GetLambdaId(System.Linq.Expressions.LambdaExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_GetLambdaId_m600A3B6601D0A39414128ECCD086D2FC982CE2F8 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * ___le0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugViewWriter_GetId_TisLambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474_m183DDFACF5B9410AE97D0DEAABFB119E45A98A34_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = ___le0;
		Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3 ** L_1 = __this->get_address_of__lambdaIds_6();
		int32_t L_2;
		L_2 = DebugViewWriter_GetId_TisLambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474_m183DDFACF5B9410AE97D0DEAABFB119E45A98A34(L_0, (Dictionary_2_t6798D50B175E819AB0889B970F06B8D9425467F3 **)L_1, /*hidden argument*/DebugViewWriter_GetId_TisLambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474_m183DDFACF5B9410AE97D0DEAABFB119E45A98A34_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 System.Linq.Expressions.DebugViewWriter::GetParamId(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_GetParamId_mF2D7C0DBD2D015183C4144D146FF6CC571828FF5 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugViewWriter_GetId_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mE9C509229924A3D9C05ADC7B1FD91B6FBF583283_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = ___p0;
		Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 ** L_1 = __this->get_address_of__paramIds_7();
		int32_t L_2;
		L_2 = DebugViewWriter_GetId_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mE9C509229924A3D9C05ADC7B1FD91B6FBF583283(L_0, (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 **)L_1, /*hidden argument*/DebugViewWriter_GetId_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mE9C509229924A3D9C05ADC7B1FD91B6FBF583283_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::WriteTo(System.Linq.Expressions.Expression,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_WriteTo_mE9FC855F96711325561F2230E5084164E2DD6D3D (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___node0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ___writer1;
		DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * L_1 = (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E *)il2cpp_codegen_object_new(DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E_il2cpp_TypeInfo_var);
		DebugViewWriter__ctor_mE2431D1C20D0785EEF2BD3005EF612D8C15F6CC3(L_1, L_0, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_2 = ___node0;
		DebugViewWriter_WriteTo_m0A1D1436DD6350E17FF17A669FE9AC98A8799739(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::WriteTo(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_WriteTo_m0A1D1436DD6350E17FF17A669FE9AC98A8799739 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m090E856DD19F9F73AC6605B1B150AA71FEEBEAF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD79D5C4587A40EE10BE0407119F0E95ED17E4843_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * V_0 = NULL;
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = ___node0;
		V_0 = ((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)IsInstClass((RuntimeObject*)L_0, LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474_il2cpp_TypeInfo_var));
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_2 = V_0;
		DebugViewWriter_WriteLambda_m2B1D6186813FDAC20429A303C10E0352C6517534(__this, L_2, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_0013:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_3 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_4;
		L_4 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_3);
		goto IL_003a;
	}

IL_001d:
	{
		DebugViewWriter_WriteLine_m3E8D5B3D62E40FC0D2F7CE13F38DF3154134FB1C(__this, /*hidden argument*/NULL);
		DebugViewWriter_WriteLine_m3E8D5B3D62E40FC0D2F7CE13F38DF3154134FB1C(__this, /*hidden argument*/NULL);
		Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 * L_5 = __this->get__lambdas_5();
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_6;
		L_6 = Queue_1_Dequeue_m090E856DD19F9F73AC6605B1B150AA71FEEBEAF0(L_5, /*hidden argument*/Queue_1_Dequeue_m090E856DD19F9F73AC6605B1B150AA71FEEBEAF0_RuntimeMethod_var);
		DebugViewWriter_WriteLambda_m2B1D6186813FDAC20429A303C10E0352C6517534(__this, L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 * L_7 = __this->get__lambdas_5();
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		Queue_1_tAAD3B2F24553BB743C893AD70591BEE7F486C125 * L_8 = __this->get__lambdas_5();
		int32_t L_9;
		L_9 = Queue_1_get_Count_mD79D5C4587A40EE10BE0407119F0E95ED17E4843_inline(L_8, /*hidden argument*/Queue_1_get_Count_mD79D5C4587A40EE10BE0407119F0E95ED17E4843_RuntimeMethod_var);
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}

IL_0050:
	{
		return;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::Out(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		DebugViewWriter_Out_mCB3ACA6A777368F20E30386DA0408FF242FB88ED(__this, 0, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::Out(System.Linq.Expressions.DebugViewWriter/Flow,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Out_mE41A10255369FFD6EA17E155D904921EA5341E60 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, int32_t ___before0, String_t* ___s1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___before0;
		String_t* L_1 = ___s1;
		DebugViewWriter_Out_mCB3ACA6A777368F20E30386DA0408FF242FB88ED(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::Out(System.String,System.Linq.Expressions.DebugViewWriter/Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Out_m9D84DEC1D4399A156421799FD716467C015C5572 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, String_t* ___s0, int32_t ___after1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___after1;
		DebugViewWriter_Out_mCB3ACA6A777368F20E30386DA0408FF242FB88ED(__this, 0, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::Out(System.Linq.Expressions.DebugViewWriter/Flow,System.String,System.Linq.Expressions.DebugViewWriter/Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Out_mCB3ACA6A777368F20E30386DA0408FF242FB88ED (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, int32_t ___before0, String_t* ___s1, int32_t ___after2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___before0;
		int32_t L_1;
		L_1 = DebugViewWriter_GetFlow_m17ADC4580FB0D11A43758036E926A18D43C93F1D(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0042;
	}

IL_001c:
	{
		DebugViewWriter_Write_m3A381F210100F8A1BE863CC86ED1133C8EEBF657(__this, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0029:
	{
		DebugViewWriter_WriteLine_m3E8D5B3D62E40FC0D2F7CE13F38DF3154134FB1C(__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = DebugViewWriter_get_Depth_m6B959DC41B3AF4A6A2C9A9C699F73A910159813D(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((int32_t)32), L_3, /*hidden argument*/NULL);
		DebugViewWriter_Write_m3A381F210100F8A1BE863CC86ED1133C8EEBF657(__this, L_4, /*hidden argument*/NULL);
	}

IL_0042:
	{
		String_t* L_5 = ___s1;
		DebugViewWriter_Write_m3A381F210100F8A1BE863CC86ED1133C8EEBF657(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___after2;
		__this->set__flow_4(L_6);
		return;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::WriteLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_WriteLine_m3E8D5B3D62E40FC0D2F7CE13F38DF3154134FB1C (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_0();
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.TextWriter::WriteLine() */, L_0);
		__this->set__column_1(0);
		return;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_Write_m3A381F210100F8A1BE863CC86ED1133C8EEBF657 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_0();
		String_t* L_1 = ___s0;
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_0, L_1);
		int32_t L_2 = __this->get__column_1();
		String_t* L_3 = ___s0;
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		__this->set__column_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4)));
		return;
	}
}
// System.Linq.Expressions.DebugViewWriter/Flow System.Linq.Expressions.DebugViewWriter::GetFlow(System.Linq.Expressions.DebugViewWriter/Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_GetFlow_m17ADC4580FB0D11A43758036E926A18D43C93F1D (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, int32_t ___flow0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__flow_4();
		int32_t L_1;
		L_1 = DebugViewWriter_CheckBreak_m489ED42D926AE00CE9EA05189A14387067A90F90(__this, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___flow0;
		int32_t L_3;
		L_3 = DebugViewWriter_CheckBreak_m489ED42D926AE00CE9EA05189A14387067A90F90(__this, L_2, /*hidden argument*/NULL);
		___flow0 = L_3;
		int32_t L_4 = ___flow0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D(L_1, L_4, /*hidden argument*/NULL);
		return (int32_t)(L_5);
	}
}
// System.Linq.Expressions.DebugViewWriter/Flow System.Linq.Expressions.DebugViewWriter::CheckBreak(System.Linq.Expressions.DebugViewWriter/Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DebugViewWriter_CheckBreak_m489ED42D926AE00CE9EA05189A14387067A90F90 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, int32_t ___flow0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flow0;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)32768))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = __this->get__column_1();
		int32_t L_2;
		L_2 = DebugViewWriter_get_Depth_m6B959DC41B3AF4A6A2C9A9C699F73A910159813D(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)120), (int32_t)L_2)))))
		{
			goto IL_001f;
		}
	}
	{
		___flow0 = 2;
		goto IL_0028;
	}

IL_001f:
	{
		int32_t L_3 = ___flow0;
		___flow0 = ((int32_t)((int32_t)L_3&(int32_t)((int32_t)-32769)));
	}

IL_0028:
	{
		int32_t L_4 = ___flow0;
		return L_4;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::VisitDeclarations(System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_VisitDeclarations_m3BECB60FF90D4F415CA424ED58B226AB0F4371F9 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, RuntimeObject* ___expressions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFE70A137134F8077A5CA8F99648D9F4975C6BADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugViewWriter_U3CVisitDeclarationsU3Eb__38_0_mFD45444F6A4FCBAB6E9D4F99A94AFF145D318B79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugViewWriter_VisitExpressions_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mAE18106253B105306A1A32385EDFCD3087705C4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___expressions0;
		Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59 * L_1 = (Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59 *)il2cpp_codegen_object_new(Action_1_tFA256EE98358CD6E4A434CDEE06741CF90BD0F59_il2cpp_TypeInfo_var);
		Action_1__ctor_mFE70A137134F8077A5CA8F99648D9F4975C6BADA(L_1, __this, (intptr_t)((intptr_t)DebugViewWriter_U3CVisitDeclarationsU3Eb__38_0_mFD45444F6A4FCBAB6E9D4F99A94AFF145D318B79_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFE70A137134F8077A5CA8F99648D9F4975C6BADA_RuntimeMethod_var);
		DebugViewWriter_VisitExpressions_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mAE18106253B105306A1A32385EDFCD3087705C4A(__this, ((int32_t)40), ((int32_t)44), L_0, L_1, /*hidden argument*/DebugViewWriter_VisitExpressions_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_mAE18106253B105306A1A32385EDFCD3087705C4A_RuntimeMethod_var);
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.DebugViewWriter::VisitParameter(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * DebugViewWriter_VisitParameter_mBF33DABE19D15F42F60A7415C50495763284F185 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral581430FB5E2AB80389A430804CEF0F2382806766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9(__this, _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = ___node0;
		String_t* L_1;
		L_1 = ParameterExpression_get_Name_m58AB36FFDA560E226B841C95E436C22F1B7856C8_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_3 = ___node0;
		int32_t L_4;
		L_4 = DebugViewWriter_GetParamId_mF2D7C0DBD2D015183C4144D146FF6CC571828FF5(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Concat_m67326AC4F1380817D6F2FDA2AFD61E5085C2E128(_stringLiteral581430FB5E2AB80389A430804CEF0F2382806766, L_7, /*hidden argument*/NULL);
		DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9(__this, L_8, /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0038:
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_9 = ___node0;
		String_t* L_10;
		L_10 = ParameterExpression_get_Name_m58AB36FFDA560E226B841C95E436C22F1B7856C8_inline(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = DebugViewWriter_GetDisplayName_m9201AEB9EAFBB38C64C0912B47BF602762D94CEE(L_10, /*hidden argument*/NULL);
		DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9(__this, L_11, /*hidden argument*/NULL);
	}

IL_0049:
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_12 = ___node0;
		return L_12;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.DebugViewWriter::VisitExtension(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * DebugViewWriter_VisitExtension_mEBD1A53ABA47B4933F5EDC35621D5E32ED8890DE (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93C892AC84C59C4074BE475E02FB780CBA8DA7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1 = ___node0;
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_m65D1D384B19FD8F7BD8BC71EE2B75E00488853DB(L_0, _stringLiteralC93C892AC84C59C4074BE475E02FB780CBA8DA7A, L_3, /*hidden argument*/NULL);
		DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9(__this, L_4, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_5 = ___node0;
		bool L_6;
		L_6 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Linq.Expressions.Expression::get_CanReduce() */, L_5);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		DebugViewWriter_Out_mCB3ACA6A777368F20E30386DA0408FF242FB88ED(__this, 1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, 2, /*hidden argument*/NULL);
		DebugViewWriter_Indent_m981634432758477A3D6126AAA3E81B59F8FCB8D7(__this, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_7 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_8;
		L_8 = VirtFuncInvoker0< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(7 /* System.Linq.Expressions.Expression System.Linq.Expressions.Expression::Reduce() */, L_7);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_9;
		L_9 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_8);
		DebugViewWriter_Dedent_m9BDEB16BB0EAF6F5DB0D91670FDCE68306F27986(__this, /*hidden argument*/NULL);
		DebugViewWriter_Out_mE41A10255369FFD6EA17E155D904921EA5341E60(__this, 2, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
	}

IL_005a:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_10 = ___node0;
		return L_10;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::WriteLambda(System.Linq.Expressions.LambdaExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_WriteLambda_m2B1D6186813FDAC20429A303C10E0352C6517534 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * ___lambda0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B59544A1CA2EADF2F0066331B1D81882C0056C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_1 = ___lambda0;
		String_t* L_2;
		L_2 = DebugViewWriter_GetLambdaName_mEF3000A4C5E3CFA76CE0C0957A7BF013C9F6E8FF(__this, L_1, /*hidden argument*/NULL);
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_3 = ___lambda0;
		Type_t * L_4;
		L_4 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_3);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		String_t* L_6;
		L_6 = String_Format_m061EEC38D33A13CC1E98DBD6869E97A0C2989F88(L_0, _stringLiteral9B59544A1CA2EADF2F0066331B1D81882C0056C0, L_2, L_5, /*hidden argument*/NULL);
		DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9(__this, L_6, /*hidden argument*/NULL);
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_7 = ___lambda0;
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_8;
		L_8 = LambdaExpression_get_Parameters_mAF114E7D91E405BC84EF2BC075E55E5717759066(L_7, /*hidden argument*/NULL);
		DebugViewWriter_VisitDeclarations_m3BECB60FF90D4F415CA424ED58B226AB0F4371F9(__this, L_8, /*hidden argument*/NULL);
		DebugViewWriter_Out_mCB3ACA6A777368F20E30386DA0408FF242FB88ED(__this, 1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, 2, /*hidden argument*/NULL);
		DebugViewWriter_Indent_m981634432758477A3D6126AAA3E81B59F8FCB8D7(__this, /*hidden argument*/NULL);
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_9 = ___lambda0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_10;
		L_10 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline(L_9, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_11;
		L_11 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_10);
		DebugViewWriter_Dedent_m9BDEB16BB0EAF6F5DB0D91670FDCE68306F27986(__this, /*hidden argument*/NULL);
		DebugViewWriter_Out_mE41A10255369FFD6EA17E155D904921EA5341E60(__this, 2, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Linq.Expressions.DebugViewWriter::GetLambdaName(System.Linq.Expressions.LambdaExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DebugViewWriter_GetLambdaName_mEF3000A4C5E3CFA76CE0C0957A7BF013C9F6E8FF (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * ___lambda0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87EDB7D2DFF313D705623D88378110F080221A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = ___lambda0;
		String_t* L_1;
		L_1 = LambdaExpression_get_Name_m35878D5E071143E83A06696F1A1B8B1ACFF0EF40(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_3 = ___lambda0;
		int32_t L_4;
		L_4 = DebugViewWriter_GetLambdaId_m600A3B6601D0A39414128ECCD086D2FC982CE2F8(__this, L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Concat_m67326AC4F1380817D6F2FDA2AFD61E5085C2E128(_stringLiteralA87EDB7D2DFF313D705623D88378110F080221A9, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0024:
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_8 = ___lambda0;
		String_t* L_9;
		L_9 = LambdaExpression_get_Name_m35878D5E071143E83A06696F1A1B8B1ACFF0EF40(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = DebugViewWriter_GetDisplayName_m9201AEB9EAFBB38C64C0912B47BF602762D94CEE(L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean System.Linq.Expressions.DebugViewWriter::ContainsWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugViewWriter_ContainsWhiteSpace_m82EB31571A6EB1BE2FF48CF281E7019AE5482977 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___name0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001a;
	}

IL_0006:
	{
		String_t* L_1 = V_0;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Char_IsWhiteSpace_mA78B7CA7BF0CA022525EA150EB6028F45E33C775(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001a:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = V_0;
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}
}
// System.String System.Linq.Expressions.DebugViewWriter::QuoteName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DebugViewWriter_QuoteName_m9207018812DBE8EE87CD7FE6FEF3DBFC5FE08C48 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63A81BF09BF6D663EE7A4CA8E2BF41ACB795C4BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		String_t* L_2;
		L_2 = String_Format_m65D1D384B19FD8F7BD8BC71EE2B75E00488853DB(L_0, _stringLiteral63A81BF09BF6D663EE7A4CA8E2BF41ACB795C4BF, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Linq.Expressions.DebugViewWriter::GetDisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DebugViewWriter_GetDisplayName_m9201AEB9EAFBB38C64C0912B47BF602762D94CEE (String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = DebugViewWriter_ContainsWhiteSpace_m82EB31571A6EB1BE2FF48CF281E7019AE5482977(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ___name0;
		String_t* L_3;
		L_3 = DebugViewWriter_QuoteName_m9207018812DBE8EE87CD7FE6FEF3DBFC5FE08C48(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		String_t* L_4 = ___name0;
		return L_4;
	}
}
// System.Void System.Linq.Expressions.DebugViewWriter::<VisitDeclarations>b__38_0(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugViewWriter_U3CVisitDeclarationsU3Eb__38_0_mFD45444F6A4FCBAB6E9D4F99A94AFF145D318B79 (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___variable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = ___variable0;
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9(__this, L_2, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_3 = ___variable0;
		bool L_4;
		L_4 = ParameterExpression_get_IsByRef_mC47F92A5D61B9A7588509CCAF3A9223CE2E3BA17(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9(__this, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, /*hidden argument*/NULL);
	}

IL_0024:
	{
		DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9(__this, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_5 = ___variable0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_6;
		L_6 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * >::Invoke(6 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression) */, __this, L_5);
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
// System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		RuntimeObject* L_2 = ___source0;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0019:
		{
			RuntimeObject* L_4 = V_1;
			int32_t L_5;
			L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			int32_t L_6 = V_0;
			int32_t L_7 = V_2;
			if (((int64_t)L_6 + (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 + (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD_RuntimeMethod_var);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		}

IL_0024:
		{
			RuntimeObject* L_8 = V_1;
			bool L_9;
			L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0019;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x38, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			if (!L_10)
			{
				goto IL_0037;
			}
		}

IL_0031:
		{
			RuntimeObject* L_11 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0037:
		{
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Max_mDCF86A7A86D2A183D045F007906336B3D989B46C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Max_mDCF86A7A86D2A183D045F007906336B3D989B46C_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = (bool)0;
		RuntimeObject* L_2 = ___source0;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_001b:
		{
			RuntimeObject* L_4 = V_2;
			int32_t L_5;
			L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_002d;
			}
		}

IL_0025:
		{
			int32_t L_7 = V_3;
			int32_t L_8 = V_0;
			if ((((int32_t)L_7) <= ((int32_t)L_8)))
			{
				goto IL_0031;
			}
		}

IL_0029:
		{
			int32_t L_9 = V_3;
			V_0 = L_9;
			goto IL_0031;
		}

IL_002d:
		{
			int32_t L_10 = V_3;
			V_0 = L_10;
			V_1 = (bool)1;
		}

IL_0031:
		{
			RuntimeObject* L_11 = V_2;
			bool L_12;
			L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001b;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x45, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_2;
			if (!L_13)
			{
				goto IL_0044;
			}
		}

IL_003e:
		{
			RuntimeObject* L_14 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(59)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_004a:
	{
		Exception_t * L_17;
		L_17 = Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Max_mDCF86A7A86D2A183D045F007906336B3D989B46C_RuntimeMethod_var)));
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
// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Linq.Error::MoreThanOneMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0E978C2541B8A36DFB07E397656689CE9E713F);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteral9D0E978C2541B8A36DFB07E397656689CE9E713F, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Linq.Error::NoElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E78BE66617B9AE36B6A6E170E3545EE25C1D11);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteralB7E78BE66617B9AE36B6A6E170E3545EE25C1D11, /*hidden argument*/NULL);
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
// System.Exception System.Linq.Expressions.Error::ReducibleMustOverrideReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ReducibleMustOverrideReduce_m2C7087C6013A9880978BEC12F42E41FAA540B064 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Strings_get_ReducibleMustOverrideReduce_mF5500C3C98D00B4A807A98BCE996F07BA5EA2A09(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Linq.Expressions.Error::MustReduceToDifferent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MustReduceToDifferent_mF680547D0DD8BFBA23EAFA58AACCCD2453ACCCF2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Strings_get_MustReduceToDifferent_m64F1E9D0C97AFEF77278E52273100A7A216ADC4E(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Linq.Expressions.Error::ReducedNotCompatible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ReducedNotCompatible_m47BC6BDB5A46B36E50AF812744BF038CC31C6222 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Strings_get_ReducedNotCompatible_mEE06DE72A8E559A77150471BDC2DE895E2972FEF(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Linq.Expressions.Error::MustBeReducible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MustBeReducible_mBD3B935FFA34E22F696CD4DC5DD7F5BEE26F68DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Strings_get_MustBeReducible_m76BE691A4DB1087255803138960C89AD5FA15C8B(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD (RuntimeObject * ___p00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___p00;
		String_t* L_1;
		L_1 = Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4(L_0, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
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
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_mB176477DA08A63C9BC7C64597C6E3E7985426A9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * L_0 = ((Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields*)il2cpp_codegen_static_fields_for(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var))->get_s_legacyCtorSupportTable_1();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * L_1 = ((Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields*)il2cpp_codegen_static_fields_for(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var))->get_s_legacyCtorSupportTable_1();
		bool L_2;
		L_2 = ConditionalWeakTable_2_TryGetValue_mB176477DA08A63C9BC7C64597C6E3E7985426A9B(L_1, __this, (ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926 **)(&V_0), /*hidden argument*/ConditionalWeakTable_2_TryGetValue_mB176477DA08A63C9BC7C64597C6E3E7985426A9B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926 * L_3 = V_0;
		int32_t L_4 = L_3->get_NodeType_0();
		return L_4;
	}

IL_001d:
	{
		Exception_t * L_5;
		L_5 = Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB13824ACB6B914D45875CFF0546C5A0D9350AF2E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A_RuntimeMethod_var)));
	}
}
// System.Type System.Linq.Expressions.Expression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Expression_get_Type_m30E49D13EB342DDADA0D5A54979A5EF120E625E6 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_mB176477DA08A63C9BC7C64597C6E3E7985426A9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * L_0 = ((Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields*)il2cpp_codegen_static_fields_for(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var))->get_s_legacyCtorSupportTable_1();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * L_1 = ((Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields*)il2cpp_codegen_static_fields_for(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var))->get_s_legacyCtorSupportTable_1();
		bool L_2;
		L_2 = ConditionalWeakTable_2_TryGetValue_mB176477DA08A63C9BC7C64597C6E3E7985426A9B(L_1, __this, (ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926 **)(&V_0), /*hidden argument*/ConditionalWeakTable_2_TryGetValue_mB176477DA08A63C9BC7C64597C6E3E7985426A9B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		ExtensionInfo_tC44139FBD6DED03BF72E9D021741DB32CB5FD926 * L_3 = V_0;
		Type_t * L_4 = L_3->get_Type_1();
		return L_4;
	}

IL_001d:
	{
		Exception_t * L_5;
		L_5 = Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4767E340F13B362444D8AE5CE8AE0CF983961DE1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_get_Type_m30E49D13EB342DDADA0D5A54979A5EF120E625E6_RuntimeMethod_var)));
	}
}
// System.Boolean System.Linq.Expressions.Expression::get_CanReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_get_CanReduce_mEC1AEC0F8DB412619F80B3B5078F904EFFB1D7F9 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::Reduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * Expression_Reduce_mA884731A64882F6E9267B56B989756B64D77168E (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Linq.Expressions.Expression::get_CanReduce() */, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ReducibleMustOverrideReduce_m2C7087C6013A9880978BEC12F42E41FAA540B064(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_Reduce_mA884731A64882F6E9267B56B989756B64D77168E_RuntimeMethod_var)));
	}

IL_000e:
	{
		return __this;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::VisitChildren(System.Linq.Expressions.ExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * Expression_VisitChildren_m5E48C3529D41B6386FFC3741E3D510BA929347B0 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * ___visitor0, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Linq.Expressions.Expression::get_CanReduce() */, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_MustBeReducible_mBD3B935FFA34E22F696CD4DC5DD7F5BEE26F68DB(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_VisitChildren_m5E48C3529D41B6386FFC3741E3D510BA929347B0_RuntimeMethod_var)));
	}

IL_000e:
	{
		ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * L_2 = ___visitor0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_3;
		L_3 = Expression_ReduceAndCheck_mA1B79AA88821432A02C6FF36516E211F5D30844D(__this, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_4;
		L_4 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, L_2, L_3);
		return L_4;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::Accept(System.Linq.Expressions.ExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * Expression_Accept_m006B7D9BA94F93215542BC12250126255643CA60 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * ___visitor0, const RuntimeMethod* method)
{
	{
		ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * L_0 = ___visitor0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(5 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitExtension(System.Linq.Expressions.Expression) */, L_0, __this);
		return L_1;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::ReduceAndCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * Expression_ReduceAndCheck_mA1B79AA88821432A02C6FF36516E211F5D30844D (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, const RuntimeMethod* method)
{
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_0 = NULL;
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Linq.Expressions.Expression::get_CanReduce() */, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_MustBeReducible_mBD3B935FFA34E22F696CD4DC5DD7F5BEE26F68DB(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_ReduceAndCheck_mA1B79AA88821432A02C6FF36516E211F5D30844D_RuntimeMethod_var)));
	}

IL_000e:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_2;
		L_2 = VirtFuncInvoker0< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(7 /* System.Linq.Expressions.Expression System.Linq.Expressions.Expression::Reduce() */, __this);
		V_0 = L_2;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_4 = V_0;
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_4) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)__this))))
		{
			goto IL_0022;
		}
	}

IL_001c:
	{
		Exception_t * L_5;
		L_5 = Error_MustReduceToDifferent_mF680547D0DD8BFBA23EAFA58AACCCD2453ACCCF2(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_ReduceAndCheck_mA1B79AA88821432A02C6FF36516E211F5D30844D_RuntimeMethod_var)));
	}

IL_0022:
	{
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, __this);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_7 = V_0;
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_7);
		bool L_9;
		L_9 = TypeUtils_AreReferenceAssignable_m21E45BA149BEB96E7803876FDCFCF202CB49E5E0(L_6, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_003b;
		}
	}
	{
		Exception_t * L_10;
		L_10 = Error_ReducedNotCompatible_m47BC6BDB5A46B36E50AF812744BF038CC31C6222(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_ReduceAndCheck_mA1B79AA88821432A02C6FF36516E211F5D30844D_RuntimeMethod_var)));
	}

IL_003b:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_11 = V_0;
		return L_11;
	}
}
// System.String System.Linq.Expressions.Expression::get_DebugView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Expression_get_DebugView_m1776A0E2AFD08E2D63118973941FE45E891DFC95 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_1 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mDF4AB6FD46E8B9824F2F7A9C26EA086A2C1AE5CF(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = V_0;
		DebugViewWriter_WriteTo_mE9FC855F96711325561F2230E5084164E2DD6D3D(__this, L_2, /*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_3 = V_0;
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_1 = L_4;
		IL2CPP_LEAVE(0x25, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_5 = V_0;
			if (!L_5)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_6 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_6);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(27)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x25, IL_0025)
	}

IL_0025:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Linq.Expressions.Expression::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * L_0 = (CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE *)il2cpp_codegen_object_new(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE_il2cpp_TypeInfo_var);
		CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5(L_0, ((int32_t)40), /*hidden argument*/CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5_RuntimeMethod_var);
		((Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields*)il2cpp_codegen_static_fields_for(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var))->set_s_lambdaDelegateCache_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionVisitor_Visit_mC73BA6F7A8B1A641FB901724B93B1535ED65351F (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___node0, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = ___node0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)NULL;
	}

IL_0005:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_2;
		L_2 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * >::Invoke(9 /* System.Linq.Expressions.Expression System.Linq.Expressions.Expression::Accept(System.Linq.Expressions.ExpressionVisitor) */, L_1, __this);
		return L_2;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitExtension(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionVisitor_VisitExtension_m59AFE769C6DFF530747400C1CC60E72D522E4AAB (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___node0, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * >::Invoke(8 /* System.Linq.Expressions.Expression System.Linq.Expressions.Expression::VisitChildren(System.Linq.Expressions.ExpressionVisitor) */, L_0, __this);
		return L_1;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionVisitor_VisitParameter_mF8B8AD04580CA05FD98D4D6CE72D582ADE956B23 (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___node0, const RuntimeMethod* method)
{
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = ___node0;
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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * LambdaExpression_get_Parameters_mAF114E7D91E405BC84EF2BC075E55E5717759066 (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_0;
		L_0 = VirtFuncInvoker0< ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * >::Invoke(12 /* System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::GetOrMakeParameters() */, __this);
		return L_0;
	}
}
// System.String System.Linq.Expressions.LambdaExpression::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LambdaExpression_get_Name_m35878D5E071143E83A06696F1A1B8B1ACFF0EF40 (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Linq.Expressions.LambdaExpression::get_NameCore() */, __this);
		return L_0;
	}
}
// System.String System.Linq.Expressions.LambdaExpression::get_NameCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LambdaExpression_get_NameCore_mC8FC1EDE276792724F64D00D7E957CECC9800A5E (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get__body_2();
		return L_0;
	}
}
// System.Type System.Linq.Expressions.LambdaExpression::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * LambdaExpression_get_ReturnType_mB82118BCB1EFB2BF4F6B7A4AAE091F7FEBB873C5 (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0;
		L_0 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, __this);
		MethodInfo_t * L_1;
		L_1 = TypeUtils_GetInvokeMethod_m72B1ADCFF5A3533AB362260283CA5252A5A8DF47(L_0, /*hidden argument*/NULL);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Linq.Expressions.LambdaExpression::get_TailCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LambdaExpression_get_TailCall_mD77B216D0A4F3DAB152D3087BC9CDE969DBD6E1B (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Linq.Expressions.LambdaExpression::get_TailCallCore() */, __this);
		return L_0;
	}
}
// System.Boolean System.Linq.Expressions.LambdaExpression::get_TailCallCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LambdaExpression_get_TailCallCore_m1F0C74BE42352811C959B3AAF7C5E0B2E29014CC (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::GetOrMakeParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * LambdaExpression_GetOrMakeParameters_m61E8F42E6DA78629933558F71628B44E60DBD54C (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LambdaExpression_GetOrMakeParameters_m61E8F42E6DA78629933558F71628B44E60DBD54C_RuntimeMethod_var)));
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
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0;
		L_0 = VirtFuncInvoker0< MemberInfo_t * >::Invoke(10 /* System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember() */, __this);
		return L_0;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A (MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3CExpressionU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87_RuntimeMethod_var)));
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
// System.String System.Linq.Expressions.ParameterExpression::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParameterExpression_get_Name_m58AB36FFDA560E226B841C95E436C22F1B7856C8 (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Boolean System.Linq.Expressions.ParameterExpression::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterExpression_get_IsByRef_mC47F92A5D61B9A7588509CCAF3A9223CE2E3BA17 (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Linq.Expressions.ParameterExpression::GetIsByRef() */, __this);
		return L_0;
	}
}
// System.Boolean System.Linq.Expressions.ParameterExpression::GetIsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterExpression_GetIsByRef_m483E4390ADBE1E4AF972BA93BE2FF3466CA2ED8A (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
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
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		String_t* L_1 = ___resourceFormat0;
		RuntimeObject * L_2 = ___p11;
		String_t* L_3;
		L_3 = String_Format_m65D1D384B19FD8F7BD8BC71EE2B75E00488853DB(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.String System.Linq.Expressions.Strings::get_ReducibleMustOverrideReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_ReducibleMustOverrideReduce_mF5500C3C98D00B4A807A98BCE996F07BA5EA2A09 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral365B734430D9CF2AB2319E3E14FDC9F33C4F862C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral365B734430D9CF2AB2319E3E14FDC9F33C4F862C;
	}
}
// System.String System.Linq.Expressions.Strings::get_MustReduceToDifferent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_MustReduceToDifferent_m64F1E9D0C97AFEF77278E52273100A7A216ADC4E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A08504CE4D03C27B3393379203A99CADA8CF1A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0A08504CE4D03C27B3393379203A99CADA8CF1A3;
	}
}
// System.String System.Linq.Expressions.Strings::get_ReducedNotCompatible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_ReducedNotCompatible_mEE06DE72A8E559A77150471BDC2DE895E2972FEF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6DF45C72270FA2BB1DBC2168AD0472EA600EA70);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA6DF45C72270FA2BB1DBC2168AD0472EA600EA70;
	}
}
// System.String System.Linq.Expressions.Strings::get_MustBeReducible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_MustBeReducible_m76BE691A4DB1087255803138960C89AD5FA15C8B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBB4AAE395F5083E7D7C5595FA511A533D09D06);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral9FBB4AAE395F5083E7D7C5595FA511A533D09D06;
	}
}
// System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4 (RuntimeObject * ___p00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F144BDAF6EE2C0E6CFB19145B2E6195FD2E6540);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___p00;
		String_t* L_1;
		L_1 = SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015(_stringLiteral0F144BDAF6EE2C0E6CFB19145B2E6195FD2E6540, L_0, /*hidden argument*/NULL);
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
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.TypeExtensions::GetParametersCached(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* TypeExtensions_GetParametersCached_m72979CFFD47C31423A7415BF9FE4CC9285F2FFB1 (MethodBase_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_TryGetValue_mA8C18CAD96C26C76A20CBCCC1DDCEC59C5019618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_set_Item_m26AE6FDAEB078AC70A914726B262159CC02A9820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * V_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_il2cpp_TypeInfo_var);
		CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * L_0 = ((TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_il2cpp_TypeInfo_var))->get_s_paramInfoCache_0();
		V_0 = L_0;
		CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * L_1 = V_0;
		MethodBase_t * L_2 = ___method0;
		bool L_3;
		L_3 = CacheDict_2_TryGetValue_mA8C18CAD96C26C76A20CBCCC1DDCEC59C5019618(L_1, L_2, (ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B**)(&V_1), /*hidden argument*/CacheDict_2_TryGetValue_mA8C18CAD96C26C76A20CBCCC1DDCEC59C5019618_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		MethodBase_t * L_4 = ___method0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_5;
		L_5 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		V_1 = L_5;
		MethodBase_t * L_6 = ___method0;
		Type_t * L_7;
		L_7 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_6);
		V_2 = L_7;
		Type_t * L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368(L_8, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		Type_t * L_10 = V_2;
		bool L_11;
		L_11 = TypeUtils_CanCache_m5E85D32F34B54FAF95BCFB567188BAF6C44B844C(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0038;
		}
	}
	{
		CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * L_12 = V_0;
		MethodBase_t * L_13 = ___method0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_14 = V_1;
		CacheDict_2_set_Item_m26AE6FDAEB078AC70A914726B262159CC02A9820(L_12, L_13, L_14, /*hidden argument*/CacheDict_2_set_Item_m26AE6FDAEB078AC70A914726B262159CC02A9820_RuntimeMethod_var);
	}

IL_0038:
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_15 = V_1;
		return L_15;
	}
}
// System.Void System.Dynamic.Utils.TypeExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions__cctor_m65CEECDB3C8308FB040FBD77B9C12621A2A14F41 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2__ctor_m379DCD9C493F707E28B3783E27F01B72F41A8868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F * L_0 = (CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F *)il2cpp_codegen_object_new(CacheDict_2_tB3623498F80C0C04E8804E45A814364C12F9CB1F_il2cpp_TypeInfo_var);
		CacheDict_2__ctor_m379DCD9C493F707E28B3783E27F01B72F41A8868(L_0, ((int32_t)75), /*hidden argument*/CacheDict_2__ctor_m379DCD9C493F707E28B3783E27F01B72F41A8868_RuntimeMethod_var);
		((TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_il2cpp_TypeInfo_var))->set_s_paramInfoCache_0(L_0);
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
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNullableType_m5E0CD16DC1340A88AB858A19D91E68664814D370 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(72 /* System.Boolean System.Type::get_IsConstructedGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = ___type0;
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(97 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::AreEquivalent(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreEquivalent_m3D4693A06DB399C83408B8F83DF00FDD80D56E43 (Type_t * ___t10, Type_t * ___t21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t10;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t * L_2 = ___t10;
		Type_t * L_3 = ___t21;
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::IsEquivalentTo(System.Type) */, L_2, L_3);
		return L_4;
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::AreReferenceAssignable(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreReferenceAssignable_m21E45BA149BEB96E7803876FDCFCF202CB49E5E0 (Type_t * ___dest0, Type_t * ___src1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___dest0;
		Type_t * L_1 = ___src1;
		bool L_2;
		L_2 = TypeUtils_AreEquivalent_m3D4693A06DB399C83408B8F83DF00FDD80D56E43(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Type_t * L_3 = ___dest0;
		bool L_4;
		L_4 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_5 = ___src1;
		bool L_6;
		L_6 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_7 = ___dest0;
		Type_t * L_8 = ___src1;
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, Type_t * >::Invoke(107 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_8);
		return L_9;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Reflection.Assembly System.Dynamic.Utils.TypeUtils::get_MsCorLib()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * TypeUtils_get_MsCorLib_m6A0A2C9B07667BFEFCC7CCE521194CF4CBE01F6D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t0A0AEA36D37671B596506F28FDF658970AA2DC0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * G_B2_0 = NULL;
	Assembly_t * G_B1_0 = NULL;
	{
		Assembly_t * L_0 = ((TypeUtils_t0A0AEA36D37671B596506F28FDF658970AA2DC0A_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t0A0AEA36D37671B596506F28FDF658970AA2DC0A_il2cpp_TypeInfo_var))->get_s_mscorlib_0();
		Assembly_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_2, /*hidden argument*/NULL);
		Assembly_t * L_4;
		L_4 = VirtFuncInvoker0< Assembly_t * >::Invoke(23 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		Assembly_t * L_5 = L_4;
		((TypeUtils_t0A0AEA36D37671B596506F28FDF658970AA2DC0A_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t0A0AEA36D37671B596506F28FDF658970AA2DC0A_il2cpp_TypeInfo_var))->set_s_mscorlib_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::CanCache(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_CanCache_m5E85D32F34B54FAF95BCFB567188BAF6C44B844C (Type_t * ___t0, const RuntimeMethod* method)
{
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Type_t * L_0 = ___t0;
		Assembly_t * L_1;
		L_1 = VirtFuncInvoker0< Assembly_t * >::Invoke(23 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_0);
		Assembly_t * L_2;
		L_2 = TypeUtils_get_MsCorLib_m6A0A2C9B07667BFEFCC7CCE521194CF4CBE01F6D(/*hidden argument*/NULL);
		bool L_3;
		L_3 = Assembly_op_Inequality_m029F45303B34324A768B2F5091F7918C5272568C(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		Type_t * L_4 = ___t0;
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		Type_t * L_6 = ___t0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_7;
		L_7 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(95 /* System.Type[] System.Type::GetGenericArguments() */, L_6);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0037;
	}

IL_0027:
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		Type_t * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12;
		L_12 = TypeUtils_CanCache_m5E85D32F34B54FAF95BCFB567188BAF6C44B844C(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0033:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_14 = V_1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0027;
		}
	}

IL_003d:
	{
		return (bool)1;
	}
}
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::GetInvokeMethod(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * TypeUtils_GetInvokeMethod_m72B1ADCFF5A3533AB362260283CA5252A5A8DF47 (Type_t * ___delegateType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___delegateType0;
		MethodInfo_t * L_1;
		L_1 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_0, _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, ((int32_t)52), /*hidden argument*/NULL);
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
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3COperandU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_U3CMethodU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Boolean System.Linq.Expressions.UnaryExpression::get_IsLifted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpression_get_IsLifted_mD03B65CD13E5B8453866462CBF3FCD9D793AB9D1 (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, __this);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)44))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, __this);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)40))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, __this);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		return (bool)0;
	}

IL_0020:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_3;
		L_3 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_3);
		bool L_5;
		L_5 = TypeUtils_IsNullableType_m5E0CD16DC1340A88AB858A19D91E68664814D370(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, __this);
		bool L_7;
		L_7 = TypeUtils_IsNullableType_m5E0CD16DC1340A88AB858A19D91E68664814D370(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		MethodInfo_t * L_8;
		L_8 = UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline(__this, /*hidden argument*/NULL);
		bool L_9;
		L_9 = MethodInfo_op_Inequality_m36E5F5CEC053740C69E67E46BEDA47F9794BC94D(L_8, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0093;
		}
	}
	{
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		MethodInfo_t * L_11;
		L_11 = UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeExtensions_t4621AFAE95D2F74DC128EE8B4364AE8ABA654831_il2cpp_TypeInfo_var);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_12;
		L_12 = TypeExtensions_GetParametersCached_m72979CFFD47C31423A7415BF9FE4CC9285F2FFB1(L_11, /*hidden argument*/NULL);
		int32_t L_13 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Type_t * L_15;
		L_15 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_14);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16;
		L_16 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(__this, /*hidden argument*/NULL);
		Type_t * L_17;
		L_17 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_16);
		bool L_18;
		L_18 = TypeUtils_AreEquivalent_m3D4693A06DB399C83408B8F83DF00FDD80D56E43(L_15, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0091;
		}
	}

IL_0072:
	{
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		MethodInfo_t * L_20;
		L_20 = UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline(__this, /*hidden argument*/NULL);
		Type_t * L_21;
		L_21 = VirtFuncInvoker0< Type_t * >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_20);
		Type_t * L_22;
		L_22 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, __this);
		bool L_23;
		L_23 = TypeUtils_AreEquivalent_m3D4693A06DB399C83408B8F83DF00FDD80D56E43(L_21, L_22, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_008f:
	{
		return (bool)0;
	}

IL_0091:
	{
		return (bool)1;
	}

IL_0093:
	{
		bool L_24 = V_0;
		bool L_25 = V_1;
		return (bool)((int32_t)((int32_t)L_24|(int32_t)L_25));
	}
}
// System.Boolean System.Linq.Expressions.UnaryExpression::get_IsLiftedToNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpression_get_IsLiftedToNull_m9AF11583226E58CCBB91B1B8CD47F950DEC13C4D (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = UnaryExpression_get_IsLifted_mD03B65CD13E5B8453866462CBF3FCD9D793AB9D1(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, __this);
		bool L_2;
		L_2 = TypeUtils_IsNullableType_m5E0CD16DC1340A88AB858A19D91E68664814D370(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
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
// System.Void System.Linq.Expressions.Expression/LambdaExpressionProxy::.ctor(System.Linq.Expressions.LambdaExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LambdaExpressionProxy__ctor_mE67B77D8C8EE9234AA895F8BCBC962A97FEE182D (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = ___node0;
		ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74(L_0, _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31, /*hidden argument*/NULL);
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_1 = ___node0;
		__this->set__node_0(L_1);
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression/LambdaExpressionProxy::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpressionProxy_get_Body_m336855259878E44F7FC0636D8A6D1B1E102C3D1B (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = __this->get__node_0();
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Linq.Expressions.Expression/LambdaExpressionProxy::get_CanReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LambdaExpressionProxy_get_CanReduce_mD164307D2AE3DC9346570AC3571E8B374A307C2D (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = __this->get__node_0();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Linq.Expressions.Expression::get_CanReduce() */, L_0);
		return L_1;
	}
}
// System.String System.Linq.Expressions.Expression/LambdaExpressionProxy::get_DebugView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LambdaExpressionProxy_get_DebugView_m715D27928C3423E2E766CC7AB19EB468AC5BD226 (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = __this->get__node_0();
		String_t* L_1;
		L_1 = Expression_get_DebugView_m1776A0E2AFD08E2D63118973941FE45E891DFC95(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Linq.Expressions.Expression/LambdaExpressionProxy::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LambdaExpressionProxy_get_Name_m17772DCD291ECC9B5D93C74B10ED01B156C22D00 (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = __this->get__node_0();
		String_t* L_1;
		L_1 = LambdaExpression_get_Name_m35878D5E071143E83A06696F1A1B8B1ACFF0EF40(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/LambdaExpressionProxy::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LambdaExpressionProxy_get_NodeType_mE6C18979DD227A112C6B764B73B746F903355476 (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = __this->get__node_0();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_0);
		return L_1;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Expression/LambdaExpressionProxy::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * LambdaExpressionProxy_get_Parameters_mCF32AAD0EB16D9BCFFED24CFDE14455E77F4A55E (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = __this->get__node_0();
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_1;
		L_1 = LambdaExpression_get_Parameters_mAF114E7D91E405BC84EF2BC075E55E5717759066(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Linq.Expressions.Expression/LambdaExpressionProxy::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * LambdaExpressionProxy_get_ReturnType_m07DFE63EDDFFFFF5ED81902726B987DD3D1D59DB (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = __this->get__node_0();
		Type_t * L_1;
		L_1 = LambdaExpression_get_ReturnType_mB82118BCB1EFB2BF4F6B7A4AAE091F7FEBB873C5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Linq.Expressions.Expression/LambdaExpressionProxy::get_TailCall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LambdaExpressionProxy_get_TailCall_m7A7DEF8F33CEEEEC3BA8C841F395B7C53EFABD1A (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = __this->get__node_0();
		bool L_1;
		L_1 = LambdaExpression_get_TailCall_mD77B216D0A4F3DAB152D3087BC9CDE969DBD6E1B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Linq.Expressions.Expression/LambdaExpressionProxy::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * LambdaExpressionProxy_get_Type_m002CE181B0B4CF207263AA074A6BBF4551A36D24 (LambdaExpressionProxy_tCFCD1E710B676197F6BBCC3B2053A41DEACDE609 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_0 = __this->get__node_0();
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_0);
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
// System.Void System.Linq.Expressions.Expression/MemberExpressionProxy::.ctor(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberExpressionProxy__ctor_m1BA55D909CDB2196227C0B78A77A3D33F2B94B6B (MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504 * __this, MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_0 = ___node0;
		ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74(L_0, _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31, /*hidden argument*/NULL);
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_1 = ___node0;
		__this->set__node_0(L_1);
		return;
	}
}
// System.Boolean System.Linq.Expressions.Expression/MemberExpressionProxy::get_CanReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberExpressionProxy_get_CanReduce_mA11693CD644E9F048CEB4BAEB17C6118B95CED82 (MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504 * __this, const RuntimeMethod* method)
{
	{
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_0 = __this->get__node_0();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Linq.Expressions.Expression::get_CanReduce() */, L_0);
		return L_1;
	}
}
// System.String System.Linq.Expressions.Expression/MemberExpressionProxy::get_DebugView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberExpressionProxy_get_DebugView_mDB528F31B43CE5E0C3D9EF6D784E01CBBD7A20FF (MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504 * __this, const RuntimeMethod* method)
{
	{
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_0 = __this->get__node_0();
		String_t* L_1;
		L_1 = Expression_get_DebugView_m1776A0E2AFD08E2D63118973941FE45E891DFC95(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression/MemberExpressionProxy::get_Expression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * MemberExpressionProxy_get_Expression_m3019C7DE7AA56A596E89CF10B6BA3B86191F7CED (MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504 * __this, const RuntimeMethod* method)
{
	{
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_0 = __this->get__node_0();
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MemberInfo System.Linq.Expressions.Expression/MemberExpressionProxy::get_Member()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * MemberExpressionProxy_get_Member_m09E5609580E0D3232E45EE596D4ADD71BFFCAAAF (MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504 * __this, const RuntimeMethod* method)
{
	{
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_0 = __this->get__node_0();
		MemberInfo_t * L_1;
		L_1 = MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/MemberExpressionProxy::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberExpressionProxy_get_NodeType_m41071E79C9611D635E37C7DB00911B98CFB199B2 (MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504 * __this, const RuntimeMethod* method)
{
	{
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_0 = __this->get__node_0();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_0);
		return L_1;
	}
}
// System.Type System.Linq.Expressions.Expression/MemberExpressionProxy::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * MemberExpressionProxy_get_Type_m1D907F160E8DEE7B2FC1FF0FC4D8235F966729C5 (MemberExpressionProxy_tBC5E42816C96013399A5321568AC30D26A8FD504 * __this, const RuntimeMethod* method)
{
	{
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_0 = __this->get__node_0();
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_0);
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
// System.Void System.Linq.Expressions.Expression/ParameterExpressionProxy::.ctor(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterExpressionProxy__ctor_m512E4E9BFA75311C21A8DE48C988949578EE5A6E (ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = ___node0;
		ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74(L_0, _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_1 = ___node0;
		__this->set__node_0(L_1);
		return;
	}
}
// System.Boolean System.Linq.Expressions.Expression/ParameterExpressionProxy::get_CanReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterExpressionProxy_get_CanReduce_mEE6C42D23E3468B67D99310AC81996459842E76B (ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063 * __this, const RuntimeMethod* method)
{
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = __this->get__node_0();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Linq.Expressions.Expression::get_CanReduce() */, L_0);
		return L_1;
	}
}
// System.String System.Linq.Expressions.Expression/ParameterExpressionProxy::get_DebugView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParameterExpressionProxy_get_DebugView_m5582B159BDF7073480EC3CAB0930F507E8446700 (ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063 * __this, const RuntimeMethod* method)
{
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = __this->get__node_0();
		String_t* L_1;
		L_1 = Expression_get_DebugView_m1776A0E2AFD08E2D63118973941FE45E891DFC95(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Linq.Expressions.Expression/ParameterExpressionProxy::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterExpressionProxy_get_IsByRef_mB46CABBB0577E16137A8C069E84E33CE156CB8B9 (ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063 * __this, const RuntimeMethod* method)
{
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = __this->get__node_0();
		bool L_1;
		L_1 = ParameterExpression_get_IsByRef_mC47F92A5D61B9A7588509CCAF3A9223CE2E3BA17(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Linq.Expressions.Expression/ParameterExpressionProxy::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParameterExpressionProxy_get_Name_m598641A441D49736360F23DB78F2DC9C7369729D (ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063 * __this, const RuntimeMethod* method)
{
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = __this->get__node_0();
		String_t* L_1;
		L_1 = ParameterExpression_get_Name_m58AB36FFDA560E226B841C95E436C22F1B7856C8_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/ParameterExpressionProxy::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterExpressionProxy_get_NodeType_m2F66DDBBF9FD7C0C5D8D773D2C0874E18D3597FD (ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063 * __this, const RuntimeMethod* method)
{
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = __this->get__node_0();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_0);
		return L_1;
	}
}
// System.Type System.Linq.Expressions.Expression/ParameterExpressionProxy::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ParameterExpressionProxy_get_Type_mECC882B066D090647DC031A8528B7D9A4DD19EAE (ParameterExpressionProxy_t5935C21AA621E72481284EA4F65B27522E5DC063 * __this, const RuntimeMethod* method)
{
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = __this->get__node_0();
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_0);
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
// System.Void System.Linq.Expressions.Expression/UnaryExpressionProxy::.ctor(System.Linq.Expressions.UnaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpressionProxy__ctor_mBE2760F1C0B7BC264D24FFAC9A4E7AA2817466AD (UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814 * __this, UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_0 = ___node0;
		ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74(L_0, _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31, /*hidden argument*/NULL);
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_1 = ___node0;
		__this->set__node_0(L_1);
		return;
	}
}
// System.Boolean System.Linq.Expressions.Expression/UnaryExpressionProxy::get_CanReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpressionProxy_get_CanReduce_m141F3E1B25D48EF55994F2A9F002FCE44114F9B5 (UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814 * __this, const RuntimeMethod* method)
{
	{
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_0 = __this->get__node_0();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Linq.Expressions.Expression::get_CanReduce() */, L_0);
		return L_1;
	}
}
// System.String System.Linq.Expressions.Expression/UnaryExpressionProxy::get_DebugView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnaryExpressionProxy_get_DebugView_mDC12786870436859E28F6EA116D4F65DE4AA317F (UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814 * __this, const RuntimeMethod* method)
{
	{
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_0 = __this->get__node_0();
		String_t* L_1;
		L_1 = Expression_get_DebugView_m1776A0E2AFD08E2D63118973941FE45E891DFC95(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Linq.Expressions.Expression/UnaryExpressionProxy::get_IsLifted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpressionProxy_get_IsLifted_m02711F19877DD776AAA429B2C6A8F2A782482F4C (UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814 * __this, const RuntimeMethod* method)
{
	{
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_0 = __this->get__node_0();
		bool L_1;
		L_1 = UnaryExpression_get_IsLifted_mD03B65CD13E5B8453866462CBF3FCD9D793AB9D1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Linq.Expressions.Expression/UnaryExpressionProxy::get_IsLiftedToNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnaryExpressionProxy_get_IsLiftedToNull_m94A4182EE0D544A769D1071646577765B3E99210 (UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814 * __this, const RuntimeMethod* method)
{
	{
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_0 = __this->get__node_0();
		bool L_1;
		L_1 = UnaryExpression_get_IsLiftedToNull_m9AF11583226E58CCBB91B1B8CD47F950DEC13C4D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Linq.Expressions.Expression/UnaryExpressionProxy::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnaryExpressionProxy_get_Method_mD468D07C1706E50B68D758849CAD6CF38BF1F037 (UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814 * __this, const RuntimeMethod* method)
{
	{
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_0 = __this->get__node_0();
		MethodInfo_t * L_1;
		L_1 = UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/UnaryExpressionProxy::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnaryExpressionProxy_get_NodeType_m69F8674646A055442E4C548956FE60211E2234ED (UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814 * __this, const RuntimeMethod* method)
{
	{
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_0 = __this->get__node_0();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_0);
		return L_1;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression/UnaryExpressionProxy::get_Operand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpressionProxy_get_Operand_m470F3412A4760BB05EE699C9F269D26E8273D174 (UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814 * __this, const RuntimeMethod* method)
{
	{
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_0 = __this->get__node_0();
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1;
		L_1 = UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Linq.Expressions.Expression/UnaryExpressionProxy::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UnaryExpressionProxy_get_Type_m01D40A87D5AD89AEA64FD691587AA4F5C95020AD (UnaryExpressionProxy_t62185167441E4321A9C435B9941A74CBF74B5814 * __this, const RuntimeMethod* method)
{
	{
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_0 = __this->get__node_0();
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DebugViewWriter_get_Delta_m5A340CD5E59816614646586CFE94B6FA2FED92C7_inline (DebugViewWriter_tFAF19239F285B14AD52226E90EF0EF2CE8F4CF4E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__delta_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParameterExpression_get_Name_m58AB36FFDA560E226B841C95E436C22F1B7856C8_inline (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get__body_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F_inline (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3COperandU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t * UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0_inline (UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_U3CMethodU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A_inline (MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3CExpressionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m2CC61A8B5F6A9FD28F252AABAC91172588412CA3_gshared_inline (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
