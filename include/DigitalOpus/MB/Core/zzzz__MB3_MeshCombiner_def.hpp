#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombiner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_OutputOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_ValidationLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_MeshCombiningStatus_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshCombineAPIType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshPivotLocation_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_RenderType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombiner)
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer;
}
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_LightmapOptions;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
struct MB2_OutputOptions;
}
namespace DigitalOpus::MB::Core {
struct MB2_ValidationLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_GenerateUV2Delegate;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_MBBlendShapeKey;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_MBBlendShapeValue;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettingsHolder;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace DigitalOpus::MB::Core {
struct MB_MeshCombineAPIType;
}
namespace DigitalOpus::MB::Core {
struct MB_MeshPivotLocation;
}
namespace DigitalOpus::MB::Core {
struct MB_RenderType;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace GlobalNamespace {
struct MB3_MeshCombiner_MeshCombiningStatus;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class Object;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_GenerateUV2Delegate;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_MBBlendShapeKey;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_MBBlendShapeValue;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombiner*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombiner*, "DigitalOpus.MB.Core", "MB3_MeshCombiner");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*, "DigitalOpus.MB.Core", "MB3_MeshCombiner/GenerateUV2Delegate");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*, "DigitalOpus.MB.Core", "MB3_MeshCombiner/MBBlendShapeKey");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*, "DigitalOpus.MB.Core", "MB3_MeshCombiner/MBBlendShapeValue");
// Dependencies DigitalOpus.MB.Core.MB2_LightmapOptions, DigitalOpus.MB.Core.MB2_LogLevel, DigitalOpus.MB.Core.MB2_OutputOptions, DigitalOpus.MB.Core.MB2_ValidationLevel, DigitalOpus.MB.Core.MB3_MeshCombiner::MeshCombiningStatus, DigitalOpus.MB.Core.MB_MeshCombineAPIType, DigitalOpus.MB.Core.MB_MeshPivotLocation, DigitalOpus.MB.Core.MB_RenderType, System.Object, UnityEngine.Vector3
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombiner
class CORDL_TYPE MB3_MeshCombiner : public ::System::Object {
public:
// Declarations
using GenerateUV2Delegate = ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate;

using MBBlendShapeKey = ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey;

using MBBlendShapeValue = ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue;

using MeshCombiningStatus = ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus;

 __declspec(property(get=get_LOG_LEVEL, put=set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field _LOG_LEVEL, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__LOG_LEVEL, put=__cordl_internal_set__LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  _LOG_LEVEL;

/// @brief Field _assignToMeshCustomizer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__assignToMeshCustomizer, put=__cordl_internal_set__assignToMeshCustomizer)) ::UnityW<::UnityEngine::Object>  _assignToMeshCustomizer;

/// @brief Field _bakeStatus, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__bakeStatus, put=__cordl_internal_set__bakeStatus)) ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus  _bakeStatus;

/// @brief Field _clearBuffersAfterBake, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__clearBuffersAfterBake, put=__cordl_internal_set__clearBuffersAfterBake)) bool  _clearBuffersAfterBake;

/// @brief Field _disposed, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _doBlendShapes, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get__doBlendShapes, put=__cordl_internal_set__doBlendShapes)) bool  _doBlendShapes;

/// @brief Field _doCol, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get__doCol, put=__cordl_internal_set__doCol)) bool  _doCol;

/// @brief Field _doNorm, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__doNorm, put=__cordl_internal_set__doNorm)) bool  _doNorm;

/// @brief Field _doTan, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get__doTan, put=__cordl_internal_set__doTan)) bool  _doTan;

/// @brief Field _doUV, offset 0x57, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV, put=__cordl_internal_set__doUV)) bool  _doUV;

/// @brief Field _doUV3, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV3, put=__cordl_internal_set__doUV3)) bool  _doUV3;

/// @brief Field _doUV4, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV4, put=__cordl_internal_set__doUV4)) bool  _doUV4;

/// @brief Field _doUV5, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV5, put=__cordl_internal_set__doUV5)) bool  _doUV5;

/// @brief Field _doUV6, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV6, put=__cordl_internal_set__doUV6)) bool  _doUV6;

/// @brief Field _doUV7, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV7, put=__cordl_internal_set__doUV7)) bool  _doUV7;

/// @brief Field _doUV8, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUV8, put=__cordl_internal_set__doUV8)) bool  _doUV8;

/// @brief Field _lightmapOption, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__lightmapOption, put=__cordl_internal_set__lightmapOption)) ::DigitalOpus::MB::Core::MB2_LightmapOptions  _lightmapOption;

/// @brief Field _meshAPItoUse, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__meshAPItoUse, put=__cordl_internal_set__meshAPItoUse)) ::DigitalOpus::MB::Core::MB_MeshCombineAPIType  _meshAPItoUse;

/// @brief Field _name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _optimizeAfterBake, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__optimizeAfterBake, put=__cordl_internal_set__optimizeAfterBake)) bool  _optimizeAfterBake;

/// @brief Field _outputOption, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__outputOption, put=__cordl_internal_set__outputOption)) ::DigitalOpus::MB::Core::MB2_OutputOptions  _outputOption;

/// @brief Field _pivotLocation, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get__pivotLocation, put=__cordl_internal_set__pivotLocation)) ::UnityEngine::Vector3  _pivotLocation;

/// @brief Field _pivotLocationType, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__pivotLocationType, put=__cordl_internal_set__pivotLocationType)) ::DigitalOpus::MB::Core::MB_MeshPivotLocation  _pivotLocationType;

/// @brief Field _renderType, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__renderType, put=__cordl_internal_set__renderType)) ::DigitalOpus::MB::Core::MB_RenderType  _renderType;

/// @brief Field _resultSceneObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__resultSceneObject, put=__cordl_internal_set__resultSceneObject)) ::UnityW<::UnityEngine::GameObject>  _resultSceneObject;

/// @brief Field _settingsHolder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsHolder, put=__cordl_internal_set__settingsHolder)) ::UnityW<::UnityEngine::Object>  _settingsHolder;

/// @brief Field _smrMergeBlendShapesWithSameNames, offset 0x7d, size 0x1 
 __declspec(property(get=__cordl_internal_get__smrMergeBlendShapesWithSameNames, put=__cordl_internal_set__smrMergeBlendShapesWithSameNames)) bool  _smrMergeBlendShapesWithSameNames;

/// @brief Field _smrNoExtraBonesWhenCombiningMeshRenderers, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers, put=__cordl_internal_set__smrNoExtraBonesWhenCombiningMeshRenderers)) bool  _smrNoExtraBonesWhenCombiningMeshRenderers;

/// @brief Field _targetRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetRenderer, put=__cordl_internal_set__targetRenderer)) ::UnityW<::UnityEngine::Renderer>  _targetRenderer;

/// @brief Field _textureBakeResults, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__textureBakeResults, put=__cordl_internal_set__textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  _textureBakeResults;

/// @brief Field _usingTemporaryTextureBakeResult, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__usingTemporaryTextureBakeResult, put=__cordl_internal_set__usingTemporaryTextureBakeResult)) bool  _usingTemporaryTextureBakeResult;

/// @brief Field _uv2UnwrappingParamsHardAngle, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__uv2UnwrappingParamsHardAngle, put=__cordl_internal_set__uv2UnwrappingParamsHardAngle)) float_t  _uv2UnwrappingParamsHardAngle;

/// @brief Field _uv2UnwrappingParamsPackMargin, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__uv2UnwrappingParamsPackMargin, put=__cordl_internal_set__uv2UnwrappingParamsPackMargin)) float_t  _uv2UnwrappingParamsPackMargin;

/// @brief Field _validationLevel, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__validationLevel, put=__cordl_internal_set__validationLevel)) ::DigitalOpus::MB::Core::MB2_ValidationLevel  _validationLevel;

 __declspec(property(get=get_assignToMeshCustomizer, put=set_assignToMeshCustomizer)) ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  assignToMeshCustomizer;

 __declspec(property(get=get_bakeStatus)) ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus  bakeStatus;

 __declspec(property(get=get_clearBuffersAfterBake, put=set_clearBuffersAfterBake)) bool  clearBuffersAfterBake;

 __declspec(property(get=get_doBlendShapes, put=set_doBlendShapes)) bool  doBlendShapes;

 __declspec(property(get=get_doCol, put=set_doCol)) bool  doCol;

 __declspec(property(get=get_doNorm, put=set_doNorm)) bool  doNorm;

 __declspec(property(get=get_doTan, put=set_doTan)) bool  doTan;

 __declspec(property(get=get_doUV, put=set_doUV)) bool  doUV;

 __declspec(property(get=get_doUV1, put=set_doUV1)) bool  doUV1;

 __declspec(property(get=get_doUV3, put=set_doUV3)) bool  doUV3;

 __declspec(property(get=get_doUV4, put=set_doUV4)) bool  doUV4;

 __declspec(property(get=get_doUV5, put=set_doUV5)) bool  doUV5;

 __declspec(property(get=get_doUV6, put=set_doUV6)) bool  doUV6;

 __declspec(property(get=get_doUV7, put=set_doUV7)) bool  doUV7;

 __declspec(property(get=get_doUV8, put=set_doUV8)) bool  doUV8;

 __declspec(property(get=get_lightmapOption, put=set_lightmapOption)) ::DigitalOpus::MB::Core::MB2_LightmapOptions  lightmapOption;

 __declspec(property(get=get_meshAPI, put=set_meshAPI)) ::DigitalOpus::MB::Core::MB_MeshCombineAPIType  meshAPI;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_optimizeAfterBake, put=set_optimizeAfterBake)) bool  optimizeAfterBake;

 __declspec(property(get=get_outputOption, put=set_outputOption)) ::DigitalOpus::MB::Core::MB2_OutputOptions  outputOption;

 __declspec(property(get=get_pivotLocation, put=set_pivotLocation)) ::UnityEngine::Vector3  pivotLocation;

 __declspec(property(get=get_pivotLocationType, put=set_pivotLocationType)) ::DigitalOpus::MB::Core::MB_MeshPivotLocation  pivotLocationType;

 __declspec(property(get=get_renderType, put=set_renderType)) ::DigitalOpus::MB::Core::MB_RenderType  renderType;

 __declspec(property(get=get_resultSceneObject, put=set_resultSceneObject)) ::UnityW<::UnityEngine::GameObject>  resultSceneObject;

 __declspec(property(get=get_settings)) ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings;

 __declspec(property(get=get_settingsHolder, put=set_settingsHolder)) ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*  settingsHolder;

 __declspec(property(get=get_smrMergeBlendShapesWithSameNames, put=set_smrMergeBlendShapesWithSameNames)) bool  smrMergeBlendShapesWithSameNames;

 __declspec(property(get=get_smrNoExtraBonesWhenCombiningMeshRenderers, put=set_smrNoExtraBonesWhenCombiningMeshRenderers)) bool  smrNoExtraBonesWhenCombiningMeshRenderers;

 __declspec(property(get=get_targetRenderer, put=set_targetRenderer)) ::UnityW<::UnityEngine::Renderer>  targetRenderer;

 __declspec(property(get=get_textureBakeResults, put=set_textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  textureBakeResults;

 __declspec(property(get=get_uv2UnwrappingParamsHardAngle, put=set_uv2UnwrappingParamsHardAngle)) float_t  uv2UnwrappingParamsHardAngle;

 __declspec(property(get=get_uv2UnwrappingParamsPackMargin, put=set_uv2UnwrappingParamsPackMargin)) float_t  uv2UnwrappingParamsPackMargin;

 __declspec(property(get=get_validationLevel, put=set_validationLevel)) ::DigitalOpus::MB::Core::MB2_ValidationLevel  validationLevel;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshBakerSettings"
constexpr operator  ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddDeleteGameObjects, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource) ;

/// @brief Method AddDeleteGameObjectsByID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource) ;

/// @brief Method Apply, addr 0x9d85d44, size 0x14, virtual true, abstract: false, final false
inline bool Apply() ;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapeFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  uv5, bool  uv6, bool  uv7, bool  uv8, bool  colors, bool  bones, bool  blendShapeFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method CheckIntegrity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CheckIntegrity() ;

/// @brief Method ClearBuffers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearBuffers() ;

/// @brief Method ClearMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearMesh() ;

/// @brief Method ClearMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearMesh(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method CombinedMeshContains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CombinedMeshContains(::UnityEngine::GameObject*  go) ;

/// @brief Method DestroyMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DestroyMesh() ;

/// @brief Method DestroyMeshEditor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method Dispose, addr 0x9d76458, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9d85d10, size 0x34, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DisposeRuntimeCreated, addr 0x9d85cf4, size 0x14, virtual true, abstract: false, final false
inline void DisposeRuntimeCreated() ;

/// @brief Method GetLightmapIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetLightmapIndex() ;

/// @brief Method GetMaterialsOnTargetRenderer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GetMaterialsOnTargetRenderer() ;

/// @brief Method GetNumObjectsInCombined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetNumObjectsInCombined() ;

/// @brief Method GetObjectsInCombined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetObjectsInCombined() ;

/// @brief Method IsDisposed, addr 0x9d85d08, size 0x8, virtual false, abstract: false, final false
inline bool IsDisposed() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombiner* New_ctor() ;

/// @brief Method UpdateGameObjects, addr 0x9d85d58, size 0x64, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos) ;

/// @brief Method UpdateGameObjects, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateColors, bool  updateSkinningInfo) ;

/// @brief Method UpdateGameObjects, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo) ;

/// @brief Method UpdateGameObjects, addr 0x9d85dbc, size 0x60, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  updateBounds) ;

/// @brief Method UpdateSkinnedMeshApproximateBounds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateSkinnedMeshApproximateBounds() ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBones, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateSkinnedMeshApproximateBoundsFromBones() ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBonesStatic, addr 0x9d74c88, size 0x1fc, virtual false, abstract: false, final false
static inline void UpdateSkinnedMeshApproximateBoundsFromBonesStatic(::ArrayW<::UnityEngine::Transform*>  bs, ::UnityEngine::SkinnedMeshRenderer*  smr) ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBounds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateSkinnedMeshApproximateBoundsFromBounds() ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBoundsStatic, addr 0x9d75230, size 0x228, virtual false, abstract: false, final false
static inline void UpdateSkinnedMeshApproximateBoundsFromBoundsStatic(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectsInCombined, ::UnityEngine::SkinnedMeshRenderer*  smr) ;

/// @brief Method _CreateTemporaryTextrueBakeResult, addr 0x9d85e1c, size 0xd0, virtual true, abstract: false, final false
inline bool _CreateTemporaryTextrueBakeResult(::ArrayW<::UnityEngine::GameObject*>  gos, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  matsOnTargetRenderer) ;

/// @brief Method _DisposeRuntimeCreated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void _DisposeRuntimeCreated() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get__LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get__LOG_LEVEL() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__assignToMeshCustomizer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__assignToMeshCustomizer() ;

constexpr ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus const& __cordl_internal_get__bakeStatus() const;

constexpr ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus& __cordl_internal_get__bakeStatus() ;

constexpr bool const& __cordl_internal_get__clearBuffersAfterBake() const;

constexpr bool& __cordl_internal_get__clearBuffersAfterBake() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr bool const& __cordl_internal_get__doBlendShapes() const;

constexpr bool& __cordl_internal_get__doBlendShapes() ;

constexpr bool const& __cordl_internal_get__doCol() const;

constexpr bool& __cordl_internal_get__doCol() ;

constexpr bool const& __cordl_internal_get__doNorm() const;

constexpr bool& __cordl_internal_get__doNorm() ;

constexpr bool const& __cordl_internal_get__doTan() const;

constexpr bool& __cordl_internal_get__doTan() ;

constexpr bool const& __cordl_internal_get__doUV() const;

constexpr bool& __cordl_internal_get__doUV() ;

constexpr bool const& __cordl_internal_get__doUV3() const;

constexpr bool& __cordl_internal_get__doUV3() ;

constexpr bool const& __cordl_internal_get__doUV4() const;

constexpr bool& __cordl_internal_get__doUV4() ;

constexpr bool const& __cordl_internal_get__doUV5() const;

constexpr bool& __cordl_internal_get__doUV5() ;

constexpr bool const& __cordl_internal_get__doUV6() const;

constexpr bool& __cordl_internal_get__doUV6() ;

constexpr bool const& __cordl_internal_get__doUV7() const;

constexpr bool& __cordl_internal_get__doUV7() ;

constexpr bool const& __cordl_internal_get__doUV8() const;

constexpr bool& __cordl_internal_get__doUV8() ;

constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions const& __cordl_internal_get__lightmapOption() const;

constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions& __cordl_internal_get__lightmapOption() ;

constexpr ::DigitalOpus::MB::Core::MB_MeshCombineAPIType const& __cordl_internal_get__meshAPItoUse() const;

constexpr ::DigitalOpus::MB::Core::MB_MeshCombineAPIType& __cordl_internal_get__meshAPItoUse() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr bool const& __cordl_internal_get__optimizeAfterBake() const;

constexpr bool& __cordl_internal_get__optimizeAfterBake() ;

constexpr ::DigitalOpus::MB::Core::MB2_OutputOptions const& __cordl_internal_get__outputOption() const;

constexpr ::DigitalOpus::MB::Core::MB2_OutputOptions& __cordl_internal_get__outputOption() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__pivotLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__pivotLocation() ;

constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation const& __cordl_internal_get__pivotLocationType() const;

constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation& __cordl_internal_get__pivotLocationType() ;

constexpr ::DigitalOpus::MB::Core::MB_RenderType const& __cordl_internal_get__renderType() const;

constexpr ::DigitalOpus::MB::Core::MB_RenderType& __cordl_internal_get__renderType() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__resultSceneObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__resultSceneObject() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__settingsHolder() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__settingsHolder() ;

constexpr bool const& __cordl_internal_get__smrMergeBlendShapesWithSameNames() const;

constexpr bool& __cordl_internal_get__smrMergeBlendShapesWithSameNames() ;

constexpr bool const& __cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers() const;

constexpr bool& __cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__targetRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__targetRenderer() ;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& __cordl_internal_get__textureBakeResults() const;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& __cordl_internal_get__textureBakeResults() ;

constexpr bool const& __cordl_internal_get__usingTemporaryTextureBakeResult() const;

constexpr bool& __cordl_internal_get__usingTemporaryTextureBakeResult() ;

constexpr float_t const& __cordl_internal_get__uv2UnwrappingParamsHardAngle() const;

constexpr float_t& __cordl_internal_get__uv2UnwrappingParamsHardAngle() ;

constexpr float_t const& __cordl_internal_get__uv2UnwrappingParamsPackMargin() const;

constexpr float_t& __cordl_internal_get__uv2UnwrappingParamsPackMargin() ;

constexpr ::DigitalOpus::MB::Core::MB2_ValidationLevel const& __cordl_internal_get__validationLevel() const;

constexpr ::DigitalOpus::MB::Core::MB2_ValidationLevel& __cordl_internal_get__validationLevel() ;

constexpr void __cordl_internal_set__LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__assignToMeshCustomizer(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__bakeStatus(::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus  value) ;

constexpr void __cordl_internal_set__clearBuffersAfterBake(bool  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__doBlendShapes(bool  value) ;

constexpr void __cordl_internal_set__doCol(bool  value) ;

constexpr void __cordl_internal_set__doNorm(bool  value) ;

constexpr void __cordl_internal_set__doTan(bool  value) ;

constexpr void __cordl_internal_set__doUV(bool  value) ;

constexpr void __cordl_internal_set__doUV3(bool  value) ;

constexpr void __cordl_internal_set__doUV4(bool  value) ;

constexpr void __cordl_internal_set__doUV5(bool  value) ;

constexpr void __cordl_internal_set__doUV6(bool  value) ;

constexpr void __cordl_internal_set__doUV7(bool  value) ;

constexpr void __cordl_internal_set__doUV8(bool  value) ;

constexpr void __cordl_internal_set__lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value) ;

constexpr void __cordl_internal_set__meshAPItoUse(::DigitalOpus::MB::Core::MB_MeshCombineAPIType  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__optimizeAfterBake(bool  value) ;

constexpr void __cordl_internal_set__outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions  value) ;

constexpr void __cordl_internal_set__pivotLocation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation  value) ;

constexpr void __cordl_internal_set__renderType(::DigitalOpus::MB::Core::MB_RenderType  value) ;

constexpr void __cordl_internal_set__resultSceneObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__settingsHolder(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__smrMergeBlendShapesWithSameNames(bool  value) ;

constexpr void __cordl_internal_set__smrNoExtraBonesWhenCombiningMeshRenderers(bool  value) ;

constexpr void __cordl_internal_set__targetRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value) ;

constexpr void __cordl_internal_set__usingTemporaryTextureBakeResult(bool  value) ;

constexpr void __cordl_internal_set__uv2UnwrappingParamsHardAngle(float_t  value) ;

constexpr void __cordl_internal_set__uv2UnwrappingParamsPackMargin(float_t  value) ;

constexpr void __cordl_internal_set__validationLevel(::DigitalOpus::MB::Core::MB2_ValidationLevel  value) ;

/// @brief Method .ctor, addr 0x9d85eec, size 0x254, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method doUV2, addr 0x9d8590c, size 0x1a4, virtual true, abstract: false, final false
inline bool doUV2() ;

/// @brief Method get_EVAL_VERSION, addr 0x9d854a4, size 0x8, virtual false, abstract: false, final false
static inline bool get_EVAL_VERSION() ;

/// @brief Method get_LOG_LEVEL, addr 0x9d856b8, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_LogLevel get_LOG_LEVEL() ;

/// @brief Method get_assignToMeshCustomizer, addr 0x9d85ba8, size 0x8c, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* get_assignToMeshCustomizer() ;

/// @brief Method get_bakeStatus, addr 0x9d854ac, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus get_bakeStatus() ;

/// @brief Method get_clearBuffersAfterBake, addr 0x9d85b48, size 0x8, virtual true, abstract: false, final false
inline bool get_clearBuffersAfterBake() ;

/// @brief Method get_doBlendShapes, addr 0x9d85b10, size 0x8, virtual true, abstract: false, final false
inline bool get_doBlendShapes() ;

/// @brief Method get_doCol, addr 0x9d858e0, size 0x8, virtual true, abstract: false, final false
inline bool get_doCol() ;

/// @brief Method get_doNorm, addr 0x9d858c0, size 0x8, virtual true, abstract: false, final false
inline bool get_doNorm() ;

/// @brief Method get_doTan, addr 0x9d858d0, size 0x8, virtual true, abstract: false, final false
inline bool get_doTan() ;

/// @brief Method get_doUV, addr 0x9d858f0, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV() ;

/// @brief Method get_doUV1, addr 0x9d85900, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV1() ;

/// @brief Method get_doUV3, addr 0x9d85ab0, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV3() ;

/// @brief Method get_doUV4, addr 0x9d85ac0, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV4() ;

/// @brief Method get_doUV5, addr 0x9d85ad0, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV5() ;

/// @brief Method get_doUV6, addr 0x9d85ae0, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV6() ;

/// @brief Method get_doUV7, addr 0x9d85af0, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV7() ;

/// @brief Method get_doUV8, addr 0x9d85b00, size 0x8, virtual true, abstract: false, final false
inline bool get_doUV8() ;

/// @brief Method get_lightmapOption, addr 0x9d858b0, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_LightmapOptions get_lightmapOption() ;

/// @brief Method get_meshAPI, addr 0x9d85ce4, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB_MeshCombineAPIType get_meshAPI() ;

/// @brief Method get_name, addr 0x9d854c4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_optimizeAfterBake, addr 0x9d85b58, size 0x8, virtual true, abstract: false, final true
inline bool get_optimizeAfterBake() ;

/// @brief Method get_outputOption, addr 0x9d85890, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_OutputOptions get_outputOption() ;

/// @brief Method get_pivotLocation, addr 0x9d85b30, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_pivotLocation() ;

/// @brief Method get_pivotLocationType, addr 0x9d85b20, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB_MeshPivotLocation get_pivotLocationType() ;

/// @brief Method get_renderType, addr 0x9d858a0, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB_RenderType get_renderType() ;

/// @brief Method get_resultSceneObject, addr 0x9d854e4, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_resultSceneObject() ;

/// @brief Method get_settings, addr 0x9d760e0, size 0x100, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* get_settings() ;

/// @brief Method get_settingsHolder, addr 0x9d856c8, size 0xd0, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder* get_settingsHolder() ;

/// @brief Method get_smrMergeBlendShapesWithSameNames, addr 0x9d85b98, size 0x8, virtual true, abstract: false, final true
inline bool get_smrMergeBlendShapesWithSameNames() ;

/// @brief Method get_smrNoExtraBonesWhenCombiningMeshRenderers, addr 0x9d85b88, size 0x8, virtual true, abstract: false, final true
inline bool get_smrNoExtraBonesWhenCombiningMeshRenderers() ;

/// @brief Method get_targetRenderer, addr 0x9d854f4, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_targetRenderer() ;

/// @brief Method get_textureBakeResults, addr 0x9d854d4, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> get_textureBakeResults() ;

/// @brief Method get_uv2UnwrappingParamsHardAngle, addr 0x9d85b68, size 0x8, virtual true, abstract: false, final true
inline float_t get_uv2UnwrappingParamsHardAngle() ;

/// @brief Method get_uv2UnwrappingParamsPackMargin, addr 0x9d85b78, size 0x8, virtual true, abstract: false, final true
inline float_t get_uv2UnwrappingParamsPackMargin() ;

/// @brief Method get_validationLevel, addr 0x9d854b4, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_ValidationLevel get_validationLevel() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshBakerSettings"
constexpr ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* i___DigitalOpus__MB__Core__MB_IMeshBakerSettings() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_LOG_LEVEL, addr 0x9d856c0, size 0x8, virtual true, abstract: false, final false
inline void set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

/// @brief Method set_assignToMeshCustomizer, addr 0x9d85c34, size 0xb0, virtual true, abstract: false, final true
inline void set_assignToMeshCustomizer(::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  value) ;

/// @brief Method set_clearBuffersAfterBake, addr 0x9d85b50, size 0x8, virtual true, abstract: false, final false
inline void set_clearBuffersAfterBake(bool  value) ;

/// @brief Method set_doBlendShapes, addr 0x9d85b18, size 0x8, virtual true, abstract: false, final false
inline void set_doBlendShapes(bool  value) ;

/// @brief Method set_doCol, addr 0x9d858e8, size 0x8, virtual true, abstract: false, final false
inline void set_doCol(bool  value) ;

/// @brief Method set_doNorm, addr 0x9d858c8, size 0x8, virtual true, abstract: false, final false
inline void set_doNorm(bool  value) ;

/// @brief Method set_doTan, addr 0x9d858d8, size 0x8, virtual true, abstract: false, final false
inline void set_doTan(bool  value) ;

/// @brief Method set_doUV, addr 0x9d858f8, size 0x8, virtual true, abstract: false, final false
inline void set_doUV(bool  value) ;

/// @brief Method set_doUV1, addr 0x9d85908, size 0x4, virtual true, abstract: false, final false
inline void set_doUV1(bool  value) ;

/// @brief Method set_doUV3, addr 0x9d85ab8, size 0x8, virtual true, abstract: false, final false
inline void set_doUV3(bool  value) ;

/// @brief Method set_doUV4, addr 0x9d85ac8, size 0x8, virtual true, abstract: false, final false
inline void set_doUV4(bool  value) ;

/// @brief Method set_doUV5, addr 0x9d85ad8, size 0x8, virtual true, abstract: false, final false
inline void set_doUV5(bool  value) ;

/// @brief Method set_doUV6, addr 0x9d85ae8, size 0x8, virtual true, abstract: false, final false
inline void set_doUV6(bool  value) ;

/// @brief Method set_doUV7, addr 0x9d85af8, size 0x8, virtual true, abstract: false, final false
inline void set_doUV7(bool  value) ;

/// @brief Method set_doUV8, addr 0x9d85b08, size 0x8, virtual true, abstract: false, final false
inline void set_doUV8(bool  value) ;

/// @brief Method set_lightmapOption, addr 0x9d858b8, size 0x8, virtual true, abstract: false, final false
inline void set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value) ;

/// @brief Method set_meshAPI, addr 0x9d85cec, size 0x8, virtual true, abstract: false, final true
inline void set_meshAPI(::DigitalOpus::MB::Core::MB_MeshCombineAPIType  value) ;

/// @brief Method set_name, addr 0x9d854cc, size 0x8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_optimizeAfterBake, addr 0x9d85b60, size 0x8, virtual true, abstract: false, final true
inline void set_optimizeAfterBake(bool  value) ;

/// @brief Method set_outputOption, addr 0x9d85898, size 0x8, virtual true, abstract: false, final false
inline void set_outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions  value) ;

/// @brief Method set_pivotLocation, addr 0x9d85b3c, size 0xc, virtual true, abstract: false, final false
inline void set_pivotLocation(::UnityEngine::Vector3  value) ;

/// @brief Method set_pivotLocationType, addr 0x9d85b28, size 0x8, virtual true, abstract: false, final false
inline void set_pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation  value) ;

/// @brief Method set_renderType, addr 0x9d858a8, size 0x8, virtual true, abstract: false, final false
inline void set_renderType(::DigitalOpus::MB::Core::MB_RenderType  value) ;

/// @brief Method set_resultSceneObject, addr 0x9d854ec, size 0x8, virtual true, abstract: false, final false
inline void set_resultSceneObject(::UnityEngine::GameObject*  value) ;

/// @brief Method set_settingsHolder, addr 0x9d85798, size 0xf8, virtual true, abstract: false, final false
inline void set_settingsHolder(::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*  value) ;

/// @brief Method set_smrMergeBlendShapesWithSameNames, addr 0x9d85ba0, size 0x8, virtual true, abstract: false, final true
inline void set_smrMergeBlendShapesWithSameNames(bool  value) ;

/// @brief Method set_smrNoExtraBonesWhenCombiningMeshRenderers, addr 0x9d85b90, size 0x8, virtual true, abstract: false, final true
inline void set_smrNoExtraBonesWhenCombiningMeshRenderers(bool  value) ;

/// @brief Method set_targetRenderer, addr 0x9d854fc, size 0x1bc, virtual true, abstract: false, final false
inline void set_targetRenderer(::UnityEngine::Renderer*  value) ;

/// @brief Method set_textureBakeResults, addr 0x9d854dc, size 0x8, virtual true, abstract: false, final false
inline void set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value) ;

/// @brief Method set_uv2UnwrappingParamsHardAngle, addr 0x9d85b70, size 0x8, virtual true, abstract: false, final true
inline void set_uv2UnwrappingParamsHardAngle(float_t  value) ;

/// @brief Method set_uv2UnwrappingParamsPackMargin, addr 0x9d85b80, size 0x8, virtual true, abstract: false, final true
inline void set_uv2UnwrappingParamsPackMargin(float_t  value) ;

/// @brief Method set_validationLevel, addr 0x9d854bc, size 0x8, virtual true, abstract: false, final false
inline void set_validationLevel(::DigitalOpus::MB::Core::MB2_ValidationLevel  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombiner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombiner(MB3_MeshCombiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombiner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombiner(MB3_MeshCombiner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22623};

/// [SerializeField]
/// @brief Field _bakeStatus, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus  ____bakeStatus;

/// [SerializeField]
/// @brief Field _validationLevel, offset: 0x14, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_ValidationLevel  ____validationLevel;

/// [SerializeField]
/// @brief Field _name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _textureBakeResults, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  ____textureBakeResults;

/// [SerializeField]
/// @brief Field _resultSceneObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____resultSceneObject;

/// [SerializeField]
/// @brief Field _targetRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____targetRenderer;

/// [SerializeField]
/// @brief Field _LOG_LEVEL, offset: 0x38, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ____LOG_LEVEL;

/// [SerializeField]
/// @brief Field _settingsHolder, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____settingsHolder;

/// [SerializeField]
/// @brief Field _outputOption, offset: 0x48, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_OutputOptions  ____outputOption;

/// [SerializeField]
/// @brief Field _renderType, offset: 0x4c, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_RenderType  ____renderType;

/// [SerializeField]
/// @brief Field _lightmapOption, offset: 0x50, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LightmapOptions  ____lightmapOption;

/// [SerializeField]
/// @brief Field _doNorm, offset: 0x54, size: 0x1, def value: None
 bool  ____doNorm;

/// [SerializeField]
/// @brief Field _doTan, offset: 0x55, size: 0x1, def value: None
 bool  ____doTan;

/// [SerializeField]
/// @brief Field _doCol, offset: 0x56, size: 0x1, def value: None
 bool  ____doCol;

/// [SerializeField]
/// @brief Field _doUV, offset: 0x57, size: 0x1, def value: None
 bool  ____doUV;

/// [SerializeField]
/// @brief Field _doUV3, offset: 0x58, size: 0x1, def value: None
 bool  ____doUV3;

/// [SerializeField]
/// @brief Field _doUV4, offset: 0x59, size: 0x1, def value: None
 bool  ____doUV4;

/// [SerializeField]
/// @brief Field _doUV5, offset: 0x5a, size: 0x1, def value: None
 bool  ____doUV5;

/// [SerializeField]
/// @brief Field _doUV6, offset: 0x5b, size: 0x1, def value: None
 bool  ____doUV6;

/// [SerializeField]
/// @brief Field _doUV7, offset: 0x5c, size: 0x1, def value: None
 bool  ____doUV7;

/// [SerializeField]
/// @brief Field _doUV8, offset: 0x5d, size: 0x1, def value: None
 bool  ____doUV8;

/// [SerializeField]
/// @brief Field _doBlendShapes, offset: 0x5e, size: 0x1, def value: None
 bool  ____doBlendShapes;

/// [FormerlySerializedAs("_recenterVertsToBoundsCenter")]
/// [SerializeField]
/// @brief Field _pivotLocationType, offset: 0x60, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_MeshPivotLocation  ____pivotLocationType;

/// [SerializeField]
/// @brief Field _pivotLocation, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____pivotLocation;

/// [SerializeField]
/// @brief Field _clearBuffersAfterBake, offset: 0x70, size: 0x1, def value: None
 bool  ____clearBuffersAfterBake;

/// [SerializeField]
/// @brief Field _optimizeAfterBake, offset: 0x71, size: 0x1, def value: None
 bool  ____optimizeAfterBake;

/// [SerializeField]
/// [FormerlySerializedAs("uv2UnwrappingParamsHardAngle")]
/// @brief Field _uv2UnwrappingParamsHardAngle, offset: 0x74, size: 0x4, def value: None
 float_t  ____uv2UnwrappingParamsHardAngle;

/// [SerializeField]
/// [FormerlySerializedAs("uv2UnwrappingParamsPackMargin")]
/// @brief Field _uv2UnwrappingParamsPackMargin, offset: 0x78, size: 0x4, def value: None
 float_t  ____uv2UnwrappingParamsPackMargin;

/// [SerializeField]
/// @brief Field _smrNoExtraBonesWhenCombiningMeshRenderers, offset: 0x7c, size: 0x1, def value: None
 bool  ____smrNoExtraBonesWhenCombiningMeshRenderers;

/// [SerializeField]
/// @brief Field _smrMergeBlendShapesWithSameNames, offset: 0x7d, size: 0x1, def value: None
 bool  ____smrMergeBlendShapesWithSameNames;

/// [SerializeField]
/// @brief Field _assignToMeshCustomizer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____assignToMeshCustomizer;

/// [SerializeField]
/// @brief Field _meshAPItoUse, offset: 0x88, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_MeshCombineAPIType  ____meshAPItoUse;

/// @brief Field _usingTemporaryTextureBakeResult, offset: 0x8c, size: 0x1, def value: None
 bool  ____usingTemporaryTextureBakeResult;

/// @brief Field _disposed, offset: 0x8d, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____bakeStatus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____validationLevel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____textureBakeResults) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____resultSceneObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____targetRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____LOG_LEVEL) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____settingsHolder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____outputOption) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____renderType) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____lightmapOption) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doNorm) == 0x54, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doTan) == 0x55, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doCol) == 0x56, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doUV) == 0x57, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doUV3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doUV4) == 0x59, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doUV5) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doUV6) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doUV7) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doUV8) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____doBlendShapes) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____pivotLocationType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____pivotLocation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____clearBuffersAfterBake) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____optimizeAfterBake) == 0x71, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____uv2UnwrappingParamsHardAngle) == 0x74, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____uv2UnwrappingParamsPackMargin) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____smrNoExtraBonesWhenCombiningMeshRenderers) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____smrMergeBlendShapesWithSameNames) == 0x7d, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____assignToMeshCustomizer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____meshAPItoUse) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____usingTemporaryTextureBakeResult) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner, ____disposed) == 0x8d, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombiner) == 0x90, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombiner/MBBlendShapeValue
class CORDL_TYPE MB3_MeshCombiner_MBBlendShapeValue : public ::System::Object {
public:
// Declarations
/// @brief Field blendShapeIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendShapeIndex, put=__cordl_internal_set_blendShapeIndex)) int32_t  blendShapeIndex;

/// @brief Field combinedMeshGameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_combinedMeshGameObject, put=__cordl_internal_set_combinedMeshGameObject)) ::UnityW<::UnityEngine::GameObject>  combinedMeshGameObject;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_blendShapeIndex() const;

constexpr int32_t& __cordl_internal_get_blendShapeIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_combinedMeshGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_combinedMeshGameObject() ;

constexpr void __cordl_internal_set_blendShapeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_combinedMeshGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d863e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombiner_MBBlendShapeValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombiner_MBBlendShapeValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombiner_MBBlendShapeValue(MB3_MeshCombiner_MBBlendShapeValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombiner_MBBlendShapeValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombiner_MBBlendShapeValue(MB3_MeshCombiner_MBBlendShapeValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22622};

/// @brief Field combinedMeshGameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___combinedMeshGameObject;

/// @brief Field blendShapeIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___blendShapeIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue, ___combinedMeshGameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue, ___blendShapeIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombiner/MBBlendShapeKey
class CORDL_TYPE MB3_MeshCombiner_MBBlendShapeKey : public ::System::Object {
public:
// Declarations
/// @brief Field blendShapeIndexInSrc, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendShapeIndexInSrc, put=__cordl_internal_set_blendShapeIndexInSrc)) int32_t  blendShapeIndexInSrc;

/// @brief Field gameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Method Equals, addr 0x9d862d4, size 0xd4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9d863a8, size 0x38, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey* New_ctor(::UnityEngine::GameObject*  srcSkinnedMeshRenderGameObject, int32_t  blendShapeIndexInSource) ;

constexpr int32_t const& __cordl_internal_get_blendShapeIndexInSrc() const;

constexpr int32_t& __cordl_internal_get_blendShapeIndexInSrc() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr void __cordl_internal_set_blendShapeIndexInSrc(int32_t  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d86298, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  srcSkinnedMeshRenderGameObject, int32_t  blendShapeIndexInSource) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombiner_MBBlendShapeKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombiner_MBBlendShapeKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombiner_MBBlendShapeKey(MB3_MeshCombiner_MBBlendShapeKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombiner_MBBlendShapeKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombiner_MBBlendShapeKey(MB3_MeshCombiner_MBBlendShapeKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22621};

/// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field blendShapeIndexInSrc, offset: 0x18, size: 0x4, def value: None
 int32_t  ___blendShapeIndexInSrc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey, ___blendShapeIndexInSrc) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.MulticastDelegate
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombiner/GenerateUV2Delegate
class CORDL_TYPE MB3_MeshCombiner_GenerateUV2Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d86208, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Mesh*  m, float_t  hardAngle, float_t  packMargin, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d8628c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d861f4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Mesh*  m, float_t  hardAngle, float_t  packMargin) ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d86140, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombiner_GenerateUV2Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombiner_GenerateUV2Delegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombiner_GenerateUV2Delegate(MB3_MeshCombiner_GenerateUV2Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombiner_GenerateUV2Delegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombiner_GenerateUV2Delegate(MB3_MeshCombiner_GenerateUV2Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22620};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate) == 0x80, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
