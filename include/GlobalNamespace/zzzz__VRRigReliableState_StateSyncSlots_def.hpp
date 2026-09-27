#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigReliableState_StateSyncSlots.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRRigReliableState_StateSyncSlots)
// Forward declare root types
namespace GlobalNamespace {
struct VRRigReliableState_StateSyncSlots;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRRigReliableState_StateSyncSlots);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigReliableState_StateSyncSlots, "", "VRRigReliableState/StateSyncSlots");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VRRigReliableState/StateSyncSlots
struct CORDL_TYPE VRRigReliableState_StateSyncSlots {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VRRigReliableState_StateSyncSlots_Unwrapped
enum struct __VRRigReliableState_StateSyncSlots_Unwrapped : int32_t {
__E_Hat = static_cast<int32_t>(0x0),
__E_Shirt = static_cast<int32_t>(0x1),
__E_Face = static_cast<int32_t>(0x2),
__E_Pants = static_cast<int32_t>(0x3),
__E_Length = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VRRigReliableState_StateSyncSlots_Unwrapped () const noexcept {
return static_cast<__VRRigReliableState_StateSyncSlots_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VRRigReliableState_StateSyncSlots() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VRRigReliableState_StateSyncSlots(int32_t  value__) noexcept;

/// @brief Field Face value: I32(2)
static ::GlobalNamespace::VRRigReliableState_StateSyncSlots const Face;

/// @brief Field Hat value: I32(0)
static ::GlobalNamespace::VRRigReliableState_StateSyncSlots const Hat;

/// @brief Field Length value: I32(4)
static ::GlobalNamespace::VRRigReliableState_StateSyncSlots const Length;

/// @brief Field Pants value: I32(3)
static ::GlobalNamespace::VRRigReliableState_StateSyncSlots const Pants;

/// @brief Field Shirt value: I32(1)
static ::GlobalNamespace::VRRigReliableState_StateSyncSlots const Shirt;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1282};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigReliableState_StateSyncSlots, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigReliableState_StateSyncSlots) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
