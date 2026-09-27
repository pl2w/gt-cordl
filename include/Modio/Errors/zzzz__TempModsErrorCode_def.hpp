#pragma once
// IWYU pragma private; include "Modio/Errors/TempModsErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TempModsErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct TempModsErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::TempModsErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::TempModsErrorCode, "Modio.Errors", "TempModsErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.TempModsErrorCode
struct CORDL_TYPE TempModsErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __TempModsErrorCode_Unwrapped
enum struct __TempModsErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_CANT_INSTALL_TAINTED_MOD = static_cast<int64_t>(0xffffffff80000062),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TempModsErrorCode_Unwrapped () const noexcept {
return static_cast<__TempModsErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TempModsErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr TempModsErrorCode(int64_t  value__) noexcept;

/// @brief Field CANT_INSTALL_TAINTED_MOD value: I64(-2147483550)
static ::Modio::Errors::TempModsErrorCode const CANT_INSTALL_TAINTED_MOD;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::TempModsErrorCode const NONE;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::TempModsErrorCode const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17708};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::TempModsErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::TempModsErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
