#pragma once
// IWYU pragma private; include "Modio/Users/Authentication.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Users/zzzz__Authentication_def.hpp"
//  Writing Method size for method: ::Modio::Users::Authentication._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::Authentication::*)()>(&::Modio::Users::Authentication::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01ca34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Authentication*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Users::Authentication::__cordl_internal_get_OAuthToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OAuthToken;
}
constexpr ::StringW const& Modio::Users::Authentication::__cordl_internal_get_OAuthToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OAuthToken;
}
constexpr void Modio::Users::Authentication::__cordl_internal_set_OAuthToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OAuthToken = value;
}
inline void Modio::Users::Authentication::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Authentication*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Users::Authentication* Modio::Users::Authentication::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::Authentication*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::Authentication::Authentication()   {
}
