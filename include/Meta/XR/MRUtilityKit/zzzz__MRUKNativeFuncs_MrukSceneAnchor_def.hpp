#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukSceneAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukLabel_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukPlane_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukVolume_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukSceneAnchor)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukSceneAnchor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukSceneAnchor");
// Dependencies Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukLabel, Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukPlane, Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukVolume, System.Guid, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukSceneAnchor
struct CORDL_TYPE MRUKNativeFuncs_MrukSceneAnchor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukSceneAnchor() ;

// Ctor Parameters [CppParam { name: "space", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "volume", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukVolume", modifiers: "", def_value: None, comment: None }, CppParam { name: "plane", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukPlane", modifiers: "", def_value: None, comment: None }, CppParam { name: "semanticLabel", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukLabel", modifiers: "", def_value: None, comment: None }, CppParam { name: "planeBoundary", ty: "::UnityEngine::Vector2*", modifiers: "", def_value: None, comment: None }, CppParam { name: "globalMeshIndices", ty: "uint32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "globalMeshPositions", ty: "::UnityEngine::Vector3*", modifiers: "", def_value: None, comment: None }, CppParam { name: "planeBoundaryCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "globalMeshIndicesCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "globalMeshPositionsCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasVolume", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasPlane", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukSceneAnchor(uint64_t  space, ::System::Guid  uuid, ::System::Guid  roomUuid, ::UnityEngine::Pose  pose, ::GlobalNamespace::MRUKNativeFuncs_MrukVolume  volume, ::GlobalNamespace::MRUKNativeFuncs_MrukPlane  plane, ::GlobalNamespace::MRUKNativeFuncs_MrukLabel  semanticLabel, ::UnityEngine::Vector2*  planeBoundary, uint32_t*  globalMeshIndices, ::UnityEngine::Vector3*  globalMeshPositions, uint32_t  planeBoundaryCount, uint32_t  globalMeshIndicesCount, uint32_t  globalMeshPositionsCount, bool  hasVolume, bool  hasPlane) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25805};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field space, offset: 0x0, size: 0x8, def value: None
 uint64_t  space;

/// @brief Field uuid, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  uuid;

/// @brief Field roomUuid, offset: 0x18, size: 0x10, def value: None
 ::System::Guid  roomUuid;

/// @brief Field pose, offset: 0x28, size: 0x1c, def value: None
 ::UnityEngine::Pose  pose;

/// @brief Field volume, offset: 0x44, size: 0x18, def value: None
 ::GlobalNamespace::MRUKNativeFuncs_MrukVolume  volume;

/// @brief Field plane, offset: 0x5c, size: 0x10, def value: None
 ::GlobalNamespace::MRUKNativeFuncs_MrukPlane  plane;

/// @brief Field semanticLabel, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::MRUKNativeFuncs_MrukLabel  semanticLabel;

/// @brief Field planeBoundary, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2*  planeBoundary;

/// @brief Field globalMeshIndices, offset: 0x78, size: 0x8, def value: None
 uint32_t*  globalMeshIndices;

/// @brief Field globalMeshPositions, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector3*  globalMeshPositions;

/// @brief Field planeBoundaryCount, offset: 0x88, size: 0x4, def value: None
 uint32_t  planeBoundaryCount;

/// @brief Field globalMeshIndicesCount, offset: 0x8c, size: 0x4, def value: None
 uint32_t  globalMeshIndicesCount;

/// @brief Field globalMeshPositionsCount, offset: 0x90, size: 0x4, def value: None
 uint32_t  globalMeshPositionsCount;

/// @brief Field hasVolume, offset: 0x94, size: 0x1, def value: None
 bool  hasVolume;

/// @brief Field hasPlane, offset: 0x95, size: 0x1, def value: None
 bool  hasPlane;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, uuid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, roomUuid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, pose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, volume) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, plane) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, semanticLabel) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, planeBoundary) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, globalMeshIndices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, globalMeshPositions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, planeBoundaryCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, globalMeshIndicesCount) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, globalMeshPositionsCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, hasVolume) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor, hasPlane) == 0x95, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
