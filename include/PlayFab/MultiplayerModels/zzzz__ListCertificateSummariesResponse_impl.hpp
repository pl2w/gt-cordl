#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListCertificateSummariesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListCertificateSummariesResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CertificateSummary_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListCertificateSummariesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListCertificateSummariesResponse::*)()>(&::PlayFab::MultiplayerModels::ListCertificateSummariesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListCertificateSummariesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CertificateSummary*>*& PlayFab::MultiplayerModels::ListCertificateSummariesResponse::__cordl_internal_get_CertificateSummaries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CertificateSummaries;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CertificateSummary*>* const& PlayFab::MultiplayerModels::ListCertificateSummariesResponse::__cordl_internal_get_CertificateSummaries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CertificateSummaries;
}
constexpr void PlayFab::MultiplayerModels::ListCertificateSummariesResponse::__cordl_internal_set_CertificateSummaries(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CertificateSummary*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CertificateSummaries = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::ListCertificateSummariesResponse::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr int32_t const& PlayFab::MultiplayerModels::ListCertificateSummariesResponse::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void PlayFab::MultiplayerModels::ListCertificateSummariesResponse::__cordl_internal_set_PageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListCertificateSummariesResponse::__cordl_internal_get_SkipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListCertificateSummariesResponse::__cordl_internal_get_SkipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr void PlayFab::MultiplayerModels::ListCertificateSummariesResponse::__cordl_internal_set_SkipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipToken = value;
}
inline void PlayFab::MultiplayerModels::ListCertificateSummariesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListCertificateSummariesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListCertificateSummariesResponse* PlayFab::MultiplayerModels::ListCertificateSummariesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListCertificateSummariesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListCertificateSummariesResponse::ListCertificateSummariesResponse()   {
}
