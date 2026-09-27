#pragma once
// IWYU pragma private; include "Modio/Errors/RateLimitError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__RateLimitError_def.hpp"
#include "Modio/Errors/zzzz__RateLimitErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::RateLimitError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::RateLimitError::*)(::Modio::Errors::RateLimitErrorCode, int32_t)>(&::Modio::Errors::RateLimitError::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa056f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::RateLimitError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::RateLimitErrorCode>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::Errors::RateLimitError::__cordl_internal_get_RetryAfterSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryAfterSeconds;
}
constexpr int32_t const& Modio::Errors::RateLimitError::__cordl_internal_get_RetryAfterSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryAfterSeconds;
}
constexpr void Modio::Errors::RateLimitError::__cordl_internal_set_RetryAfterSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RetryAfterSeconds = value;
}
inline void Modio::Errors::RateLimitError::_ctor(::Modio::Errors::RateLimitErrorCode  code, int32_t  retryAfterSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::RateLimitError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::RateLimitErrorCode>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, retryAfterSeconds);
}
inline ::Modio::Errors::RateLimitError* Modio::Errors::RateLimitError::New_ctor(::Modio::Errors::RateLimitErrorCode  code, int32_t  retryAfterSeconds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::RateLimitError*>(code, retryAfterSeconds));
}
// Ctor Parameters []
constexpr ::Modio::Errors::RateLimitError::RateLimitError()   {
}
