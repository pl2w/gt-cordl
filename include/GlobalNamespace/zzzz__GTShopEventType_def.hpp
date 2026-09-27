#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShopEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTShopEventType)
// Forward declare root types
namespace GlobalNamespace {
struct GTShopEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTShopEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTShopEventType, "", "GTShopEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTShopEventType
struct CORDL_TYPE GTShopEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTShopEventType_Unwrapped
enum struct __GTShopEventType_Unwrapped : int32_t {
__E_item_select = static_cast<int32_t>(0x0),
__E_item_try_on = static_cast<int32_t>(0x1),
__E_cart_item_add = static_cast<int32_t>(0x2),
__E_cart_item_remove = static_cast<int32_t>(0x3),
__E_checkout_start = static_cast<int32_t>(0x4),
__E_checkout_cancel = static_cast<int32_t>(0x5),
__E_register_visit = static_cast<int32_t>(0x6),
__E_external_item_claim = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTShopEventType_Unwrapped () const noexcept {
return static_cast<__GTShopEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTShopEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTShopEventType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2264};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field cart_item_add value: I32(2)
static ::GlobalNamespace::GTShopEventType const cart_item_add;

/// @brief Field cart_item_remove value: I32(3)
static ::GlobalNamespace::GTShopEventType const cart_item_remove;

/// @brief Field checkout_cancel value: I32(5)
static ::GlobalNamespace::GTShopEventType const checkout_cancel;

/// @brief Field checkout_start value: I32(4)
static ::GlobalNamespace::GTShopEventType const checkout_start;

/// @brief Field external_item_claim value: I32(7)
static ::GlobalNamespace::GTShopEventType const external_item_claim;

/// @brief Field item_select value: I32(0)
static ::GlobalNamespace::GTShopEventType const item_select;

/// @brief Field item_try_on value: I32(1)
static ::GlobalNamespace::GTShopEventType const item_try_on;

/// @brief Field register_visit value: I32(6)
static ::GlobalNamespace::GTShopEventType const register_visit;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTShopEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTShopEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
