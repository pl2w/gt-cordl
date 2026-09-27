#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SendAccountRecoveryEmailRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__SendAccountRecoveryEmailRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::SendAccountRecoveryEmailRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::SendAccountRecoveryEmailRequest::*)()>(&::PlayFab::ClientModels::SendAccountRecoveryEmailRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SendAccountRecoveryEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::SendAccountRecoveryEmailRequest::__cordl_internal_get_Email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr ::StringW const& PlayFab::ClientModels::SendAccountRecoveryEmailRequest::__cordl_internal_get_Email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr void PlayFab::ClientModels::SendAccountRecoveryEmailRequest::__cordl_internal_set_Email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Email = value;
}
constexpr ::StringW& PlayFab::ClientModels::SendAccountRecoveryEmailRequest::__cordl_internal_get_EmailTemplateId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmailTemplateId;
}
constexpr ::StringW const& PlayFab::ClientModels::SendAccountRecoveryEmailRequest::__cordl_internal_get_EmailTemplateId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmailTemplateId;
}
constexpr void PlayFab::ClientModels::SendAccountRecoveryEmailRequest::__cordl_internal_set_EmailTemplateId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EmailTemplateId = value;
}
constexpr ::StringW& PlayFab::ClientModels::SendAccountRecoveryEmailRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::SendAccountRecoveryEmailRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::SendAccountRecoveryEmailRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ClientModels::SendAccountRecoveryEmailRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SendAccountRecoveryEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::SendAccountRecoveryEmailRequest* PlayFab::ClientModels::SendAccountRecoveryEmailRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::SendAccountRecoveryEmailRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::SendAccountRecoveryEmailRequest::SendAccountRecoveryEmailRequest()   {
}
