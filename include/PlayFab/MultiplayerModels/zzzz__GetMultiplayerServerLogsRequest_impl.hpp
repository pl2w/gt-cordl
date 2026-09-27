#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMultiplayerServerLogsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetMultiplayerServerLogsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest::*)()>(&::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8409d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest::__cordl_internal_get_ServerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest::__cordl_internal_get_ServerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerId;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest::__cordl_internal_set_ServerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerId = value;
}
inline void PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest* PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest::GetMultiplayerServerLogsRequest()   {
}
