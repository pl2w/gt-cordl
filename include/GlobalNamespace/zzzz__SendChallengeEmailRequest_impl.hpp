#pragma once
// IWYU pragma private; include "GlobalNamespace/SendChallengeEmailRequest.hpp"
#include "GlobalNamespace/zzzz__KIDRequestData_impl.hpp"
#include "GlobalNamespace/zzzz__SendChallengeEmailRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SendChallengeEmailRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SendChallengeEmailRequest::*)()>(&::GlobalNamespace::SendChallengeEmailRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendChallengeEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SendChallengeEmailRequest::__cordl_internal_get_Email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr ::StringW const& GlobalNamespace::SendChallengeEmailRequest::__cordl_internal_get_Email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr void GlobalNamespace::SendChallengeEmailRequest::__cordl_internal_set_Email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Email = value;
}
constexpr ::StringW& GlobalNamespace::SendChallengeEmailRequest::__cordl_internal_get_Locale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locale;
}
constexpr ::StringW const& GlobalNamespace::SendChallengeEmailRequest::__cordl_internal_get_Locale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locale;
}
constexpr void GlobalNamespace::SendChallengeEmailRequest::__cordl_internal_set_Locale(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Locale = value;
}
inline void GlobalNamespace::SendChallengeEmailRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendChallengeEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SendChallengeEmailRequest* GlobalNamespace::SendChallengeEmailRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SendChallengeEmailRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SendChallengeEmailRequest::SendChallengeEmailRequest()   {
}
