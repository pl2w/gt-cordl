#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetRemoteLoginEndpointResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetRemoteLoginEndpointResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::*)()>(&::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::__cordl_internal_get_IPV4Address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPV4Address;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::__cordl_internal_get_IPV4Address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPV4Address;
}
constexpr void PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::__cordl_internal_set_IPV4Address(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IPV4Address = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::__cordl_internal_get_Port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Port;
}
constexpr int32_t const& PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::__cordl_internal_get_Port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Port;
}
constexpr void PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::__cordl_internal_set_Port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Port = value;
}
inline void PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse* PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse::GetRemoteLoginEndpointResponse()   {
}
