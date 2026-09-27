#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/QosServer.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__QosServer_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::QosServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::QosServer::*)()>(&::PlayFab::MultiplayerModels::QosServer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::QosServer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::QosServer::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::QosServer::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::MultiplayerModels::QosServer::__cordl_internal_set_Region(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::QosServer::__cordl_internal_get_ServerUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerUrl;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::QosServer::__cordl_internal_get_ServerUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerUrl;
}
constexpr void PlayFab::MultiplayerModels::QosServer::__cordl_internal_set_ServerUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerUrl = value;
}
inline void PlayFab::MultiplayerModels::QosServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::QosServer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::QosServer* PlayFab::MultiplayerModels::QosServer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::QosServer*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::QosServer::QosServer()   {
}
