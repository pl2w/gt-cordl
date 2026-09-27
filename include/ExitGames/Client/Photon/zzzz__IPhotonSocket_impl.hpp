#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/IPhotonSocket.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketState_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_Listener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::IPhotonPeerListener* (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_Listener)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa6c2c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_Listener", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_MTU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_MTU)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa6c2cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_MTU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketState (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::PhotonSocketState)>(&::ExitGames::Client::Photon::IPhotonSocket::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_State", {}, {::i2c::type_of<::ExitGames::Client::Photon::PhotonSocketState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_SocketErrorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_SocketErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_SocketErrorCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_SocketErrorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(int32_t)>(&::ExitGames::Client::Photon::IPhotonSocket::set_SocketErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_SocketErrorCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_Connected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6bdc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_Connected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_ServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_ServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_ServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::set_ServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_ServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_ProxyServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_ProxyServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_ProxyServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_ProxyServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::set_ProxyServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_ProxyServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_ServerIpAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_ServerIpAddress)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa6c2d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_ServerIpAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_ServerIpAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::set_ServerIpAddress)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6c2d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_ServerIpAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_ServerPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_ServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_ServerPort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_ServerPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(int32_t)>(&::ExitGames::Client::Photon::IPhotonSocket::set_ServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_ServerPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_AddressResolvedAsIpv6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_AddressResolvedAsIpv6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_AddressResolvedAsIpv6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_AddressResolvedAsIpv6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(bool)>(&::ExitGames::Client::Photon::IPhotonSocket::set_AddressResolvedAsIpv6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_AddressResolvedAsIpv6", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_UrlProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_UrlProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_UrlProtocol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_UrlProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::set_UrlProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_UrlProtocol", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_UrlPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_UrlPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_UrlPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_UrlPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::set_UrlPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c2dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_UrlPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_SerializationProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_SerializationProtocol)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa6c2e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_SerializationProtocol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::PeerBase*)>(&::ExitGames::Client::Photon::IPhotonSocket::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6c2f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::Connect)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xa6c2fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::Disconnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::IPhotonSocket::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::IPhotonSocket::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::IPhotonSocket::*)(::by_ref<::ArrayW<uint8_t>>)>(&::ExitGames::Client::Photon::IPhotonSocket::Receive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.HandleReceivedDatagram
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ArrayW<uint8_t>, int32_t, bool)>(&::ExitGames::Client::Photon::IPhotonSocket::HandleReceivedDatagram)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa6c3710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"HandleReceivedDatagram", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.ReportDebugOfLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::DebugLevel)>(&::ExitGames::Client::Photon::IPhotonSocket::ReportDebugOfLevel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa6c3c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"ReportDebugOfLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.EnqueueDebugReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::DebugLevel, ::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::EnqueueDebugReturn)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6c3c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"EnqueueDebugReturn", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.HandleException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::StatusCode)>(&::ExitGames::Client::Photon::IPhotonSocket::HandleException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa6c3c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"HandleException", {}, {::i2c::type_of<::ExitGames::Client::Photon::StatusCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.TryParseAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW, ::by_ref<::StringW>, ::by_ref<uint16_t>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::ExitGames::Client::Photon::IPhotonSocket::TryParseAddress)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xa6c345c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"TryParseAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.IpAddressTryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW, ::by_ref<::System::Net::IPAddress*>)>(&::ExitGames::Client::Photon::IPhotonSocket::IpAddressTryParse)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa6c3d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"IpAddressTryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::IPAddress*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.GetIpAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::GetIpAddresses)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0xa6c3eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"GetIpAddresses", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.AddressSortComparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::IPhotonSocket::*)(::System::Net::IPAddress*, ::System::Net::IPAddress*)>(&::ExitGames::Client::Photon::IPhotonSocket::AddressSortComparer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6c4598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"AddressSortComparer", {}, {::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.GetIpAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::GetIpAddress)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa6c4604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"GetIpAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket._HandleException_b__56_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::_HandleException_b__56_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6c4808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"<HandleException>b__56_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::PeerBase*& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_peerBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerBase;
}
constexpr ::ExitGames::Client::Photon::PeerBase* const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_peerBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerBase;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peerBase = value;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_Protocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Protocol;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_Protocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Protocol;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Protocol = value;
}
constexpr bool& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_PollReceive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PollReceive;
}
constexpr bool const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_PollReceive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PollReceive;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set_PollReceive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PollReceive = value;
}
constexpr ::ExitGames::Client::Photon::PhotonSocketState& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::PhotonSocketState const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__State_k__BackingField(::ExitGames::Client::Photon::PhotonSocketState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__SocketErrorCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SocketErrorCode_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__SocketErrorCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SocketErrorCode_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__SocketErrorCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SocketErrorCode_k__BackingField = value;
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_ConnectAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectAddress;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_ConnectAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectAddress;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set_ConnectAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectAddress = value;
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ServerAddress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerAddress_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ServerAddress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerAddress_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__ServerAddress_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ServerAddress_k__BackingField = value;
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ProxyServerAddress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyServerAddress_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ProxyServerAddress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyServerAddress_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__ProxyServerAddress_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ProxyServerAddress_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ServerPort_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerPort_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ServerPort_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerPort_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__ServerPort_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ServerPort_k__BackingField = value;
}
constexpr bool& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__AddressResolvedAsIpv6_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddressResolvedAsIpv6_k__BackingField;
}
constexpr bool const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__AddressResolvedAsIpv6_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddressResolvedAsIpv6_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__AddressResolvedAsIpv6_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AddressResolvedAsIpv6_k__BackingField = value;
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__UrlProtocol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UrlProtocol_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__UrlProtocol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UrlProtocol_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__UrlProtocol_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UrlProtocol_k__BackingField = value;
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__UrlPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UrlPath_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__UrlPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UrlPath_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__UrlPath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UrlPath_k__BackingField = value;
}
inline void ExitGames::Client::Photon::IPhotonSocket::setStaticF__ServerIpAddress_k__BackingField(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "<ServerIpAddress>k__BackingField", ::ExitGames::Client::Photon::IPhotonSocket*>(std::forward<::StringW>(value));
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::getStaticF__ServerIpAddress_k__BackingField()  {
return ::cordl_internals::getStaticField<::StringW, "<ServerIpAddress>k__BackingField", ::ExitGames::Client::Photon::IPhotonSocket*>();
}
inline ::ExitGames::Client::Photon::IPhotonPeerListener* ExitGames::Client::Photon::IPhotonSocket::get_Listener()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_Listener", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::IPhotonPeerListener*>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::IPhotonSocket::get_MTU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_MTU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketState ExitGames::Client::Photon::IPhotonSocket::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketState>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_State(::ExitGames::Client::Photon::PhotonSocketState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_State", {}, {::i2c::type_of<::ExitGames::Client::Photon::PhotonSocketState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::IPhotonSocket::get_SocketErrorCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_SocketErrorCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_SocketErrorCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_SocketErrorCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_Connected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_ServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_ServerAddress(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_ServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_ProxyServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_ProxyServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_ProxyServerAddress(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_ProxyServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_ServerIpAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_ServerIpAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_ServerIpAddress(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_ServerIpAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::IPhotonSocket::get_ServerPort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_ServerPort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_ServerPort(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_ServerPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::get_AddressResolvedAsIpv6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_AddressResolvedAsIpv6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_AddressResolvedAsIpv6(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_AddressResolvedAsIpv6", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_UrlProtocol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_UrlProtocol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_UrlProtocol(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_UrlProtocol", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_UrlPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_UrlPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_UrlPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"set_UrlPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_SerializationProtocol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"get_SerializationProtocol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::_ctor(::ExitGames::Client::Photon::PeerBase*  peerBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peerBase);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::IPhotonSocket::Send(::ArrayW<uint8_t>  data, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::IPhotonSocket::Receive(::by_ref<::ArrayW<uint8_t>>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError>(this, ___internal_method, data);
}
inline void ExitGames::Client::Photon::IPhotonSocket::HandleReceivedDatagram(::ArrayW<uint8_t>  inBuffer, int32_t  length, bool  willBeReused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"HandleReceivedDatagram", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBuffer, length, willBeReused);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::ReportDebugOfLevel(::ExitGames::Client::Photon::DebugLevel  levelOfMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"ReportDebugOfLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelOfMessage);
}
inline void ExitGames::Client::Photon::IPhotonSocket::EnqueueDebugReturn(::ExitGames::Client::Photon::DebugLevel  debugLevel, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"EnqueueDebugReturn", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugLevel, message);
}
inline void ExitGames::Client::Photon::IPhotonSocket::HandleException(::ExitGames::Client::Photon::StatusCode  statusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"HandleException", {}, {::i2c::type_of<::ExitGames::Client::Photon::StatusCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusCode);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::TryParseAddress(::StringW  url, ::by_ref<::StringW>  host, ::by_ref<uint16_t>  port, ::by_ref<::StringW>  scheme, ::by_ref<::StringW>  absolutePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"TryParseAddress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, url, host, port, scheme, absolutePath);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::IpAddressTryParse(::StringW  strIP, ::by_ref<::System::Net::IPAddress*>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"IpAddressTryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::IPAddress*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, strIP, address);
}
inline ::ArrayW<::System::Net::IPAddress*> ExitGames::Client::Photon::IPhotonSocket::GetIpAddresses(::StringW  hostname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"GetIpAddresses", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(this, ___internal_method, hostname);
}
inline int32_t ExitGames::Client::Photon::IPhotonSocket::AddressSortComparer(::System::Net::IPAddress*  x, ::System::Net::IPAddress*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"AddressSortComparer", {}, {::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::System::Net::IPAddress* ExitGames::Client::Photon::IPhotonSocket::GetIpAddress(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"GetIpAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(nullptr, ___internal_method, address);
}
inline void ExitGames::Client::Photon::IPhotonSocket::_HandleException_b__56_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket*>(),
                        {"<HandleException>b__56_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::IPhotonSocket* ExitGames::Client::Photon::IPhotonSocket::New_ctor(::ExitGames::Client::Photon::PeerBase*  peerBase)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::IPhotonSocket*>(peerBase));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::IPhotonSocket::IPhotonSocket()   {
}
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket___c::*)()>(&::ExitGames::Client::Photon::IPhotonSocket___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket___c._GetIpAddresses_b__59_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket___c::*)(::System::Net::IPAddress*)>(&::ExitGames::Client::Photon::IPhotonSocket___c::_GetIpAddresses_b__59_0)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa6c4894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket___c*>(),
                        {"<GetIpAddresses>b__59_0", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::IPhotonSocket___c::setStaticF___9(::ExitGames::Client::Photon::IPhotonSocket___c*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::IPhotonSocket___c*, "<>9", ::ExitGames::Client::Photon::IPhotonSocket___c*>(std::forward<::ExitGames::Client::Photon::IPhotonSocket___c*>(value));
}
inline ::ExitGames::Client::Photon::IPhotonSocket___c* ExitGames::Client::Photon::IPhotonSocket___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::IPhotonSocket___c*, "<>9", ::ExitGames::Client::Photon::IPhotonSocket___c*>();
}
inline void ExitGames::Client::Photon::IPhotonSocket___c::setStaticF___9__59_0(::System::Func_2<::System::Net::IPAddress*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::IPAddress*,::StringW>*, "<>9__59_0", ::ExitGames::Client::Photon::IPhotonSocket___c*>(std::forward<::System::Func_2<::System::Net::IPAddress*,::StringW>*>(value));
}
inline ::System::Func_2<::System::Net::IPAddress*,::StringW>* ExitGames::Client::Photon::IPhotonSocket___c::getStaticF___9__59_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::IPAddress*,::StringW>*, "<>9__59_0", ::ExitGames::Client::Photon::IPhotonSocket___c*>();
}
inline void ExitGames::Client::Photon::IPhotonSocket___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket___c::_GetIpAddresses_b__59_0(::System::Net::IPAddress*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IPhotonSocket___c*>(),
                        {"<GetIpAddresses>b__59_0", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::ExitGames::Client::Photon::IPhotonSocket___c* ExitGames::Client::Photon::IPhotonSocket___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::IPhotonSocket___c*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::IPhotonSocket___c::IPhotonSocket___c()   {
}
