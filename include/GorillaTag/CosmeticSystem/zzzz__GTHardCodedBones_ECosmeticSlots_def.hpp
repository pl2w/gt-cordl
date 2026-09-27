#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/GTHardCodedBones_ECosmeticSlots.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTHardCodedBones_ECosmeticSlots)
// Forward declare root types
namespace GlobalNamespace {
struct GTHardCodedBones_ECosmeticSlots;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTHardCodedBones_ECosmeticSlots);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTHardCodedBones_ECosmeticSlots, "GorillaTag.CosmeticSystem", "GTHardCodedBones/ECosmeticSlots");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.GTHardCodedBones/ECosmeticSlots
struct CORDL_TYPE GTHardCodedBones_ECosmeticSlots {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTHardCodedBones_ECosmeticSlots_Unwrapped
enum struct __GTHardCodedBones_ECosmeticSlots_Unwrapped : int32_t {
__E_Hat = static_cast<int32_t>(0x4),
__E_Badge = static_cast<int32_t>(0x2b),
__E_Face = static_cast<int32_t>(0x3),
__E_ArmLeft = static_cast<int32_t>(0x6),
__E_ArmRight = static_cast<int32_t>(0x18),
__E_BackLeft = static_cast<int32_t>(0x2e),
__E_BackRight = static_cast<int32_t>(0x2f),
__E_HandLeft = static_cast<int32_t>(0x8),
__E_HandRight = static_cast<int32_t>(0x1a),
__E_Chest = static_cast<int32_t>(0x2a),
__E_Fur = static_cast<int32_t>(0x1),
__E_Shirt = static_cast<int32_t>(0x2),
__E_Pants = static_cast<int32_t>(0x30),
__E_Back = static_cast<int32_t>(0x2d),
__E_Arms = static_cast<int32_t>(0x2),
__E_TagEffect = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTHardCodedBones_ECosmeticSlots_Unwrapped () const noexcept {
return static_cast<__GTHardCodedBones_ECosmeticSlots_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTHardCodedBones_ECosmeticSlots() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTHardCodedBones_ECosmeticSlots(int32_t  value__) noexcept;

/// @brief Field ArmLeft value: I32(6)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const ArmLeft;

/// @brief Field ArmRight value: I32(24)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const ArmRight;

/// @brief Field Arms value: I32(2)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const Arms;

/// @brief Field Back value: I32(45)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const Back;

/// @brief Field BackLeft value: I32(46)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const BackLeft;

/// @brief Field BackRight value: I32(47)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const BackRight;

/// @brief Field Badge value: I32(43)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const Badge;

/// @brief Field Chest value: I32(42)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const Chest;

/// @brief Field Face value: I32(3)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const Face;

/// @brief Field Fur value: I32(1)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const Fur;

/// @brief Field HandLeft value: I32(8)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const HandLeft;

/// @brief Field HandRight value: I32(26)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const HandRight;

/// @brief Field Hat value: I32(4)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const Hat;

/// @brief Field Pants value: I32(48)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const Pants;

/// @brief Field Shirt value: I32(2)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const Shirt;

/// @brief Field TagEffect value: I32(0)
static ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots const TagEffect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4759};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTHardCodedBones_ECosmeticSlots, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTHardCodedBones_ECosmeticSlots) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
