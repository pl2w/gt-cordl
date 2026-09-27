#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CertificateSummary.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CertificateSummary_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CertificateSummary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CertificateSummary::*)()>(&::PlayFab::MultiplayerModels::CertificateSummary::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CertificateSummary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::CertificateSummary::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CertificateSummary::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::CertificateSummary::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CertificateSummary::__cordl_internal_get_Thumbprint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Thumbprint;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CertificateSummary::__cordl_internal_get_Thumbprint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Thumbprint;
}
constexpr void PlayFab::MultiplayerModels::CertificateSummary::__cordl_internal_set_Thumbprint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Thumbprint = value;
}
inline void PlayFab::MultiplayerModels::CertificateSummary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CertificateSummary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CertificateSummary* PlayFab::MultiplayerModels::CertificateSummary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CertificateSummary*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CertificateSummary::CertificateSummary()   {
}
