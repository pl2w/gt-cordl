#pragma once
// IWYU pragma private; include "GorillaTagScripts/SubscriptionManager_SubscriptionDetails.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionManager_SubscriptionDetails)
// Forward declare root types
namespace GlobalNamespace {
struct SubscriptionManager_SubscriptionDetails;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SubscriptionManager_SubscriptionDetails);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionManager_SubscriptionDetails, "GorillaTagScripts", "SubscriptionManager/SubscriptionDetails");
// Dependencies System.DateTime
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.SubscriptionManager/SubscriptionDetails
struct CORDL_TYPE SubscriptionManager_SubscriptionDetails {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionManager_SubscriptionDetails() ;

// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "daysAccrued", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "subscriptionFeatureSettings", ty: "::ArrayW<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tier", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "subscriptionActiveUntilDate", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "autoRenew", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "autoRenewMonths", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SubscriptionManager_SubscriptionDetails(bool  active, int32_t  daysAccrued, ::ArrayW<bool>  subscriptionFeatureSettings, int32_t  tier, ::System::DateTime  subscriptionActiveUntilDate, bool  autoRenew, int32_t  autoRenewMonths) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4017};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field active, offset: 0x0, size: 0x1, def value: None
 bool  active;

/// @brief Field daysAccrued, offset: 0x4, size: 0x4, def value: None
 int32_t  daysAccrued;

/// @brief Field subscriptionFeatureSettings, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<bool>  subscriptionFeatureSettings;

/// @brief Field tier, offset: 0x10, size: 0x4, def value: None
 int32_t  tier;

/// @brief Field subscriptionActiveUntilDate, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  subscriptionActiveUntilDate;

/// @brief Field autoRenew, offset: 0x20, size: 0x1, def value: None
 bool  autoRenew;

/// @brief Field autoRenewMonths, offset: 0x24, size: 0x4, def value: None
 int32_t  autoRenewMonths;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionManager_SubscriptionDetails, active) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubscriptionManager_SubscriptionDetails, daysAccrued) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubscriptionManager_SubscriptionDetails, subscriptionFeatureSettings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubscriptionManager_SubscriptionDetails, tier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubscriptionManager_SubscriptionDetails, subscriptionActiveUntilDate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubscriptionManager_SubscriptionDetails, autoRenew) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubscriptionManager_SubscriptionDetails, autoRenewMonths) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionManager_SubscriptionDetails) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
