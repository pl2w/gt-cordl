#pragma once
// IWYU pragma private; include "Modio/Errors/RateLimitErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RateLimitErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct RateLimitErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::RateLimitErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::RateLimitErrorCode, "Modio.Errors", "RateLimitErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.RateLimitErrorCode
struct CORDL_TYPE RateLimitErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __RateLimitErrorCode_Unwrapped
enum struct __RateLimitErrorCode_Unwrapped : int64_t {
__E_RATELIMITED = static_cast<int64_t>(0x2b00),
__E_RATELIMITED_SAME_ENDPOINT = static_cast<int64_t>(0x2b01),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RateLimitErrorCode_Unwrapped () const noexcept {
return static_cast<__RateLimitErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RateLimitErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr RateLimitErrorCode(int64_t  value__) noexcept;

/// @brief Field RATELIMITED value: I64(11008)
static ::Modio::Errors::RateLimitErrorCode const RATELIMITED;

/// @brief Field RATELIMITED_SAME_ENDPOINT value: I64(11009)
static ::Modio::Errors::RateLimitErrorCode const RATELIMITED_SAME_ENDPOINT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17716};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::RateLimitErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::RateLimitErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
