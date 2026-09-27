#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_TextureBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerRoot_def.hpp"
#include "GlobalNamespace/zzzz__MB_AtlasesAndRects_def.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterialTexArray_def.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterial_def.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayFormatSet_def.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayResultMaterial_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_TextureBaker)
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_PackingAlgorithmEnum;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CreateAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner;
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
class MB3_TextureBaker_OnCombinedTexturesCoroutineFail;
}
namespace GlobalNamespace {
class MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess;
}
namespace GlobalNamespace {
class MB3_TextureBaker__CreateAtlasesCoroutine_d__108;
}
namespace GlobalNamespace {
class MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109;
}
namespace GlobalNamespace {
class MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110;
}
namespace GlobalNamespace {
class MB3_TextureBaker___CreateAtlasesCoroutine_d__111;
}
namespace GlobalNamespace {
class MB3_TextureBaker___c;
}
namespace GlobalNamespace {
class MB_AtlasesAndRects;
}
namespace GlobalNamespace {
class MB_TextureArrayResultMaterial;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_TextureBaker;
}
namespace GlobalNamespace {
class MB3_TextureBaker_OnCombinedTexturesCoroutineFail;
}
namespace GlobalNamespace {
class MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess;
}
namespace GlobalNamespace {
class MB3_TextureBaker__CreateAtlasesCoroutine_d__108;
}
namespace GlobalNamespace {
class MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109;
}
namespace GlobalNamespace {
class MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110;
}
namespace GlobalNamespace {
class MB3_TextureBaker___CreateAtlasesCoroutine_d__111;
}
namespace GlobalNamespace {
class MB3_TextureBaker___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_TextureBaker*);
MARK_REF_T(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*);
MARK_REF_T(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*);
MARK_REF_T(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*);
MARK_REF_T(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*);
MARK_REF_T(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*);
MARK_REF_T(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*);
MARK_REF_T(::GlobalNamespace::MB3_TextureBaker___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureBaker*, "", "MB3_TextureBaker");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*, "", "MB3_TextureBaker/OnCombinedTexturesCoroutineFail");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*, "", "MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*, "", "MB3_TextureBaker/<CreateAtlasesCoroutine>d__108");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*, "", "MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>d__109");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*, "", "MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>d__110");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*, "", "MB3_TextureBaker/<_CreateAtlasesCoroutine>d__111");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureBaker___c*, "", "MB3_TextureBaker/<>c");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum, MB2_TextureBakeResults::ResultType, MB3_MeshBakerRoot, MB_AtlasesAndRects, MB_MultiMaterial, MB_MultiMaterialTexArray, MB_TextureArrayFormatSet
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_TextureBaker
class CORDL_TYPE MB3_TextureBaker : public ::GlobalNamespace::MB3_MeshBakerRoot {
public:
// Declarations
using OnCombinedTexturesCoroutineFail = ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail;

using OnCombinedTexturesCoroutineSuccess = ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess;

using _CreateAtlasesCoroutine_d__108 = ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108;

using __CreateAtlasesCoroutineAtlases_d__109 = ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109;

using __CreateAtlasesCoroutineTextureArray_d__110 = ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110;

using __CreateAtlasesCoroutine_d__111 = ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111;

using __c = ::GlobalNamespace::MB3_TextureBaker___c;

 __declspec(property(get=get_CoroutineResult)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  CoroutineResult;

/// @brief Field LOG_LEVEL, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field OnCombinedTexturesCoroutineAtlasesAndRects, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCombinedTexturesCoroutineAtlasesAndRects, put=__cordl_internal_set_OnCombinedTexturesCoroutineAtlasesAndRects)) ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  OnCombinedTexturesCoroutineAtlasesAndRects;

/// @brief Field _atlasPadding, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__atlasPadding, put=__cordl_internal_set__atlasPadding)) int32_t  _atlasPadding;

/// @brief Field _considerNonTextureProperties, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__considerNonTextureProperties, put=__cordl_internal_set__considerNonTextureProperties)) bool  _considerNonTextureProperties;

/// @brief Field _coroutineResult, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutineResult, put=__cordl_internal_set__coroutineResult)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  _coroutineResult;

/// @brief Field _customShaderPropNames_Depricated, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__customShaderPropNames_Depricated, put=__cordl_internal_set__customShaderPropNames_Depricated)) ::System::Collections::Generic::List_1<::StringW>*  _customShaderPropNames_Depricated;

/// @brief Field _customShaderProperties, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__customShaderProperties, put=__cordl_internal_set__customShaderProperties)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderProperties;

/// @brief Field _doMultiMaterial, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__doMultiMaterial, put=__cordl_internal_set__doMultiMaterial)) bool  _doMultiMaterial;

/// @brief Field _doMultiMaterialSplitAtlasesIfOBUVs, offset 0x86, size 0x1 
 __declspec(property(get=__cordl_internal_get__doMultiMaterialSplitAtlasesIfOBUVs, put=__cordl_internal_set__doMultiMaterialSplitAtlasesIfOBUVs)) bool  _doMultiMaterialSplitAtlasesIfOBUVs;

/// @brief Field _doMultiMaterialSplitAtlasesIfTooBig, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get__doMultiMaterialSplitAtlasesIfTooBig, put=__cordl_internal_set__doMultiMaterialSplitAtlasesIfTooBig)) bool  _doMultiMaterialSplitAtlasesIfTooBig;

/// @brief Field _doSuggestTreatment, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get__doSuggestTreatment, put=__cordl_internal_set__doSuggestTreatment)) bool  _doSuggestTreatment;

/// @brief Field _fixOutOfBoundsUVs, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__fixOutOfBoundsUVs, put=__cordl_internal_set__fixOutOfBoundsUVs)) bool  _fixOutOfBoundsUVs;

/// @brief Field _layerTexturePackerFastMesh, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerTexturePackerFastMesh, put=__cordl_internal_set__layerTexturePackerFastMesh)) int32_t  _layerTexturePackerFastMesh;

/// @brief Field _maxAtlasHeightOverride, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAtlasHeightOverride, put=__cordl_internal_set__maxAtlasHeightOverride)) int32_t  _maxAtlasHeightOverride;

/// @brief Field _maxAtlasSize, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAtlasSize, put=__cordl_internal_set__maxAtlasSize)) int32_t  _maxAtlasSize;

/// @brief Field _maxAtlasWidthOverride, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAtlasWidthOverride, put=__cordl_internal_set__maxAtlasWidthOverride)) int32_t  _maxAtlasWidthOverride;

/// @brief Field _maxTilingBakeSize, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxTilingBakeSize, put=__cordl_internal_set__maxTilingBakeSize)) int32_t  _maxTilingBakeSize;

/// @brief Field _meshBakerTexturePackerForcePowerOfTwo, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo, put=__cordl_internal_set__meshBakerTexturePackerForcePowerOfTwo)) bool  _meshBakerTexturePackerForcePowerOfTwo;

/// @brief Field _packingAlgorithm, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__packingAlgorithm, put=__cordl_internal_set__packingAlgorithm)) ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  _packingAlgorithm;

/// @brief Field _resizePowerOfTwoTextures, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__resizePowerOfTwoTextures, put=__cordl_internal_set__resizePowerOfTwoTextures)) bool  _resizePowerOfTwoTextures;

/// @brief Field _resultMaterial, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__resultMaterial, put=__cordl_internal_set__resultMaterial)) ::UnityW<::UnityEngine::Material>  _resultMaterial;

/// @brief Field _resultType, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__resultType, put=__cordl_internal_set__resultType)) ::GlobalNamespace::MB2_TextureBakeResults_ResultType  _resultType;

/// @brief Field _textureBakeResults, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__textureBakeResults, put=__cordl_internal_set__textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  _textureBakeResults;

/// @brief Field _texturePropNamesToIgnore, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__texturePropNamesToIgnore, put=__cordl_internal_set__texturePropNamesToIgnore)) ::System::Collections::Generic::List_1<::StringW>*  _texturePropNamesToIgnore;

/// @brief Field _useMaxAtlasHeightOverride, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMaxAtlasHeightOverride, put=__cordl_internal_set__useMaxAtlasHeightOverride)) bool  _useMaxAtlasHeightOverride;

/// @brief Field _useMaxAtlasWidthOverride, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMaxAtlasWidthOverride, put=__cordl_internal_set__useMaxAtlasWidthOverride)) bool  _useMaxAtlasWidthOverride;

 __declspec(property(get=get_atlasPadding, put=set_atlasPadding)) int32_t  atlasPadding;

 __declspec(property(get=get_considerNonTextureProperties, put=set_considerNonTextureProperties)) bool  considerNonTextureProperties;

 __declspec(property(get=get_customShaderPropNames, put=set_customShaderPropNames)) ::System::Collections::Generic::List_1<::StringW>*  customShaderPropNames;

 __declspec(property(get=get_customShaderProperties, put=set_customShaderProperties)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  customShaderProperties;

 __declspec(property(get=get_doMultiMaterial, put=set_doMultiMaterial)) bool  doMultiMaterial;

 __declspec(property(get=get_doMultiMaterialSplitAtlasesIfOBUVs, put=set_doMultiMaterialSplitAtlasesIfOBUVs)) bool  doMultiMaterialSplitAtlasesIfOBUVs;

 __declspec(property(get=get_doMultiMaterialSplitAtlasesIfTooBig, put=set_doMultiMaterialSplitAtlasesIfTooBig)) bool  doMultiMaterialSplitAtlasesIfTooBig;

 __declspec(property(get=get_doSuggestTreatment, put=set_doSuggestTreatment)) bool  doSuggestTreatment;

 __declspec(property(get=get_fixOutOfBoundsUVs, put=set_fixOutOfBoundsUVs)) bool  fixOutOfBoundsUVs;

 __declspec(property(get=get_layerForTexturePackerFastMesh, put=set_layerForTexturePackerFastMesh)) int32_t  layerForTexturePackerFastMesh;

 __declspec(property(get=get_maxAtlasHeightOverride, put=set_maxAtlasHeightOverride)) int32_t  maxAtlasHeightOverride;

 __declspec(property(get=get_maxAtlasSize, put=set_maxAtlasSize)) int32_t  maxAtlasSize;

 __declspec(property(get=get_maxAtlasWidthOverride, put=set_maxAtlasWidthOverride)) int32_t  maxAtlasWidthOverride;

 __declspec(property(get=get_maxTilingBakeSize, put=set_maxTilingBakeSize)) int32_t  maxTilingBakeSize;

 __declspec(property(get=get_meshBakerTexturePackerForcePowerOfTwo, put=set_meshBakerTexturePackerForcePowerOfTwo)) bool  meshBakerTexturePackerForcePowerOfTwo;

/// @brief Field objsToMesh, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_objsToMesh, put=__cordl_internal_set_objsToMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh;

/// @brief Field onBuiltAtlasesFail, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBuiltAtlasesFail, put=__cordl_internal_set_onBuiltAtlasesFail)) ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*  onBuiltAtlasesFail;

/// @brief Field onBuiltAtlasesSuccess, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBuiltAtlasesSuccess, put=__cordl_internal_set_onBuiltAtlasesSuccess)) ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*  onBuiltAtlasesSuccess;

 __declspec(property(get=get_packingAlgorithm, put=set_packingAlgorithm)) ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  packingAlgorithm;

 __declspec(property(get=get_resizePowerOfTwoTextures, put=set_resizePowerOfTwoTextures)) bool  resizePowerOfTwoTextures;

 __declspec(property(get=get_resultMaterial, put=set_resultMaterial)) ::UnityW<::UnityEngine::Material>  resultMaterial;

/// @brief Field resultMaterials, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterials, put=__cordl_internal_set_resultMaterials)) ::ArrayW<::GlobalNamespace::MB_MultiMaterial*>  resultMaterials;

/// @brief Field resultMaterialsTexArray, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterialsTexArray, put=__cordl_internal_set_resultMaterialsTexArray)) ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  resultMaterialsTexArray;

 __declspec(property(get=get_resultType, put=set_resultType)) ::GlobalNamespace::MB2_TextureBakeResults_ResultType  resultType;

/// @brief Field textureArrayOutputFormats, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureArrayOutputFormats, put=__cordl_internal_set_textureArrayOutputFormats)) ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  textureArrayOutputFormats;

 __declspec(property(get=get_textureBakeResults, put=set_textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  textureBakeResults;

 __declspec(property(get=get_texturePropNamesToIgnore, put=set_texturePropNamesToIgnore)) ::System::Collections::Generic::List_1<::StringW>*  texturePropNamesToIgnore;

 __declspec(property(get=get_useMaxAtlasHeightOverride, put=set_useMaxAtlasHeightOverride)) bool  useMaxAtlasHeightOverride;

 __declspec(property(get=get_useMaxAtlasWidthOverride, put=set_useMaxAtlasWidthOverride)) bool  useMaxAtlasWidthOverride;

/// @brief Method ConfigureNewMaterialToMatchOld, addr 0x9d7b71c, size 0x2d0, virtual false, abstract: false, final false
static inline void ConfigureNewMaterialToMatchOld(::UnityEngine::Material*  newMat, ::UnityEngine::Material*  original) ;

/// @brief Method CreateAndConfigureTextureCombiner, addr 0x9d7b61c, size 0x100, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner* CreateAndConfigureTextureCombiner() ;

/// @brief Method CreateAtlases, addr 0x9d7aa8c, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> CreateAtlases() ;

/// @brief Method CreateAtlases, addr 0x9d7aa9c, size 0x314, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// [IteratorStateMachine(typeof(MB3_TextureBaker::<CreateAtlasesCoroutine>d__108))]
/// @brief Method CreateAtlasesCoroutine, addr 0x9d7adb0, size 0xd4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CreateAtlasesCoroutine(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame) ;

/// @brief Method GetObjectsToCombine, addr 0x9d7a828, size 0x84, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetObjectsToCombine() ;

static inline ::GlobalNamespace::MB3_TextureBaker* New_ctor() ;

/// @brief Method PrintSet, addr 0x9d7b9ec, size 0x1b4, virtual false, abstract: false, final false
inline ::StringW PrintSet(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*  s) ;

/// [ContextMenu("Purge Objects to Combine of null references")]
/// @brief Method PurgeNullsFromObjectsToCombine, addr 0x9d7a8ac, size 0x1e0, virtual true, abstract: false, final false
inline void PurgeNullsFromObjectsToCombine() ;

/// [IteratorStateMachine(typeof(MB3_TextureBaker::<_CreateAtlasesCoroutine>d__111))]
/// @brief Method _CreateAtlasesCoroutine, addr 0x9d7b0c8, size 0xd4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _CreateAtlasesCoroutine(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame) ;

/// [IteratorStateMachine(typeof(MB3_TextureBaker::<_CreateAtlasesCoroutineAtlases>d__109))]
/// @brief Method _CreateAtlasesCoroutineAtlases, addr 0x9d7aeac, size 0xdc, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _CreateAtlasesCoroutineAtlases(::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame) ;

/// [IteratorStateMachine(typeof(MB3_TextureBaker::<_CreateAtlasesCoroutineTextureArray>d__110))]
/// @brief Method _CreateAtlasesCoroutineTextureArray, addr 0x9d7afb0, size 0xf0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _CreateAtlasesCoroutineTextureArray(::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame) ;

/// @brief Method _ValidateResultMaterials, addr 0x9d7bba0, size 0x87c, virtual false, abstract: false, final false
inline bool _ValidateResultMaterials() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> const& __cordl_internal_get_OnCombinedTexturesCoroutineAtlasesAndRects() const;

constexpr ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>& __cordl_internal_get_OnCombinedTexturesCoroutineAtlasesAndRects() ;

constexpr int32_t const& __cordl_internal_get__atlasPadding() const;

constexpr int32_t& __cordl_internal_get__atlasPadding() ;

constexpr bool const& __cordl_internal_get__considerNonTextureProperties() const;

constexpr bool& __cordl_internal_get__considerNonTextureProperties() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& __cordl_internal_get__coroutineResult() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& __cordl_internal_get__coroutineResult() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__customShaderPropNames_Depricated() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__customShaderPropNames_Depricated() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& __cordl_internal_get__customShaderProperties() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& __cordl_internal_get__customShaderProperties() ;

constexpr bool const& __cordl_internal_get__doMultiMaterial() const;

constexpr bool& __cordl_internal_get__doMultiMaterial() ;

constexpr bool const& __cordl_internal_get__doMultiMaterialSplitAtlasesIfOBUVs() const;

constexpr bool& __cordl_internal_get__doMultiMaterialSplitAtlasesIfOBUVs() ;

constexpr bool const& __cordl_internal_get__doMultiMaterialSplitAtlasesIfTooBig() const;

constexpr bool& __cordl_internal_get__doMultiMaterialSplitAtlasesIfTooBig() ;

constexpr bool const& __cordl_internal_get__doSuggestTreatment() const;

constexpr bool& __cordl_internal_get__doSuggestTreatment() ;

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

constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const& __cordl_internal_get__packingAlgorithm() const;

constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum& __cordl_internal_get__packingAlgorithm() ;

constexpr bool const& __cordl_internal_get__resizePowerOfTwoTextures() const;

constexpr bool& __cordl_internal_get__resizePowerOfTwoTextures() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__resultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__resultMaterial() ;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType const& __cordl_internal_get__resultType() const;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType& __cordl_internal_get__resultType() ;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& __cordl_internal_get__textureBakeResults() const;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& __cordl_internal_get__textureBakeResults() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__texturePropNamesToIgnore() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__texturePropNamesToIgnore() ;

constexpr bool const& __cordl_internal_get__useMaxAtlasHeightOverride() const;

constexpr bool& __cordl_internal_get__useMaxAtlasHeightOverride() ;

constexpr bool const& __cordl_internal_get__useMaxAtlasWidthOverride() const;

constexpr bool& __cordl_internal_get__useMaxAtlasWidthOverride() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objsToMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objsToMesh() ;

constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail* const& __cordl_internal_get_onBuiltAtlasesFail() const;

constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*& __cordl_internal_get_onBuiltAtlasesFail() ;

constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess* const& __cordl_internal_get_onBuiltAtlasesSuccess() const;

constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*& __cordl_internal_get_onBuiltAtlasesSuccess() ;

constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterial*> const& __cordl_internal_get_resultMaterials() const;

constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterial*>& __cordl_internal_get_resultMaterials() ;

constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*> const& __cordl_internal_get_resultMaterialsTexArray() const;

constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>& __cordl_internal_get_resultMaterialsTexArray() ;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*> const& __cordl_internal_get_textureArrayOutputFormats() const;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>& __cordl_internal_get_textureArrayOutputFormats() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set_OnCombinedTexturesCoroutineAtlasesAndRects(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  value) ;

constexpr void __cordl_internal_set__atlasPadding(int32_t  value) ;

constexpr void __cordl_internal_set__considerNonTextureProperties(bool  value) ;

constexpr void __cordl_internal_set__coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set__customShaderPropNames_Depricated(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__customShaderProperties(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

constexpr void __cordl_internal_set__doMultiMaterial(bool  value) ;

constexpr void __cordl_internal_set__doMultiMaterialSplitAtlasesIfOBUVs(bool  value) ;

constexpr void __cordl_internal_set__doMultiMaterialSplitAtlasesIfTooBig(bool  value) ;

constexpr void __cordl_internal_set__doSuggestTreatment(bool  value) ;

constexpr void __cordl_internal_set__fixOutOfBoundsUVs(bool  value) ;

constexpr void __cordl_internal_set__layerTexturePackerFastMesh(int32_t  value) ;

constexpr void __cordl_internal_set__maxAtlasHeightOverride(int32_t  value) ;

constexpr void __cordl_internal_set__maxAtlasSize(int32_t  value) ;

constexpr void __cordl_internal_set__maxAtlasWidthOverride(int32_t  value) ;

constexpr void __cordl_internal_set__maxTilingBakeSize(int32_t  value) ;

constexpr void __cordl_internal_set__meshBakerTexturePackerForcePowerOfTwo(bool  value) ;

constexpr void __cordl_internal_set__packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value) ;

constexpr void __cordl_internal_set__resizePowerOfTwoTextures(bool  value) ;

constexpr void __cordl_internal_set__resultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value) ;

constexpr void __cordl_internal_set__textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value) ;

constexpr void __cordl_internal_set__texturePropNamesToIgnore(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__useMaxAtlasHeightOverride(bool  value) ;

constexpr void __cordl_internal_set__useMaxAtlasWidthOverride(bool  value) ;

constexpr void __cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_onBuiltAtlasesFail(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*  value) ;

constexpr void __cordl_internal_set_onBuiltAtlasesSuccess(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*  value) ;

constexpr void __cordl_internal_set_resultMaterials(::ArrayW<::GlobalNamespace::MB_MultiMaterial*>  value) ;

constexpr void __cordl_internal_set_resultMaterialsTexArray(::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  value) ;

constexpr void __cordl_internal_set_textureArrayOutputFormats(::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  value) ;

/// @brief Method .ctor, addr 0x9d7c41c, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CoroutineResult, addr 0x9d7a820, size 0x8, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* get_CoroutineResult() ;

/// @brief Method get_atlasPadding, addr 0x9d7a6c0, size 0x8, virtual true, abstract: false, final false
inline int32_t get_atlasPadding() ;

/// @brief Method get_considerNonTextureProperties, addr 0x9d7a800, size 0x8, virtual false, abstract: false, final false
inline bool get_considerNonTextureProperties() ;

/// @brief Method get_customShaderPropNames, addr 0x9d7a7a0, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_customShaderPropNames() ;

/// @brief Method get_customShaderProperties, addr 0x9d7a780, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* get_customShaderProperties() ;

/// @brief Method get_doMultiMaterial, addr 0x9d7a7c0, size 0x8, virtual true, abstract: false, final false
inline bool get_doMultiMaterial() ;

/// @brief Method get_doMultiMaterialSplitAtlasesIfOBUVs, addr 0x9d7a7e0, size 0x8, virtual true, abstract: false, final false
inline bool get_doMultiMaterialSplitAtlasesIfOBUVs() ;

/// @brief Method get_doMultiMaterialSplitAtlasesIfTooBig, addr 0x9d7a7d0, size 0x8, virtual true, abstract: false, final false
inline bool get_doMultiMaterialSplitAtlasesIfTooBig() ;

/// @brief Method get_doSuggestTreatment, addr 0x9d7a810, size 0x8, virtual false, abstract: false, final false
inline bool get_doSuggestTreatment() ;

/// @brief Method get_fixOutOfBoundsUVs, addr 0x9d7a730, size 0x8, virtual true, abstract: false, final false
inline bool get_fixOutOfBoundsUVs() ;

/// @brief Method get_layerForTexturePackerFastMesh, addr 0x9d7a760, size 0x8, virtual true, abstract: false, final false
inline int32_t get_layerForTexturePackerFastMesh() ;

/// @brief Method get_maxAtlasHeightOverride, addr 0x9d7a710, size 0x8, virtual true, abstract: false, final false
inline int32_t get_maxAtlasHeightOverride() ;

/// @brief Method get_maxAtlasSize, addr 0x9d7a6d0, size 0x8, virtual true, abstract: false, final false
inline int32_t get_maxAtlasSize() ;

/// @brief Method get_maxAtlasWidthOverride, addr 0x9d7a6f0, size 0x8, virtual true, abstract: false, final false
inline int32_t get_maxAtlasWidthOverride() ;

/// @brief Method get_maxTilingBakeSize, addr 0x9d7a740, size 0x8, virtual true, abstract: false, final false
inline int32_t get_maxTilingBakeSize() ;

/// @brief Method get_meshBakerTexturePackerForcePowerOfTwo, addr 0x9d7a770, size 0x8, virtual false, abstract: false, final false
inline bool get_meshBakerTexturePackerForcePowerOfTwo() ;

/// @brief Method get_packingAlgorithm, addr 0x9d7a750, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum get_packingAlgorithm() ;

/// @brief Method get_resizePowerOfTwoTextures, addr 0x9d7a720, size 0x8, virtual true, abstract: false, final false
inline bool get_resizePowerOfTwoTextures() ;

/// @brief Method get_resultMaterial, addr 0x9d7a7f0, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_resultMaterial() ;

/// @brief Method get_resultType, addr 0x9d7a7b0, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::MB2_TextureBakeResults_ResultType get_resultType() ;

/// @brief Method get_textureBakeResults, addr 0x9d7a6b0, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> get_textureBakeResults() ;

/// @brief Method get_texturePropNamesToIgnore, addr 0x9d7a790, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_texturePropNamesToIgnore() ;

/// @brief Method get_useMaxAtlasHeightOverride, addr 0x9d7a700, size 0x8, virtual true, abstract: false, final false
inline bool get_useMaxAtlasHeightOverride() ;

/// @brief Method get_useMaxAtlasWidthOverride, addr 0x9d7a6e0, size 0x8, virtual true, abstract: false, final false
inline bool get_useMaxAtlasWidthOverride() ;

/// @brief Method set_atlasPadding, addr 0x9d7a6c8, size 0x8, virtual true, abstract: false, final false
inline void set_atlasPadding(int32_t  value) ;

/// @brief Method set_considerNonTextureProperties, addr 0x9d7a808, size 0x8, virtual false, abstract: false, final false
inline void set_considerNonTextureProperties(bool  value) ;

/// @brief Method set_customShaderPropNames, addr 0x9d7a7a8, size 0x8, virtual true, abstract: false, final false
inline void set_customShaderPropNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method set_customShaderProperties, addr 0x9d7a788, size 0x8, virtual true, abstract: false, final false
inline void set_customShaderProperties(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

/// @brief Method set_doMultiMaterial, addr 0x9d7a7c8, size 0x8, virtual true, abstract: false, final false
inline void set_doMultiMaterial(bool  value) ;

/// @brief Method set_doMultiMaterialSplitAtlasesIfOBUVs, addr 0x9d7a7e8, size 0x8, virtual true, abstract: false, final false
inline void set_doMultiMaterialSplitAtlasesIfOBUVs(bool  value) ;

/// @brief Method set_doMultiMaterialSplitAtlasesIfTooBig, addr 0x9d7a7d8, size 0x8, virtual true, abstract: false, final false
inline void set_doMultiMaterialSplitAtlasesIfTooBig(bool  value) ;

/// @brief Method set_doSuggestTreatment, addr 0x9d7a818, size 0x8, virtual false, abstract: false, final false
inline void set_doSuggestTreatment(bool  value) ;

/// @brief Method set_fixOutOfBoundsUVs, addr 0x9d7a738, size 0x8, virtual true, abstract: false, final false
inline void set_fixOutOfBoundsUVs(bool  value) ;

/// @brief Method set_layerForTexturePackerFastMesh, addr 0x9d7a768, size 0x8, virtual true, abstract: false, final false
inline void set_layerForTexturePackerFastMesh(int32_t  value) ;

/// @brief Method set_maxAtlasHeightOverride, addr 0x9d7a718, size 0x8, virtual true, abstract: false, final false
inline void set_maxAtlasHeightOverride(int32_t  value) ;

/// @brief Method set_maxAtlasSize, addr 0x9d7a6d8, size 0x8, virtual true, abstract: false, final false
inline void set_maxAtlasSize(int32_t  value) ;

/// @brief Method set_maxAtlasWidthOverride, addr 0x9d7a6f8, size 0x8, virtual true, abstract: false, final false
inline void set_maxAtlasWidthOverride(int32_t  value) ;

/// @brief Method set_maxTilingBakeSize, addr 0x9d7a748, size 0x8, virtual true, abstract: false, final false
inline void set_maxTilingBakeSize(int32_t  value) ;

/// @brief Method set_meshBakerTexturePackerForcePowerOfTwo, addr 0x9d7a778, size 0x8, virtual false, abstract: false, final false
inline void set_meshBakerTexturePackerForcePowerOfTwo(bool  value) ;

/// @brief Method set_packingAlgorithm, addr 0x9d7a758, size 0x8, virtual true, abstract: false, final false
inline void set_packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value) ;

/// @brief Method set_resizePowerOfTwoTextures, addr 0x9d7a728, size 0x8, virtual true, abstract: false, final false
inline void set_resizePowerOfTwoTextures(bool  value) ;

/// @brief Method set_resultMaterial, addr 0x9d7a7f8, size 0x8, virtual true, abstract: false, final false
inline void set_resultMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_resultType, addr 0x9d7a7b8, size 0x8, virtual true, abstract: false, final false
inline void set_resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value) ;

/// @brief Method set_textureBakeResults, addr 0x9d7a6b8, size 0x8, virtual true, abstract: false, final false
inline void set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value) ;

/// @brief Method set_texturePropNamesToIgnore, addr 0x9d7a798, size 0x8, virtual true, abstract: false, final false
inline void set_texturePropNamesToIgnore(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method set_useMaxAtlasHeightOverride, addr 0x9d7a708, size 0x8, virtual true, abstract: false, final false
inline void set_useMaxAtlasHeightOverride(bool  value) ;

/// @brief Method set_useMaxAtlasWidthOverride, addr 0x9d7a6e8, size 0x8, virtual true, abstract: false, final false
inline void set_useMaxAtlasWidthOverride(bool  value) ;

/// @brief Method unpackMat2RectMap, addr 0x9d7b1c4, size 0x20c, virtual false, abstract: false, final false
inline void unpackMat2RectMap(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  rawResults) ;

/// @brief Method unpackMat2RectMap, addr 0x9d7b3d0, size 0x24c, virtual false, abstract: false, final false
inline void unpackMat2RectMap(::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>  rawResults) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureBaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureBaker(MB3_TextureBaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureBaker(MB3_TextureBaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22586};

/// @brief Field LOG_LEVEL, offset: 0x2c, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// [SerializeField]
/// @brief Field _textureBakeResults, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  ____textureBakeResults;

/// [SerializeField]
/// @brief Field _atlasPadding, offset: 0x38, size: 0x4, def value: None
 int32_t  ____atlasPadding;

/// [SerializeField]
/// @brief Field _maxAtlasSize, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____maxAtlasSize;

/// [SerializeField]
/// @brief Field _useMaxAtlasWidthOverride, offset: 0x40, size: 0x1, def value: None
 bool  ____useMaxAtlasWidthOverride;

/// [SerializeField]
/// @brief Field _maxAtlasWidthOverride, offset: 0x44, size: 0x4, def value: None
 int32_t  ____maxAtlasWidthOverride;

/// [SerializeField]
/// @brief Field _useMaxAtlasHeightOverride, offset: 0x48, size: 0x1, def value: None
 bool  ____useMaxAtlasHeightOverride;

/// [SerializeField]
/// @brief Field _maxAtlasHeightOverride, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____maxAtlasHeightOverride;

/// [SerializeField]
/// @brief Field _resizePowerOfTwoTextures, offset: 0x50, size: 0x1, def value: None
 bool  ____resizePowerOfTwoTextures;

/// [SerializeField]
/// @brief Field _fixOutOfBoundsUVs, offset: 0x51, size: 0x1, def value: None
 bool  ____fixOutOfBoundsUVs;

/// [SerializeField]
/// @brief Field _maxTilingBakeSize, offset: 0x54, size: 0x4, def value: None
 int32_t  ____maxTilingBakeSize;

/// [SerializeField]
/// @brief Field _packingAlgorithm, offset: 0x58, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  ____packingAlgorithm;

/// [SerializeField]
/// @brief Field _layerTexturePackerFastMesh, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____layerTexturePackerFastMesh;

/// [SerializeField]
/// @brief Field _meshBakerTexturePackerForcePowerOfTwo, offset: 0x60, size: 0x1, def value: None
 bool  ____meshBakerTexturePackerForcePowerOfTwo;

/// [SerializeField]
/// [NonReorderable]
/// @brief Field _customShaderProperties, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  ____customShaderProperties;

/// [SerializeField]
/// [NonReorderable]
/// @brief Field _texturePropNamesToIgnore, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____texturePropNamesToIgnore;

/// [SerializeField]
/// @brief Field _customShaderPropNames_Depricated, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____customShaderPropNames_Depricated;

/// [SerializeField]
/// @brief Field _resultType, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::MB2_TextureBakeResults_ResultType  ____resultType;

/// [SerializeField]
/// @brief Field _doMultiMaterial, offset: 0x84, size: 0x1, def value: None
 bool  ____doMultiMaterial;

/// [SerializeField]
/// @brief Field _doMultiMaterialSplitAtlasesIfTooBig, offset: 0x85, size: 0x1, def value: None
 bool  ____doMultiMaterialSplitAtlasesIfTooBig;

/// [SerializeField]
/// @brief Field _doMultiMaterialSplitAtlasesIfOBUVs, offset: 0x86, size: 0x1, def value: None
 bool  ____doMultiMaterialSplitAtlasesIfOBUVs;

/// [SerializeField]
/// @brief Field _resultMaterial, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____resultMaterial;

/// [SerializeField]
/// @brief Field _considerNonTextureProperties, offset: 0x90, size: 0x1, def value: None
 bool  ____considerNonTextureProperties;

/// [SerializeField]
/// @brief Field _doSuggestTreatment, offset: 0x91, size: 0x1, def value: None
 bool  ____doSuggestTreatment;

/// @brief Field _coroutineResult, offset: 0x98, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  ____coroutineResult;

/// [NonReorderable]
/// @brief Field resultMaterials, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_MultiMaterial*>  ___resultMaterials;

/// [NonReorderable]
/// @brief Field resultMaterialsTexArray, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  ___resultMaterialsTexArray;

/// [NonReorderable]
/// @brief Field textureArrayOutputFormats, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  ___textureArrayOutputFormats;

/// [NonReorderable]
/// @brief Field objsToMesh, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objsToMesh;

/// @brief Field onBuiltAtlasesSuccess, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*  ___onBuiltAtlasesSuccess;

/// @brief Field onBuiltAtlasesFail, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*  ___onBuiltAtlasesFail;

/// @brief Field OnCombinedTexturesCoroutineAtlasesAndRects, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  ___OnCombinedTexturesCoroutineAtlasesAndRects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ___LOG_LEVEL) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____textureBakeResults) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____atlasPadding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____maxAtlasSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____useMaxAtlasWidthOverride) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____maxAtlasWidthOverride) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____useMaxAtlasHeightOverride) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____maxAtlasHeightOverride) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____resizePowerOfTwoTextures) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____fixOutOfBoundsUVs) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____maxTilingBakeSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____packingAlgorithm) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____layerTexturePackerFastMesh) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____meshBakerTexturePackerForcePowerOfTwo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____customShaderProperties) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____texturePropNamesToIgnore) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____customShaderPropNames_Depricated) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____resultType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____doMultiMaterial) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____doMultiMaterialSplitAtlasesIfTooBig) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____doMultiMaterialSplitAtlasesIfOBUVs) == 0x86, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____resultMaterial) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____considerNonTextureProperties) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____doSuggestTreatment) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ____coroutineResult) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ___resultMaterials) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ___resultMaterialsTexArray) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ___textureArrayOutputFormats) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ___objsToMesh) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ___onBuiltAtlasesSuccess) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ___onBuiltAtlasesFail) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker, ___OnCombinedTexturesCoroutineAtlasesAndRects) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_TextureBaker) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies MB_TextureArrayResultMaterial, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_TextureBaker/<_CreateAtlasesCoroutineTextureArray>d__110
class CORDL_TYPE MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MB3_TextureBaker>  __4__this;

/// @brief Field <bakedMatsAndSlices>5__2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__bakedMatsAndSlices_5__2, put=__cordl_internal_set__bakedMatsAndSlices_5__2)) ::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>  _bakedMatsAndSlices_5__2;

/// @brief Field <resMatIdx>5__3, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__resMatIdx_5__3, put=__cordl_internal_set__resMatIdx_5__3)) int32_t  _resMatIdx_5__3;

/// @brief Field combiner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner;

/// @brief Field coroutineResult, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutineResult, put=__cordl_internal_set_coroutineResult)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult;

/// @brief Field editorMethods, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_editorMethods, put=__cordl_internal_set_editorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods;

/// @brief Field maxTimePerFrame, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTimePerFrame, put=__cordl_internal_set_maxTimePerFrame)) float_t  maxTimePerFrame;

/// @brief Field progressInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field saveAtlasesAsAssets, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveAtlasesAsAssets, put=__cordl_internal_set_saveAtlasesAsAssets)) bool  saveAtlasesAsAssets;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d7d6a0, size 0xa34, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d7e0d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d7e0dc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d7e114, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d7d69c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*> const& __cordl_internal_get__bakedMatsAndSlices_5__2() const;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>& __cordl_internal_get__bakedMatsAndSlices_5__2() ;

constexpr int32_t const& __cordl_internal_get__resMatIdx_5__3() const;

constexpr int32_t& __cordl_internal_get__resMatIdx_5__3() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get_combiner() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& __cordl_internal_get_coroutineResult() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& __cordl_internal_get_coroutineResult() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_editorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_editorMethods() ;

constexpr float_t const& __cordl_internal_get_maxTimePerFrame() const;

constexpr float_t& __cordl_internal_get_maxTimePerFrame() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr bool const& __cordl_internal_get_saveAtlasesAsAssets() const;

constexpr bool& __cordl_internal_get_saveAtlasesAsAssets() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB3_TextureBaker>  value) ;

constexpr void __cordl_internal_set__bakedMatsAndSlices_5__2(::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>  value) ;

constexpr void __cordl_internal_set__resMatIdx_5__3(int32_t  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

constexpr void __cordl_internal_set_maxTimePerFrame(float_t  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_saveAtlasesAsAssets(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d7b0a0, size 0x28, virtual false, abstract: false, final false
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
constexpr MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110(MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110(MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22585};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_TextureBaker>  _____4__this;

/// @brief Field coroutineResult, offset: 0x28, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  ___coroutineResult;

/// @brief Field editorMethods, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___editorMethods;

/// @brief Field combiner, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  ___combiner;

/// @brief Field progressInfo, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field saveAtlasesAsAssets, offset: 0x48, size: 0x1, def value: None
 bool  ___saveAtlasesAsAssets;

/// @brief Field maxTimePerFrame, offset: 0x4c, size: 0x4, def value: None
 float_t  ___maxTimePerFrame;

/// @brief Field <bakedMatsAndSlices>5__2, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>  ____bakedMatsAndSlices_5__2;

/// @brief Field <resMatIdx>5__3, offset: 0x58, size: 0x4, def value: None
 int32_t  ____resMatIdx_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, ___coroutineResult) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, ___editorMethods) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, ___combiner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, ___progressInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, ___saveAtlasesAsAssets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, ___maxTimePerFrame) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, ____bakedMatsAndSlices_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110, ____resMatIdx_5__3) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_TextureBaker/<_CreateAtlasesCoroutineAtlases>d__109
class CORDL_TYPE MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MB3_TextureBaker>  __4__this;

/// @brief Field <coroutineResult2>5__3, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutineResult2_5__3, put=__cordl_internal_set__coroutineResult2_5__3)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  _coroutineResult2_5__3;

/// @brief Field <i>5__2, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field combiner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner;

/// @brief Field coroutineResult, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutineResult, put=__cordl_internal_set_coroutineResult)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult;

/// @brief Field editorMethods, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_editorMethods, put=__cordl_internal_set_editorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods;

/// @brief Field maxTimePerFrame, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTimePerFrame, put=__cordl_internal_set_maxTimePerFrame)) float_t  maxTimePerFrame;

/// @brief Field progressInfo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d7cfa0, size 0x6b4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d7d654, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d7d65c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d7d694, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d7cf9c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker>& __cordl_internal_get___4__this() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& __cordl_internal_get__coroutineResult2_5__3() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& __cordl_internal_get__coroutineResult2_5__3() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get_combiner() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& __cordl_internal_get_coroutineResult() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& __cordl_internal_get_coroutineResult() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_editorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_editorMethods() ;

constexpr float_t const& __cordl_internal_get_maxTimePerFrame() const;

constexpr float_t& __cordl_internal_get_maxTimePerFrame() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB3_TextureBaker>  value) ;

constexpr void __cordl_internal_set__coroutineResult2_5__3(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

constexpr void __cordl_internal_set_maxTimePerFrame(float_t  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d7af88, size 0x28, virtual false, abstract: false, final false
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
constexpr MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109(MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109(MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22584};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_TextureBaker>  _____4__this;

/// @brief Field combiner, offset: 0x28, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  ___combiner;

/// @brief Field progressInfo, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field editorMethods, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___editorMethods;

/// @brief Field maxTimePerFrame, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxTimePerFrame;

/// @brief Field coroutineResult, offset: 0x48, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  ___coroutineResult;

/// @brief Field <i>5__2, offset: 0x50, size: 0x4, def value: None
 int32_t  ____i_5__2;

/// @brief Field <coroutineResult2>5__3, offset: 0x58, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  ____coroutineResult2_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, ___combiner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, ___progressInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, ___editorMethods) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, ___maxTimePerFrame) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, ___coroutineResult) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, ____i_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109, ____coroutineResult2_5__3) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_TextureBaker/<_CreateAtlasesCoroutine>d__111
class CORDL_TYPE MB3_TextureBaker___CreateAtlasesCoroutine_d__111 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MB3_TextureBaker>  __4__this;

/// @brief Field coroutineResult, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutineResult, put=__cordl_internal_set_coroutineResult)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult;

/// @brief Field editorMethods, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_editorMethods, put=__cordl_internal_set_editorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods;

/// @brief Field maxTimePerFrame, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTimePerFrame, put=__cordl_internal_set_maxTimePerFrame)) float_t  maxTimePerFrame;

/// @brief Field progressInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field saveAtlasesAsAssets, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveAtlasesAsAssets, put=__cordl_internal_set_saveAtlasesAsAssets)) bool  saveAtlasesAsAssets;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d7c970, size 0x5e4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d7cf54, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d7cf5c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d7cf94, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d7c96c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker>& __cordl_internal_get___4__this() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& __cordl_internal_get_coroutineResult() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& __cordl_internal_get_coroutineResult() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_editorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_editorMethods() ;

constexpr float_t const& __cordl_internal_get_maxTimePerFrame() const;

constexpr float_t& __cordl_internal_get_maxTimePerFrame() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr bool const& __cordl_internal_get_saveAtlasesAsAssets() const;

constexpr bool& __cordl_internal_get_saveAtlasesAsAssets() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB3_TextureBaker>  value) ;

constexpr void __cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

constexpr void __cordl_internal_set_maxTimePerFrame(float_t  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_saveAtlasesAsAssets(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d7b19c, size 0x28, virtual false, abstract: false, final false
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
constexpr MB3_TextureBaker___CreateAtlasesCoroutine_d__111() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker___CreateAtlasesCoroutine_d__111", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureBaker___CreateAtlasesCoroutine_d__111(MB3_TextureBaker___CreateAtlasesCoroutine_d__111 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker___CreateAtlasesCoroutine_d__111", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureBaker___CreateAtlasesCoroutine_d__111(MB3_TextureBaker___CreateAtlasesCoroutine_d__111 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22583};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_TextureBaker>  _____4__this;

/// @brief Field maxTimePerFrame, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxTimePerFrame;

/// @brief Field coroutineResult, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  ___coroutineResult;

/// @brief Field saveAtlasesAsAssets, offset: 0x38, size: 0x1, def value: None
 bool  ___saveAtlasesAsAssets;

/// @brief Field progressInfo, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field editorMethods, offset: 0x48, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___editorMethods;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111, ___maxTimePerFrame) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111, ___coroutineResult) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111, ___saveAtlasesAsAssets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111, ___progressInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111, ___editorMethods) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_TextureBaker/<CreateAtlasesCoroutine>d__108
class CORDL_TYPE MB3_TextureBaker__CreateAtlasesCoroutine_d__108 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MB3_TextureBaker>  __4__this;

/// @brief Field coroutineResult, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutineResult, put=__cordl_internal_set_coroutineResult)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult;

/// @brief Field editorMethods, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_editorMethods, put=__cordl_internal_set_editorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods;

/// @brief Field maxTimePerFrame, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTimePerFrame, put=__cordl_internal_set_maxTimePerFrame)) float_t  maxTimePerFrame;

/// @brief Field progressInfo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field saveAtlasesAsAssets, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveAtlasesAsAssets, put=__cordl_internal_set_saveAtlasesAsAssets)) bool  saveAtlasesAsAssets;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d7c84c, size 0xd8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d7c924, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d7c92c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d7c964, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d7c848, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker>& __cordl_internal_get___4__this() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& __cordl_internal_get_coroutineResult() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& __cordl_internal_get_coroutineResult() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_editorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_editorMethods() ;

constexpr float_t const& __cordl_internal_get_maxTimePerFrame() const;

constexpr float_t& __cordl_internal_get_maxTimePerFrame() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr bool const& __cordl_internal_get_saveAtlasesAsAssets() const;

constexpr bool& __cordl_internal_get_saveAtlasesAsAssets() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB3_TextureBaker>  value) ;

constexpr void __cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

constexpr void __cordl_internal_set_maxTimePerFrame(float_t  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_saveAtlasesAsAssets(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d7ae84, size 0x28, virtual false, abstract: false, final false
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
constexpr MB3_TextureBaker__CreateAtlasesCoroutine_d__108() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker__CreateAtlasesCoroutine_d__108", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureBaker__CreateAtlasesCoroutine_d__108(MB3_TextureBaker__CreateAtlasesCoroutine_d__108 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker__CreateAtlasesCoroutine_d__108", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureBaker__CreateAtlasesCoroutine_d__108(MB3_TextureBaker__CreateAtlasesCoroutine_d__108 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22582};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_TextureBaker>  _____4__this;

/// @brief Field progressInfo, offset: 0x28, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field coroutineResult, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  ___coroutineResult;

/// @brief Field saveAtlasesAsAssets, offset: 0x38, size: 0x1, def value: None
 bool  ___saveAtlasesAsAssets;

/// @brief Field editorMethods, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___editorMethods;

/// @brief Field maxTimePerFrame, offset: 0x48, size: 0x4, def value: None
 float_t  ___maxTimePerFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108, ___progressInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108, ___coroutineResult) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108, ___saveAtlasesAsAssets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108, ___editorMethods) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108, ___maxTimePerFrame) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_TextureBaker/<>c
class CORDL_TYPE MB3_TextureBaker___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::MB3_TextureBaker___c*  __9;

/// @brief Field <>9__101_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__101_0, put=setStaticF___9__101_0)) ::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*  __9__101_0;

static inline ::GlobalNamespace::MB3_TextureBaker___c* New_ctor() ;

/// @brief Method <PurgeNullsFromObjectsToCombine>b__101_0, addr 0x9d7c7ec, size 0x5c, virtual false, abstract: false, final false
inline bool _PurgeNullsFromObjectsToCombine_b__101_0(::UnityEngine::GameObject*  obj) ;

/// @brief Method .ctor, addr 0x9d7c7e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MB3_TextureBaker___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>* getStaticF___9__101_0() ;

static inline void setStaticF___9(::GlobalNamespace::MB3_TextureBaker___c*  value) ;

static inline void setStaticF___9__101_0(::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureBaker___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureBaker___c(MB3_TextureBaker___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureBaker___c(MB3_TextureBaker___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22581};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MB3_TextureBaker___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_TextureBaker/OnCombinedTexturesCoroutineFail
class CORDL_TYPE MB3_TextureBaker_OnCombinedTexturesCoroutineFail : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d7c754, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d7c770, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d7c740, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d7c6a4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureBaker_OnCombinedTexturesCoroutineFail() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker_OnCombinedTexturesCoroutineFail", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureBaker_OnCombinedTexturesCoroutineFail(MB3_TextureBaker_OnCombinedTexturesCoroutineFail && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker_OnCombinedTexturesCoroutineFail", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureBaker_OnCombinedTexturesCoroutineFail(MB3_TextureBaker_OnCombinedTexturesCoroutineFail const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22580};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_TextureBaker/OnCombinedTexturesCoroutineSuccess
class CORDL_TYPE MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d7c67c, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d7c698, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d7c668, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d7c5cc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess(MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess(MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22579};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
