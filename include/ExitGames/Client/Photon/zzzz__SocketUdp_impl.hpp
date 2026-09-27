#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SocketUdp.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SocketUdp_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdp::*)(::ExitGames::Client::Photon::PeerBase*)>(&::ExitGames::Client::Photon::SocketUdp::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa6e415c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdp.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdp::*)()>(&::ExitGames::Client::Photon::SocketUdp::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6e4298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdp::*)()>(&::ExitGames::Client::Photon::SocketUdp::Dispose)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa6e431c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdp.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketUdp::*)()>(&::ExitGames::Client::Photon::SocketUdp::Connect)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa6e443c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdp.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketUdp::*)()>(&::ExitGames::Client::Photon::SocketUdp::Disconnect)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa6e45e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdp.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketUdp::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::SocketUdp::Send)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0xa6e4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdp.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketUdp::*)(::by_ref<::ArrayW<uint8_t>>)>(&::ExitGames::Client::Photon::SocketUdp::Receive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6e4edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdp.DnsAndConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdp::*)()>(&::ExitGames::Client::Photon::SocketUdp::DnsAndConnect)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0xa6e4efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                        {"DnsAndConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdp.ReceiveLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdp::*)()>(&::ExitGames::Client::Photon::SocketUdp::ReceiveLoop)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0xa6e550c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                        {"ReceiveLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& ExitGames::Client::Photon::SocketUdp::__cordl_internal_get_sock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr ::System::Net::Sockets::Socket* const& ExitGames::Client::Photon::SocketUdp::__cordl_internal_get_sock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr void ExitGames::Client::Photon::SocketUdp::__cordl_internal_set_sock(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sock = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::SocketUdp::__cordl_internal_get_syncer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncer;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::SocketUdp::__cordl_internal_get_syncer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncer;
}
constexpr void ExitGames::Client::Photon::SocketUdp::__cordl_internal_set_syncer(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncer = value;
}
inline void ExitGames::Client::Photon::SocketUdp::_ctor(::ExitGames::Client::Photon::PeerBase*  npeer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, npeer);
}
inline void ExitGames::Client::Photon::SocketUdp::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketUdp::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketUdp::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketUdp::Send(::ArrayW<uint8_t>  data, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketUdp::Receive(::by_ref<::ArrayW<uint8_t>>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data);
}
inline void ExitGames::Client::Photon::SocketUdp::DnsAndConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                        {"DnsAndConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdp::ReceiveLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdp*>(),
                        {"ReceiveLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::ExitGames::Client::Photon::SocketUdp* ExitGames::Client::Photon::SocketUdp::New_ctor(::ExitGames::Client::Photon::PeerBase*  npeer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SocketUdp*>(npeer));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ExitGames::Client::Photon::SocketUdp::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ExitGames::Client::Photon::SocketUdp::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SocketUdp::SocketUdp()   {
}
