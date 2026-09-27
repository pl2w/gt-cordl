#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SocketUdpBlocking.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SocketUdpBlocking_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpBlocking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpBlocking::*)(::ExitGames::Client::Photon::PeerBase*)>(&::ExitGames::Client::Photon::SocketUdpBlocking::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa6e7808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpBlocking.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpBlocking::*)()>(&::ExitGames::Client::Photon::SocketUdpBlocking::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6e7944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpBlocking.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpBlocking::*)()>(&::ExitGames::Client::Photon::SocketUdpBlocking::Dispose)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa6e79c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpBlocking.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketUdpBlocking::*)()>(&::ExitGames::Client::Photon::SocketUdpBlocking::Connect)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa6e7ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpBlocking.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketUdpBlocking::*)()>(&::ExitGames::Client::Photon::SocketUdpBlocking::Disconnect)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa6e7c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpBlocking.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketUdpBlocking::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::SocketUdpBlocking::Send)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xa6e7edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpBlocking.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketUdpBlocking::*)(::by_ref<::ArrayW<uint8_t>>)>(&::ExitGames::Client::Photon::SocketUdpBlocking::Receive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6e82a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpBlocking.DnsAndConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpBlocking::*)()>(&::ExitGames::Client::Photon::SocketUdpBlocking::DnsAndConnect)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0xa6e82c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                        {"DnsAndConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpBlocking.ReceiveLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpBlocking::*)()>(&::ExitGames::Client::Photon::SocketUdpBlocking::ReceiveLoop)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0xa6e88d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                        {"ReceiveLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& ExitGames::Client::Photon::SocketUdpBlocking::__cordl_internal_get_sock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr ::System::Net::Sockets::Socket* const& ExitGames::Client::Photon::SocketUdpBlocking::__cordl_internal_get_sock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr void ExitGames::Client::Photon::SocketUdpBlocking::__cordl_internal_set_sock(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sock = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::SocketUdpBlocking::__cordl_internal_get_syncer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncer;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::SocketUdpBlocking::__cordl_internal_get_syncer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncer;
}
constexpr void ExitGames::Client::Photon::SocketUdpBlocking::__cordl_internal_set_syncer(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncer = value;
}
inline void ExitGames::Client::Photon::SocketUdpBlocking::_ctor(::ExitGames::Client::Photon::PeerBase*  npeer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, npeer);
}
inline void ExitGames::Client::Photon::SocketUdpBlocking::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdpBlocking::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketUdpBlocking::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketUdpBlocking::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketUdpBlocking::Send(::ArrayW<uint8_t>  data, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketUdpBlocking::Receive(::by_ref<::ArrayW<uint8_t>>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data);
}
inline void ExitGames::Client::Photon::SocketUdpBlocking::DnsAndConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                        {"DnsAndConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdpBlocking::ReceiveLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpBlocking*>(),
                        {"ReceiveLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::ExitGames::Client::Photon::SocketUdpBlocking* ExitGames::Client::Photon::SocketUdpBlocking::New_ctor(::ExitGames::Client::Photon::PeerBase*  npeer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SocketUdpBlocking*>(npeer));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ExitGames::Client::Photon::SocketUdpBlocking::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ExitGames::Client::Photon::SocketUdpBlocking::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SocketUdpBlocking::SocketUdpBlocking()   {
}
