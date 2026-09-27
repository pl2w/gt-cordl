#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/GTHardCodedBones_EHandAndStowSlots.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTHardCodedBones_EHandAndStowSlots)
// Forward declare root types
namespace GlobalNamespace {
struct GTHardCodedBones_EHandAndStowSlots;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots, "GorillaTag.CosmeticSystem", "GTHardCodedBones/EHandAndStowSlots");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.GTHardCodedBones/EHandAndStowSlots
struct CORDL_TYPE GTHardCodedBones_EHandAndStowSlots {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTHardCodedBones_EHandAndStowSlots_Unwrapped
enum struct __GTHardCodedBones_EHandAndStowSlots_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_forearm_L = static_cast<int32_t>(0x7),
__E_hand_L = static_cast<int32_t>(0x8),
__E_forearm_R = static_cast<int32_t>(0x19),
__E_hand_R = static_cast<int32_t>(0x1a),
__E_body_AnchorFront_Chest = static_cast<int32_t>(0x2a),
__E_body_AnchorBackLeft = static_cast<int32_t>(0x2e),
__E_body_AnchorBackRight = static_cast<int32_t>(0x2f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTHardCodedBones_EHandAndStowSlots_Unwrapped () const noexcept {
return static_cast<__GTHardCodedBones_EHandAndStowSlots_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTHardCodedBones_EHandAndStowSlots() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTHardCodedBones_EHandAndStowSlots(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field body_AnchorBackLeft value: I32(46)
static ::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots const body_AnchorBackLeft;

/// @brief Field body_AnchorBackRight value: I32(47)
static ::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots const body_AnchorBackRight;

/// @brief Field body_AnchorFront_Chest value: I32(42)
static ::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots const body_AnchorFront_Chest;

/// @brief Field forearm_L value: I32(7)
static ::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots const forearm_L;

/// @brief Field forearm_R value: I32(25)
static ::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots const forearm_R;

/// @brief Field hand_L value: I32(8)
static ::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots const hand_L;

/// @brief Field hand_R value: I32(26)
static ::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots const hand_R;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
