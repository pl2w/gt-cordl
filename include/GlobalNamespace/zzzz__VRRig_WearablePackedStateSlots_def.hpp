#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRig_WearablePackedStateSlots.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRRig_WearablePackedStateSlots)
// Forward declare root types
namespace GlobalNamespace {
struct VRRig_WearablePackedStateSlots;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRRig_WearablePackedStateSlots);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRig_WearablePackedStateSlots, "", "VRRig/WearablePackedStateSlots");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VRRig/WearablePackedStateSlots
struct CORDL_TYPE VRRig_WearablePackedStateSlots {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VRRig_WearablePackedStateSlots_Unwrapped
enum struct __VRRig_WearablePackedStateSlots_Unwrapped : int32_t {
__E_Hat = static_cast<int32_t>(0x0),
__E_LeftHand = static_cast<int32_t>(0x1),
__E_RightHand = static_cast<int32_t>(0x2),
__E_Face = static_cast<int32_t>(0x3),
__E_Pants1 = static_cast<int32_t>(0x4),
__E_Pants2 = static_cast<int32_t>(0x5),
__E_Badge = static_cast<int32_t>(0x6),
__E_Fur = static_cast<int32_t>(0x7),
__E_Shirt = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VRRig_WearablePackedStateSlots_Unwrapped () const noexcept {
return static_cast<__VRRig_WearablePackedStateSlots_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VRRig_WearablePackedStateSlots() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VRRig_WearablePackedStateSlots(int32_t  value__) noexcept;

/// @brief Field Badge value: I32(6)
static ::GlobalNamespace::VRRig_WearablePackedStateSlots const Badge;

/// @brief Field Face value: I32(3)
static ::GlobalNamespace::VRRig_WearablePackedStateSlots const Face;

/// @brief Field Fur value: I32(7)
static ::GlobalNamespace::VRRig_WearablePackedStateSlots const Fur;

/// @brief Field Hat value: I32(0)
static ::GlobalNamespace::VRRig_WearablePackedStateSlots const Hat;

/// @brief Field LeftHand value: I32(1)
static ::GlobalNamespace::VRRig_WearablePackedStateSlots const LeftHand;

/// @brief Field Pants1 value: I32(4)
static ::GlobalNamespace::VRRig_WearablePackedStateSlots const Pants1;

/// @brief Field Pants2 value: I32(5)
static ::GlobalNamespace::VRRig_WearablePackedStateSlots const Pants2;

/// @brief Field RightHand value: I32(2)
static ::GlobalNamespace::VRRig_WearablePackedStateSlots const RightHand;

/// @brief Field Shirt value: I32(8)
static ::GlobalNamespace::VRRig_WearablePackedStateSlots const Shirt;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1270};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRig_WearablePackedStateSlots, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRig_WearablePackedStateSlots) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
