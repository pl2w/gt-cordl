#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMultiplayerServerLogsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetMultiplayerServerLogsResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse::*)()>(&::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8409d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse::__cordl_internal_get_LogDownloadUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogDownloadUrl;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse::__cordl_internal_get_LogDownloadUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogDownloadUrl;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse::__cordl_internal_set_LogDownloadUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogDownloadUrl = value;
}
inline void PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse* PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse::GetMultiplayerServerLogsResponse()   {
}
