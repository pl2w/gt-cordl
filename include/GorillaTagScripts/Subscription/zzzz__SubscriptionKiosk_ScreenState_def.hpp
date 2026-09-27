#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/SubscriptionKiosk_ScreenState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionKiosk_ScreenState)
// Forward declare root types
namespace GlobalNamespace {
struct SubscriptionKiosk_ScreenState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SubscriptionKiosk_ScreenState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionKiosk_ScreenState, "GorillaTagScripts.Subscription", "SubscriptionKiosk/ScreenState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Subscription.SubscriptionKiosk/ScreenState
struct CORDL_TYPE SubscriptionKiosk_ScreenState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubscriptionKiosk_ScreenState_Unwrapped
enum struct __SubscriptionKiosk_ScreenState_Unwrapped : int32_t {
__E_SafeAccount = static_cast<int32_t>(0x0),
__E_WaitingForScan = static_cast<int32_t>(0x1),
__E_Scanning = static_cast<int32_t>(0x2),
__E_SubscriptionStatusUnknown = static_cast<int32_t>(0x3),
__E_MainMenuSubscribed = static_cast<int32_t>(0x4),
__E_MainMenuUnsubscribed = static_cast<int32_t>(0x5),
__E_SubscriptionData = static_cast<int32_t>(0x6),
__E_PurchaseSubscription = static_cast<int32_t>(0x7),
__E_SubscriptionPurchaseInProgress = static_cast<int32_t>(0x8),
__E_SubscriptionPurchaseResult = static_cast<int32_t>(0x9),
__E_FeatureToggles = static_cast<int32_t>(0xa),
__E_SubscriptionSteamWarning = static_cast<int32_t>(0xb),
__E_None = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubscriptionKiosk_ScreenState_Unwrapped () const noexcept {
return static_cast<__SubscriptionKiosk_ScreenState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionKiosk_ScreenState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SubscriptionKiosk_ScreenState(int32_t  value__) noexcept;

/// @brief Field FeatureToggles value: I32(10)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const FeatureToggles;

/// @brief Field MainMenuSubscribed value: I32(4)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const MainMenuSubscribed;

/// @brief Field MainMenuUnsubscribed value: I32(5)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const MainMenuUnsubscribed;

/// @brief Field None value: I32(12)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const None;

/// @brief Field PurchaseSubscription value: I32(7)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const PurchaseSubscription;

/// @brief Field SafeAccount value: I32(0)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const SafeAccount;

/// @brief Field Scanning value: I32(2)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const Scanning;

/// @brief Field SubscriptionData value: I32(6)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const SubscriptionData;

/// @brief Field SubscriptionPurchaseInProgress value: I32(8)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const SubscriptionPurchaseInProgress;

/// @brief Field SubscriptionPurchaseResult value: I32(9)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const SubscriptionPurchaseResult;

/// @brief Field SubscriptionStatusUnknown value: I32(3)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const SubscriptionStatusUnknown;

/// @brief Field SubscriptionSteamWarning value: I32(11)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const SubscriptionSteamWarning;

/// @brief Field WaitingForScan value: I32(1)
static ::GlobalNamespace::SubscriptionKiosk_ScreenState const WaitingForScan;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4093};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionKiosk_ScreenState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionKiosk_ScreenState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
