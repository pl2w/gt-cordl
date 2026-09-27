#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController_CosmeticCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsController_CosmeticCategory)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsController_CosmeticCategory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsController_CosmeticCategory);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsController_CosmeticCategory, "GorillaNetworking", "CosmeticsController/CosmeticCategory");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.CosmeticsController/CosmeticCategory
struct CORDL_TYPE CosmeticsController_CosmeticCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticsController_CosmeticCategory_Unwrapped
enum struct __CosmeticsController_CosmeticCategory_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Hat = static_cast<int32_t>(0x1),
__E_Badge = static_cast<int32_t>(0x2),
__E_Face = static_cast<int32_t>(0x3),
__E_Paw = static_cast<int32_t>(0x4),
__E_Chest = static_cast<int32_t>(0x5),
__E_Fur = static_cast<int32_t>(0x6),
__E_Shirt = static_cast<int32_t>(0x7),
__E_Back = static_cast<int32_t>(0x8),
__E_Arms = static_cast<int32_t>(0x9),
__E_Pants = static_cast<int32_t>(0xa),
__E_TagEffect = static_cast<int32_t>(0xb),
__E_Count = static_cast<int32_t>(0xc),
__E_Set = static_cast<int32_t>(0xd),
__E_Collectable = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticsController_CosmeticCategory_Unwrapped () const noexcept {
return static_cast<__CosmeticsController_CosmeticCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_CosmeticCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsController_CosmeticCategory(int32_t  value__) noexcept;

/// @brief Field Arms value: I32(9)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Arms;

/// @brief Field Back value: I32(8)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Back;

/// @brief Field Badge value: I32(2)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Badge;

/// @brief Field Chest value: I32(5)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Chest;

/// @brief Field Collectable value: I32(14)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Collectable;

/// @brief Field Count value: I32(12)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Count;

/// @brief Field Face value: I32(3)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Face;

/// @brief Field Fur value: I32(6)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Fur;

/// @brief Field Hat value: I32(1)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Hat;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const None;

/// @brief Field Pants value: I32(10)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Pants;

/// @brief Field Paw value: I32(4)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Paw;

/// @brief Field Set value: I32(13)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Set;

/// @brief Field Shirt value: I32(7)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const Shirt;

/// @brief Field TagEffect value: I32(11)
static ::GlobalNamespace::CosmeticsController_CosmeticCategory const TagEffect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4271};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticCategory, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsController_CosmeticCategory) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
