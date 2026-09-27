#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_CreateAtlasForProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_TextureCombinerPipeline)
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
struct MB2_PackingAlgorithmEnum;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline___c__DisplayClass7_0;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline___c__DisplayClass9_0;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline___c__DisplayClass9_1;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner;
}
namespace DigitalOpus::MB::Core {
class MB_ITextureCombinerPacker;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet;
}
namespace DigitalOpus::MB::Core {
class MeshBakerMaterialTexture;
}
namespace DigitalOpus::MB::Core {
class ProgressUpdateDelegate;
}
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace GlobalNamespace {
struct MB3_TextureCombinerPipeline_CreateAtlasForProperty;
}
namespace GlobalNamespace {
class MB_AtlasesAndRects;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline___c__DisplayClass7_0;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline___c__DisplayClass9_0;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline___c__DisplayClass9_1;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/<CalculateIdealSizesForTexturesInAtlasAndPadding>d__11");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/<__Step1_CollectDistinctMatTexturesAndUsedObjects>d__9");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/<__Step3_BuildAndSaveAtlasesAndStoreResults>d__14");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/<>c__DisplayClass7_0");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/<>c__DisplayClass9_0");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/<>c__DisplayClass9_1");
// Dependencies DigitalOpus.MB.Core.ShaderTextureProperty, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline
class CORDL_TYPE MB3_TextureCombinerPipeline : public ::System::Object {
public:
// Declarations
using TexturePipelineData = ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData;

using _CalculateIdealSizesForTexturesInAtlasAndPadding_d__11 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11;

using ___Step1_CollectDistinctMatTexturesAndUsedObjects_d__9 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9;

using ___Step3_BuildAndSaveAtlasesAndStoreResults_d__14 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14;

using __c__DisplayClass7_0 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0;

using __c__DisplayClass9_0 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0;

using __c__DisplayClass9_1 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1;

using CreateAtlasForProperty = ::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty;

/// @brief Field USE_EXPERIMENTAL_HOIZONTALVERTICAL, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_USE_EXPERIMENTAL_HOIZONTALVERTICAL, put=setStaticF_USE_EXPERIMENTAL_HOIZONTALVERTICAL)) bool  USE_EXPERIMENTAL_HOIZONTALVERTICAL;

/// @brief Field shaderTexPropertyNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_shaderTexPropertyNames, put=setStaticF_shaderTexPropertyNames)) ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>  shaderTexPropertyNames;

/// @brief Method CalculateAllTexturesAreNullAndSameColor, addr 0x9de0720, size 0x5c0, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty> CalculateAllTexturesAreNullAndSameColor(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombinerPipeline::<CalculateIdealSizesForTexturesInAtlasAndPadding>d__11))]
/// @brief Method CalculateIdealSizesForTexturesInAtlasAndPadding, addr 0x9de0ce0, size 0x7c, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* CalculateIdealSizesForTexturesInAtlasAndPadding(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method ConvertNormalFormatFromUnity_ToStandard, addr 0x9de2a60, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 ConvertNormalFormatFromUnity_ToStandard(::UnityEngine::Color32  c) ;

/// @brief Method CreatePacker, addr 0x9de1654, size 0x2a4, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* CreatePacker(bool  onlyOneTextureInAtlasReuseTextures, ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  packingAlgorithm) ;

/// @brief Method CreateTexturePacker, addr 0x9de2620, size 0x13c, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::MB2_TexturePacker* CreateTexturePacker(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  _packingAlgorithm) ;

/// @brief Method FillAtlasPackingResultAuxillaryData, addr 0x9de0ec8, size 0x3e4, virtual false, abstract: false, final false
inline void FillAtlasPackingResultAuxillaryData(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>  atlasPackingResults) ;

/// @brief Method FillResultAtlasesAndRects, addr 0x9de12ac, size 0x3a8, virtual false, abstract: false, final false
inline void FillResultAtlasesAndRects(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::AtlasPackingResult*  atlasPackingResult, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::ArrayW<::UnityEngine::Texture2D*>  atlases) ;

/// @brief Method GenerateReport, addr 0x9de1a60, size 0xb74, virtual true, abstract: false, final false
inline ::System::Text::StringBuilder* GenerateReport(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data) ;

/// @brief Method GetAdjustedForScaleAndOffset2Dimensions, addr 0x9de275c, size 0x304, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetAdjustedForScaleAndOffset2Dimensions(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  source, ::UnityEngine::Vector2  obUVoffset, ::UnityEngine::Vector2  obUVscale, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method GetMaterialScaleAndOffset, addr 0x9de2b38, size 0x154, virtual false, abstract: false, final false
static inline void GetMaterialScaleAndOffset(::UnityEngine::Material*  mat, ::StringW  propertyName, ::by_ref<::UnityEngine::Vector2>  offset, ::by_ref<::UnityEngine::Vector2>  scale) ;

/// @brief Method GetSubmeshArea, addr 0x9de2c8c, size 0x200, virtual false, abstract: false, final false
static inline float_t GetSubmeshArea(::UnityEngine::Mesh*  m, int32_t  submeshIdx) ;

/// @brief Method GetTextureConsideringStandardShaderKeywords, addr 0x9de04e4, size 0x138, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetTextureConsideringStandardShaderKeywords(::StringW  shaderName, ::UnityEngine::Material*  mat, ::StringW  propertyName) ;

/// @brief Method IsPowerOfTwo, addr 0x9de2e8c, size 0x10, virtual false, abstract: false, final false
static inline bool IsPowerOfTwo(int32_t  x) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* New_ctor() ;

/// @brief Method RunTexturePackerOnly, addr 0x9de0d84, size 0x144, virtual true, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> RunTexturePackerOnly(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, bool  doSplitIntoMultiAtlasIfTooBig, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  texturePacker, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method _CollectPropertyNames, addr 0x9de010c, size 0x84, virtual false, abstract: false, final false
static inline bool _CollectPropertyNames(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method _CollectPropertyNames, addr 0x9de0190, size 0x34c, virtual false, abstract: false, final false
static inline bool _CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::UnityEngine::Material*  resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method _DoAnySrcMatsHaveProperty, addr 0x9de00d8, size 0x34, virtual false, abstract: false, final false
static inline bool _DoAnySrcMatsHaveProperty(int32_t  propertyIndex, ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>  allTexturesAreNullAndSameColor) ;

/// @brief Method _ShouldWeCreateAtlasForThisProperty, addr 0x9de0094, size 0x44, virtual false, abstract: false, final false
static inline bool _ShouldWeCreateAtlasForThisProperty(int32_t  propertyIndex, bool  considerNonTextureProperties, ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>  allTexturesAreNullAndSameColor) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombinerPipeline::<__Step1_CollectDistinctMatTexturesAndUsedObjects>d__9))]
/// @brief Method __Step1_CollectDistinctMatTexturesAndUsedObjects, addr 0x9de061c, size 0xdc, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* __Step1_CollectDistinctMatTexturesAndUsedObjects(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  usedObjsToMesh, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombinerPipeline::<__Step3_BuildAndSaveAtlasesAndStoreResults>d__14))]
/// @brief Method __Step3_BuildAndSaveAtlasesAndStoreResults, addr 0x9de18f8, size 0x140, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* __Step3_BuildAndSaveAtlasesAndStoreResults(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  packer, ::DigitalOpus::MB::Core::AtlasPackingResult*  atlasPackingResult, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::System::Text::StringBuilder*  report, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method .ctor, addr 0x9de2e9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_USE_EXPERIMENTAL_HOIZONTALVERTICAL() ;

static inline ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*> getStaticF_shaderTexPropertyNames() ;

static inline void setStaticF_USE_EXPERIMENTAL_HOIZONTALVERTICAL(bool  value) ;

static inline void setStaticF_shaderTexPropertyNames(::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPipeline(MB3_TextureCombinerPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPipeline(MB3_TextureCombinerPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object, UnityEngine.Texture2D
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<__Step3_BuildAndSaveAtlasesAndStoreResults>d__14
class CORDL_TYPE MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14 : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  __4__this;

/// @brief Field <atlases>5__3, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__atlases_5__3, put=__cordl_internal_set__atlases_5__3)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  _atlases_5__3;

/// @brief Field <sw>5__2, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__sw_5__2, put=__cordl_internal_set__sw_5__2)) ::System::Diagnostics::Stopwatch*  _sw_5__2;

/// @brief Field atlasPackingResult, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_atlasPackingResult, put=__cordl_internal_set_atlasPackingResult)) ::DigitalOpus::MB::Core::AtlasPackingResult*  atlasPackingResult;

/// @brief Field combiner, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data;

/// @brief Field packer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_packer, put=__cordl_internal_set_packer)) ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  packer;

/// @brief Field progressInfo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field report, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_report, put=__cordl_internal_set_report)) ::System::Text::StringBuilder*  report;

/// @brief Field resultAtlasesAndRects, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultAtlasesAndRects, put=__cordl_internal_set_resultAtlasesAndRects)) ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects;

/// @brief Field textureEditorMethods, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureEditorMethods, put=__cordl_internal_set_textureEditorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9de7730, size 0x9e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9de8208, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9de8210, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9de8248, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9de772c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* const& __cordl_internal_get___4__this() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get__atlases_5__3() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get__atlases_5__3() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__sw_5__2() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__sw_5__2() ;

constexpr ::DigitalOpus::MB::Core::AtlasPackingResult* const& __cordl_internal_get_atlasPackingResult() const;

constexpr ::DigitalOpus::MB::Core::AtlasPackingResult*& __cordl_internal_get_atlasPackingResult() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get_combiner() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& __cordl_internal_get_data() ;

constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* const& __cordl_internal_get_packer() const;

constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*& __cordl_internal_get_packer() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_report() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_report() ;

constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& __cordl_internal_get_resultAtlasesAndRects() const;

constexpr ::GlobalNamespace::MB_AtlasesAndRects*& __cordl_internal_get_resultAtlasesAndRects() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_textureEditorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_textureEditorMethods() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  value) ;

constexpr void __cordl_internal_set__atlases_5__3(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set__sw_5__2(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_atlasPackingResult(::DigitalOpus::MB::Core::AtlasPackingResult*  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value) ;

constexpr void __cordl_internal_set_packer(::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_report(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value) ;

constexpr void __cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9de1a38, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14(MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14(MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22826};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  ___data;

/// @brief Field LOG_LEVEL, offset: 0x28, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field packer, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  ___packer;

/// @brief Field progressInfo, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field combiner, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  ___combiner;

/// @brief Field atlasPackingResult, offset: 0x48, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::AtlasPackingResult*  ___atlasPackingResult;

/// @brief Field textureEditorMethods, offset: 0x50, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___textureEditorMethods;

/// @brief Field report, offset: 0x58, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___report;

/// @brief Field <>4__this, offset: 0x60, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  _____4__this;

/// @brief Field resultAtlasesAndRects, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::MB_AtlasesAndRects*  ___resultAtlasesAndRects;

/// @brief Field <sw>5__2, offset: 0x70, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____sw_5__2;

/// @brief Field <atlases>5__3, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ____atlases_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ___LOG_LEVEL) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ___packer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ___progressInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ___combiner) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ___atlasPackingResult) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ___textureEditorMethods) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ___report) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, _____4__this) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ___resultAtlasesAndRects) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ____sw_5__2) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14, ____atlases_5__3) == 0x78, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14) == 0x80, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<__Step1_CollectDistinctMatTexturesAndUsedObjects>d__9
class CORDL_TYPE MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9 : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data;

/// @brief Field progressInfo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field result, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result;

/// @brief Field textureEditorMethods, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureEditorMethods, put=__cordl_internal_set_textureEditorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods;

/// @brief Field usedObjsToMesh, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_usedObjsToMesh, put=__cordl_internal_set_usedObjsToMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  usedObjsToMesh;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9de5a38, size 0x1cac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9de76e4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9de76ec, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9de7724, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9de5a34, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& __cordl_internal_get_data() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& __cordl_internal_get_result() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& __cordl_internal_get_result() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_textureEditorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_textureEditorMethods() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_usedObjsToMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_usedObjsToMesh() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

constexpr void __cordl_internal_set_usedObjsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9de06f8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9(MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9(MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22825};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  ___data;

/// @brief Field progressInfo, offset: 0x28, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field LOG_LEVEL, offset: 0x30, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field result, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  ___result;

/// @brief Field textureEditorMethods, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___textureEditorMethods;

/// @brief Field usedObjsToMesh, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___usedObjsToMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9, ___progressInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9, ___LOG_LEVEL) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9, ___result) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9, ___textureEditorMethods) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9, ___usedObjsToMesh) == 0x48, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9) == 0x50, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<CalculateIdealSizesForTexturesInAtlasAndPadding>d__11
class CORDL_TYPE MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11 : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9de418c, size 0x1860, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9de59ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9de59f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9de5a2c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9de4188, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9de0d5c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11(MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11(MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22824};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  ___data;

/// @brief Field LOG_LEVEL, offset: 0x28, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11, ___LOG_LEVEL) == 0x28, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11) == 0x30, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<>c__DisplayClass9_1
class CORDL_TYPE MB3_TextureCombinerPipeline___c__DisplayClass9_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*  CS$__8__locals1;

/// @brief Field setOfTexs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_setOfTexs, put=__cordl_internal_set_setOfTexs)) ::DigitalOpus::MB::Core::MB_TexSet*  setOfTexs;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1* New_ctor() ;

/// @brief Method <__Step1_CollectDistinctMatTexturesAndUsedObjects>b__0, addr 0x9de414c, size 0x3c, virtual false, abstract: false, final false
inline bool ___Step1_CollectDistinctMatTexturesAndUsedObjects_b__0(::DigitalOpus::MB::Core::MB_TexSet*  x) ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::DigitalOpus::MB::Core::MB_TexSet* const& __cordl_internal_get_setOfTexs() const;

constexpr ::DigitalOpus::MB::Core::MB_TexSet*& __cordl_internal_get_setOfTexs() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*  value) ;

constexpr void __cordl_internal_set_setOfTexs(::DigitalOpus::MB::Core::MB_TexSet*  value) ;

/// @brief Method .ctor, addr 0x9de4144, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPipeline___c__DisplayClass9_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline___c__DisplayClass9_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPipeline___c__DisplayClass9_1(MB3_TextureCombinerPipeline___c__DisplayClass9_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline___c__DisplayClass9_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPipeline___c__DisplayClass9_1(MB3_TextureCombinerPipeline___c__DisplayClass9_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22823};

/// @brief Field setOfTexs, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB_TexSet*  ___setOfTexs;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1, ___setOfTexs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<>c__DisplayClass9_0
class CORDL_TYPE MB3_TextureCombinerPipeline___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0* New_ctor() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value) ;

/// @brief Method .ctor, addr 0x9de413c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPipeline___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline___c__DisplayClass9_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPipeline___c__DisplayClass9_0(MB3_TextureCombinerPipeline___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline___c__DisplayClass9_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPipeline___c__DisplayClass9_0(MB3_TextureCombinerPipeline___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22822};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<>c__DisplayClass7_0
class CORDL_TYPE MB3_TextureCombinerPipeline___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  __9__0;

/// @brief Field i, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

/// @brief Field texPropertyNames, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_texPropertyNames, put=__cordl_internal_set_texPropertyNames)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <_CollectPropertyNames>b__0, addr 0x9de40c4, size 0x78, virtual false, abstract: false, final false
inline bool __CollectPropertyNames_b__0(::DigitalOpus::MB::Core::ShaderTextureProperty*  x) ;

constexpr ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& __cordl_internal_get___9__0() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& __cordl_internal_get_texPropertyNames() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& __cordl_internal_get_texPropertyNames() ;

constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

constexpr void __cordl_internal_set_texPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

/// @brief Method .ctor, addr 0x9de04dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPipeline___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline___c__DisplayClass7_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPipeline___c__DisplayClass7_0(MB3_TextureCombinerPipeline___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline___c__DisplayClass7_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPipeline___c__DisplayClass7_0(MB3_TextureCombinerPipeline___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22821};

/// @brief Field texPropertyNames, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  ___texPropertyNames;

/// @brief Field i, offset: 0x18, size: 0x4, def value: None
 int32_t  ___i;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0, ___texPropertyNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0, ___i) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum, DigitalOpus.MB.Core.MB3_TextureCombinerPipeline::CreateAtlasForProperty, MB2_TextureBakeResults::ResultType, System.Object, UnityEngine.ColorSpace
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData
class CORDL_TYPE MB3_TextureCombinerPipeline_TexturePipelineData : public ::System::Object {
public:
// Declarations
/// @brief Field _atlasPadding_pix, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__atlasPadding_pix, put=__cordl_internal_set__atlasPadding_pix)) int32_t  _atlasPadding_pix;

/// @brief Field _considerNonTextureProperties, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__considerNonTextureProperties, put=__cordl_internal_set__considerNonTextureProperties)) bool  _considerNonTextureProperties;

/// @brief Field _customShaderPropNames, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__customShaderPropNames, put=__cordl_internal_set__customShaderPropNames)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames;

/// @brief Field _fixOutOfBoundsUVs, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get__fixOutOfBoundsUVs, put=__cordl_internal_set__fixOutOfBoundsUVs)) bool  _fixOutOfBoundsUVs;

/// @brief Field _layerTexturePackerFastV2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerTexturePackerFastV2, put=__cordl_internal_set__layerTexturePackerFastV2)) int32_t  _layerTexturePackerFastV2;

/// @brief Field _maxAtlasHeight, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAtlasHeight, put=__cordl_internal_set__maxAtlasHeight)) int32_t  _maxAtlasHeight;

/// @brief Field _maxAtlasWidth, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAtlasWidth, put=__cordl_internal_set__maxAtlasWidth)) int32_t  _maxAtlasWidth;

/// @brief Field _maxTilingBakeSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxTilingBakeSize, put=__cordl_internal_set__maxTilingBakeSize)) int32_t  _maxTilingBakeSize;

/// @brief Field _meshBakerTexturePackerForcePowerOfTwo, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo, put=__cordl_internal_set__meshBakerTexturePackerForcePowerOfTwo)) bool  _meshBakerTexturePackerForcePowerOfTwo;

/// @brief Field _normalizeTexelDensity, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__normalizeTexelDensity, put=__cordl_internal_set__normalizeTexelDensity)) bool  _normalizeTexelDensity;

/// @brief Field _packingAlgorithm, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__packingAlgorithm, put=__cordl_internal_set__packingAlgorithm)) ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  _packingAlgorithm;

/// @brief Field _resizePowerOfTwoTextures, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get__resizePowerOfTwoTextures, put=__cordl_internal_set__resizePowerOfTwoTextures)) bool  _resizePowerOfTwoTextures;

/// @brief Field _saveAtlasesAsAssets, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__saveAtlasesAsAssets, put=__cordl_internal_set__saveAtlasesAsAssets)) bool  _saveAtlasesAsAssets;

/// @brief Field _textureBakeResults, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__textureBakeResults, put=__cordl_internal_set__textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  _textureBakeResults;

/// @brief Field _useMaxAtlasHeightOverride, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMaxAtlasHeightOverride, put=__cordl_internal_set__useMaxAtlasHeightOverride)) bool  _useMaxAtlasHeightOverride;

/// @brief Field _useMaxAtlasWidthOverride, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMaxAtlasWidthOverride, put=__cordl_internal_set__useMaxAtlasWidthOverride)) bool  _useMaxAtlasWidthOverride;

/// @brief Field allObjsToMesh, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_allObjsToMesh, put=__cordl_internal_set_allObjsToMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  allObjsToMesh;

/// @brief Field allTexturesAreNullAndSameColor, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_allTexturesAreNullAndSameColor, put=__cordl_internal_set_allTexturesAreNullAndSameColor)) ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>  allTexturesAreNullAndSameColor;

/// @brief Field allowedMaterialsFilter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_allowedMaterialsFilter, put=__cordl_internal_set_allowedMaterialsFilter)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter;

/// @brief Field colorSpace, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorSpace, put=__cordl_internal_set_colorSpace)) ::UnityEngine::ColorSpace  colorSpace;

/// @brief Field distinctMaterialTextures, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_distinctMaterialTextures, put=__cordl_internal_set_distinctMaterialTextures)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures;

/// @brief Field doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize, put=__cordl_internal_set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize)) bool  doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize;

/// @brief Field nonTexturePropertyBlender, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonTexturePropertyBlender, put=__cordl_internal_set_nonTexturePropertyBlender)) ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  nonTexturePropertyBlender;

 __declspec(property(get=get_numAtlases)) int32_t  numAtlases;

/// @brief Field resultMaterial, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterial, put=__cordl_internal_set_resultMaterial)) ::UnityW<::UnityEngine::Material>  resultMaterial;

/// @brief Field resultType, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_resultType, put=__cordl_internal_set_resultType)) ::GlobalNamespace::MB2_TextureBakeResults_ResultType  resultType;

/// @brief Field texPropNamesToIgnore, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_texPropNamesToIgnore, put=__cordl_internal_set_texPropNamesToIgnore)) ::System::Collections::Generic::List_1<::StringW>*  texPropNamesToIgnore;

/// @brief Field texPropertyNames, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_texPropertyNames, put=__cordl_internal_set_texPropertyNames)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* New_ctor() ;

/// @brief Method OnlyOneTextureInAtlasReuseTextures, addr 0x9de3f80, size 0x98, virtual false, abstract: false, final false
inline bool OnlyOneTextureInAtlasReuseTextures() ;

constexpr int32_t const& __cordl_internal_get__atlasPadding_pix() const;

constexpr int32_t& __cordl_internal_get__atlasPadding_pix() ;

constexpr bool const& __cordl_internal_get__considerNonTextureProperties() const;

constexpr bool& __cordl_internal_get__considerNonTextureProperties() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& __cordl_internal_get__customShaderPropNames() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& __cordl_internal_get__customShaderPropNames() ;

constexpr bool const& __cordl_internal_get__fixOutOfBoundsUVs() const;

constexpr bool& __cordl_internal_get__fixOutOfBoundsUVs() ;

constexpr int32_t const& __cordl_internal_get__layerTexturePackerFastV2() const;

constexpr int32_t& __cordl_internal_get__layerTexturePackerFastV2() ;

constexpr int32_t const& __cordl_internal_get__maxAtlasHeight() const;

constexpr int32_t& __cordl_internal_get__maxAtlasHeight() ;

constexpr int32_t const& __cordl_internal_get__maxAtlasWidth() const;

constexpr int32_t& __cordl_internal_get__maxAtlasWidth() ;

constexpr int32_t const& __cordl_internal_get__maxTilingBakeSize() const;

constexpr int32_t& __cordl_internal_get__maxTilingBakeSize() ;

constexpr bool const& __cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo() const;

constexpr bool& __cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo() ;

constexpr bool const& __cordl_internal_get__normalizeTexelDensity() const;

constexpr bool& __cordl_internal_get__normalizeTexelDensity() ;

constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const& __cordl_internal_get__packingAlgorithm() const;

constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum& __cordl_internal_get__packingAlgorithm() ;

constexpr bool const& __cordl_internal_get__resizePowerOfTwoTextures() const;

constexpr bool& __cordl_internal_get__resizePowerOfTwoTextures() ;

constexpr bool const& __cordl_internal_get__saveAtlasesAsAssets() const;

constexpr bool& __cordl_internal_get__saveAtlasesAsAssets() ;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& __cordl_internal_get__textureBakeResults() const;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& __cordl_internal_get__textureBakeResults() ;

constexpr bool const& __cordl_internal_get__useMaxAtlasHeightOverride() const;

constexpr bool& __cordl_internal_get__useMaxAtlasHeightOverride() ;

constexpr bool const& __cordl_internal_get__useMaxAtlasWidthOverride() const;

constexpr bool& __cordl_internal_get__useMaxAtlasWidthOverride() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_allObjsToMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_allObjsToMesh() ;

constexpr ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty> const& __cordl_internal_get_allTexturesAreNullAndSameColor() const;

constexpr ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>& __cordl_internal_get_allTexturesAreNullAndSameColor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_allowedMaterialsFilter() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_allowedMaterialsFilter() ;

constexpr ::UnityEngine::ColorSpace const& __cordl_internal_get_colorSpace() const;

constexpr ::UnityEngine::ColorSpace& __cordl_internal_get_colorSpace() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* const& __cordl_internal_get_distinctMaterialTextures() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*& __cordl_internal_get_distinctMaterialTextures() ;

constexpr bool const& __cordl_internal_get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize() const;

constexpr bool& __cordl_internal_get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& __cordl_internal_get_nonTexturePropertyBlender() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& __cordl_internal_get_nonTexturePropertyBlender() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_resultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_resultMaterial() ;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType const& __cordl_internal_get_resultType() const;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType& __cordl_internal_get_resultType() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_texPropNamesToIgnore() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_texPropNamesToIgnore() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& __cordl_internal_get_texPropertyNames() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& __cordl_internal_get_texPropertyNames() ;

constexpr void __cordl_internal_set__atlasPadding_pix(int32_t  value) ;

constexpr void __cordl_internal_set__considerNonTextureProperties(bool  value) ;

constexpr void __cordl_internal_set__customShaderPropNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

constexpr void __cordl_internal_set__fixOutOfBoundsUVs(bool  value) ;

constexpr void __cordl_internal_set__layerTexturePackerFastV2(int32_t  value) ;

constexpr void __cordl_internal_set__maxAtlasHeight(int32_t  value) ;

constexpr void __cordl_internal_set__maxAtlasWidth(int32_t  value) ;

constexpr void __cordl_internal_set__maxTilingBakeSize(int32_t  value) ;

constexpr void __cordl_internal_set__meshBakerTexturePackerForcePowerOfTwo(bool  value) ;

constexpr void __cordl_internal_set__normalizeTexelDensity(bool  value) ;

constexpr void __cordl_internal_set__packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value) ;

constexpr void __cordl_internal_set__resizePowerOfTwoTextures(bool  value) ;

constexpr void __cordl_internal_set__saveAtlasesAsAssets(bool  value) ;

constexpr void __cordl_internal_set__textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value) ;

constexpr void __cordl_internal_set__useMaxAtlasHeightOverride(bool  value) ;

constexpr void __cordl_internal_set__useMaxAtlasWidthOverride(bool  value) ;

constexpr void __cordl_internal_set_allObjsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_allTexturesAreNullAndSameColor(::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>  value) ;

constexpr void __cordl_internal_set_allowedMaterialsFilter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_colorSpace(::UnityEngine::ColorSpace  value) ;

constexpr void __cordl_internal_set_distinctMaterialTextures(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  value) ;

constexpr void __cordl_internal_set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize(bool  value) ;

constexpr void __cordl_internal_set_nonTexturePropertyBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value) ;

constexpr void __cordl_internal_set_resultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value) ;

constexpr void __cordl_internal_set_texPropNamesToIgnore(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_texPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

/// @brief Method .ctor, addr 0x9de4018, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_numAtlases, addr 0x9de25d4, size 0x4c, virtual false, abstract: false, final false
inline int32_t get_numAtlases() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPipeline_TexturePipelineData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline_TexturePipelineData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPipeline_TexturePipelineData(MB3_TextureCombinerPipeline_TexturePipelineData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPipeline_TexturePipelineData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPipeline_TexturePipelineData(MB3_TextureCombinerPipeline_TexturePipelineData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22820};

/// @brief Field _textureBakeResults, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  ____textureBakeResults;

/// @brief Field _atlasPadding_pix, offset: 0x18, size: 0x4, def value: None
 int32_t  ____atlasPadding_pix;

/// @brief Field _maxAtlasWidth, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____maxAtlasWidth;

/// @brief Field _maxAtlasHeight, offset: 0x20, size: 0x4, def value: None
 int32_t  ____maxAtlasHeight;

/// @brief Field _useMaxAtlasHeightOverride, offset: 0x24, size: 0x1, def value: None
 bool  ____useMaxAtlasHeightOverride;

/// @brief Field _useMaxAtlasWidthOverride, offset: 0x25, size: 0x1, def value: None
 bool  ____useMaxAtlasWidthOverride;

/// @brief Field _resizePowerOfTwoTextures, offset: 0x26, size: 0x1, def value: None
 bool  ____resizePowerOfTwoTextures;

/// @brief Field _fixOutOfBoundsUVs, offset: 0x27, size: 0x1, def value: None
 bool  ____fixOutOfBoundsUVs;

/// @brief Field _maxTilingBakeSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ____maxTilingBakeSize;

/// @brief Field _saveAtlasesAsAssets, offset: 0x2c, size: 0x1, def value: None
 bool  ____saveAtlasesAsAssets;

/// @brief Field _packingAlgorithm, offset: 0x30, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  ____packingAlgorithm;

/// @brief Field _layerTexturePackerFastV2, offset: 0x34, size: 0x4, def value: None
 int32_t  ____layerTexturePackerFastV2;

/// @brief Field _meshBakerTexturePackerForcePowerOfTwo, offset: 0x38, size: 0x1, def value: None
 bool  ____meshBakerTexturePackerForcePowerOfTwo;

/// @brief Field _customShaderPropNames, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  ____customShaderPropNames;

/// @brief Field _normalizeTexelDensity, offset: 0x48, size: 0x1, def value: None
 bool  ____normalizeTexelDensity;

/// @brief Field _considerNonTextureProperties, offset: 0x49, size: 0x1, def value: None
 bool  ____considerNonTextureProperties;

/// @brief Field doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize, offset: 0x4a, size: 0x1, def value: None
 bool  ___doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize;

/// @brief Field colorSpace, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::ColorSpace  ___colorSpace;

/// @brief Field nonTexturePropertyBlender, offset: 0x50, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  ___nonTexturePropertyBlender;

/// @brief Field distinctMaterialTextures, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  ___distinctMaterialTextures;

/// @brief Field allObjsToMesh, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___allObjsToMesh;

/// @brief Field allowedMaterialsFilter, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___allowedMaterialsFilter;

/// @brief Field texPropertyNames, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  ___texPropertyNames;

/// @brief Field texPropNamesToIgnore, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___texPropNamesToIgnore;

/// @brief Field allTexturesAreNullAndSameColor, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>  ___allTexturesAreNullAndSameColor;

/// @brief Field resultType, offset: 0x88, size: 0x4, def value: None
 ::GlobalNamespace::MB2_TextureBakeResults_ResultType  ___resultType;

/// @brief Field resultMaterial, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___resultMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____textureBakeResults) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____atlasPadding_pix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____maxAtlasWidth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____maxAtlasHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____useMaxAtlasHeightOverride) == 0x24, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____useMaxAtlasWidthOverride) == 0x25, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____resizePowerOfTwoTextures) == 0x26, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____fixOutOfBoundsUVs) == 0x27, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____maxTilingBakeSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____saveAtlasesAsAssets) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____packingAlgorithm) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____layerTexturePackerFastV2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____meshBakerTexturePackerForcePowerOfTwo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____customShaderPropNames) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____normalizeTexelDensity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ____considerNonTextureProperties) == 0x49, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___colorSpace) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___nonTexturePropertyBlender) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___distinctMaterialTextures) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___allObjsToMesh) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___allowedMaterialsFilter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___texPropertyNames) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___texPropNamesToIgnore) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___allTexturesAreNullAndSameColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___resultType) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData, ___resultMaterial) == 0x90, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData) == 0x98, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
