#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/GTObjectPlaceholder_ECustomMapCosmeticItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTObjectPlaceholder_ECustomMapCosmeticItem)
// Forward declare root types
namespace GlobalNamespace {
struct GTObjectPlaceholder_ECustomMapCosmeticItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem, "GT_CustomMapSupportRuntime", "GTObjectPlaceholder/ECustomMapCosmeticItem");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.GTObjectPlaceholder/ECustomMapCosmeticItem
struct CORDL_TYPE GTObjectPlaceholder_ECustomMapCosmeticItem {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTObjectPlaceholder_ECustomMapCosmeticItem_Unwrapped
enum struct __GTObjectPlaceholder_ECustomMapCosmeticItem_Unwrapped : int32_t {
__E_Item_A = static_cast<int32_t>(0x0),
__E_Item_B = static_cast<int32_t>(0x1),
__E_Item_C = static_cast<int32_t>(0x2),
__E_Item_D = static_cast<int32_t>(0x3),
__E_Item_E = static_cast<int32_t>(0x4),
__E_Item_F = static_cast<int32_t>(0x5),
__E_Item_G = static_cast<int32_t>(0x6),
__E_Item_H = static_cast<int32_t>(0x7),
__E_Item_I = static_cast<int32_t>(0x8),
__E_Item_J = static_cast<int32_t>(0x9),
__E_Item_K = static_cast<int32_t>(0xa),
__E_Item_L = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTObjectPlaceholder_ECustomMapCosmeticItem_Unwrapped () const noexcept {
return static_cast<__GTObjectPlaceholder_ECustomMapCosmeticItem_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTObjectPlaceholder_ECustomMapCosmeticItem() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTObjectPlaceholder_ECustomMapCosmeticItem(int32_t  value__) noexcept;

/// @brief Field Item_A value: I32(0)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_A;

/// @brief Field Item_B value: I32(1)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_B;

/// @brief Field Item_C value: I32(2)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_C;

/// @brief Field Item_D value: I32(3)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_D;

/// @brief Field Item_E value: I32(4)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_E;

/// @brief Field Item_F value: I32(5)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_F;

/// @brief Field Item_G value: I32(6)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_G;

/// @brief Field Item_H value: I32(7)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_H;

/// @brief Field Item_I value: I32(8)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_I;

/// @brief Field Item_J value: I32(9)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_J;

/// @brief Field Item_K value: I32(10)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_K;

/// @brief Field Item_L value: I32(11)
static ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const Item_L;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
