#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/RuntimeMeshCombiner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_AfterMerge_def.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_CombineOnStart_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeMeshCombiner)
namespace GlobalNamespace {
struct RuntimeMeshCombiner_AfterMerge;
}
namespace GlobalNamespace {
struct RuntimeMeshCombiner_CombineOnStart;
}
namespace MTAssets::EasyMeshCombiner {
class RuntimeMeshCombiner_GameObjectWithMesh;
}
namespace MTAssets::EasyMeshCombiner {
class RuntimeMeshCombiner_OriginalGameObjectWithMesh;
}
namespace MTAssets::EasyMeshCombiner {
class RuntimeMeshCombiner_SubMeshToCombine;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace MTAssets::EasyMeshCombiner {
class RuntimeMeshCombiner;
}
namespace MTAssets::EasyMeshCombiner {
class RuntimeMeshCombiner_GameObjectWithMesh;
}
namespace MTAssets::EasyMeshCombiner {
class RuntimeMeshCombiner_OriginalGameObjectWithMesh;
}
namespace MTAssets::EasyMeshCombiner {
class RuntimeMeshCombiner_SubMeshToCombine;
}
// Write type traits
MARK_REF_T(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*);
MARK_REF_T(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*);
MARK_REF_T(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*);
MARK_REF_T(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine*);
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*, "MTAssets.EasyMeshCombiner", "RuntimeMeshCombiner");
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*, "MTAssets.EasyMeshCombiner", "RuntimeMeshCombiner/GameObjectWithMesh");
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*, "MTAssets.EasyMeshCombiner", "RuntimeMeshCombiner/OriginalGameObjectWithMesh");
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine*, "MTAssets.EasyMeshCombiner", "RuntimeMeshCombiner/SubMeshToCombine");
// [AddComponentMenu("MT Assets/Easy Mesh Combiner/Runtime Mesh Combiner")]
// Dependencies MTAssets.EasyMeshCombiner.RuntimeMeshCombiner::AfterMerge, MTAssets.EasyMeshCombiner.RuntimeMeshCombiner::CombineOnStart, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.RuntimeMeshCombiner
class CORDL_TYPE RuntimeMeshCombiner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AfterMerge = ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge;

using CombineOnStart = ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart;

using GameObjectWithMesh = ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh;

using OriginalGameObjectWithMesh = ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh;

using SubMeshToCombine = ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine;

/// @brief Field MAX_VERTICES_FOR_16BITS_MESH, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MAX_VERTICES_FOR_16BITS_MESH, put=__cordl_internal_set_MAX_VERTICES_FOR_16BITS_MESH)) int32_t  MAX_VERTICES_FOR_16BITS_MESH;

/// @brief Field addMeshColliderAfter, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_addMeshColliderAfter, put=__cordl_internal_set_addMeshColliderAfter)) bool  addMeshColliderAfter;

/// @brief Field afterMerge, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_afterMerge, put=__cordl_internal_set_afterMerge)) ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge  afterMerge;

/// @brief Field combineInChildren, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_combineInChildren, put=__cordl_internal_set_combineInChildren)) bool  combineInChildren;

/// @brief Field combineInactives, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_combineInactives, put=__cordl_internal_set_combineInactives)) bool  combineInactives;

/// @brief Field combineMeshesAtStartUp, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_combineMeshesAtStartUp, put=__cordl_internal_set_combineMeshesAtStartUp)) ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart  combineMeshesAtStartUp;

/// @brief Field garbageCollectorAfterUndo, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_garbageCollectorAfterUndo, put=__cordl_internal_set_garbageCollectorAfterUndo)) bool  garbageCollectorAfterUndo;

/// @brief Field onDoneMerge, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDoneMerge, put=__cordl_internal_set_onDoneMerge)) ::UnityEngine::Events::UnityEvent*  onDoneMerge;

/// @brief Field onDoneUnmerge, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDoneUnmerge, put=__cordl_internal_set_onDoneUnmerge)) ::UnityEngine::Events::UnityEvent*  onDoneUnmerge;

/// @brief Field optimizeResultingMesh, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_optimizeResultingMesh, put=__cordl_internal_set_optimizeResultingMesh)) bool  optimizeResultingMesh;

/// @brief Field originalEulerAngles, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalEulerAngles, put=__cordl_internal_set_originalEulerAngles)) ::UnityEngine::Vector3  originalEulerAngles;

/// @brief Field originalGameObjectsWithMeshToRestore, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalGameObjectsWithMeshToRestore, put=__cordl_internal_set_originalGameObjectsWithMeshToRestore)) ::System::Collections::Generic::List_1<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>*  originalGameObjectsWithMeshToRestore;

/// @brief Field originalPosition, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalPosition, put=__cordl_internal_set_originalPosition)) ::UnityEngine::Vector3  originalPosition;

/// @brief Field originalScale, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalScale, put=__cordl_internal_set_originalScale)) ::UnityEngine::Vector3  originalScale;

/// @brief Field recalculateNormals, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get_recalculateNormals, put=__cordl_internal_set_recalculateNormals)) bool  recalculateNormals;

/// @brief Field recalculateTangents, offset 0x63, size 0x1 
 __declspec(property(get=__cordl_internal_get_recalculateTangents, put=__cordl_internal_set_recalculateTangents)) bool  recalculateTangents;

/// @brief Field showDebugLogs, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_showDebugLogs, put=__cordl_internal_set_showDebugLogs)) bool  showDebugLogs;

/// @brief Field targetMeshes, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetMeshes, put=__cordl_internal_set_targetMeshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  targetMeshes;

/// @brief Field targetMeshesMerged, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_targetMeshesMerged, put=__cordl_internal_set_targetMeshesMerged)) bool  targetMeshesMerged;

/// @brief Method Awake, addr 0x5cb9c28, size 0xe4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CombineMeshes, addr 0x5cb7dac, size 0x1600, virtual false, abstract: false, final false
inline bool CombineMeshes() ;

/// @brief Method GetValidatedTargetGameObjects, addr 0x5cb9df0, size 0x1048, virtual false, abstract: false, final false
inline ::ArrayW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*> GetValidatedTargetGameObjects() ;

static inline ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner* New_ctor() ;

/// @brief Method Start, addr 0x5cb9d0c, size 0xe4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UndoMerge, addr 0x5cb93c0, size 0x558, virtual false, abstract: false, final false
inline bool UndoMerge() ;

constexpr int32_t const& __cordl_internal_get_MAX_VERTICES_FOR_16BITS_MESH() const;

constexpr int32_t& __cordl_internal_get_MAX_VERTICES_FOR_16BITS_MESH() ;

constexpr bool const& __cordl_internal_get_addMeshColliderAfter() const;

constexpr bool& __cordl_internal_get_addMeshColliderAfter() ;

constexpr ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge const& __cordl_internal_get_afterMerge() const;

constexpr ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge& __cordl_internal_get_afterMerge() ;

constexpr bool const& __cordl_internal_get_combineInChildren() const;

constexpr bool& __cordl_internal_get_combineInChildren() ;

constexpr bool const& __cordl_internal_get_combineInactives() const;

constexpr bool& __cordl_internal_get_combineInactives() ;

constexpr ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart const& __cordl_internal_get_combineMeshesAtStartUp() const;

constexpr ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart& __cordl_internal_get_combineMeshesAtStartUp() ;

constexpr bool const& __cordl_internal_get_garbageCollectorAfterUndo() const;

constexpr bool& __cordl_internal_get_garbageCollectorAfterUndo() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onDoneMerge() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onDoneMerge() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onDoneUnmerge() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onDoneUnmerge() ;

constexpr bool const& __cordl_internal_get_optimizeResultingMesh() const;

constexpr bool& __cordl_internal_get_optimizeResultingMesh() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalEulerAngles() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalEulerAngles() ;

constexpr ::System::Collections::Generic::List_1<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>* const& __cordl_internal_get_originalGameObjectsWithMeshToRestore() const;

constexpr ::System::Collections::Generic::List_1<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>*& __cordl_internal_get_originalGameObjectsWithMeshToRestore() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalScale() ;

constexpr bool const& __cordl_internal_get_recalculateNormals() const;

constexpr bool& __cordl_internal_get_recalculateNormals() ;

constexpr bool const& __cordl_internal_get_recalculateTangents() const;

constexpr bool& __cordl_internal_get_recalculateTangents() ;

constexpr bool const& __cordl_internal_get_showDebugLogs() const;

constexpr bool& __cordl_internal_get_showDebugLogs() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_targetMeshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_targetMeshes() ;

constexpr bool const& __cordl_internal_get_targetMeshesMerged() const;

constexpr bool& __cordl_internal_get_targetMeshesMerged() ;

constexpr void __cordl_internal_set_MAX_VERTICES_FOR_16BITS_MESH(int32_t  value) ;

constexpr void __cordl_internal_set_addMeshColliderAfter(bool  value) ;

constexpr void __cordl_internal_set_afterMerge(::GlobalNamespace::RuntimeMeshCombiner_AfterMerge  value) ;

constexpr void __cordl_internal_set_combineInChildren(bool  value) ;

constexpr void __cordl_internal_set_combineInactives(bool  value) ;

constexpr void __cordl_internal_set_combineMeshesAtStartUp(::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart  value) ;

constexpr void __cordl_internal_set_garbageCollectorAfterUndo(bool  value) ;

constexpr void __cordl_internal_set_onDoneMerge(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onDoneUnmerge(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_optimizeResultingMesh(bool  value) ;

constexpr void __cordl_internal_set_originalEulerAngles(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_originalGameObjectsWithMeshToRestore(::System::Collections::Generic::List_1<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>*  value) ;

constexpr void __cordl_internal_set_originalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_originalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_recalculateNormals(bool  value) ;

constexpr void __cordl_internal_set_recalculateTangents(bool  value) ;

constexpr void __cordl_internal_set_showDebugLogs(bool  value) ;

constexpr void __cordl_internal_set_targetMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_targetMeshesMerged(bool  value) ;

/// @brief Method .ctor, addr 0x5cbae40, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method isTargetMeshesMerged, addr 0x5cbae38, size 0x8, virtual false, abstract: false, final false
inline bool isTargetMeshesMerged() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeMeshCombiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMeshCombiner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeMeshCombiner(RuntimeMeshCombiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMeshCombiner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeMeshCombiner(RuntimeMeshCombiner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4468};

/// @brief Field MAX_VERTICES_FOR_16BITS_MESH, offset: 0x20, size: 0x4, def value: None
 int32_t  ___MAX_VERTICES_FOR_16BITS_MESH;

/// @brief Field originalPosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalPosition;

/// @brief Field originalEulerAngles, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalEulerAngles;

/// @brief Field originalScale, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalScale;

/// @brief Field originalGameObjectsWithMeshToRestore, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>*  ___originalGameObjectsWithMeshToRestore;

/// @brief Field targetMeshesMerged, offset: 0x50, size: 0x1, def value: None
 bool  ___targetMeshesMerged;

/// [HideInInspector]
/// @brief Field afterMerge, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge  ___afterMerge;

/// [HideInInspector]
/// @brief Field addMeshColliderAfter, offset: 0x58, size: 0x1, def value: None
 bool  ___addMeshColliderAfter;

/// [HideInInspector]
/// @brief Field combineMeshesAtStartUp, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart  ___combineMeshesAtStartUp;

/// [HideInInspector]
/// @brief Field combineInChildren, offset: 0x60, size: 0x1, def value: None
 bool  ___combineInChildren;

/// [HideInInspector]
/// @brief Field combineInactives, offset: 0x61, size: 0x1, def value: None
 bool  ___combineInactives;

/// [HideInInspector]
/// @brief Field recalculateNormals, offset: 0x62, size: 0x1, def value: None
 bool  ___recalculateNormals;

/// [HideInInspector]
/// @brief Field recalculateTangents, offset: 0x63, size: 0x1, def value: None
 bool  ___recalculateTangents;

/// [HideInInspector]
/// @brief Field optimizeResultingMesh, offset: 0x64, size: 0x1, def value: None
 bool  ___optimizeResultingMesh;

/// [HideInInspector]
/// @brief Field targetMeshes, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___targetMeshes;

/// [HideInInspector]
/// @brief Field showDebugLogs, offset: 0x70, size: 0x1, def value: None
 bool  ___showDebugLogs;

/// [HideInInspector]
/// @brief Field garbageCollectorAfterUndo, offset: 0x71, size: 0x1, def value: None
 bool  ___garbageCollectorAfterUndo;

/// @brief Field onDoneMerge, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onDoneMerge;

/// @brief Field onDoneUnmerge, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onDoneUnmerge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___MAX_VERTICES_FOR_16BITS_MESH) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___originalPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___originalEulerAngles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___originalScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___originalGameObjectsWithMeshToRestore) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___targetMeshesMerged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___afterMerge) == 0x54, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___addMeshColliderAfter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___combineMeshesAtStartUp) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___combineInChildren) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___combineInactives) == 0x61, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___recalculateNormals) == 0x62, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___recalculateTangents) == 0x63, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___optimizeResultingMesh) == 0x64, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___targetMeshes) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___showDebugLogs) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___garbageCollectorAfterUndo) == 0x71, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___onDoneMerge) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner, ___onDoneUnmerge) == 0x80, "Offset mismatch!");

static_assert(sizeof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner) == 0x88, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner
// Dependencies System.Object
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.RuntimeMeshCombiner/SubMeshToCombine
class CORDL_TYPE RuntimeMeshCombiner_SubMeshToCombine : public ::System::Object {
public:
// Declarations
/// @brief Field meshFilter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field meshRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field subMeshIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_subMeshIndex, put=__cordl_internal_set_subMeshIndex)) int32_t  subMeshIndex;

/// @brief Field transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform>  transform;

static inline ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine* New_ctor(::UnityEngine::Transform*  transform, ::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::MeshRenderer*  meshRenderer, int32_t  subMeshIndex) ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr int32_t const& __cordl_internal_get_subMeshIndex() const;

constexpr int32_t& __cordl_internal_get_subMeshIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_subMeshIndex(int32_t  value) ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5cd0e38, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  transform, ::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::MeshRenderer*  meshRenderer, int32_t  subMeshIndex) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeMeshCombiner_SubMeshToCombine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMeshCombiner_SubMeshToCombine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeMeshCombiner_SubMeshToCombine(RuntimeMeshCombiner_SubMeshToCombine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMeshCombiner_SubMeshToCombine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeMeshCombiner_SubMeshToCombine(RuntimeMeshCombiner_SubMeshToCombine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4465};

/// @brief Field transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transform;

/// @brief Field meshFilter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// @brief Field meshRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field subMeshIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___subMeshIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine, ___meshFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine, ___meshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine, ___subMeshIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine) == 0x30, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner
// Dependencies System.Object
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.RuntimeMeshCombiner/OriginalGameObjectWithMesh
class CORDL_TYPE RuntimeMeshCombiner_OriginalGameObjectWithMesh : public ::System::Object {
public:
// Declarations
/// @brief Field gameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field meshRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field originalGoState, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_originalGoState, put=__cordl_internal_set_originalGoState)) bool  originalGoState;

/// @brief Field originalMrState, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_originalMrState, put=__cordl_internal_set_originalMrState)) bool  originalMrState;

static inline ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh* New_ctor(::UnityEngine::GameObject*  gameObject, bool  originalGoState, ::UnityEngine::MeshRenderer*  meshRenderer, bool  originalMrState) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr bool const& __cordl_internal_get_originalGoState() const;

constexpr bool& __cordl_internal_get_originalGoState() ;

constexpr bool const& __cordl_internal_get_originalMrState() const;

constexpr bool& __cordl_internal_get_originalMrState() ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_originalGoState(bool  value) ;

constexpr void __cordl_internal_set_originalMrState(bool  value) ;

/// @brief Method .ctor, addr 0x5cd0dd8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  gameObject, bool  originalGoState, ::UnityEngine::MeshRenderer*  meshRenderer, bool  originalMrState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeMeshCombiner_OriginalGameObjectWithMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMeshCombiner_OriginalGameObjectWithMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeMeshCombiner_OriginalGameObjectWithMesh(RuntimeMeshCombiner_OriginalGameObjectWithMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMeshCombiner_OriginalGameObjectWithMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeMeshCombiner_OriginalGameObjectWithMesh(RuntimeMeshCombiner_OriginalGameObjectWithMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4464};

/// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field originalGoState, offset: 0x18, size: 0x1, def value: None
 bool  ___originalGoState;

/// @brief Field meshRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field originalMrState, offset: 0x28, size: 0x1, def value: None
 bool  ___originalMrState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh, ___originalGoState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh, ___meshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh, ___originalMrState) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh) == 0x30, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner
// Dependencies System.Object
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.RuntimeMeshCombiner/GameObjectWithMesh
class CORDL_TYPE RuntimeMeshCombiner_GameObjectWithMesh : public ::System::Object {
public:
// Declarations
/// @brief Field gameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field meshFilter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field meshRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

static inline ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh* New_ctor(::UnityEngine::GameObject*  gameObject, ::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::MeshRenderer*  meshRenderer) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x5cd0d78, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  gameObject, ::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::MeshRenderer*  meshRenderer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeMeshCombiner_GameObjectWithMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMeshCombiner_GameObjectWithMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeMeshCombiner_GameObjectWithMesh(RuntimeMeshCombiner_GameObjectWithMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMeshCombiner_GameObjectWithMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeMeshCombiner_GameObjectWithMesh(RuntimeMeshCombiner_GameObjectWithMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4463};

/// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field meshFilter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// @brief Field meshRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh, ___meshFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh, ___meshRenderer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh) == 0x28, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner
