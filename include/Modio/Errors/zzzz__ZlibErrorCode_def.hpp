#pragma once
// IWYU pragma private; include "Modio/Errors/ZlibErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZlibErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct ZlibErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::ZlibErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ZlibErrorCode, "Modio.Errors", "ZlibErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.ZlibErrorCode
struct CORDL_TYPE ZlibErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __ZlibErrorCode_Unwrapped
enum struct __ZlibErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_NEED_BUFFERS = static_cast<int64_t>(0xffffffff8000003f),
__E_END_OF_STREAM = static_cast<int64_t>(0xffffffff80000040),
__E_STREAM_ERROR = static_cast<int64_t>(0xffffffff80000041),
__E_INVALID_BLOCK_TYPE = static_cast<int64_t>(0xffffffff80000042),
__E_INVALID_STORED_LENGTH = static_cast<int64_t>(0xffffffff80000043),
__E_TOO_MANY_SYMBOLS = static_cast<int64_t>(0xffffffff80000044),
__E_INVALID_CODE_LENGTHS = static_cast<int64_t>(0xffffffff80000045),
__E_INVALID_BIT_LENGTH_REPEAT = static_cast<int64_t>(0xffffffff80000046),
__E_MISSING_EOB = static_cast<int64_t>(0xffffffff80000047),
__E_INVALID_LITERAL_LENGTH = static_cast<int64_t>(0xffffffff80000048),
__E_INVALID_DISTANCE_CODE = static_cast<int64_t>(0xffffffff80000049),
__E_INVALID_DISTANCE = static_cast<int64_t>(0xffffffff8000004a),
__E_OVER_SUBSCRIBED_LENGTH = static_cast<int64_t>(0xffffffff8000004b),
__E_INCOMPLETE_LENGTH_SET = static_cast<int64_t>(0xffffffff8000004c),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZlibErrorCode_Unwrapped () const noexcept {
return static_cast<__ZlibErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZlibErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ZlibErrorCode(int64_t  value__) noexcept;

/// @brief Field END_OF_STREAM value: I64(-2147483584)
static ::Modio::Errors::ZlibErrorCode const END_OF_STREAM;

/// @brief Field INCOMPLETE_LENGTH_SET value: I64(-2147483572)
static ::Modio::Errors::ZlibErrorCode const INCOMPLETE_LENGTH_SET;

/// @brief Field INVALID_BIT_LENGTH_REPEAT value: I64(-2147483578)
static ::Modio::Errors::ZlibErrorCode const INVALID_BIT_LENGTH_REPEAT;

/// @brief Field INVALID_BLOCK_TYPE value: I64(-2147483582)
static ::Modio::Errors::ZlibErrorCode const INVALID_BLOCK_TYPE;

/// @brief Field INVALID_CODE_LENGTHS value: I64(-2147483579)
static ::Modio::Errors::ZlibErrorCode const INVALID_CODE_LENGTHS;

/// @brief Field INVALID_DISTANCE value: I64(-2147483574)
static ::Modio::Errors::ZlibErrorCode const INVALID_DISTANCE;

/// @brief Field INVALID_DISTANCE_CODE value: I64(-2147483575)
static ::Modio::Errors::ZlibErrorCode const INVALID_DISTANCE_CODE;

/// @brief Field INVALID_LITERAL_LENGTH value: I64(-2147483576)
static ::Modio::Errors::ZlibErrorCode const INVALID_LITERAL_LENGTH;

/// @brief Field INVALID_STORED_LENGTH value: I64(-2147483581)
static ::Modio::Errors::ZlibErrorCode const INVALID_STORED_LENGTH;

/// @brief Field MISSING_EOB value: I64(-2147483577)
static ::Modio::Errors::ZlibErrorCode const MISSING_EOB;

/// @brief Field NEED_BUFFERS value: I64(-2147483585)
static ::Modio::Errors::ZlibErrorCode const NEED_BUFFERS;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::ZlibErrorCode const NONE;

/// @brief Field OVER_SUBSCRIBED_LENGTH value: I64(-2147483573)
static ::Modio::Errors::ZlibErrorCode const OVER_SUBSCRIBED_LENGTH;

/// @brief Field STREAM_ERROR value: I64(-2147483583)
static ::Modio::Errors::ZlibErrorCode const STREAM_ERROR;

/// @brief Field TOO_MANY_SYMBOLS value: I64(-2147483580)
static ::Modio::Errors::ZlibErrorCode const TOO_MANY_SYMBOLS;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::ZlibErrorCode const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17714};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::ZlibErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::ZlibErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
