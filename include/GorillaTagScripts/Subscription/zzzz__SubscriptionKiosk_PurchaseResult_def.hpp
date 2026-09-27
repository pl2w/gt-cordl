#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/SubscriptionKiosk_PurchaseResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionKiosk_PurchaseResult)
// Forward declare root types
namespace GlobalNamespace {
struct SubscriptionKiosk_PurchaseResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SubscriptionKiosk_PurchaseResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionKiosk_PurchaseResult, "GorillaTagScripts.Subscription", "SubscriptionKiosk/PurchaseResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Subscription.SubscriptionKiosk/PurchaseResult
struct CORDL_TYPE SubscriptionKiosk_PurchaseResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubscriptionKiosk_PurchaseResult_Unwrapped
enum struct __SubscriptionKiosk_PurchaseResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Failure = static_cast<int32_t>(0x1),
__E_Cancel = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubscriptionKiosk_PurchaseResult_Unwrapped () const noexcept {
return static_cast<__SubscriptionKiosk_PurchaseResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionKiosk_PurchaseResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SubscriptionKiosk_PurchaseResult(int32_t  value__) noexcept;

/// @brief Field Cancel value: I32(2)
static ::GlobalNamespace::SubscriptionKiosk_PurchaseResult const Cancel;

/// @brief Field Failure value: I32(1)
static ::GlobalNamespace::SubscriptionKiosk_PurchaseResult const Failure;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::SubscriptionKiosk_PurchaseResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4094};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionKiosk_PurchaseResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionKiosk_PurchaseResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
