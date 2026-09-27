#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteCertificateRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DeleteCertificateRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::DeleteCertificateRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::DeleteCertificateRequest::*)()>(&::PlayFab::MultiplayerModels::DeleteCertificateRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8408f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteCertificateRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::DeleteCertificateRequest::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DeleteCertificateRequest::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::DeleteCertificateRequest::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
inline void PlayFab::MultiplayerModels::DeleteCertificateRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteCertificateRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::DeleteCertificateRequest* PlayFab::MultiplayerModels::DeleteCertificateRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::DeleteCertificateRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::DeleteCertificateRequest::DeleteCertificateRequest()   {
}
