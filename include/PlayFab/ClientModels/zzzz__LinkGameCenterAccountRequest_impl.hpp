#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkGameCenterAccountRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkGameCenterAccountRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkGameCenterAccountRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkGameCenterAccountRequest::*)()>(&::PlayFab::ClientModels::LinkGameCenterAccountRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkGameCenterAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_GameCenterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterId;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_GameCenterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterId;
}
constexpr void PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_set_GameCenterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCenterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_PublicKeyUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKeyUrl;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_PublicKeyUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKeyUrl;
}
constexpr void PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_set_PublicKeyUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PublicKeyUrl = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_Salt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Salt;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_Salt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Salt;
}
constexpr void PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_set_Salt(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Salt = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_Signature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Signature;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_Signature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Signature;
}
constexpr void PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_set_Signature(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Signature = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_Timestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_get_Timestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr void PlayFab::ClientModels::LinkGameCenterAccountRequest::__cordl_internal_set_Timestamp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timestamp = value;
}
inline void PlayFab::ClientModels::LinkGameCenterAccountRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkGameCenterAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkGameCenterAccountRequest* PlayFab::ClientModels::LinkGameCenterAccountRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkGameCenterAccountRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkGameCenterAccountRequest::LinkGameCenterAccountRequest()   {
}
