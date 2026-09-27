#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/SubscriptionProviderStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionProviderStatus)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
struct SubscriptionProviderStatus;
}
// Write type traits
MARK_VAL_T(::PlayFab::CloudScriptModels::SubscriptionProviderStatus);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::SubscriptionProviderStatus, "PlayFab.CloudScriptModels", "SubscriptionProviderStatus");
// Dependencies 
namespace PlayFab::CloudScriptModels {
// Is value type: true
// CS Name: PlayFab.CloudScriptModels.SubscriptionProviderStatus
struct CORDL_TYPE SubscriptionProviderStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubscriptionProviderStatus_Unwrapped
enum struct __SubscriptionProviderStatus_Unwrapped : int32_t {
__E_NoError = static_cast<int32_t>(0x0),
__E_Cancelled = static_cast<int32_t>(0x1),
__E_UnknownError = static_cast<int32_t>(0x2),
__E_BillingError = static_cast<int32_t>(0x3),
__E_ProductUnavailable = static_cast<int32_t>(0x4),
__E_CustomerDidNotAcceptPriceChange = static_cast<int32_t>(0x5),
__E_FreeTrial = static_cast<int32_t>(0x6),
__E_PaymentPending = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubscriptionProviderStatus_Unwrapped () const noexcept {
return static_cast<__SubscriptionProviderStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionProviderStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SubscriptionProviderStatus(int32_t  value__) noexcept;

/// @brief Field BillingError value: I32(3)
static ::PlayFab::CloudScriptModels::SubscriptionProviderStatus const BillingError;

/// @brief Field Cancelled value: I32(1)
static ::PlayFab::CloudScriptModels::SubscriptionProviderStatus const Cancelled;

/// @brief Field CustomerDidNotAcceptPriceChange value: I32(5)
static ::PlayFab::CloudScriptModels::SubscriptionProviderStatus const CustomerDidNotAcceptPriceChange;

/// @brief Field FreeTrial value: I32(6)
static ::PlayFab::CloudScriptModels::SubscriptionProviderStatus const FreeTrial;

/// @brief Field NoError value: I32(0)
static ::PlayFab::CloudScriptModels::SubscriptionProviderStatus const NoError;

/// @brief Field PaymentPending value: I32(7)
static ::PlayFab::CloudScriptModels::SubscriptionProviderStatus const PaymentPending;

/// @brief Field ProductUnavailable value: I32(4)
static ::PlayFab::CloudScriptModels::SubscriptionProviderStatus const ProductUnavailable;

/// @brief Field UnknownError value: I32(2)
static ::PlayFab::CloudScriptModels::SubscriptionProviderStatus const UnknownError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19908};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::SubscriptionProviderStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::SubscriptionProviderStatus) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
