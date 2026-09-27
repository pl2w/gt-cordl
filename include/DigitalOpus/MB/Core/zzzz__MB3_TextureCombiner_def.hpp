#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombiner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_TextureCombiner)
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_PackingAlgorithmEnum;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CreateAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_TemporaryTexture;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner____RunTexturePackerOnly_d__88;
}
namespace DigitalOpus::MB::Core {
class MB_ITextureCombinerPacker;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet;
}
namespace DigitalOpus::MB::Core {
class ProgressUpdateDelegate;
}
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace GlobalNamespace {
struct MB2_TextureBakeResults_ResultType;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CreateAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_TemporaryTexture;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner____RunTexturePackerOnly_d__88;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombiner*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombiner*, "DigitalOpus.MB.Core", "MB3_TextureCombiner");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, "DigitalOpus.MB.Core", "MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, "DigitalOpus.MB.Core", "MB3_TextureCombiner/CreateAtlasesCoroutineResult");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*, "DigitalOpus.MB.Core", "MB3_TextureCombiner/TemporaryTexture");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*, "DigitalOpus.MB.Core", "MB3_TextureCombiner/<CombineTexturesIntoAtlasesCoroutine>d__84");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*, "DigitalOpus.MB.Core", "MB3_TextureCombiner/<_CombineTexturesIntoAtlases>d__85");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*, "DigitalOpus.MB.Core", "MB3_TextureCombiner/<__CombineTexturesIntoAtlases>d__87");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*, "DigitalOpus.MB.Core", "MB3_TextureCombiner/<__RunTexturePackerOnly>d__88");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum, MB2_TextureBakeResults::ResultType, System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombiner
class CORDL_TYPE MB3_TextureCombiner : public ::System::Object {
public:
// Declarations
using CombineTexturesIntoAtlasesCoroutineResult = ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;

using CreateAtlasesCoroutineResult = ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult;

using TemporaryTexture = ::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture;

using _CombineTexturesIntoAtlasesCoroutine_d__84 = ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84;

using __CombineTexturesIntoAtlases_d__85 = ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85;

using ___CombineTexturesIntoAtlases_d__87 = ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87;

using ___RunTexturePackerOnly_d__88 = ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88;

/// @brief Field LOG_LEVEL, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED, put=setStaticF_NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED)) ::UnityEngine::Color  NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED;

/// @brief Field NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED, put=setStaticF_NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED)) ::UnityEngine::Color  NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED;

/// @brief Field _RunCorutineWithoutPauseIsRunning, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__RunCorutineWithoutPauseIsRunning, put=setStaticF__RunCorutineWithoutPauseIsRunning)) bool  _RunCorutineWithoutPauseIsRunning;

/// @brief Field _atlasPadding, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__atlasPadding, put=__cordl_internal_set__atlasPadding)) int32_t  _atlasPadding;

/// @brief Field _considerNonTextureProperties, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__considerNonTextureProperties, put=__cordl_internal_set__considerNonTextureProperties)) bool  _considerNonTextureProperties;

/// @brief Field _customShaderPropNames, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__customShaderPropNames, put=__cordl_internal_set__customShaderPropNames)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames;

/// @brief Field _doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize, put=__cordl_internal_set__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize)) bool  _doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize;

/// @brief Field _fixOutOfBoundsUVs, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get__fixOutOfBoundsUVs, put=__cordl_internal_set__fixOutOfBoundsUVs)) bool  _fixOutOfBoundsUVs;

/// @brief Field _layerTexturePackerFastMesh, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerTexturePackerFastMesh, put=__cordl_internal_set__layerTexturePackerFastMesh)) int32_t  _layerTexturePackerFastMesh;

/// @brief Field _maxAtlasHeightOverride, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAtlasHeightOverride, put=__cordl_internal_set__maxAtlasHeightOverride)) int32_t  _maxAtlasHeightOverride;

/// @brief Field _maxAtlasSize, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAtlasSize, put=__cordl_internal_set__maxAtlasSize)) int32_t  _maxAtlasSize;

/// @brief Field _maxAtlasWidthOverride, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAtlasWidthOverride, put=__cordl_internal_set__maxAtlasWidthOverride)) int32_t  _maxAtlasWidthOverride;

/// @brief Field _maxTilingBakeSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxTilingBakeSize, put=__cordl_internal_set__maxTilingBakeSize)) int32_t  _maxTilingBakeSize;

/// @brief Field _meshBakerTexturePackerForcePowerOfTwo, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo, put=__cordl_internal_set__meshBakerTexturePackerForcePowerOfTwo)) bool  _meshBakerTexturePackerForcePowerOfTwo;

/// @brief Field _normalizeTexelDensity, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__normalizeTexelDensity, put=__cordl_internal_set__normalizeTexelDensity)) bool  _normalizeTexelDensity;

/// @brief Field _packingAlgorithm, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__packingAlgorithm, put=__cordl_internal_set__packingAlgorithm)) ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  _packingAlgorithm;

/// @brief Field _resizePowerOfTwoTextures, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__resizePowerOfTwoTextures, put=__cordl_internal_set__resizePowerOfTwoTextures)) bool  _resizePowerOfTwoTextures;

/// @brief Field _resultType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__resultType, put=__cordl_internal_set__resultType)) ::GlobalNamespace::MB2_TextureBakeResults_ResultType  _resultType;

/// @brief Field _saveAtlasesAsAssets, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__saveAtlasesAsAssets, put=__cordl_internal_set__saveAtlasesAsAssets)) bool  _saveAtlasesAsAssets;

/// @brief Field _temporaryTextures, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__temporaryTextures, put=__cordl_internal_set__temporaryTextures)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*  _temporaryTextures;

/// @brief Field _textureBakeResults, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__textureBakeResults, put=__cordl_internal_set__textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  _textureBakeResults;

/// @brief Field _useMaxAtlasHeightOverride, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMaxAtlasHeightOverride, put=__cordl_internal_set__useMaxAtlasHeightOverride)) bool  _useMaxAtlasHeightOverride;

/// @brief Field _useMaxAtlasWidthOverride, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMaxAtlasWidthOverride, put=__cordl_internal_set__useMaxAtlasWidthOverride)) bool  _useMaxAtlasWidthOverride;

 __declspec(property(get=get_atlasPadding, put=set_atlasPadding)) int32_t  atlasPadding;

 __declspec(property(get=get_considerNonTextureProperties, put=set_considerNonTextureProperties)) bool  considerNonTextureProperties;

 __declspec(property(get=get_customShaderPropNames, put=set_customShaderPropNames)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  customShaderPropNames;

 __declspec(property(get=get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize, put=set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize)) bool  doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize;

 __declspec(property(get=get_fixOutOfBoundsUVs, put=set_fixOutOfBoundsUVs)) bool  fixOutOfBoundsUVs;

 __declspec(property(get=get_layerTexturePackerFastMesh, put=set_layerTexturePackerFastMesh)) int32_t  layerTexturePackerFastMesh;

 __declspec(property(get=get_maxAtlasHeightOverride, put=set_maxAtlasHeightOverride)) int32_t  maxAtlasHeightOverride;

 __declspec(property(get=get_maxAtlasSize, put=set_maxAtlasSize)) int32_t  maxAtlasSize;

 __declspec(property(get=get_maxAtlasWidthOverride, put=set_maxAtlasWidthOverride)) int32_t  maxAtlasWidthOverride;

 __declspec(property(get=get_maxTilingBakeSize, put=set_maxTilingBakeSize)) int32_t  maxTilingBakeSize;

 __declspec(property(get=get_meshBakerTexturePackerForcePowerOfTwo, put=set_meshBakerTexturePackerForcePowerOfTwo)) bool  meshBakerTexturePackerForcePowerOfTwo;

 __declspec(property(get=get_packingAlgorithm, put=set_packingAlgorithm)) ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  packingAlgorithm;

 __declspec(property(get=get_resizePowerOfTwoTextures, put=set_resizePowerOfTwoTextures)) bool  resizePowerOfTwoTextures;

 __declspec(property(get=get_resultType, put=set_resultType)) ::GlobalNamespace::MB2_TextureBakeResults_ResultType  resultType;

 __declspec(property(get=get_saveAtlasesAsAssets, put=set_saveAtlasesAsAssets)) bool  saveAtlasesAsAssets;

 __declspec(property(get=get_textureBakeResults, put=set_textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  textureBakeResults;

 __declspec(property(get=get_useMaxAtlasHeightOverride, put=set_useMaxAtlasHeightOverride)) bool  useMaxAtlasHeightOverride;

 __declspec(property(get=get_useMaxAtlasWidthOverride, put=set_useMaxAtlasWidthOverride)) bool  useMaxAtlasWidthOverride;

/// @brief Method AddTemporaryTexture, addr 0x9dca124, size 0xac, virtual false, abstract: false, final false
inline void AddTemporaryTexture(::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*  tt) ;

/// @brief Method CombineTexturesIntoAtlases, addr 0x9dc9668, size 0x188, virtual false, abstract: false, final false
inline bool CombineTexturesIntoAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  packingResults, bool  onlyPackRects, bool  splitAtlasWhenPackingIfTooBig) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombiner::<CombineTexturesIntoAtlasesCoroutine>d__84))]
/// @brief Method CombineTexturesIntoAtlasesCoroutine, addr 0x9dc995c, size 0x174, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CombineTexturesIntoAtlasesCoroutine(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  coroutineResult, float_t  maxTimePerFrame, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  packingResults, bool  onlyPackRects, bool  splitAtlasWhenPackingIfTooBig) ;

/// @brief Method LoadPipelineData, addr 0x9dc9ad0, size 0x21c, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* LoadPipelineData(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombiner* New_ctor() ;

/// @brief Method PrintList, addr 0x9dcc1bc, size 0x108, virtual false, abstract: false, final false
inline ::StringW PrintList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos) ;

/// @brief Method RunCorutineWithoutPause, addr 0x9dc938c, size 0x2dc, virtual false, abstract: false, final false
static inline void RunCorutineWithoutPause(::System::Collections::IEnumerator*  cor, int32_t  recursionDepth) ;

/// @brief Method ShouldTextureBeLinear, addr 0x9dc8768, size 0x2c, virtual false, abstract: false, final false
static inline bool ShouldTextureBeLinear(::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderTextureProperty) ;

/// @brief Method SuggestTreatment, addr 0x9dca994, size 0x1828, virtual false, abstract: false, final false
inline void SuggestTreatment(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::ArrayW<::UnityEngine::Material*>  resultMaterials, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombiner::<_CombineTexturesIntoAtlases>d__85))]
/// @brief Method _CombineTexturesIntoAtlases, addr 0x9dc97f0, size 0x16c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _CombineTexturesIntoAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  atlasPackingResult, bool  onlyPackRects, bool  splitAtlasWhenPackingIfTooBig) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombiner::<__CombineTexturesIntoAtlases>d__87))]
/// @brief Method __CombineTexturesIntoAtlases, addr 0x9dc9cec, size 0xf0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* __CombineTexturesIntoAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombiner::<__RunTexturePackerOnly>d__88))]
/// @brief Method __RunTexturePackerOnly, addr 0x9dc9ddc, size 0xfc, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* __RunTexturePackerOnly(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, bool  splitAtlasWhenPackingIfTooBig, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  packingResult) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr int32_t const& __cordl_internal_get__atlasPadding() const;

constexpr int32_t& __cordl_internal_get__atlasPadding() ;

constexpr bool const& __cordl_internal_get__considerNonTextureProperties() const;

constexpr bool& __cordl_internal_get__considerNonTextureProperties() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& __cordl_internal_get__customShaderPropNames() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& __cordl_internal_get__customShaderPropNames() ;

constexpr bool const& __cordl_internal_get__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize() const;

constexpr bool& __cordl_internal_get__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize() ;

constexpr bool const& __cordl_internal_get__fixOutOfBoundsUVs() const;

constexpr bool& __cordl_internal_get__fixOutOfBoundsUVs() ;

constexpr int32_t const& __cordl_internal_get__layerTexturePackerFastMesh() const;

constexpr int32_t& __cordl_internal_get__layerTexturePackerFastMesh() ;

constexpr int32_t const& __cordl_internal_get__maxAtlasHeightOverride() const;

constexpr int32_t& __cordl_internal_get__maxAtlasHeightOverride() ;

constexpr int32_t const& __cordl_internal_get__maxAtlasSize() const;

constexpr int32_t& __cordl_internal_get__maxAtlasSize() ;

constexpr int32_t const& __cordl_internal_get__maxAtlasWidthOverride() const;

constexpr int32_t& __cordl_internal_get__maxAtlasWidthOverride() ;

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

constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType const& __cordl_internal_get__resultType() const;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType& __cordl_internal_get__resultType() ;

constexpr bool const& __cordl_internal_get__saveAtlasesAsAssets() const;

constexpr bool& __cordl_internal_get__saveAtlasesAsAssets() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>* const& __cordl_internal_get__temporaryTextures() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*& __cordl_internal_get__temporaryTextures() ;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& __cordl_internal_get__textureBakeResults() const;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& __cordl_internal_get__textureBakeResults() ;

constexpr bool const& __cordl_internal_get__useMaxAtlasHeightOverride() const;

constexpr bool& __cordl_internal_get__useMaxAtlasHeightOverride() ;

constexpr bool const& __cordl_internal_get__useMaxAtlasWidthOverride() const;

constexpr bool& __cordl_internal_get__useMaxAtlasWidthOverride() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__atlasPadding(int32_t  value) ;

constexpr void __cordl_internal_set__considerNonTextureProperties(bool  value) ;

constexpr void __cordl_internal_set__customShaderPropNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

constexpr void __cordl_internal_set__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize(bool  value) ;

constexpr void __cordl_internal_set__fixOutOfBoundsUVs(bool  value) ;

constexpr void __cordl_internal_set__layerTexturePackerFastMesh(int32_t  value) ;

constexpr void __cordl_internal_set__maxAtlasHeightOverride(int32_t  value) ;

constexpr void __cordl_internal_set__maxAtlasSize(int32_t  value) ;

constexpr void __cordl_internal_set__maxAtlasWidthOverride(int32_t  value) ;

constexpr void __cordl_internal_set__maxTilingBakeSize(int32_t  value) ;

constexpr void __cordl_internal_set__meshBakerTexturePackerForcePowerOfTwo(bool  value) ;

constexpr void __cordl_internal_set__normalizeTexelDensity(bool  value) ;

constexpr void __cordl_internal_set__packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value) ;

constexpr void __cordl_internal_set__resizePowerOfTwoTextures(bool  value) ;

constexpr void __cordl_internal_set__resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value) ;

constexpr void __cordl_internal_set__saveAtlasesAsAssets(bool  value) ;

constexpr void __cordl_internal_set__temporaryTextures(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*  value) ;

constexpr void __cordl_internal_set__textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value) ;

constexpr void __cordl_internal_set__useMaxAtlasHeightOverride(bool  value) ;

constexpr void __cordl_internal_set__useMaxAtlasWidthOverride(bool  value) ;

/// @brief Method _createTemporaryTexture, addr 0x9dc9f20, size 0x204, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> _createTemporaryTexture(::StringW  propertyName, int32_t  w, int32_t  h, ::UnityEngine::TextureFormat  texFormat, bool  mipMaps, bool  linear) ;

/// @brief Method _createTextureCopy, addr 0x9dca1d0, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> _createTextureCopy(::DigitalOpus::MB::Core::ShaderTextureProperty*  propertyName, ::UnityEngine::Texture2D*  t) ;

/// @brief Method .ctor, addr 0x9dcc2c4, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _destroyAllTemporaryTextures, addr 0x9dca578, size 0x168, virtual false, abstract: false, final false
inline void _destroyAllTemporaryTextures() ;

/// @brief Method _destroyTemporaryTextures, addr 0x9dca6e0, size 0x2b0, virtual false, abstract: false, final false
inline void _destroyTemporaryTextures(::StringW  propertyName) ;

/// @brief Method _getNumTemporaryTextures, addr 0x9dc9ed8, size 0x48, virtual false, abstract: false, final false
inline int32_t _getNumTemporaryTextures() ;

/// @brief Method _resizeTexture, addr 0x9dca3b0, size 0x1c8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> _resizeTexture(::DigitalOpus::MB::Core::ShaderTextureProperty*  propertyName, ::UnityEngine::Texture2D*  t, int32_t  w, int32_t  h) ;

/// @brief Method _restoreProceduralMaterials, addr 0x9dca990, size 0x4, virtual false, abstract: false, final false
inline void _restoreProceduralMaterials() ;

static inline ::UnityEngine::Color getStaticF_NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED() ;

static inline ::UnityEngine::Color getStaticF_NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED() ;

static inline bool getStaticF__RunCorutineWithoutPauseIsRunning() ;

/// @brief Method get_atlasPadding, addr 0x9dc927c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_atlasPadding() ;

/// @brief Method get_considerNonTextureProperties, addr 0x9dc936c, size 0x8, virtual false, abstract: false, final false
inline bool get_considerNonTextureProperties() ;

/// @brief Method get_customShaderPropNames, addr 0x9dc935c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* get_customShaderPropNames() ;

/// @brief Method get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize, addr 0x9dc937c, size 0x8, virtual false, abstract: false, final false
inline bool get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize() ;

/// @brief Method get_fixOutOfBoundsUVs, addr 0x9dc92ec, size 0x8, virtual false, abstract: false, final false
inline bool get_fixOutOfBoundsUVs() ;

/// @brief Method get_layerTexturePackerFastMesh, addr 0x9dc92fc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_layerTexturePackerFastMesh() ;

/// @brief Method get_maxAtlasHeightOverride, addr 0x9dc92ac, size 0x8, virtual true, abstract: false, final false
inline int32_t get_maxAtlasHeightOverride() ;

/// @brief Method get_maxAtlasSize, addr 0x9dc928c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_maxAtlasSize() ;

/// @brief Method get_maxAtlasWidthOverride, addr 0x9dc929c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_maxAtlasWidthOverride() ;

/// @brief Method get_maxTilingBakeSize, addr 0x9dc930c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_maxTilingBakeSize() ;

/// @brief Method get_meshBakerTexturePackerForcePowerOfTwo, addr 0x9dc934c, size 0x8, virtual false, abstract: false, final false
inline bool get_meshBakerTexturePackerForcePowerOfTwo() ;

/// @brief Method get_packingAlgorithm, addr 0x9dc933c, size 0x8, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum get_packingAlgorithm() ;

/// @brief Method get_resizePowerOfTwoTextures, addr 0x9dc92dc, size 0x8, virtual false, abstract: false, final false
inline bool get_resizePowerOfTwoTextures() ;

/// @brief Method get_resultType, addr 0x9dc932c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MB2_TextureBakeResults_ResultType get_resultType() ;

/// @brief Method get_saveAtlasesAsAssets, addr 0x9dc931c, size 0x8, virtual false, abstract: false, final false
inline bool get_saveAtlasesAsAssets() ;

/// @brief Method get_textureBakeResults, addr 0x9dc926c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> get_textureBakeResults() ;

/// @brief Method get_useMaxAtlasHeightOverride, addr 0x9dc92cc, size 0x8, virtual true, abstract: false, final false
inline bool get_useMaxAtlasHeightOverride() ;

/// @brief Method get_useMaxAtlasWidthOverride, addr 0x9dc92bc, size 0x8, virtual true, abstract: false, final false
inline bool get_useMaxAtlasWidthOverride() ;

static inline void setStaticF_NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED(::UnityEngine::Color  value) ;

static inline void setStaticF_NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED(::UnityEngine::Color  value) ;

static inline void setStaticF__RunCorutineWithoutPauseIsRunning(bool  value) ;

/// @brief Method set_atlasPadding, addr 0x9dc9284, size 0x8, virtual false, abstract: false, final false
inline void set_atlasPadding(int32_t  value) ;

/// @brief Method set_considerNonTextureProperties, addr 0x9dc9374, size 0x8, virtual false, abstract: false, final false
inline void set_considerNonTextureProperties(bool  value) ;

/// @brief Method set_customShaderPropNames, addr 0x9dc9364, size 0x8, virtual false, abstract: false, final false
inline void set_customShaderPropNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

/// @brief Method set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize, addr 0x9dc9384, size 0x8, virtual false, abstract: false, final false
inline void set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize(bool  value) ;

/// @brief Method set_fixOutOfBoundsUVs, addr 0x9dc92f4, size 0x8, virtual false, abstract: false, final false
inline void set_fixOutOfBoundsUVs(bool  value) ;

/// @brief Method set_layerTexturePackerFastMesh, addr 0x9dc9304, size 0x8, virtual false, abstract: false, final false
inline void set_layerTexturePackerFastMesh(int32_t  value) ;

/// @brief Method set_maxAtlasHeightOverride, addr 0x9dc92b4, size 0x8, virtual true, abstract: false, final false
inline void set_maxAtlasHeightOverride(int32_t  value) ;

/// @brief Method set_maxAtlasSize, addr 0x9dc9294, size 0x8, virtual false, abstract: false, final false
inline void set_maxAtlasSize(int32_t  value) ;

/// @brief Method set_maxAtlasWidthOverride, addr 0x9dc92a4, size 0x8, virtual true, abstract: false, final false
inline void set_maxAtlasWidthOverride(int32_t  value) ;

/// @brief Method set_maxTilingBakeSize, addr 0x9dc9314, size 0x8, virtual false, abstract: false, final false
inline void set_maxTilingBakeSize(int32_t  value) ;

/// @brief Method set_meshBakerTexturePackerForcePowerOfTwo, addr 0x9dc9354, size 0x8, virtual false, abstract: false, final false
inline void set_meshBakerTexturePackerForcePowerOfTwo(bool  value) ;

/// @brief Method set_packingAlgorithm, addr 0x9dc9344, size 0x8, virtual false, abstract: false, final false
inline void set_packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value) ;

/// @brief Method set_resizePowerOfTwoTextures, addr 0x9dc92e4, size 0x8, virtual false, abstract: false, final false
inline void set_resizePowerOfTwoTextures(bool  value) ;

/// @brief Method set_resultType, addr 0x9dc9334, size 0x8, virtual false, abstract: false, final false
inline void set_resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value) ;

/// @brief Method set_saveAtlasesAsAssets, addr 0x9dc9324, size 0x8, virtual false, abstract: false, final false
inline void set_saveAtlasesAsAssets(bool  value) ;

/// @brief Method set_textureBakeResults, addr 0x9dc9274, size 0x8, virtual false, abstract: false, final false
inline void set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value) ;

/// @brief Method set_useMaxAtlasHeightOverride, addr 0x9dc92d4, size 0x8, virtual true, abstract: false, final false
inline void set_useMaxAtlasHeightOverride(bool  value) ;

/// @brief Method set_useMaxAtlasWidthOverride, addr 0x9dc92c4, size 0x8, virtual true, abstract: false, final false
inline void set_useMaxAtlasWidthOverride(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombiner(MB3_TextureCombiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombiner(MB3_TextureCombiner const& ) = delete;

/// @brief Field TEMP_SOLID_COLOR_TEXTURE_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  TEMP_SOLID_COLOR_TEXTURE_SIZE{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22777};

/// @brief Field LOG_LEVEL, offset: 0x10, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// [SerializeField]
/// @brief Field _textureBakeResults, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  ____textureBakeResults;

/// [SerializeField]
/// @brief Field _atlasPadding, offset: 0x20, size: 0x4, def value: None
 int32_t  ____atlasPadding;

/// [SerializeField]
/// @brief Field _maxAtlasSize, offset: 0x24, size: 0x4, def value: None
 int32_t  ____maxAtlasSize;

/// [SerializeField]
/// @brief Field _maxAtlasWidthOverride, offset: 0x28, size: 0x4, def value: None
 int32_t  ____maxAtlasWidthOverride;

/// [SerializeField]
/// @brief Field _maxAtlasHeightOverride, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____maxAtlasHeightOverride;

/// [SerializeField]
/// @brief Field _useMaxAtlasWidthOverride, offset: 0x30, size: 0x1, def value: None
 bool  ____useMaxAtlasWidthOverride;

/// [SerializeField]
/// @brief Field _useMaxAtlasHeightOverride, offset: 0x31, size: 0x1, def value: None
 bool  ____useMaxAtlasHeightOverride;

/// [SerializeField]
/// @brief Field _resizePowerOfTwoTextures, offset: 0x32, size: 0x1, def value: None
 bool  ____resizePowerOfTwoTextures;

/// [SerializeField]
/// @brief Field _fixOutOfBoundsUVs, offset: 0x33, size: 0x1, def value: None
 bool  ____fixOutOfBoundsUVs;

/// [SerializeField]
/// @brief Field _layerTexturePackerFastMesh, offset: 0x34, size: 0x4, def value: None
 int32_t  ____layerTexturePackerFastMesh;

/// [SerializeField]
/// @brief Field _maxTilingBakeSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ____maxTilingBakeSize;

/// [SerializeField]
/// @brief Field _saveAtlasesAsAssets, offset: 0x3c, size: 0x1, def value: None
 bool  ____saveAtlasesAsAssets;

/// [SerializeField]
/// @brief Field _resultType, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::MB2_TextureBakeResults_ResultType  ____resultType;

/// [SerializeField]
/// @brief Field _packingAlgorithm, offset: 0x44, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  ____packingAlgorithm;

/// [SerializeField]
/// @brief Field _meshBakerTexturePackerForcePowerOfTwo, offset: 0x48, size: 0x1, def value: None
 bool  ____meshBakerTexturePackerForcePowerOfTwo;

/// [SerializeField]
/// @brief Field _customShaderPropNames, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  ____customShaderPropNames;

/// [SerializeField]
/// @brief Field _normalizeTexelDensity, offset: 0x58, size: 0x1, def value: None
 bool  ____normalizeTexelDensity;

/// [SerializeField]
/// @brief Field _considerNonTextureProperties, offset: 0x59, size: 0x1, def value: None
 bool  ____considerNonTextureProperties;

/// @brief Field _doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize, offset: 0x5a, size: 0x1, def value: None
 bool  ____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize;

/// @brief Field _temporaryTextures, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*  ____temporaryTextures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ___LOG_LEVEL) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____textureBakeResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____atlasPadding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____maxAtlasSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____maxAtlasWidthOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____maxAtlasHeightOverride) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____useMaxAtlasWidthOverride) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____useMaxAtlasHeightOverride) == 0x31, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____resizePowerOfTwoTextures) == 0x32, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____fixOutOfBoundsUVs) == 0x33, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____layerTexturePackerFastMesh) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____maxTilingBakeSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____saveAtlasesAsAssets) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____resultType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____packingAlgorithm) == 0x44, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____meshBakerTexturePackerForcePowerOfTwo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____customShaderPropNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____normalizeTexelDensity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____considerNonTextureProperties) == 0x59, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner, ____temporaryTextures) == 0x60, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner) == 0x68, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombiner/<__RunTexturePackerOnly>d__88
class CORDL_TYPE MB3_TextureCombiner____RunTexturePackerOnly_d__88 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  __4__this;

/// @brief Field <pipeline>5__2, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__pipeline_5__2, put=__cordl_internal_set__pipeline_5__2)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  _pipeline_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data;

/// @brief Field packingResult, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_packingResult, put=__cordl_internal_set_packingResult)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  packingResult;

/// @brief Field result, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result;

/// @brief Field resultAtlasesAndRects, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultAtlasesAndRects, put=__cordl_internal_set_resultAtlasesAndRects)) ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects;

/// @brief Field splitAtlasWhenPackingIfTooBig, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_splitAtlasWhenPackingIfTooBig, put=__cordl_internal_set_splitAtlasWhenPackingIfTooBig)) bool  splitAtlasWhenPackingIfTooBig;

/// @brief Field textureEditorMethods, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureEditorMethods, put=__cordl_internal_set_textureEditorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dcd920, size 0x4f8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dcde18, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dcde20, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dcde58, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dcd91c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get___4__this() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get___4__this() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* const& __cordl_internal_get__pipeline_5__2() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*& __cordl_internal_get__pipeline_5__2() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& __cordl_internal_get_data() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* const& __cordl_internal_get_packingResult() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*& __cordl_internal_get_packingResult() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& __cordl_internal_get_result() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& __cordl_internal_get_result() ;

constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& __cordl_internal_get_resultAtlasesAndRects() const;

constexpr ::GlobalNamespace::MB_AtlasesAndRects*& __cordl_internal_get_resultAtlasesAndRects() ;

constexpr bool const& __cordl_internal_get_splitAtlasWhenPackingIfTooBig() const;

constexpr bool& __cordl_internal_get_splitAtlasWhenPackingIfTooBig() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_textureEditorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_textureEditorMethods() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set__pipeline_5__2(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  value) ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value) ;

constexpr void __cordl_internal_set_packingResult(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  value) ;

constexpr void __cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value) ;

constexpr void __cordl_internal_set_splitAtlasWhenPackingIfTooBig(bool  value) ;

constexpr void __cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dcd8f4, size 0x28, virtual false, abstract: false, final false
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
constexpr MB3_TextureCombiner____RunTexturePackerOnly_d__88() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner____RunTexturePackerOnly_d__88", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombiner____RunTexturePackerOnly_d__88(MB3_TextureCombiner____RunTexturePackerOnly_d__88 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner____RunTexturePackerOnly_d__88", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombiner____RunTexturePackerOnly_d__88(MB3_TextureCombiner____RunTexturePackerOnly_d__88 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22776};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  ___data;

/// @brief Field result, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  ___result;

/// @brief Field textureEditorMethods, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___textureEditorMethods;

/// @brief Field splitAtlasWhenPackingIfTooBig, offset: 0x40, size: 0x1, def value: None
 bool  ___splitAtlasWhenPackingIfTooBig;

/// @brief Field resultAtlasesAndRects, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::MB_AtlasesAndRects*  ___resultAtlasesAndRects;

/// @brief Field packingResult, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  ___packingResult;

/// @brief Field <pipeline>5__2, offset: 0x58, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  ____pipeline_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, ___result) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, ___textureEditorMethods) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, ___splitAtlasWhenPackingIfTooBig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, ___resultAtlasesAndRects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, ___packingResult) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88, ____pipeline_5__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88) == 0x60, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombiner/<__CombineTexturesIntoAtlases>d__87
class CORDL_TYPE MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  __4__this;

/// @brief Field <pipeline>5__2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__pipeline_5__2, put=__cordl_internal_set__pipeline_5__2)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  _pipeline_5__2;

/// @brief Field <report>5__3, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__report_5__3, put=__cordl_internal_set__report_5__3)) ::System::Text::StringBuilder*  _report_5__3;

/// @brief Field <texturePaker>5__4, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__texturePaker_5__4, put=__cordl_internal_set__texturePaker_5__4)) ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  _texturePaker_5__4;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data;

/// @brief Field progressInfo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field result, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result;

/// @brief Field resultAtlasesAndRects, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultAtlasesAndRects, put=__cordl_internal_set_resultAtlasesAndRects)) ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects;

/// @brief Field textureEditorMethods, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureEditorMethods, put=__cordl_internal_set_textureEditorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dcd1f0, size 0x6bc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dcd8ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dcd8b4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dcd8ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dcd1ec, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get___4__this() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get___4__this() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* const& __cordl_internal_get__pipeline_5__2() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*& __cordl_internal_get__pipeline_5__2() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__report_5__3() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__report_5__3() ;

constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* const& __cordl_internal_get__texturePaker_5__4() const;

constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*& __cordl_internal_get__texturePaker_5__4() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& __cordl_internal_get_data() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& __cordl_internal_get_result() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& __cordl_internal_get_result() ;

constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& __cordl_internal_get_resultAtlasesAndRects() const;

constexpr ::GlobalNamespace::MB_AtlasesAndRects*& __cordl_internal_get_resultAtlasesAndRects() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_textureEditorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_textureEditorMethods() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set__pipeline_5__2(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  value) ;

constexpr void __cordl_internal_set__report_5__3(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__texturePaker_5__4(::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  value) ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value) ;

constexpr void __cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dcd1c4, size 0x28, virtual false, abstract: false, final false
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
constexpr MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87(MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87(MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22775};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  ___data;

/// @brief Field progressInfo, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field result, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  ___result;

/// @brief Field textureEditorMethods, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___textureEditorMethods;

/// @brief Field resultAtlasesAndRects, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::MB_AtlasesAndRects*  ___resultAtlasesAndRects;

/// @brief Field <pipeline>5__2, offset: 0x50, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  ____pipeline_5__2;

/// @brief Field <report>5__3, offset: 0x58, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____report_5__3;

/// @brief Field <texturePaker>5__4, offset: 0x60, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  ____texturePaker_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, ___progressInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, ___result) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, ___textureEditorMethods) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, ___resultAtlasesAndRects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, ____pipeline_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, ____report_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87, ____texturePaker_5__4) == 0x60, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87) == 0x68, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombiner/<_CombineTexturesIntoAtlases>d__85
class CORDL_TYPE MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  __4__this;

/// @brief Field <sw>5__2, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__sw_5__2, put=__cordl_internal_set__sw_5__2)) ::System::Diagnostics::Stopwatch*  _sw_5__2;

/// @brief Field allowedMaterialsFilter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_allowedMaterialsFilter, put=__cordl_internal_set_allowedMaterialsFilter)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter;

/// @brief Field atlasPackingResult, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_atlasPackingResult, put=__cordl_internal_set_atlasPackingResult)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  atlasPackingResult;

/// @brief Field objsToMesh, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_objsToMesh, put=__cordl_internal_set_objsToMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh;

/// @brief Field onlyPackRects, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyPackRects, put=__cordl_internal_set_onlyPackRects)) bool  onlyPackRects;

/// @brief Field progressInfo, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field result, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result;

/// @brief Field resultAtlasesAndRects, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultAtlasesAndRects, put=__cordl_internal_set_resultAtlasesAndRects)) ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects;

/// @brief Field resultMaterial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterial, put=__cordl_internal_set_resultMaterial)) ::UnityW<::UnityEngine::Material>  resultMaterial;

/// @brief Field splitAtlasWhenPackingIfTooBig, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_splitAtlasWhenPackingIfTooBig, put=__cordl_internal_set_splitAtlasWhenPackingIfTooBig)) bool  splitAtlasWhenPackingIfTooBig;

/// @brief Field texPropsToIgnore, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_texPropsToIgnore, put=__cordl_internal_set_texPropsToIgnore)) ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore;

/// @brief Field textureEditorMethods, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureEditorMethods, put=__cordl_internal_set_textureEditorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dcc68c, size 0x878, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dcd17c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dcd184, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dcd1bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dcc660, size 0x2c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get___4__this() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get___4__this() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__sw_5__2() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__sw_5__2() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_allowedMaterialsFilter() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_allowedMaterialsFilter() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* const& __cordl_internal_get_atlasPackingResult() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*& __cordl_internal_get_atlasPackingResult() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objsToMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objsToMesh() ;

constexpr bool const& __cordl_internal_get_onlyPackRects() const;

constexpr bool& __cordl_internal_get_onlyPackRects() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& __cordl_internal_get_result() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& __cordl_internal_get_result() ;

constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& __cordl_internal_get_resultAtlasesAndRects() const;

constexpr ::GlobalNamespace::MB_AtlasesAndRects*& __cordl_internal_get_resultAtlasesAndRects() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_resultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_resultMaterial() ;

constexpr bool const& __cordl_internal_get_splitAtlasWhenPackingIfTooBig() const;

constexpr bool& __cordl_internal_get_splitAtlasWhenPackingIfTooBig() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_texPropsToIgnore() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_texPropsToIgnore() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_textureEditorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_textureEditorMethods() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set__sw_5__2(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_allowedMaterialsFilter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_atlasPackingResult(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  value) ;

constexpr void __cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_onlyPackRects(bool  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value) ;

constexpr void __cordl_internal_set_resultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_splitAtlasWhenPackingIfTooBig(bool  value) ;

constexpr void __cordl_internal_set_texPropsToIgnore(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

/// @brief Method <>m__Finally1, addr 0x9dccf38, size 0x244, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dcc638, size 0x28, virtual false, abstract: false, final false
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
constexpr MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85(MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85(MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22774};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  _____4__this;

/// @brief Field textureEditorMethods, offset: 0x28, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___textureEditorMethods;

/// @brief Field splitAtlasWhenPackingIfTooBig, offset: 0x30, size: 0x1, def value: None
 bool  ___splitAtlasWhenPackingIfTooBig;

/// @brief Field onlyPackRects, offset: 0x31, size: 0x1, def value: None
 bool  ___onlyPackRects;

/// @brief Field result, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  ___result;

/// @brief Field objsToMesh, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objsToMesh;

/// @brief Field progressInfo, offset: 0x48, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field resultMaterial, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___resultMaterial;

/// @brief Field allowedMaterialsFilter, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___allowedMaterialsFilter;

/// @brief Field texPropsToIgnore, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___texPropsToIgnore;

/// @brief Field resultAtlasesAndRects, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::MB_AtlasesAndRects*  ___resultAtlasesAndRects;

/// @brief Field atlasPackingResult, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  ___atlasPackingResult;

/// @brief Field <sw>5__2, offset: 0x78, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____sw_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___textureEditorMethods) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___splitAtlasWhenPackingIfTooBig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___onlyPackRects) == 0x31, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___result) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___objsToMesh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___progressInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___resultMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___allowedMaterialsFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___texPropsToIgnore) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___resultAtlasesAndRects) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ___atlasPackingResult) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85, ____sw_5__2) == 0x78, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85) == 0x80, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombiner/<CombineTexturesIntoAtlasesCoroutine>d__84
class CORDL_TYPE MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  __4__this;

/// @brief Field allowedMaterialsFilter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_allowedMaterialsFilter, put=__cordl_internal_set_allowedMaterialsFilter)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter;

/// @brief Field coroutineResult, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutineResult, put=__cordl_internal_set_coroutineResult)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  coroutineResult;

/// @brief Field maxTimePerFrame, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTimePerFrame, put=__cordl_internal_set_maxTimePerFrame)) float_t  maxTimePerFrame;

/// @brief Field objsToMesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_objsToMesh, put=__cordl_internal_set_objsToMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh;

/// @brief Field onlyPackRects, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyPackRects, put=__cordl_internal_set_onlyPackRects)) bool  onlyPackRects;

/// @brief Field packingResults, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_packingResults, put=__cordl_internal_set_packingResults)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  packingResults;

/// @brief Field progressInfo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field resultAtlasesAndRects, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultAtlasesAndRects, put=__cordl_internal_set_resultAtlasesAndRects)) ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects;

/// @brief Field resultMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterial, put=__cordl_internal_set_resultMaterial)) ::UnityW<::UnityEngine::Material>  resultMaterial;

/// @brief Field splitAtlasWhenPackingIfTooBig, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_splitAtlasWhenPackingIfTooBig, put=__cordl_internal_set_splitAtlasWhenPackingIfTooBig)) bool  splitAtlasWhenPackingIfTooBig;

/// @brief Field texPropsToIgnore, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_texPropsToIgnore, put=__cordl_internal_set_texPropsToIgnore)) ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore;

/// @brief Field textureEditorMethods, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureEditorMethods, put=__cordl_internal_set_textureEditorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dcc4c4, size 0x12c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dcc5f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dcc5f8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dcc630, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dcc4c0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get___4__this() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_allowedMaterialsFilter() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_allowedMaterialsFilter() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& __cordl_internal_get_coroutineResult() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& __cordl_internal_get_coroutineResult() ;

constexpr float_t const& __cordl_internal_get_maxTimePerFrame() const;

constexpr float_t& __cordl_internal_get_maxTimePerFrame() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objsToMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objsToMesh() ;

constexpr bool const& __cordl_internal_get_onlyPackRects() const;

constexpr bool& __cordl_internal_get_onlyPackRects() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* const& __cordl_internal_get_packingResults() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*& __cordl_internal_get_packingResults() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& __cordl_internal_get_resultAtlasesAndRects() const;

constexpr ::GlobalNamespace::MB_AtlasesAndRects*& __cordl_internal_get_resultAtlasesAndRects() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_resultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_resultMaterial() ;

constexpr bool const& __cordl_internal_get_splitAtlasWhenPackingIfTooBig() const;

constexpr bool& __cordl_internal_get_splitAtlasWhenPackingIfTooBig() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_texPropsToIgnore() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_texPropsToIgnore() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_textureEditorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_textureEditorMethods() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set_allowedMaterialsFilter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_maxTimePerFrame(float_t  value) ;

constexpr void __cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_onlyPackRects(bool  value) ;

constexpr void __cordl_internal_set_packingResults(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value) ;

constexpr void __cordl_internal_set_resultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_splitAtlasWhenPackingIfTooBig(bool  value) ;

constexpr void __cordl_internal_set_texPropsToIgnore(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dcc498, size 0x28, virtual false, abstract: false, final false
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
constexpr MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84(MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84(MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22773};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field coroutineResult, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  ___coroutineResult;

/// @brief Field maxTimePerFrame, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxTimePerFrame;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  _____4__this;

/// @brief Field progressInfo, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field resultAtlasesAndRects, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::MB_AtlasesAndRects*  ___resultAtlasesAndRects;

/// @brief Field resultMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___resultMaterial;

/// @brief Field objsToMesh, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objsToMesh;

/// @brief Field allowedMaterialsFilter, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___allowedMaterialsFilter;

/// @brief Field texPropsToIgnore, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___texPropsToIgnore;

/// @brief Field textureEditorMethods, offset: 0x68, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___textureEditorMethods;

/// @brief Field packingResults, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  ___packingResults;

/// @brief Field onlyPackRects, offset: 0x78, size: 0x1, def value: None
 bool  ___onlyPackRects;

/// @brief Field splitAtlasWhenPackingIfTooBig, offset: 0x79, size: 0x1, def value: None
 bool  ___splitAtlasWhenPackingIfTooBig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___coroutineResult) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___maxTimePerFrame) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___progressInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___resultAtlasesAndRects) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___resultMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___objsToMesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___allowedMaterialsFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___texPropsToIgnore) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___textureEditorMethods) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___packingResults) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___onlyPackRects) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84, ___splitAtlasWhenPackingIfTooBig) == 0x79, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84) == 0x80, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult
class CORDL_TYPE MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult : public ::System::Object {
public:
// Declarations
/// @brief Field isFinished, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFinished, put=__cordl_internal_set_isFinished)) bool  isFinished;

/// @brief Field success, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_success, put=__cordl_internal_set_success)) bool  success;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* New_ctor() ;

constexpr bool const& __cordl_internal_get_isFinished() const;

constexpr bool& __cordl_internal_get_isFinished() ;

constexpr bool const& __cordl_internal_get_success() const;

constexpr bool& __cordl_internal_get_success() ;

constexpr void __cordl_internal_set_isFinished(bool  value) ;

constexpr void __cordl_internal_set_success(bool  value) ;

/// @brief Method .ctor, addr 0x9dcc488, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult(MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult(MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22772};

/// @brief Field success, offset: 0x10, size: 0x1, def value: None
 bool  ___success;

/// @brief Field isFinished, offset: 0x11, size: 0x1, def value: None
 bool  ___isFinished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult, ___success) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult, ___isFinished) == 0x11, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombiner/TemporaryTexture
class CORDL_TYPE MB3_TextureCombiner_TemporaryTexture : public ::System::Object {
public:
// Declarations
/// @brief Field property, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_property, put=__cordl_internal_set_property)) ::StringW  property;

/// @brief Field texture, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture* New_ctor(::StringW  prop, ::UnityEngine::Texture2D*  tex) ;

constexpr ::StringW const& __cordl_internal_get_property() const;

constexpr ::StringW& __cordl_internal_get_property() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr void __cordl_internal_set_property(::StringW  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x9dcc444, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  prop, ::UnityEngine::Texture2D*  tex) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombiner_TemporaryTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner_TemporaryTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombiner_TemporaryTexture(MB3_TextureCombiner_TemporaryTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner_TemporaryTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombiner_TemporaryTexture(MB3_TextureCombiner_TemporaryTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22771};

/// @brief Field property, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___property;

/// @brief Field texture, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture, ___property) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture, ___texture) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult
class CORDL_TYPE MB3_TextureCombiner_CreateAtlasesCoroutineResult : public ::System::Object {
public:
// Declarations
/// @brief Field isFinished, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFinished, put=__cordl_internal_set_isFinished)) bool  isFinished;

/// @brief Field success, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_success, put=__cordl_internal_set_success)) bool  success;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* New_ctor() ;

constexpr bool const& __cordl_internal_get_isFinished() const;

constexpr bool& __cordl_internal_get_isFinished() ;

constexpr bool const& __cordl_internal_get_success() const;

constexpr bool& __cordl_internal_get_success() ;

constexpr void __cordl_internal_set_isFinished(bool  value) ;

constexpr void __cordl_internal_set_success(bool  value) ;

/// @brief Method .ctor, addr 0x9dcc434, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombiner_CreateAtlasesCoroutineResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner_CreateAtlasesCoroutineResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombiner_CreateAtlasesCoroutineResult(MB3_TextureCombiner_CreateAtlasesCoroutineResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombiner_CreateAtlasesCoroutineResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombiner_CreateAtlasesCoroutineResult(MB3_TextureCombiner_CreateAtlasesCoroutineResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22770};

/// @brief Field success, offset: 0x10, size: 0x1, def value: None
 bool  ___success;

/// @brief Field isFinished, offset: 0x11, size: 0x1, def value: None
 bool  ___isFinished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult, ___success) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult, ___isFinished) == 0x11, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
