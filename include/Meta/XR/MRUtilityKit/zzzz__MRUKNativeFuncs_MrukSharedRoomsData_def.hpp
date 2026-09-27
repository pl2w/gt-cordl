#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukSharedRoomsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukSharedRoomsData)
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukSharedRoomsData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukSharedRoomsData");
// Dependencies System.Guid, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukSharedRoomsData
struct CORDL_TYPE MRUKNativeFuncs_MrukSharedRoomsData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukSharedRoomsData() ;

// Ctor Parameters [CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomUuids", ty: "::System::Guid*", modifiers: "", def_value: None, comment: None }, CppParam { name: "numRoomUuids", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "alignmentRoomUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomWorldPoseOnHost", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukSharedRoomsData(::System::Guid  groupUuid, ::System::Guid*  roomUuids, uint32_t  numRoomUuids, ::System::Guid  alignmentRoomUuid, ::UnityEngine::Pose  roomWorldPoseOnHost) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field groupUuid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  groupUuid;

/// @brief Field roomUuids, offset: 0x10, size: 0x8, def value: None
 ::System::Guid*  roomUuids;

/// @brief Field numRoomUuids, offset: 0x18, size: 0x4, def value: None
 uint32_t  numRoomUuids;

/// @brief Field alignmentRoomUuid, offset: 0x1c, size: 0x10, def value: None
 ::System::Guid  alignmentRoomUuid;

/// @brief Field roomWorldPoseOnHost, offset: 0x2c, size: 0x1c, def value: None
 ::UnityEngine::Pose  roomWorldPoseOnHost;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData, groupUuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData, roomUuids) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData, numRoomUuids) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData, alignmentRoomUuid) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData, roomWorldPoseOnHost) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
