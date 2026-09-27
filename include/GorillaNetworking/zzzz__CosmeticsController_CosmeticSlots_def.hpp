#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController_CosmeticSlots.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsController_CosmeticSlots)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsController_CosmeticSlots;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsController_CosmeticSlots);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsController_CosmeticSlots, "GorillaNetworking", "CosmeticsController/CosmeticSlots");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.CosmeticsController/CosmeticSlots
struct CORDL_TYPE CosmeticsController_CosmeticSlots {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticsController_CosmeticSlots_Unwrapped
enum struct __CosmeticsController_CosmeticSlots_Unwrapped : int32_t {
__E_Hat = static_cast<int32_t>(0x0),
__E_Badge = static_cast<int32_t>(0x1),
__E_Face = static_cast<int32_t>(0x2),
__E_ArmLeft = static_cast<int32_t>(0x3),
__E_ArmRight = static_cast<int32_t>(0x4),
__E_BackLeft = static_cast<int32_t>(0x5),
__E_BackRight = static_cast<int32_t>(0x6),
__E_HandLeft = static_cast<int32_t>(0x7),
__E_HandRight = static_cast<int32_t>(0x8),
__E_Chest = static_cast<int32_t>(0x9),
__E_Fur = static_cast<int32_t>(0xa),
__E_Shirt = static_cast<int32_t>(0xb),
__E_Pants = static_cast<int32_t>(0xc),
__E_Back = static_cast<int32_t>(0xd),
__E_Arms = static_cast<int32_t>(0xe),
__E_TagEffect = static_cast<int32_t>(0xf),
__E_Count = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticsController_CosmeticSlots_Unwrapped () const noexcept {
return static_cast<__CosmeticsController_CosmeticSlots_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_CosmeticSlots() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsController_CosmeticSlots(int32_t  value__) noexcept;

/// @brief Field ArmLeft value: I32(3)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const ArmLeft;

/// @brief Field ArmRight value: I32(4)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const ArmRight;

/// @brief Field Arms value: I32(14)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Arms;

/// @brief Field Back value: I32(13)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Back;

/// @brief Field BackLeft value: I32(5)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const BackLeft;

/// @brief Field BackRight value: I32(6)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const BackRight;

/// @brief Field Badge value: I32(1)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Badge;

/// @brief Field Chest value: I32(9)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Chest;

/// @brief Field Count value: I32(16)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Count;

/// @brief Field Face value: I32(2)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Face;

/// @brief Field Fur value: I32(10)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Fur;

/// @brief Field HandLeft value: I32(7)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const HandLeft;

/// @brief Field HandRight value: I32(8)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const HandRight;

/// @brief Field Hat value: I32(0)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Hat;

/// @brief Field Pants value: I32(12)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Pants;

/// @brief Field Shirt value: I32(11)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const Shirt;

/// @brief Field TagEffect value: I32(15)
static ::GlobalNamespace::CosmeticsController_CosmeticSlots const TagEffect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticSlots, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsController_CosmeticSlots) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
