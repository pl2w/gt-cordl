#pragma once
// IWYU pragma private; include "Modio/Errors/MonetizationErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonetizationErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct MonetizationErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::MonetizationErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::MonetizationErrorCode, "Modio.Errors", "MonetizationErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.MonetizationErrorCode
struct CORDL_TYPE MonetizationErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __MonetizationErrorCode_Unwrapped
enum struct __MonetizationErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_DISPLAY_PRICE_INCORRECT = static_cast<int64_t>(0xffffffff80000058),
__E_MONETIZATION_AUTHENTICATION_FAILED = static_cast<int64_t>(0xffffffff80000059),
__E_WALLET_FETCH_FAILED = static_cast<int64_t>(0xffffffff8000005a),
__E_USER_MONETIZATION_NOT_CONFIGURED = static_cast<int64_t>(0xdbba7),
__E_USER_MONETIZATION_DISABLED = static_cast<int64_t>(0xdbbaf),
__E_GAME_MONETIZATION_NOT_ENABLED = static_cast<int64_t>(0xffffffff8000005b),
__E_PAYMENT_FAILED = static_cast<int64_t>(0xffffffff8000005c),
__E_INCORRECT_DISPLAY_PRICE = static_cast<int64_t>(0xffffffff8000005d),
__E_ITEM_ALREADY_OWNED = static_cast<int64_t>(0xffffffff8000005e),
__E_INSUFFICIENT_FUNDS = static_cast<int64_t>(0xffffffff8000005f),
__E_RETRY_ENTITLEMENTS = static_cast<int64_t>(0xffffffff80000060),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonetizationErrorCode_Unwrapped () const noexcept {
return static_cast<__MonetizationErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonetizationErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr MonetizationErrorCode(int64_t  value__) noexcept;

/// @brief Field DISPLAY_PRICE_INCORRECT value: I64(-2147483560)
static ::Modio::Errors::MonetizationErrorCode const DISPLAY_PRICE_INCORRECT;

/// @brief Field GAME_MONETIZATION_NOT_ENABLED value: I64(-2147483557)
static ::Modio::Errors::MonetizationErrorCode const GAME_MONETIZATION_NOT_ENABLED;

/// @brief Field INCORRECT_DISPLAY_PRICE value: I64(-2147483555)
static ::Modio::Errors::MonetizationErrorCode const INCORRECT_DISPLAY_PRICE;

/// @brief Field INSUFFICIENT_FUNDS value: I64(-2147483553)
static ::Modio::Errors::MonetizationErrorCode const INSUFFICIENT_FUNDS;

/// @brief Field ITEM_ALREADY_OWNED value: I64(-2147483554)
static ::Modio::Errors::MonetizationErrorCode const ITEM_ALREADY_OWNED;

/// @brief Field MONETIZATION_AUTHENTICATION_FAILED value: I64(-2147483559)
static ::Modio::Errors::MonetizationErrorCode const MONETIZATION_AUTHENTICATION_FAILED;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::MonetizationErrorCode const NONE;

/// @brief Field PAYMENT_FAILED value: I64(-2147483556)
static ::Modio::Errors::MonetizationErrorCode const PAYMENT_FAILED;

/// @brief Field RETRY_ENTITLEMENTS value: I64(-2147483552)
static ::Modio::Errors::MonetizationErrorCode const RETRY_ENTITLEMENTS;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::MonetizationErrorCode const UNKNOWN;

/// @brief Field USER_MONETIZATION_DISABLED value: I64(900015)
static ::Modio::Errors::MonetizationErrorCode const USER_MONETIZATION_DISABLED;

/// @brief Field USER_MONETIZATION_NOT_CONFIGURED value: I64(900007)
static ::Modio::Errors::MonetizationErrorCode const USER_MONETIZATION_NOT_CONFIGURED;

/// @brief Field WALLET_FETCH_FAILED value: I64(-2147483558)
static ::Modio::Errors::MonetizationErrorCode const WALLET_FETCH_FAILED;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::MonetizationErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::MonetizationErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
