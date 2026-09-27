#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkKongregateAccountRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkKongregateAccountRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkKongregateAccountRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkKongregateAccountRequest::*)()>(&::PlayFab::ClientModels::LinkKongregateAccountRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkKongregateAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LinkKongregateAccountRequest::__cordl_internal_get_AuthTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthTicket;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkKongregateAccountRequest::__cordl_internal_get_AuthTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthTicket;
}
constexpr void PlayFab::ClientModels::LinkKongregateAccountRequest::__cordl_internal_set_AuthTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthTicket = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkKongregateAccountRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkKongregateAccountRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkKongregateAccountRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkKongregateAccountRequest::__cordl_internal_get_KongregateId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateId;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkKongregateAccountRequest::__cordl_internal_get_KongregateId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateId;
}
constexpr void PlayFab::ClientModels::LinkKongregateAccountRequest::__cordl_internal_set_KongregateId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KongregateId = value;
}
inline void PlayFab::ClientModels::LinkKongregateAccountRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkKongregateAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkKongregateAccountRequest* PlayFab::ClientModels::LinkKongregateAccountRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkKongregateAccountRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkKongregateAccountRequest::LinkKongregateAccountRequest()   {
}
