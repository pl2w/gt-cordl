#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBakerCommon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MB3_MeshBakerRoot_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshBakerCommon)
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_GenerateUV2Delegate;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace GlobalNamespace {
class MB3_MeshBakerCommon___c;
}
namespace GlobalNamespace {
class MB3_TextureBaker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_MeshBakerCommon;
}
namespace GlobalNamespace {
class MB3_MeshBakerCommon___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_MeshBakerCommon*);
MARK_REF_T(::GlobalNamespace::MB3_MeshBakerCommon___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshBakerCommon*, "", "MB3_MeshBakerCommon");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshBakerCommon___c*, "", "MB3_MeshBakerCommon/<>c");
// Dependencies MB3_MeshBakerRoot
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_MeshBakerCommon
class CORDL_TYPE MB3_MeshBakerCommon : public ::GlobalNamespace::MB3_MeshBakerRoot {
public:
// Declarations
using __c = ::GlobalNamespace::MB3_MeshBakerCommon___c;

/// @brief Field _clearBuffersAfterBake, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__clearBuffersAfterBake, put=__cordl_internal_set__clearBuffersAfterBake)) bool  _clearBuffersAfterBake;

/// @brief Field bakeAssetsInPlaceFolderPath, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakeAssetsInPlaceFolderPath, put=__cordl_internal_set_bakeAssetsInPlaceFolderPath)) ::StringW  bakeAssetsInPlaceFolderPath;

 __declspec(property(get=get_clearBuffersAfterBake, put=set_clearBuffersAfterBake)) bool  clearBuffersAfterBake;

 __declspec(property(get=get_meshCombiner)) ::DigitalOpus::MB::Core::MB3_MeshCombiner*  meshCombiner;

/// @brief Field objsToMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_objsToMesh, put=__cordl_internal_set_objsToMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh;

/// @brief Field parentSceneObject, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentSceneObject, put=__cordl_internal_set_parentSceneObject)) ::UnityW<::UnityEngine::Transform>  parentSceneObject;

/// @brief Field resultPrefab, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultPrefab, put=__cordl_internal_set_resultPrefab)) ::UnityW<::UnityEngine::GameObject>  resultPrefab;

/// @brief Field resultPrefabLeaveInstanceInSceneAfterBake, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_resultPrefabLeaveInstanceInSceneAfterBake, put=__cordl_internal_set_resultPrefabLeaveInstanceInSceneAfterBake)) bool  resultPrefabLeaveInstanceInSceneAfterBake;

 __declspec(property(get=get_textureBakeResults, put=set_textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  textureBakeResults;

/// @brief Field useObjsToMeshFromTexBaker, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_useObjsToMeshFromTexBaker, put=__cordl_internal_set_useObjsToMeshFromTexBaker)) bool  useObjsToMeshFromTexBaker;

/// @brief Field version, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Method AddDeleteGameObjects, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource) ;

/// @brief Method AddDeleteGameObjectsByID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource) ;

/// @brief Method Apply, addr 0x9d77360, size 0x220, virtual true, abstract: false, final false
inline bool Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method Apply, addr 0x9d771c8, size 0x198, virtual true, abstract: false, final false
inline bool Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method ClearMesh, addr 0x9d76f44, size 0x38, virtual true, abstract: false, final false
inline void ClearMesh() ;

/// @brief Method ClearMesh, addr 0x9d76f7c, size 0x48, virtual true, abstract: false, final false
inline void ClearMesh(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method CombinedMeshContains, addr 0x9d77580, size 0x38, virtual true, abstract: false, final false
inline bool CombinedMeshContains(::UnityEngine::GameObject*  go) ;

/// @brief Method DestroyMesh, addr 0x9d76fc4, size 0x38, virtual true, abstract: false, final false
inline void DestroyMesh() ;

/// @brief Method DestroyMeshEditor, addr 0x9d76ffc, size 0x38, virtual true, abstract: false, final false
inline void DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method EnableDisableSourceObjectRenderers, addr 0x9d76ca4, size 0x2a0, virtual false, abstract: false, final false
inline void EnableDisableSourceObjectRenderers(bool  show) ;

/// @brief Method GetNumObjectsInCombined, addr 0x9d77034, size 0x2c, virtual true, abstract: false, final false
inline int32_t GetNumObjectsInCombined() ;

/// @brief Method GetObjectsToCombine, addr 0x9d766d8, size 0x250, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetObjectsToCombine() ;

/// @brief Method GetTextureBaker, addr 0x9d77060, size 0x168, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MB3_TextureBaker> GetTextureBaker() ;

static inline ::GlobalNamespace::MB3_MeshBakerCommon* New_ctor() ;

/// [ContextMenu("Purge Objects to Combine of null references")]
/// @brief Method PurgeNullsFromObjectsToCombine, addr 0x9d76928, size 0x37c, virtual true, abstract: false, final false
inline void PurgeNullsFromObjectsToCombine() ;

/// @brief Method UpdateGameObjects, addr 0x9d775b8, size 0x108, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos) ;

/// @brief Method UpdateGameObjects, addr 0x9d777c8, size 0x130, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV1, bool  updateUV2, bool  updateColors, bool  updateSkinningInfo) ;

/// @brief Method UpdateGameObjects, addr 0x9d778f8, size 0x174, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo) ;

/// @brief Method UpdateGameObjects, addr 0x9d776c0, size 0x108, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  updateBounds) ;

/// @brief Method UpdateSkinnedMeshApproximateBounds, addr 0x9d77a6c, size 0x50, virtual true, abstract: false, final false
inline void UpdateSkinnedMeshApproximateBounds() ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBones, addr 0x9d77abc, size 0x50, virtual true, abstract: false, final false
inline void UpdateSkinnedMeshApproximateBoundsFromBones() ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBounds, addr 0x9d77b0c, size 0x50, virtual true, abstract: false, final false
inline void UpdateSkinnedMeshApproximateBoundsFromBounds() ;

/// @brief Method UpgradeToCurrentVersionIfNecessary, addr 0x9d762f8, size 0x58, virtual false, abstract: false, final false
inline void UpgradeToCurrentVersionIfNecessary() ;

/// @brief Method _ValidateForUpdateSkinnedMeshBounds, addr 0x9d77b5c, size 0x1d8, virtual true, abstract: false, final false
inline bool _ValidateForUpdateSkinnedMeshBounds() ;

constexpr bool const& __cordl_internal_get__clearBuffersAfterBake() const;

constexpr bool& __cordl_internal_get__clearBuffersAfterBake() ;

constexpr ::StringW const& __cordl_internal_get_bakeAssetsInPlaceFolderPath() const;

constexpr ::StringW& __cordl_internal_get_bakeAssetsInPlaceFolderPath() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objsToMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objsToMesh() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentSceneObject() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentSceneObject() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_resultPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_resultPrefab() ;

constexpr bool const& __cordl_internal_get_resultPrefabLeaveInstanceInSceneAfterBake() const;

constexpr bool& __cordl_internal_get_resultPrefabLeaveInstanceInSceneAfterBake() ;

constexpr bool const& __cordl_internal_get_useObjsToMeshFromTexBaker() const;

constexpr bool& __cordl_internal_get_useObjsToMeshFromTexBaker() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set__clearBuffersAfterBake(bool  value) ;

constexpr void __cordl_internal_set_bakeAssetsInPlaceFolderPath(::StringW  value) ;

constexpr void __cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_parentSceneObject(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_resultPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_resultPrefabLeaveInstanceInSceneAfterBake(bool  value) ;

constexpr void __cordl_internal_set_useObjsToMeshFromTexBaker(bool  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x9d764e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VERSION, addr 0x9d764f0, size 0x8, virtual false, abstract: false, final false
static inline int32_t get_VERSION() ;

/// @brief Method get_clearBuffersAfterBake, addr 0x9d764f8, size 0xb8, virtual false, abstract: false, final false
inline bool get_clearBuffersAfterBake() ;

/// @brief Method get_meshCombiner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner* get_meshCombiner() ;

/// @brief Method get_textureBakeResults, addr 0x9d76674, size 0x2c, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> get_textureBakeResults() ;

/// @brief Method set_clearBuffersAfterBake, addr 0x9d765b0, size 0xc4, virtual false, abstract: false, final false
inline void set_clearBuffersAfterBake(bool  value) ;

/// @brief Method set_textureBakeResults, addr 0x9d766a0, size 0x38, virtual true, abstract: false, final false
inline void set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerCommon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerCommon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerCommon(MB3_MeshBakerCommon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerCommon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerCommon(MB3_MeshBakerCommon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22571};

/// @brief Field version, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___version;

/// [NonReorderable]
/// @brief Field objsToMesh, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objsToMesh;

/// @brief Field useObjsToMeshFromTexBaker, offset: 0x38, size: 0x1, def value: None
 bool  ___useObjsToMeshFromTexBaker;

/// [FormerlySerializedAs("clearBuffersAfterBake")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field _clearBuffersAfterBake, offset: 0x39, size: 0x1, def value: None
 bool  ____clearBuffersAfterBake;

/// @brief Field bakeAssetsInPlaceFolderPath, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___bakeAssetsInPlaceFolderPath;

/// [HideInInspector]
/// @brief Field resultPrefab, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___resultPrefab;

/// [HideInInspector]
/// @brief Field resultPrefabLeaveInstanceInSceneAfterBake, offset: 0x50, size: 0x1, def value: None
 bool  ___resultPrefabLeaveInstanceInSceneAfterBake;

/// [HideInInspector]
/// @brief Field parentSceneObject, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentSceneObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerCommon, ___version) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerCommon, ___objsToMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerCommon, ___useObjsToMeshFromTexBaker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerCommon, ____clearBuffersAfterBake) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerCommon, ___bakeAssetsInPlaceFolderPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerCommon, ___resultPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerCommon, ___resultPrefabLeaveInstanceInSceneAfterBake) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerCommon, ___parentSceneObject) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshBakerCommon) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_MeshBakerCommon/<>c
class CORDL_TYPE MB3_MeshBakerCommon___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::MB3_MeshBakerCommon___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*  __9__20_0;

static inline ::GlobalNamespace::MB3_MeshBakerCommon___c* New_ctor() ;

/// @brief Method <PurgeNullsFromObjectsToCombine>b__20_0, addr 0x9d77dac, size 0x5c, virtual false, abstract: false, final false
inline bool _PurgeNullsFromObjectsToCombine_b__20_0(::UnityEngine::GameObject*  obj) ;

/// @brief Method .ctor, addr 0x9d77da4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MB3_MeshBakerCommon___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>* getStaticF___9__20_0() ;

static inline void setStaticF___9(::GlobalNamespace::MB3_MeshBakerCommon___c*  value) ;

static inline void setStaticF___9__20_0(::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerCommon___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerCommon___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerCommon___c(MB3_MeshBakerCommon___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerCommon___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerCommon___c(MB3_MeshBakerCommon___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22570};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MB3_MeshBakerCommon___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
