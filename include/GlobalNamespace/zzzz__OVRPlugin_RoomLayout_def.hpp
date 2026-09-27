#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RoomLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_RoomLayout)
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_RoomLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_RoomLayout);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_RoomLayout, "", "OVRPlugin/RoomLayout");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/RoomLayout
struct CORDL_TYPE OVRPlugin_RoomLayout {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_RoomLayout() ;

// Ctor Parameters [CppParam { name: "floorUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "ceilingUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "wallUuids", ty: "::ArrayW<::System::Guid>", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_RoomLayout(::System::Guid  floorUuid, ::System::Guid  ceilingUuid, ::ArrayW<::System::Guid>  wallUuids) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12237};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field floorUuid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  floorUuid;

/// @brief Field ceilingUuid, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ceilingUuid;

/// @brief Field wallUuids, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Guid>  wallUuids;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_RoomLayout, floorUuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RoomLayout, ceilingUuid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RoomLayout, wallUuids) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_RoomLayout) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
