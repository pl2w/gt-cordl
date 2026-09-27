#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/WebRpcCallbacksContainer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__WebRpcCallbacksContainer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IWebRpcCallback_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcCallbacksContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::WebRpcCallbacksContainer::*)(::Fusion::Photon::Realtime::LoadBalancingClient*)>(&::Fusion::Photon::Realtime::WebRpcCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f598ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcCallbacksContainer.OnWebRpcResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::WebRpcCallbacksContainer::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Fusion::Photon::Realtime::WebRpcCallbacksContainer::OnWebRpcResponse)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f59974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcCallbacksContainer*>(),
                        {"OnWebRpcResponse", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::Photon::Realtime::WebRpcCallbacksContainer::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::Photon::Realtime::WebRpcCallbacksContainer::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Fusion::Photon::Realtime::WebRpcCallbacksContainer::__cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
inline void Fusion::Photon::Realtime::WebRpcCallbacksContainer::_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Fusion::Photon::Realtime::WebRpcCallbacksContainer::OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcCallbacksContainer*>(),
                        {"OnWebRpcResponse", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::Fusion::Photon::Realtime::WebRpcCallbacksContainer* Fusion::Photon::Realtime::WebRpcCallbacksContainer::New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::WebRpcCallbacksContainer*>(client));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IWebRpcCallback"
constexpr  Fusion::Photon::Realtime::WebRpcCallbacksContainer::operator ::Fusion::Photon::Realtime::IWebRpcCallback*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IWebRpcCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IWebRpcCallback"
constexpr ::Fusion::Photon::Realtime::IWebRpcCallback* Fusion::Photon::Realtime::WebRpcCallbacksContainer::i___Fusion__Photon__Realtime__IWebRpcCallback() noexcept {
return static_cast<::Fusion::Photon::Realtime::IWebRpcCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::WebRpcCallbacksContainer::WebRpcCallbacksContainer()   {
}
