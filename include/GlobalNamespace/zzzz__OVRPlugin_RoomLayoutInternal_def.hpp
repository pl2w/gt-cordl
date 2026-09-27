#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RoomLayoutInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_RoomLayoutInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_RoomLayoutInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_RoomLayoutInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_RoomLayoutInternal, "", "OVRPlugin/RoomLayoutInternal");
// Dependencies System.Guid, System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/RoomLayoutInternal
struct CORDL_TYPE OVRPlugin_RoomLayoutInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_RoomLayoutInternal() ;

// Ctor Parameters [CppParam { name: "floorUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "ceilingUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "wallUuidCapacityInput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "wallUuidCountOutput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "wallUuids", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_RoomLayoutInternal(::System::Guid  floorUuid, ::System::Guid  ceilingUuid, int32_t  wallUuidCapacityInput, int32_t  wallUuidCountOutput, ::System::IntPtr  wallUuids) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12238};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field floorUuid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  floorUuid;

/// @brief Field ceilingUuid, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ceilingUuid;

/// @brief Field wallUuidCapacityInput, offset: 0x20, size: 0x4, def value: None
 int32_t  wallUuidCapacityInput;

/// @brief Field wallUuidCountOutput, offset: 0x24, size: 0x4, def value: None
 int32_t  wallUuidCountOutput;

/// @brief Field wallUuids, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  wallUuids;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_RoomLayoutInternal, floorUuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RoomLayoutInternal, ceilingUuid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RoomLayoutInternal, wallUuidCapacityInput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RoomLayoutInternal, wallUuidCountOutput) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RoomLayoutInternal, wallUuids) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_RoomLayoutInternal) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
