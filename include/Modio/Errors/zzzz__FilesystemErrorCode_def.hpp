#pragma once
// IWYU pragma private; include "Modio/Errors/FilesystemErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FilesystemErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct FilesystemErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::FilesystemErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::FilesystemErrorCode, "Modio.Errors", "FilesystemErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.FilesystemErrorCode
struct CORDL_TYPE FilesystemErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __FilesystemErrorCode_Unwrapped
enum struct __FilesystemErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_UNABLE_TO_CREATE_FOLDER = static_cast<int64_t>(0xffffffff80000020),
__E_UNABLE_TO_CREATE_FILE = static_cast<int64_t>(0xffffffff80000021),
__E_INSUFFICIENT_SPACE = static_cast<int64_t>(0x4fda),
__E_NO_PERMISSION = static_cast<int64_t>(0xffffffff80000022),
__E_FILE_LOCKED = static_cast<int64_t>(0xffffffff80000023),
__E_FILE_NOT_FOUND = static_cast<int64_t>(0xffffffff80000024),
__E_DIRECTORY_NOT_EMPTY = static_cast<int64_t>(0xffffffff80000025),
__E_READ_ERROR = static_cast<int64_t>(0xffffffff80000026),
__E_WRITE_ERROR = static_cast<int64_t>(0xffffffff80000027),
__E_DIRECTORY_NOT_FOUND = static_cast<int64_t>(0xffffffff80000028),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FilesystemErrorCode_Unwrapped () const noexcept {
return static_cast<__FilesystemErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FilesystemErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr FilesystemErrorCode(int64_t  value__) noexcept;

/// @brief Field DIRECTORY_NOT_EMPTY value: I64(-2147483611)
static ::Modio::Errors::FilesystemErrorCode const DIRECTORY_NOT_EMPTY;

/// @brief Field DIRECTORY_NOT_FOUND value: I64(-2147483608)
static ::Modio::Errors::FilesystemErrorCode const DIRECTORY_NOT_FOUND;

/// @brief Field FILE_LOCKED value: I64(-2147483613)
static ::Modio::Errors::FilesystemErrorCode const FILE_LOCKED;

/// @brief Field FILE_NOT_FOUND value: I64(-2147483612)
static ::Modio::Errors::FilesystemErrorCode const FILE_NOT_FOUND;

/// @brief Field INSUFFICIENT_SPACE value: I64(20442)
static ::Modio::Errors::FilesystemErrorCode const INSUFFICIENT_SPACE;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::FilesystemErrorCode const NONE;

/// @brief Field NO_PERMISSION value: I64(-2147483614)
static ::Modio::Errors::FilesystemErrorCode const NO_PERMISSION;

/// @brief Field READ_ERROR value: I64(-2147483610)
static ::Modio::Errors::FilesystemErrorCode const READ_ERROR;

/// @brief Field UNABLE_TO_CREATE_FILE value: I64(-2147483615)
static ::Modio::Errors::FilesystemErrorCode const UNABLE_TO_CREATE_FILE;

/// @brief Field UNABLE_TO_CREATE_FOLDER value: I64(-2147483616)
static ::Modio::Errors::FilesystemErrorCode const UNABLE_TO_CREATE_FOLDER;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::FilesystemErrorCode const UNKNOWN;

/// @brief Field WRITE_ERROR value: I64(-2147483609)
static ::Modio::Errors::FilesystemErrorCode const WRITE_ERROR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17692};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::FilesystemErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::FilesystemErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
