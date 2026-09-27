#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SocketUdpAsync.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SocketUdpAsync_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)(::ExitGames::Client::Photon::PeerBase*)>(&::ExitGames::Client::Photon::SocketUdpAsync::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa6e5b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6e5cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::Dispose)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa6e5d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::Connect)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa6e5e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::Disconnect)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa6e6010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketUdpAsync::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::SocketUdpAsync::Send)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xa6e6258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketUdpAsync::*)(::by_ref<::ArrayW<uint8_t>>)>(&::ExitGames::Client::Photon::SocketUdpAsync::Receive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6e6624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.DnsAndConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::DnsAndConnect)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0xa6e6644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {"DnsAndConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.StartReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::StartReceive)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa6e6bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {"StartReceive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.OnReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)(::System::IAsyncResult*)>(&::ExitGames::Client::Photon::SocketUdpAsync::OnReceive)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0xa6e6e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {"OnReceive", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_get_sock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr ::System::Net::Sockets::Socket* const& ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_get_sock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr void ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_set_sock(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sock = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_get_syncer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncer;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_get_syncer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncer;
}
constexpr void ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_set_syncer(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncer = value;
}
inline void ExitGames::Client::Photon::SocketUdpAsync::_ctor(::ExitGames::Client::Photon::PeerBase*  npeer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, npeer);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketUdpAsync::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketUdpAsync::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketUdpAsync::Send(::ArrayW<uint8_t>  data, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketUdpAsync::Receive(::by_ref<::ArrayW<uint8_t>>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::DnsAndConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {"DnsAndConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::StartReceive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {"StartReceive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::OnReceive(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketUdpAsync*>(),
                        {"OnReceive", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
/// @brief [Preserve]
inline ::ExitGames::Client::Photon::SocketUdpAsync* ExitGames::Client::Photon::SocketUdpAsync::New_ctor(::ExitGames::Client::Photon::PeerBase*  npeer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SocketUdpAsync*>(npeer));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ExitGames::Client::Photon::SocketUdpAsync::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ExitGames::Client::Photon::SocketUdpAsync::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SocketUdpAsync::SocketUdpAsync()   {
}
