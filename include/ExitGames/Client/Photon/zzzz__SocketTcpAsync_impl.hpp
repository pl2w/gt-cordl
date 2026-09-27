#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SocketTcpAsync.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SocketTcpAsync_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SocketTcpAsync_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)(::ExitGames::Client::Photon::PeerBase*)>(&::ExitGames::Client::Photon::SocketTcpAsync::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa6e2548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6e2684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync::Dispose)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa6e2708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync::Connect)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa6e2824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync::Disconnect)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa6e29cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketTcpAsync::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::SocketTcpAsync::Send)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xa6e2c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketTcpAsync::*)(::by_ref<::ArrayW<uint8_t>>)>(&::ExitGames::Client::Photon::SocketTcpAsync::Receive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6e2fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.DnsAndConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync::DnsAndConnect)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0xa6e2fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {"DnsAndConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.ReceiveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*)>(&::ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xa6e366c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {"ReceiveAsync", {}, {::i2c::type_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.ReceiveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)(::System::IAsyncResult*)>(&::ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0xa6e3a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {"ReceiveAsync", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_get_sock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr ::System::Net::Sockets::Socket* const& ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_get_sock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sock;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_set_sock(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sock = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_get_syncer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncer;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_get_syncer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncer;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_set_syncer(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncer = value;
}
inline void ExitGames::Client::Photon::SocketTcpAsync::_ctor(::ExitGames::Client::Photon::PeerBase*  npeer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, npeer);
}
inline void ExitGames::Client::Photon::SocketTcpAsync::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketTcpAsync::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketTcpAsync::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketTcpAsync::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketTcpAsync::Send(::ArrayW<uint8_t>  data, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketTcpAsync::Receive(::by_ref<::ArrayW<uint8_t>>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data);
}
inline void ExitGames::Client::Photon::SocketTcpAsync::DnsAndConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {"DnsAndConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {"ReceiveAsync", {}, {::i2c::type_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync*>(),
                        {"ReceiveAsync", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
/// @brief [Preserve]
inline ::ExitGames::Client::Photon::SocketTcpAsync* ExitGames::Client::Photon::SocketTcpAsync::New_ctor(::ExitGames::Client::Photon::PeerBase*  npeer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SocketTcpAsync*>(npeer));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ExitGames::Client::Photon::SocketTcpAsync::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ExitGames::Client::Photon::SocketTcpAsync::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SocketTcpAsync::SocketTcpAsync()   {
}
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::*)(::System::Net::Sockets::Socket*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa6e399c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext.get_ReadingHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_ReadingHeader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6e4130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_ReadingHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext.get_ReadingMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_ReadingMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6e414c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_ReadingMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext.get_CurrentBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_CurrentBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6e39fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_CurrentBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext.get_CurrentOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_CurrentOffset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6e3a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_CurrentOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext.get_CurrentExpected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_CurrentExpected)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6e3a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_CurrentExpected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6e4140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_workSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workSocket;
}
constexpr ::System::Net::Sockets::Socket* const& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_workSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workSocket;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_set_workSocket(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workSocket = value;
}
constexpr int32_t& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_ReceivedHeaderBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceivedHeaderBytes;
}
constexpr int32_t const& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_ReceivedHeaderBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceivedHeaderBytes;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_set_ReceivedHeaderBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceivedHeaderBytes = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_HeaderBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeaderBuffer;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_HeaderBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeaderBuffer;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_set_HeaderBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HeaderBuffer = value;
}
constexpr int32_t& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_ExpectedMessageBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedMessageBytes;
}
constexpr int32_t const& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_ExpectedMessageBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedMessageBytes;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_set_ExpectedMessageBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedMessageBytes = value;
}
constexpr int32_t& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_ReceivedMessageBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceivedMessageBytes;
}
constexpr int32_t const& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_ReceivedMessageBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceivedMessageBytes;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_set_ReceivedMessageBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceivedMessageBytes = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_MessageBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageBuffer;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_get_MessageBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageBuffer;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::__cordl_internal_set_MessageBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MessageBuffer = value;
}
inline void ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::_ctor(::System::Net::Sockets::Socket*  socket, ::ArrayW<uint8_t>  headerBuffer, ::ArrayW<uint8_t>  messageBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket, headerBuffer, messageBuffer);
}
inline bool ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_ReadingHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_ReadingHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_ReadingMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_ReadingMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_CurrentBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_CurrentBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_CurrentOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_CurrentOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::get_CurrentExpected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"get_CurrentExpected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext* ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::New_ctor(::System::Net::Sockets::Socket*  socket, ::ArrayW<uint8_t>  headerBuffer, ::ArrayW<uint8_t>  messageBuffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*>(socket, headerBuffer, messageBuffer));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext::SocketTcpAsync_ReceiveContext()   {
}
