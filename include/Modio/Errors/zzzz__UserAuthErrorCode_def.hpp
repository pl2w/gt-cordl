#pragma once
// IWYU pragma private; include "Modio/Errors/UserAuthErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserAuthErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct UserAuthErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::UserAuthErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::UserAuthErrorCode, "Modio.Errors", "UserAuthErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.UserAuthErrorCode
struct CORDL_TYPE UserAuthErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __UserAuthErrorCode_Unwrapped
enum struct __UserAuthErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_UNABLE_TO_INIT_STORAGE = static_cast<int64_t>(0xffffffff80000029),
__E_STATUS_AUTH_TOKEN_MISSING = static_cast<int64_t>(0xffffffff8000002a),
__E_STATUS_AUTH_TOKEN_INVALID = static_cast<int64_t>(0xffffffff8000002b),
__E_NO_AUTH_TOKEN = static_cast<int64_t>(0xffffffff8000002c),
__E_ALREADY_AUTHENTICATED = static_cast<int64_t>(0xffffffff8000002d),
__E_EMAIL_LOGIN_CODE_EXPIRED = static_cast<int64_t>(0x2b04),
__E_EMAIL_LOGIN_CODE_INVALID = static_cast<int64_t>(0x2b06),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserAuthErrorCode_Unwrapped () const noexcept {
return static_cast<__UserAuthErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UserAuthErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr UserAuthErrorCode(int64_t  value__) noexcept;

/// @brief Field ALREADY_AUTHENTICATED value: I64(-2147483603)
static ::Modio::Errors::UserAuthErrorCode const ALREADY_AUTHENTICATED;

/// @brief Field EMAIL_LOGIN_CODE_EXPIRED value: I64(11012)
static ::Modio::Errors::UserAuthErrorCode const EMAIL_LOGIN_CODE_EXPIRED;

/// @brief Field EMAIL_LOGIN_CODE_INVALID value: I64(11014)
static ::Modio::Errors::UserAuthErrorCode const EMAIL_LOGIN_CODE_INVALID;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::UserAuthErrorCode const NONE;

/// @brief Field NO_AUTH_TOKEN value: I64(-2147483604)
static ::Modio::Errors::UserAuthErrorCode const NO_AUTH_TOKEN;

/// @brief Field STATUS_AUTH_TOKEN_INVALID value: I64(-2147483605)
static ::Modio::Errors::UserAuthErrorCode const STATUS_AUTH_TOKEN_INVALID;

/// @brief Field STATUS_AUTH_TOKEN_MISSING value: I64(-2147483606)
static ::Modio::Errors::UserAuthErrorCode const STATUS_AUTH_TOKEN_MISSING;

/// @brief Field UNABLE_TO_INIT_STORAGE value: I64(-2147483607)
static ::Modio::Errors::UserAuthErrorCode const UNABLE_TO_INIT_STORAGE;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::UserAuthErrorCode const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17710};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::UserAuthErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::UserAuthErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
