#pragma once
// IWYU pragma private; include "GlobalNamespace/SIPurchaseTerminal_PurchaseTerminalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIPurchaseTerminal_PurchaseTerminalState)
// Forward declare root types
namespace GlobalNamespace {
struct SIPurchaseTerminal_PurchaseTerminalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState, "", "SIPurchaseTerminal/PurchaseTerminalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIPurchaseTerminal/PurchaseTerminalState
struct CORDL_TYPE SIPurchaseTerminal_PurchaseTerminalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIPurchaseTerminal_PurchaseTerminalState_Unwrapped
enum struct __SIPurchaseTerminal_PurchaseTerminalState_Unwrapped : int32_t {
__E_PurchaseAmountSelection = static_cast<int32_t>(0x0),
__E_ConfirmPurchasePopup = static_cast<int32_t>(0x1),
__E_PendingPurchasePopup = static_cast<int32_t>(0x2),
__E_PurchaseCompletePopup = static_cast<int32_t>(0x3),
__E_InsufficientFundsPopup = static_cast<int32_t>(0x4),
__E_UnableToCompletePurchasePopup = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIPurchaseTerminal_PurchaseTerminalState_Unwrapped () const noexcept {
return static_cast<__SIPurchaseTerminal_PurchaseTerminalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIPurchaseTerminal_PurchaseTerminalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIPurchaseTerminal_PurchaseTerminalState(int32_t  value__) noexcept;

/// @brief Field ConfirmPurchasePopup value: I32(1)
static ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState const ConfirmPurchasePopup;

/// @brief Field InsufficientFundsPopup value: I32(4)
static ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState const InsufficientFundsPopup;

/// @brief Field PendingPurchasePopup value: I32(2)
static ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState const PendingPurchasePopup;

/// @brief Field PurchaseAmountSelection value: I32(0)
static ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState const PurchaseAmountSelection;

/// @brief Field PurchaseCompletePopup value: I32(3)
static ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState const PurchaseCompletePopup;

/// @brief Field UnableToCompletePurchasePopup value: I32(5)
static ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState const UnableToCompletePurchasePopup;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{334};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
