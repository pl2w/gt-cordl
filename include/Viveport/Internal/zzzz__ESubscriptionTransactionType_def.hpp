#pragma once
// IWYU pragma private; include "Viveport/Internal/ESubscriptionTransactionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESubscriptionTransactionType)
// Forward declare root types
namespace Viveport::Internal {
struct ESubscriptionTransactionType;
}
// Write type traits
MARK_VAL_T(::Viveport::Internal::ESubscriptionTransactionType);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::ESubscriptionTransactionType, "Viveport.Internal", "ESubscriptionTransactionType");
// Dependencies 
namespace Viveport::Internal {
// Is value type: true
// CS Name: Viveport.Internal.ESubscriptionTransactionType
struct CORDL_TYPE ESubscriptionTransactionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESubscriptionTransactionType_Unwrapped
enum struct __ESubscriptionTransactionType_Unwrapped : int32_t {
__E_UNKNOWN = static_cast<int32_t>(0x0),
__E_PAID = static_cast<int32_t>(0x1),
__E_REDEEM = static_cast<int32_t>(0x2),
__E_FREEE_TRIAL = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESubscriptionTransactionType_Unwrapped () const noexcept {
return static_cast<__ESubscriptionTransactionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESubscriptionTransactionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ESubscriptionTransactionType(int32_t  value__) noexcept;

/// @brief Field FREEE_TRIAL value: I32(3)
static ::Viveport::Internal::ESubscriptionTransactionType const FREEE_TRIAL;

/// @brief Field PAID value: I32(1)
static ::Viveport::Internal::ESubscriptionTransactionType const PAID;

/// @brief Field REDEEM value: I32(2)
static ::Viveport::Internal::ESubscriptionTransactionType const REDEEM;

/// @brief Field UNKNOWN value: I32(0)
static ::Viveport::Internal::ESubscriptionTransactionType const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3798};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::ESubscriptionTransactionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::ESubscriptionTransactionType) == 0x4, "Size mismatch!");

} // namespace end def Viveport::Internal
