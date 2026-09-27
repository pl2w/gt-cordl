#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRKiosk_PurchaseState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRKiosk_PurchaseState)
// Forward declare root types
namespace GlobalNamespace {
struct GRKiosk_PurchaseState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRKiosk_PurchaseState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRKiosk_PurchaseState, "GorillaTagScripts.GhostReactor", "GRKiosk/PurchaseState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.GhostReactor.GRKiosk/PurchaseState
struct CORDL_TYPE GRKiosk_PurchaseState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRKiosk_PurchaseState_Unwrapped
enum struct __GRKiosk_PurchaseState_Unwrapped : int32_t {
__E_Initialize = static_cast<int32_t>(0x0),
__E_AlreadyOwned = static_cast<int32_t>(0x1),
__E_AvailableForPurchase = static_cast<int32_t>(0x2),
__E_CheckoutPressed = static_cast<int32_t>(0x3),
__E_CheckoutConfirmation = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRKiosk_PurchaseState_Unwrapped () const noexcept {
return static_cast<__GRKiosk_PurchaseState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRKiosk_PurchaseState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRKiosk_PurchaseState(int32_t  value__) noexcept;

/// @brief Field AlreadyOwned value: I32(1)
static ::GlobalNamespace::GRKiosk_PurchaseState const AlreadyOwned;

/// @brief Field AvailableForPurchase value: I32(2)
static ::GlobalNamespace::GRKiosk_PurchaseState const AvailableForPurchase;

/// @brief Field CheckoutConfirmation value: I32(4)
static ::GlobalNamespace::GRKiosk_PurchaseState const CheckoutConfirmation;

/// @brief Field CheckoutPressed value: I32(3)
static ::GlobalNamespace::GRKiosk_PurchaseState const CheckoutPressed;

/// @brief Field Initialize value: I32(0)
static ::GlobalNamespace::GRKiosk_PurchaseState const Initialize;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4127};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRKiosk_PurchaseState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRKiosk_PurchaseState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
