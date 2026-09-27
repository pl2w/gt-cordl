#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/UploadCertificateRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__UploadCertificateRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Certificate_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::UploadCertificateRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::UploadCertificateRequest::*)()>(&::PlayFab::MultiplayerModels::UploadCertificateRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::UploadCertificateRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::Certificate*& PlayFab::MultiplayerModels::UploadCertificateRequest::__cordl_internal_get_GameCertificate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCertificate;
}
constexpr ::PlayFab::MultiplayerModels::Certificate* const& PlayFab::MultiplayerModels::UploadCertificateRequest::__cordl_internal_get_GameCertificate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCertificate;
}
constexpr void PlayFab::MultiplayerModels::UploadCertificateRequest::__cordl_internal_set_GameCertificate(::PlayFab::MultiplayerModels::Certificate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCertificate = value;
}
inline void PlayFab::MultiplayerModels::UploadCertificateRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::UploadCertificateRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::UploadCertificateRequest* PlayFab::MultiplayerModels::UploadCertificateRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::UploadCertificateRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::UploadCertificateRequest::UploadCertificateRequest()   {
}
