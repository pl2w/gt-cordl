#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMultiplayerSessionLogsBySessionIdRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetMultiplayerSessionLogsBySessionIdRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest::*)()>(&::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8409e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest::__cordl_internal_set_SessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionId = value;
}
inline void PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest* PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest::GetMultiplayerSessionLogsBySessionIdRequest()   {
}
