#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/GTHardCodedBones_EStowSlots.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTHardCodedBones_EStowSlots)
// Forward declare root types
namespace GlobalNamespace {
struct GTHardCodedBones_EStowSlots;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTHardCodedBones_EStowSlots);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTHardCodedBones_EStowSlots, "GorillaTag.CosmeticSystem", "GTHardCodedBones/EStowSlots");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.GTHardCodedBones/EStowSlots
struct CORDL_TYPE GTHardCodedBones_EStowSlots {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTHardCodedBones_EStowSlots_Unwrapped
enum struct __GTHardCodedBones_EStowSlots_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_forearm_L = static_cast<int32_t>(0x7),
__E_forearm_R = static_cast<int32_t>(0x19),
__E_body_AnchorFront_Chest = static_cast<int32_t>(0x2a),
__E_body_AnchorBackLeft = static_cast<int32_t>(0x2e),
__E_body_AnchorBackRight = static_cast<int32_t>(0x2f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTHardCodedBones_EStowSlots_Unwrapped () const noexcept {
return static_cast<__GTHardCodedBones_EStowSlots_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTHardCodedBones_EStowSlots() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTHardCodedBones_EStowSlots(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GTHardCodedBones_EStowSlots const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field body_AnchorBackLeft value: I32(46)
static ::GlobalNamespace::GTHardCodedBones_EStowSlots const body_AnchorBackLeft;

/// @brief Field body_AnchorBackRight value: I32(47)
static ::GlobalNamespace::GTHardCodedBones_EStowSlots const body_AnchorBackRight;

/// @brief Field body_AnchorFront_Chest value: I32(42)
static ::GlobalNamespace::GTHardCodedBones_EStowSlots const body_AnchorFront_Chest;

/// @brief Field forearm_L value: I32(7)
static ::GlobalNamespace::GTHardCodedBones_EStowSlots const forearm_L;

/// @brief Field forearm_R value: I32(25)
static ::GlobalNamespace::GTHardCodedBones_EStowSlots const forearm_R;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTHardCodedBones_EStowSlots, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTHardCodedBones_EStowSlots) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
