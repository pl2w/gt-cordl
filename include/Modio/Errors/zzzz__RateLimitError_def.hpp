#pragma once
// IWYU pragma private; include "Modio/Errors/RateLimitError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RateLimitError)
namespace Modio::Errors {
struct RateLimitErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class RateLimitError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::RateLimitError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::RateLimitError*, "Modio.Errors", "RateLimitError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.RateLimitError
class CORDL_TYPE RateLimitError : public ::Modio::Error {
public:
// Declarations
/// @brief Field RetryAfterSeconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_RetryAfterSeconds, put=__cordl_internal_set_RetryAfterSeconds)) int32_t  RetryAfterSeconds;

static inline ::Modio::Errors::RateLimitError* New_ctor(::Modio::Errors::RateLimitErrorCode  code, int32_t  retryAfterSeconds) ;

constexpr int32_t const& __cordl_internal_get_RetryAfterSeconds() const;

constexpr int32_t& __cordl_internal_get_RetryAfterSeconds() ;

constexpr void __cordl_internal_set_RetryAfterSeconds(int32_t  value) ;

/// @brief Method .ctor, addr 0xa056f8c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::RateLimitErrorCode  code, int32_t  retryAfterSeconds) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RateLimitError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RateLimitError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RateLimitError(RateLimitError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RateLimitError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RateLimitError(RateLimitError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17717};

/// @brief Field RetryAfterSeconds, offset: 0x20, size: 0x4, def value: None
 int32_t  ___RetryAfterSeconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::RateLimitError, ___RetryAfterSeconds) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::RateLimitError) == 0x28, "Size mismatch!");

} // namespace end def Modio::Errors
