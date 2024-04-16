#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String UnityEngine.JsonUtility::ToJsonInternal(System.Object,System.Boolean)
extern void JsonUtility_ToJsonInternal_mFF47E01456F54247452898B77F4FDADF2E546C45 (void);
// 0x00000002 System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
extern void JsonUtility_FromJsonInternal_m12FFC156B7B2B3BD8749963BF4E9450F23CB502C (void);
// 0x00000003 System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern void JsonUtility_ToJson_m491DC338B9CEC36588C29B13673484B9B22348A8 (void);
// 0x00000004 System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
extern void JsonUtility_ToJson_m8A3321288D36CE4383BE7F22C4DACFAF1DEE9ABF (void);
// 0x00000005 T UnityEngine.JsonUtility::FromJson(System.String)
// 0x00000006 System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
extern void JsonUtility_FromJson_m9702DE524E4A879007AAC6F7D9798560628E7D0E (void);
static Il2CppMethodPointer s_methodPointers[6] = 
{
	JsonUtility_ToJsonInternal_mFF47E01456F54247452898B77F4FDADF2E546C45,
	JsonUtility_FromJsonInternal_m12FFC156B7B2B3BD8749963BF4E9450F23CB502C,
	JsonUtility_ToJson_m491DC338B9CEC36588C29B13673484B9B22348A8,
	JsonUtility_ToJson_m8A3321288D36CE4383BE7F22C4DACFAF1DEE9ABF,
	NULL,
	JsonUtility_FromJson_m9702DE524E4A879007AAC6F7D9798560628E7D0E,
};
static const int32_t s_InvokerIndices[6] = 
{
	4531,
	4153,
	4932,
	4531,
	-1,
	4539,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000005, { 0, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, 271 },
	{ (Il2CppRGCTXDataType)2, 271 },
};
extern const CustomAttributesCacheGenerator g_UnityEngine_JSONSerializeModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule = 
{
	"UnityEngine.JSONSerializeModule.dll",
	6,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	g_UnityEngine_JSONSerializeModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
