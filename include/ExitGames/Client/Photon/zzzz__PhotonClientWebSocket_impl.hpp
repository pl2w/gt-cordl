#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/PhotonClientWebSocket.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonClientWebSocket_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonClientWebSocket::*)(::ExitGames::Client::Photon::PeerBase*)>(&::ExitGames::Client::Photon::PhotonClientWebSocket::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6ca02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonClientWebSocket::*)()>(&::ExitGames::Client::Photon::PhotonClientWebSocket::Connect)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa6ca0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.AsyncConnectAndReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonClientWebSocket::*)()>(&::ExitGames::Client::Photon::PhotonClientWebSocket::AsyncConnectAndReceive)> {
  constexpr static std::size_t size = 0x1218;
  constexpr static std::size_t addrs = 0xa6ca198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(),
                        {"AsyncConnectAndReceive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonClientWebSocket::*)()>(&::ExitGames::Client::Photon::PhotonClientWebSocket::Disconnect)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xa6cb3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::PhotonClientWebSocket::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::PhotonClientWebSocket::Send)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa6cb688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::PhotonClientWebSocket::*)(::by_ref<::ArrayW<uint8_t>>)>(&::ExitGames::Client::Photon::PhotonClientWebSocket::Receive)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6cb908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebSockets::ClientWebSocket*& ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_get_clientWebSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientWebSocket;
}
constexpr ::System::Net::WebSockets::ClientWebSocket* const& ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_get_clientWebSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientWebSocket;
}
constexpr void ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_set_clientWebSocket(::System::Net::WebSockets::ClientWebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientWebSocket = value;
}
constexpr ::System::Threading::Tasks::Task*& ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_get_sendTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTask;
}
constexpr ::System::Threading::Tasks::Task* const& ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_get_sendTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTask;
}
constexpr void ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_set_sendTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendTask = value;
}
inline void ExitGames::Client::Photon::PhotonClientWebSocket::_ctor(::ExitGames::Client::Photon::PeerBase*  peerBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peerBase);
}
inline bool ExitGames::Client::Photon::PhotonClientWebSocket::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonClientWebSocket::AsyncConnectAndReceive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(),
                        {"AsyncConnectAndReceive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonClientWebSocket::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::PhotonClientWebSocket::Send(::ArrayW<uint8_t>  data, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::PhotonClientWebSocket::Receive(::by_ref<::ArrayW<uint8_t>>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonClientWebSocket*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data);
}
/// @brief [Preserve]
inline ::ExitGames::Client::Photon::PhotonClientWebSocket* ExitGames::Client::Photon::PhotonClientWebSocket::New_ctor(::ExitGames::Client::Photon::PeerBase*  peerBase)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::PhotonClientWebSocket*>(peerBase));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PhotonClientWebSocket::PhotonClientWebSocket()   {
}
