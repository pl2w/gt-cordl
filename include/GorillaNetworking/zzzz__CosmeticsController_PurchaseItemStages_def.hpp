#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController_PurchaseItemStages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsController_PurchaseItemStages)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsController_PurchaseItemStages;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsController_PurchaseItemStages);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsController_PurchaseItemStages, "GorillaNetworking", "CosmeticsController/PurchaseItemStages");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.CosmeticsController/PurchaseItemStages
struct CORDL_TYPE CosmeticsController_PurchaseItemStages {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticsController_PurchaseItemStages_Unwrapped
enum struct __CosmeticsController_PurchaseItemStages_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_CheckoutButtonPressed = static_cast<int32_t>(0x1),
__E_ItemSelected = static_cast<int32_t>(0x2),
__E_ItemOwned = static_cast<int32_t>(0x3),
__E_FinalPurchaseAcknowledgement = static_cast<int32_t>(0x4),
__E_Buying = static_cast<int32_t>(0x5),
__E_Success = static_cast<int32_t>(0x6),
__E_Failure = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticsController_PurchaseItemStages_Unwrapped () const noexcept {
return static_cast<__CosmeticsController_PurchaseItemStages_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_PurchaseItemStages() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsController_PurchaseItemStages(int32_t  value__) noexcept;

/// @brief Field Buying value: I32(5)
static ::GlobalNamespace::CosmeticsController_PurchaseItemStages const Buying;

/// @brief Field CheckoutButtonPressed value: I32(1)
static ::GlobalNamespace::CosmeticsController_PurchaseItemStages const CheckoutButtonPressed;

/// @brief Field Failure value: I32(7)
static ::GlobalNamespace::CosmeticsController_PurchaseItemStages const Failure;

/// @brief Field FinalPurchaseAcknowledgement value: I32(4)
static ::GlobalNamespace::CosmeticsController_PurchaseItemStages const FinalPurchaseAcknowledgement;

/// @brief Field ItemOwned value: I32(3)
static ::GlobalNamespace::CosmeticsController_PurchaseItemStages const ItemOwned;

/// @brief Field ItemSelected value: I32(2)
static ::GlobalNamespace::CosmeticsController_PurchaseItemStages const ItemSelected;

/// @brief Field Start value: I32(0)
static ::GlobalNamespace::CosmeticsController_PurchaseItemStages const Start;

/// @brief Field Success value: I32(6)
static ::GlobalNamespace::CosmeticsController_PurchaseItemStages const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4270};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsController_PurchaseItemStages, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsController_PurchaseItemStages) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
