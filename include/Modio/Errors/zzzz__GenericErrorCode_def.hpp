#pragma once
// IWYU pragma private; include "Modio/Errors/GenericErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct GenericErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::GenericErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::GenericErrorCode, "Modio.Errors", "GenericErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.GenericErrorCode
struct CORDL_TYPE GenericErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __GenericErrorCode_Unwrapped
enum struct __GenericErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_OPERATION_CANCELLED = static_cast<int64_t>(0xffffffff80000032),
__E_OPERATION_ERROR = static_cast<int64_t>(0xffffffff80000033),
__E_COULD_NOT_CREATE_HANDLE = static_cast<int64_t>(0xffffffff80000034),
__E_NO_DATA_AVAILABLE = static_cast<int64_t>(0xffffffff80000035),
__E_END_OF_FILE = static_cast<int64_t>(0xffffffff80000036),
__E_QUEUE_CLOSED = static_cast<int64_t>(0xffffffff80000037),
__E_SDKALREADY_INITIALIZED = static_cast<int64_t>(0xffffffff80000038),
__E_SDKNOT_INITIALIZED = static_cast<int64_t>(0xffffffff80000039),
__E_INDEX_OUT_OF_RANGE = static_cast<int64_t>(0xffffffff8000003a),
__E_BAD_PARAMETER = static_cast<int64_t>(0xffffffff8000003b),
__E_SHUTTING_DOWN = static_cast<int64_t>(0xffffffff8000003c),
__E_MISSING_COMPONENTS = static_cast<int64_t>(0xffffffff8000003d),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GenericErrorCode_Unwrapped () const noexcept {
return static_cast<__GenericErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GenericErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr GenericErrorCode(int64_t  value__) noexcept;

/// @brief Field BAD_PARAMETER value: I64(-2147483589)
static ::Modio::Errors::GenericErrorCode const BAD_PARAMETER;

/// @brief Field COULD_NOT_CREATE_HANDLE value: I64(-2147483596)
static ::Modio::Errors::GenericErrorCode const COULD_NOT_CREATE_HANDLE;

/// @brief Field END_OF_FILE value: I64(-2147483594)
static ::Modio::Errors::GenericErrorCode const END_OF_FILE;

/// @brief Field INDEX_OUT_OF_RANGE value: I64(-2147483590)
static ::Modio::Errors::GenericErrorCode const INDEX_OUT_OF_RANGE;

/// @brief Field MISSING_COMPONENTS value: I64(-2147483587)
static ::Modio::Errors::GenericErrorCode const MISSING_COMPONENTS;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::GenericErrorCode const NONE;

/// @brief Field NO_DATA_AVAILABLE value: I64(-2147483595)
static ::Modio::Errors::GenericErrorCode const NO_DATA_AVAILABLE;

/// @brief Field OPERATION_CANCELLED value: I64(-2147483598)
static ::Modio::Errors::GenericErrorCode const OPERATION_CANCELLED;

/// @brief Field OPERATION_ERROR value: I64(-2147483597)
static ::Modio::Errors::GenericErrorCode const OPERATION_ERROR;

/// @brief Field QUEUE_CLOSED value: I64(-2147483593)
static ::Modio::Errors::GenericErrorCode const QUEUE_CLOSED;

/// @brief Field SDKALREADY_INITIALIZED value: I64(-2147483592)
static ::Modio::Errors::GenericErrorCode const SDKALREADY_INITIALIZED;

/// @brief Field SDKNOT_INITIALIZED value: I64(-2147483591)
static ::Modio::Errors::GenericErrorCode const SDKNOT_INITIALIZED;

/// @brief Field SHUTTING_DOWN value: I64(-2147483588)
static ::Modio::Errors::GenericErrorCode const SHUTTING_DOWN;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::GenericErrorCode const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17694};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::GenericErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::GenericErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
