#pragma once
// IWYU pragma private; include "Modio/Errors/UserDataErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserDataErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct UserDataErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::UserDataErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::UserDataErrorCode, "Modio.Errors", "UserDataErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.UserDataErrorCode
struct CORDL_TYPE UserDataErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __UserDataErrorCode_Unwrapped
enum struct __UserDataErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_INVALID_USER = static_cast<int64_t>(0xffffffff8000002e),
__E_BLOB_MISSING = static_cast<int64_t>(0xffffffff8000002f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserDataErrorCode_Unwrapped () const noexcept {
return static_cast<__UserDataErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UserDataErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr UserDataErrorCode(int64_t  value__) noexcept;

/// @brief Field BLOB_MISSING value: I64(-2147483601)
static ::Modio::Errors::UserDataErrorCode const BLOB_MISSING;

/// @brief Field INVALID_USER value: I64(-2147483602)
static ::Modio::Errors::UserDataErrorCode const INVALID_USER;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::UserDataErrorCode const NONE;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::UserDataErrorCode const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17712};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::UserDataErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::UserDataErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
