#pragma once
// IWYU pragma private; include "Photon/Realtime/IWebRpcCallback.hpp"
#include "Photon/Realtime/zzzz__IWebRpcCallback_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::IWebRpcCallback.OnWebRpcResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::IWebRpcCallback::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Photon::Realtime::IWebRpcCallback::OnWebRpcResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::IWebRpcCallback*>(),
                    {::i2c::class_of<::Photon::Realtime::IWebRpcCallback*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Photon::Realtime::IWebRpcCallback::OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::IWebRpcCallback*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
