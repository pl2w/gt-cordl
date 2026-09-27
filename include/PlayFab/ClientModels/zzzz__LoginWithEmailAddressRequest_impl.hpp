#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithEmailAddressRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LoginWithEmailAddressRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequestParams_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LoginWithEmailAddressRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LoginWithEmailAddressRequest::*)()>(&::PlayFab::ClientModels::LoginWithEmailAddressRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithEmailAddressRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_get_Email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_get_Email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr void PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_set_Email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Email = value;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_get_InfoRequestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_get_InfoRequestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr void PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoRequestParameters = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_get_Password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_get_Password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr void PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_set_Password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Password = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::LoginWithEmailAddressRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ClientModels::LoginWithEmailAddressRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithEmailAddressRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LoginWithEmailAddressRequest* PlayFab::ClientModels::LoginWithEmailAddressRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LoginWithEmailAddressRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LoginWithEmailAddressRequest::LoginWithEmailAddressRequest()   {
}
