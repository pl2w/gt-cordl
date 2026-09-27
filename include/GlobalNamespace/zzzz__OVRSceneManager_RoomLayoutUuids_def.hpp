#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager_RoomLayoutUuids.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRSceneManager_RoomLayoutUuids)
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneManager_RoomLayoutUuids;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids, "", "OVRSceneManager/RoomLayoutUuids");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/RoomLayoutUuids
struct CORDL_TYPE OVRSceneManager_RoomLayoutUuids {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_RoomLayoutUuids() ;

// Ctor Parameters [CppParam { name: "Floor", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "Ceiling", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "Walls", ty: "::ArrayW<::System::Guid>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneManager_RoomLayoutUuids(::System::Guid  Floor, ::System::Guid  Ceiling, ::ArrayW<::System::Guid>  Walls) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12417};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Floor, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  Floor;

/// @brief Field Ceiling, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  Ceiling;

/// @brief Field Walls, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Guid>  Walls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids, Floor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids, Ceiling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids, Walls) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
