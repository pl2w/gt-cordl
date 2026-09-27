#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler_SpaceSharingInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ColocationSessionEventHandler_SpaceSharingInfo)
// Forward declare root types
namespace GlobalNamespace {
struct ColocationSessionEventHandler_SpaceSharingInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColocationSessionEventHandler_SpaceSharingInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColocationSessionEventHandler_SpaceSharingInfo, "Meta.XR.MultiplayerBlocks.Shared", "ColocationSessionEventHandler/SpaceSharingInfo");
// Dependencies System.Guid, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler/SpaceSharingInfo
struct CORDL_TYPE ColocationSessionEventHandler_SpaceSharingInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ColocationSessionEventHandler_SpaceSharingInfo() ;

// Ctor Parameters [CppParam { name: "RoomId", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "FloorAnchor", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }]
constexpr ColocationSessionEventHandler_SpaceSharingInfo(::System::Guid  RoomId, ::UnityEngine::Pose  FloorAnchor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30608};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field RoomId, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  RoomId;

/// @brief Field FloorAnchor, offset: 0x10, size: 0x1c, def value: None
 ::UnityEngine::Pose  FloorAnchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler_SpaceSharingInfo, RoomId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler_SpaceSharingInfo, FloorAnchor) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColocationSessionEventHandler_SpaceSharingInfo) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
