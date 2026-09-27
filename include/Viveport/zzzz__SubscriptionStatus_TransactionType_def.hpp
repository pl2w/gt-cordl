#pragma once
// IWYU pragma private; include "Viveport/SubscriptionStatus_TransactionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionStatus_TransactionType)
// Forward declare root types
namespace GlobalNamespace {
struct SubscriptionStatus_TransactionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SubscriptionStatus_TransactionType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionStatus_TransactionType, "Viveport", "SubscriptionStatus/TransactionType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Viveport.SubscriptionStatus/TransactionType
struct CORDL_TYPE SubscriptionStatus_TransactionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubscriptionStatus_TransactionType_Unwrapped
enum struct __SubscriptionStatus_TransactionType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Paid = static_cast<int32_t>(0x1),
__E_Redeem = static_cast<int32_t>(0x2),
__E_FreeTrial = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubscriptionStatus_TransactionType_Unwrapped () const noexcept {
return static_cast<__SubscriptionStatus_TransactionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionStatus_TransactionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SubscriptionStatus_TransactionType(int32_t  value__) noexcept;

/// @brief Field FreeTrial value: I32(3)
static ::GlobalNamespace::SubscriptionStatus_TransactionType const FreeTrial;

/// @brief Field Paid value: I32(1)
static ::GlobalNamespace::SubscriptionStatus_TransactionType const Paid;

/// @brief Field Redeem value: I32(2)
static ::GlobalNamespace::SubscriptionStatus_TransactionType const Redeem;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::SubscriptionStatus_TransactionType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3759};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionStatus_TransactionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionStatus_TransactionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
