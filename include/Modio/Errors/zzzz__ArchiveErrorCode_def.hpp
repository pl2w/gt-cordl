#pragma once
// IWYU pragma private; include "Modio/Errors/ArchiveErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArchiveErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct ArchiveErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::ArchiveErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ArchiveErrorCode, "Modio.Errors", "ArchiveErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.ArchiveErrorCode
struct CORDL_TYPE ArchiveErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __ArchiveErrorCode_Unwrapped
enum struct __ArchiveErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_INVALID_HEADER = static_cast<int64_t>(0xffffffff80000030),
__E_UNSUPPORTED_COMPRESSION = static_cast<int64_t>(0xffffffff80000031),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArchiveErrorCode_Unwrapped () const noexcept {
return static_cast<__ArchiveErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArchiveErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ArchiveErrorCode(int64_t  value__) noexcept;

/// @brief Field INVALID_HEADER value: I64(-2147483600)
static ::Modio::Errors::ArchiveErrorCode const INVALID_HEADER;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::ArchiveErrorCode const NONE;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::ArchiveErrorCode const UNKNOWN;

/// @brief Field UNSUPPORTED_COMPRESSION value: I64(-2147483599)
static ::Modio::Errors::ArchiveErrorCode const UNSUPPORTED_COMPRESSION;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::ArchiveErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::ArchiveErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
