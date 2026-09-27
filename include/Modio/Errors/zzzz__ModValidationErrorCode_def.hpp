#pragma once
// IWYU pragma private; include "Modio/Errors/ModValidationErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModValidationErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct ModValidationErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::ModValidationErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ModValidationErrorCode, "Modio.Errors", "ModValidationErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.ModValidationErrorCode
struct CORDL_TYPE ModValidationErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __ModValidationErrorCode_Unwrapped
enum struct __ModValidationErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_NO_FILES_FOUND_FOR_MOD = static_cast<int64_t>(0xffffffff80000055),
__E_MOD_DIRECTORY_NOT_FOUND = static_cast<int64_t>(0xffffffff80000056),
__E_MD5DOES_NOT_MATCH = static_cast<int64_t>(0xffffffff80000057),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModValidationErrorCode_Unwrapped () const noexcept {
return static_cast<__ModValidationErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModValidationErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ModValidationErrorCode(int64_t  value__) noexcept;

/// @brief Field MD5DOES_NOT_MATCH value: I64(-2147483561)
static ::Modio::Errors::ModValidationErrorCode const MD5DOES_NOT_MATCH;

/// @brief Field MOD_DIRECTORY_NOT_FOUND value: I64(-2147483562)
static ::Modio::Errors::ModValidationErrorCode const MOD_DIRECTORY_NOT_FOUND;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::ModValidationErrorCode const NONE;

/// @brief Field NO_FILES_FOUND_FOR_MOD value: I64(-2147483563)
static ::Modio::Errors::ModValidationErrorCode const NO_FILES_FOUND_FOR_MOD;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::ModValidationErrorCode const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::ModValidationErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::ModValidationErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
