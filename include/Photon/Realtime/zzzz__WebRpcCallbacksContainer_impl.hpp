#pragma once
// IWYU pragma private; include "Photon/Realtime/WebRpcCallbacksContainer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__WebRpcCallbacksContainer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "Photon/Realtime/zzzz__IWebRpcCallback_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::WebRpcCallbacksContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::WebRpcCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(&::Photon::Realtime::WebRpcCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa6fa77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::WebRpcCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::WebRpcCallbacksContainer.OnWebRpcResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::WebRpcCallbacksContainer::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Photon::Realtime::WebRpcCallbacksContainer::OnWebRpcResponse)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa7031e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::WebRpcCallbacksContainer*>(),
                        {"OnWebRpcResponse", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::WebRpcCallbacksContainer::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Photon::Realtime::LoadBalancingClient* const& Photon::Realtime::WebRpcCallbacksContainer::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Photon::Realtime::WebRpcCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
inline void Photon::Realtime::WebRpcCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::WebRpcCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Photon::Realtime::WebRpcCallbacksContainer::OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::WebRpcCallbacksContainer*>(),
                        {"OnWebRpcResponse", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::Photon::Realtime::WebRpcCallbacksContainer* Photon::Realtime::WebRpcCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::WebRpcCallbacksContainer*>(client));
}
/// @brief Convert operator to "::Photon::Realtime::IWebRpcCallback"
constexpr  Photon::Realtime::WebRpcCallbacksContainer::operator ::Photon::Realtime::IWebRpcCallback*() noexcept {
return static_cast<::Photon::Realtime::IWebRpcCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IWebRpcCallback"
constexpr ::Photon::Realtime::IWebRpcCallback* Photon::Realtime::WebRpcCallbacksContainer::i___Photon__Realtime__IWebRpcCallback() noexcept {
return static_cast<::Photon::Realtime::IWebRpcCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::WebRpcCallbacksContainer::WebRpcCallbacksContainer()   {
}
