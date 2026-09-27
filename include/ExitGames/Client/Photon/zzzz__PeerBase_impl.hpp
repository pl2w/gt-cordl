#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/PeerBase.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionStateValue_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EgMessageType_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommand_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NetworkSimulationSet_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SimulationItem_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__TrafficStatsGameLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__TrafficStats_def.hpp"
#include "Photon/SocketServer/Security/zzzz__ICryptoProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_ServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_ServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c6f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.set_ServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::StringW)>(&::ExitGames::Client::Photon::PeerBase::set_ServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c6f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"set_ServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_ProxyServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_ProxyServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c6f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_ProxyServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.set_ProxyServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::StringW)>(&::ExitGames::Client::Photon::PeerBase::set_ProxyServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c6f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"set_ProxyServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_Listener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::IPhotonPeerListener* (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_Listener)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6bb438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_Listener", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_debugOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DebugLevel (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_debugOut)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6bb538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_debugOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_DisconnectTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_DisconnectTimeout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6c0bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_DisconnectTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_timePingInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_timePingInterval)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6bf10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_timePingInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_ChannelCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_ChannelCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6ba0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_ChannelCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_BytesOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_BytesOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c6f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_BytesOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_BytesIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_BytesIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c6f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_BytesIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_QueuedIncomingCommandsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_QueuedIncomingCommandsCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_QueuedOutgoingCommandsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_QueuedOutgoingCommandsCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_SentReliableCommandsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_SentReliableCommandsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c6f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_PeerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_PeerID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6c6fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_timeInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_timeInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6bdea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_timeInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_outgoingStreamBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::ExitGames::Client::Photon::PeerBase::get_outgoingStreamBufferSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6c6fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_outgoingStreamBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_mtu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_mtu)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6ba0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_mtu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_IsIpv6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_IsIpv6)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6c701c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_IsIpv6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa6b96e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.MessageBufferPoolGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::StreamBuffer* (*)()>(&::ExitGames::Client::Photon::PeerBase::MessageBufferPoolGet)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa6bfc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"MessageBufferPoolGet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.MessageBufferPoolPut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::PeerBase::MessageBufferPoolPut)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa6bfdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"MessageBufferPoolPut", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::Reset)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xa6b9dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)(::StringW, ::StringW, ::StringW, ::System::Object*)>(&::ExitGames::Client::Photon::PeerBase::Connect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.GetHttpKeyValueString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PeerBase::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::ExitGames::Client::Photon::PeerBase::GetHttpKeyValueString)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa6c703c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"GetHttpKeyValueString", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.WriteInitRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::WriteInitRequest)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0xa6c2508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"WriteInitRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.WriteInitV3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::WriteInitV3)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0xa6c7268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"WriteInitV3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.PrepareWebSocketUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PeerBase::*)(::StringW, ::StringW, ::System::Object*)>(&::ExitGames::Client::Photon::PeerBase::PrepareWebSocketUrl)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa6c768c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"PrepareWebSocketUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.OnConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::OnConnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.InitCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::InitCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa6c782c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"InitCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::Disconnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.StopConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::StopConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.FetchServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::FetchServerTimestamp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.IsTransportEncrypted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::IsTransportEncrypted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.EnqueuePhotonMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::SendOptions)>(&::ExitGames::Client::Photon::PeerBase::EnqueuePhotonMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.SerializeOperationToMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::StreamBuffer* (::ExitGames::Client::Photon::PeerBase::*)(uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*, ::ExitGames::Client::Photon::EgMessageType, bool)>(&::ExitGames::Client::Photon::PeerBase::SerializeOperationToMessage)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xa6c790c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"SerializeOperationToMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>(), ::i2c::type_of<::ExitGames::Client::Photon::EgMessageType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.SerializeOperationToMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::StreamBuffer* (::ExitGames::Client::Photon::PeerBase::*)(uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, ::ExitGames::Client::Photon::EgMessageType, bool)>(&::ExitGames::Client::Photon::PeerBase::SerializeOperationToMessage)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xa6c7bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"SerializeOperationToMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>(), ::i2c::type_of<::ExitGames::Client::Photon::EgMessageType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.SerializeMessageToMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::StreamBuffer* (::ExitGames::Client::Photon::PeerBase::*)(::System::Object*, bool)>(&::ExitGames::Client::Photon::PeerBase::SerializeMessageToMessage)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xa6c7e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"SerializeMessageToMessage", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.SendOutgoingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::SendOutgoingCommands)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.SendAcksOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::SendAcksOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c8134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.ReceiveIncomingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::PeerBase::ReceiveIncomingCommands)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.DispatchIncomingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::DispatchIncomingCommands)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.DeserializeMessageAndCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::PeerBase::DeserializeMessageAndCallback)> {
  constexpr static std::size_t size = 0xc74;
  constexpr static std::size_t addrs = 0xa6c813c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.UpdateRoundTripTimeAndVariance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(int32_t)>(&::ExitGames::Client::Photon::PeerBase::UpdateRoundTripTimeAndVariance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6c1d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"UpdateRoundTripTimeAndVariance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.ExchangeKeysForEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)(::System::Object*)>(&::ExitGames::Client::Photon::PeerBase::ExchangeKeysForEncryption)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0xa6c8f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"ExchangeKeysForEncryption", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.DeriveSharedKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::ExitGames::Client::Photon::PeerBase::DeriveSharedKey)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa6c8db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"DeriveSharedKey", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.InitEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::PeerBase::InitEncryption)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0xa6c95a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.EnqueueActionForDispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::ExitGames::Client::Photon::PeerBase_MyAction*)>(&::ExitGames::Client::Photon::PeerBase::EnqueueActionForDispatch)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa6c1d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"EnqueueActionForDispatch", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase_MyAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.EnqueueDebugReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::ExitGames::Client::Photon::DebugLevel, ::StringW)>(&::ExitGames::Client::Photon::PeerBase::EnqueueDebugReturn)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa6bb550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"EnqueueDebugReturn", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.EnqueueStatusCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::ExitGames::Client::Photon::StatusCode)>(&::ExitGames::Client::Photon::PeerBase::EnqueueStatusCallback)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa6bb1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"EnqueueStatusCallback", {}, {::i2c::type_of<::ExitGames::Client::Photon::StatusCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_NetworkSimulationSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::NetworkSimulationSet* (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_NetworkSimulationSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6baad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_NetworkSimulationSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.SendNetworkSimulated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::PeerBase::SendNetworkSimulated)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa6c0864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"SendNetworkSimulated", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.ReceiveNetworkSimulated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::PeerBase::ReceiveNetworkSimulated)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa6c38fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"ReceiveNetworkSimulated", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.NetworkSimRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::NetworkSimRun)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xa6c9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"NetworkSimRun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_TrafficStatsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_TrafficStatsEnabled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6ba3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_TrafficStatsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_TrafficStatsIncoming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::TrafficStats* (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_TrafficStatsIncoming)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6c1814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_TrafficStatsIncoming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_TrafficStatsOutgoing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::TrafficStats* (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_TrafficStatsOutgoing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6ba3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_TrafficStatsOutgoing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase.get_TrafficStatsGameLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::TrafficStatsGameLevel* (::ExitGames::Client::Photon::PeerBase::*)()>(&::ExitGames::Client::Photon::PeerBase::get_TrafficStatsGameLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6bfa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_TrafficStatsGameLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::PhotonPeer*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_photonPeer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonPeer;
}
constexpr ::ExitGames::Client::Photon::PhotonPeer* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_photonPeer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonPeer;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_photonPeer(::ExitGames::Client::Photon::PhotonPeer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonPeer = value;
}
constexpr ::ExitGames::Client::Photon::IProtocol*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_SerializationProtocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SerializationProtocol;
}
constexpr ::ExitGames::Client::Photon::IProtocol* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_SerializationProtocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SerializationProtocol;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_SerializationProtocol(::ExitGames::Client::Photon::IProtocol*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SerializationProtocol = value;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_usedTransportProtocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedTransportProtocol;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_usedTransportProtocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedTransportProtocol;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_usedTransportProtocol(::ExitGames::Client::Photon::ConnectionProtocol  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usedTransportProtocol = value;
}
constexpr ::ExitGames::Client::Photon::IPhotonSocket*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_PhotonSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhotonSocket;
}
constexpr ::ExitGames::Client::Photon::IPhotonSocket* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_PhotonSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhotonSocket;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_PhotonSocket(::ExitGames::Client::Photon::IPhotonSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PhotonSocket = value;
}
constexpr ::StringW& ExitGames::Client::Photon::PeerBase::__cordl_internal_get__ServerAddress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerAddress_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get__ServerAddress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerAddress_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set__ServerAddress_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ServerAddress_k__BackingField = value;
}
constexpr ::StringW& ExitGames::Client::Photon::PeerBase::__cordl_internal_get__ProxyServerAddress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyServerAddress_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get__ProxyServerAddress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyServerAddress_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set__ProxyServerAddress_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ProxyServerAddress_k__BackingField = value;
}
constexpr ::ExitGames::Client::Photon::ConnectionStateValue& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_peerConnectionState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerConnectionState;
}
constexpr ::ExitGames::Client::Photon::ConnectionStateValue const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_peerConnectionState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerConnectionState;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_peerConnectionState(::ExitGames::Client::Photon::ConnectionStateValue  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peerConnectionState = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_ByteCountLastOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ByteCountLastOperation;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_ByteCountLastOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ByteCountLastOperation;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_ByteCountLastOperation(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ByteCountLastOperation = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_ByteCountCurrentDispatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ByteCountCurrentDispatch;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_ByteCountCurrentDispatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ByteCountCurrentDispatch;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_ByteCountCurrentDispatch(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ByteCountCurrentDispatch = value;
}
constexpr ::ExitGames::Client::Photon::NCommand*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_CommandInCurrentDispatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommandInCurrentDispatch;
}
constexpr ::ExitGames::Client::Photon::NCommand* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_CommandInCurrentDispatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommandInCurrentDispatch;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_CommandInCurrentDispatch(::ExitGames::Client::Photon::NCommand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CommandInCurrentDispatch = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_packetLossByCrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packetLossByCrc;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_packetLossByCrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packetLossByCrc;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_packetLossByCrc(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packetLossByCrc = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_packetLossByChallenge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packetLossByChallenge;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_packetLossByChallenge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packetLossByChallenge;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_packetLossByChallenge(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packetLossByChallenge = value;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::PeerBase_MyAction*>*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_ActionQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActionQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::PeerBase_MyAction*>* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_ActionQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActionQueue;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_ActionQueue(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::PeerBase_MyAction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActionQueue = value;
}
constexpr int16_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_peerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerID;
}
constexpr int16_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_peerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerID;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_peerID(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peerID = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_serverTimeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverTimeOffset;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_serverTimeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverTimeOffset;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_serverTimeOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverTimeOffset = value;
}
constexpr bool& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_serverTimeOffsetIsAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverTimeOffsetIsAvailable;
}
constexpr bool const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_serverTimeOffsetIsAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverTimeOffsetIsAvailable;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_serverTimeOffsetIsAvailable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverTimeOffsetIsAvailable = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_roundTripTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundTripTime;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_roundTripTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundTripTime;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_roundTripTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundTripTime = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_roundTripTimeVariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundTripTimeVariance;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_roundTripTimeVariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundTripTimeVariance;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_roundTripTimeVariance(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundTripTimeVariance = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_lastRoundTripTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRoundTripTime;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_lastRoundTripTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRoundTripTime;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_lastRoundTripTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRoundTripTime = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_lowestRoundTripTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestRoundTripTime;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_lowestRoundTripTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestRoundTripTime;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_lowestRoundTripTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowestRoundTripTime = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_highestRoundTripTimeVariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highestRoundTripTimeVariance;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_highestRoundTripTimeVariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highestRoundTripTimeVariance;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_highestRoundTripTimeVariance(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highestRoundTripTimeVariance = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timestampOfLastReceive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timestampOfLastReceive;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timestampOfLastReceive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timestampOfLastReceive;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_timestampOfLastReceive(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timestampOfLastReceive = value;
}
constexpr int64_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_bytesOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytesOut;
}
constexpr int64_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_bytesOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytesOut;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_bytesOut(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bytesOut = value;
}
constexpr int64_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_bytesIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytesIn;
}
constexpr int64_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_bytesIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytesIn;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_bytesIn(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bytesIn = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_PhotonToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhotonToken;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_PhotonToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhotonToken;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_PhotonToken(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PhotonToken = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_CustomInitData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomInitData;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_CustomInitData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomInitData;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_CustomInitData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomInitData = value;
}
constexpr ::StringW& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_AppId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppId;
}
constexpr ::StringW const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_AppId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppId;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_AppId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppId = value;
}
constexpr ::ExitGames::Client::Photon::EventData*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_reusableEventData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableEventData;
}
constexpr ::ExitGames::Client::Photon::EventData* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_reusableEventData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableEventData;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_reusableEventData(::ExitGames::Client::Photon::EventData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reusableEventData = value;
}
constexpr ::System::Diagnostics::Stopwatch*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_watch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr ::System::Diagnostics::Stopwatch* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_watch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watch = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timeoutInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeoutInt;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timeoutInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeoutInt;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_timeoutInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeoutInt = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timeLastAckReceive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastAckReceive;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timeLastAckReceive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastAckReceive;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_timeLastAckReceive(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastAckReceive = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_longestSentCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___longestSentCall;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_longestSentCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___longestSentCall;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_longestSentCall(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___longestSentCall = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timeLastSendAck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastSendAck;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timeLastSendAck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastSendAck;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_timeLastSendAck(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastSendAck = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timeLastSendOutgoing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastSendOutgoing;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_timeLastSendOutgoing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastSendOutgoing;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_timeLastSendOutgoing(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastSendOutgoing = value;
}
constexpr bool& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_ApplicationIsInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplicationIsInitialized;
}
constexpr bool const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_ApplicationIsInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplicationIsInitialized;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_ApplicationIsInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApplicationIsInitialized = value;
}
constexpr bool& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_isEncryptionAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEncryptionAvailable;
}
constexpr bool const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_isEncryptionAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEncryptionAvailable;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_isEncryptionAvailable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEncryptionAvailable = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_outgoingCommandsInStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingCommandsInStream;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_outgoingCommandsInStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingCommandsInStream;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_outgoingCommandsInStream(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingCommandsInStream = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_messageHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageHeader;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_messageHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageHeader;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_messageHeader(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___messageHeader = value;
}
constexpr ::Photon::SocketServer::Security::ICryptoProvider*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_CryptoProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CryptoProvider;
}
constexpr ::Photon::SocketServer::Security::ICryptoProvider* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_CryptoProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CryptoProvider;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_CryptoProvider(::Photon::SocketServer::Security::ICryptoProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CryptoProvider = value;
}
constexpr ::System::Random*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_lagRandomizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lagRandomizer;
}
constexpr ::System::Random* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_lagRandomizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lagRandomizer;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_lagRandomizer(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lagRandomizer = value;
}
constexpr ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_NetSimListOutgoing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetSimListOutgoing;
}
constexpr ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_NetSimListOutgoing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetSimListOutgoing;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_NetSimListOutgoing(::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetSimListOutgoing = value;
}
constexpr ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_NetSimListIncoming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetSimListIncoming;
}
constexpr ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_NetSimListIncoming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetSimListIncoming;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_NetSimListIncoming(::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetSimListIncoming = value;
}
constexpr ::ExitGames::Client::Photon::NetworkSimulationSet*& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_networkSimulationSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSimulationSettings;
}
constexpr ::ExitGames::Client::Photon::NetworkSimulationSet* const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_networkSimulationSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSimulationSettings;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_networkSimulationSettings(::ExitGames::Client::Photon::NetworkSimulationSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkSimulationSettings = value;
}
constexpr int32_t& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_TrafficPackageHeaderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrafficPackageHeaderSize;
}
constexpr int32_t const& ExitGames::Client::Photon::PeerBase::__cordl_internal_get_TrafficPackageHeaderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrafficPackageHeaderSize;
}
constexpr void ExitGames::Client::Photon::PeerBase::__cordl_internal_set_TrafficPackageHeaderSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrafficPackageHeaderSize = value;
}
inline void ExitGames::Client::Photon::PeerBase::setStaticF_peerCount(int16_t  value)  {
::cordl_internals::setStaticField<int16_t, "peerCount", ::ExitGames::Client::Photon::PeerBase*>(std::forward<int16_t>(value));
}
inline int16_t ExitGames::Client::Photon::PeerBase::getStaticF_peerCount()  {
return ::cordl_internals::getStaticField<int16_t, "peerCount", ::ExitGames::Client::Photon::PeerBase*>();
}
inline void ExitGames::Client::Photon::PeerBase::setStaticF_MessageBufferPool(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*, "MessageBufferPool", ::ExitGames::Client::Photon::PeerBase*>(std::forward<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>* ExitGames::Client::Photon::PeerBase::getStaticF_MessageBufferPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*, "MessageBufferPool", ::ExitGames::Client::Photon::PeerBase*>();
}
inline ::StringW ExitGames::Client::Photon::PeerBase::get_ServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::set_ServerAddress(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"set_ServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::PeerBase::get_ProxyServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_ProxyServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::set_ProxyServerAddress(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"set_ProxyServerAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::IPhotonPeerListener* ExitGames::Client::Photon::PeerBase::get_Listener()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_Listener", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::IPhotonPeerListener*>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::DebugLevel ExitGames::Client::Photon::PeerBase::get_debugOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_debugOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PeerBase::get_DisconnectTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_DisconnectTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PeerBase::get_timePingInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_timePingInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint8_t ExitGames::Client::Photon::PeerBase::get_ChannelCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_ChannelCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline int64_t ExitGames::Client::Photon::PeerBase::get_BytesOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_BytesOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ExitGames::Client::Photon::PeerBase::get_BytesIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_BytesIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PeerBase::get_QueuedIncomingCommandsCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PeerBase::get_QueuedOutgoingCommandsCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PeerBase::get_SentReliableCommandsCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PeerBase::get_PeerID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PeerBase::get_timeInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_timeInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PeerBase::get_outgoingStreamBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_outgoingStreamBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PeerBase::get_mtu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_mtu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PeerBase::get_IsIpv6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_IsIpv6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::StreamBuffer* ExitGames::Client::Photon::PeerBase::MessageBufferPoolGet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"MessageBufferPoolGet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StreamBuffer*>(nullptr, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::MessageBufferPoolPut(::ExitGames::Client::Photon::StreamBuffer*  buff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"MessageBufferPoolPut", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buff);
}
inline void ExitGames::Client::Photon::PeerBase::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PeerBase::Connect(::StringW  serverAddress, ::StringW  proxyServerAddress, ::StringW  appID, ::System::Object*  photonToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, serverAddress, proxyServerAddress, appID, photonToken);
}
inline ::StringW ExitGames::Client::Photon::PeerBase::GetHttpKeyValueString(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  dic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"GetHttpKeyValueString", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, dic);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::PeerBase::WriteInitRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"WriteInitRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::PeerBase::WriteInitV3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"WriteInitV3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PeerBase::PrepareWebSocketUrl(::StringW  serverAddress, ::StringW  appId, ::System::Object*  photonToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"PrepareWebSocketUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, serverAddress, appId, photonToken);
}
inline void ExitGames::Client::Photon::PeerBase::OnConnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::InitCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"InitCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::StopConnection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::FetchServerTimestamp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PeerBase::IsTransportEncrypted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PeerBase::EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer*  opBytes, ::ExitGames::Client::Photon::SendOptions  sendParams)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opBytes, sendParams);
}
inline ::ExitGames::Client::Photon::StreamBuffer* ExitGames::Client::Photon::PeerBase::SerializeOperationToMessage(uint8_t  opCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters, ::ExitGames::Client::Photon::EgMessageType  messageType, bool  encrypt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"SerializeOperationToMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>(), ::i2c::type_of<::ExitGames::Client::Photon::EgMessageType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StreamBuffer*>(this, ___internal_method, opCode, parameters, messageType, encrypt);
}
inline ::ExitGames::Client::Photon::StreamBuffer* ExitGames::Client::Photon::PeerBase::SerializeOperationToMessage(uint8_t  opCode, ::ExitGames::Client::Photon::ParameterDictionary*  parameters, ::ExitGames::Client::Photon::EgMessageType  messageType, bool  encrypt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"SerializeOperationToMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>(), ::i2c::type_of<::ExitGames::Client::Photon::EgMessageType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StreamBuffer*>(this, ___internal_method, opCode, parameters, messageType, encrypt);
}
inline ::ExitGames::Client::Photon::StreamBuffer* ExitGames::Client::Photon::PeerBase::SerializeMessageToMessage(::System::Object*  message, bool  encrypt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"SerializeMessageToMessage", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StreamBuffer*>(this, ___internal_method, message, encrypt);
}
inline bool ExitGames::Client::Photon::PeerBase::SendOutgoingCommands()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PeerBase::SendAcksOnly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::ReceiveIncomingCommands(::ArrayW<uint8_t>  inBuff, int32_t  dataLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBuff, dataLength);
}
inline bool ExitGames::Client::Photon::PeerBase::DispatchIncomingCommands()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PeerBase::DeserializeMessageAndCallback(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline void ExitGames::Client::Photon::PeerBase::UpdateRoundTripTimeAndVariance(int32_t  lastRoundtripTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"UpdateRoundTripTimeAndVariance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lastRoundtripTime);
}
inline bool ExitGames::Client::Photon::PeerBase::ExchangeKeysForEncryption(::System::Object*  lockObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"ExchangeKeysForEncryption", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lockObject);
}
inline void ExitGames::Client::Photon::PeerBase::DeriveSharedKey(::ExitGames::Client::Photon::OperationResponse*  operationResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"DeriveSharedKey", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationResponse);
}
inline void ExitGames::Client::Photon::PeerBase::InitEncryption(::ArrayW<uint8_t>  secret)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secret);
}
inline void ExitGames::Client::Photon::PeerBase::EnqueueActionForDispatch(::ExitGames::Client::Photon::PeerBase_MyAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"EnqueueActionForDispatch", {}, {::i2c::type_of<::ExitGames::Client::Photon::PeerBase_MyAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void ExitGames::Client::Photon::PeerBase::EnqueueDebugReturn(::ExitGames::Client::Photon::DebugLevel  level, ::StringW  debugReturn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"EnqueueDebugReturn", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, debugReturn);
}
inline void ExitGames::Client::Photon::PeerBase::EnqueueStatusCallback(::ExitGames::Client::Photon::StatusCode  statusValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"EnqueueStatusCallback", {}, {::i2c::type_of<::ExitGames::Client::Photon::StatusCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusValue);
}
inline ::ExitGames::Client::Photon::NetworkSimulationSet* ExitGames::Client::Photon::PeerBase::get_NetworkSimulationSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_NetworkSimulationSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NetworkSimulationSet*>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase::SendNetworkSimulated(::ArrayW<uint8_t>  dataToSend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"SendNetworkSimulated", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataToSend);
}
inline void ExitGames::Client::Photon::PeerBase::ReceiveNetworkSimulated(::ArrayW<uint8_t>  dataReceived)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"ReceiveNetworkSimulated", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataReceived);
}
inline void ExitGames::Client::Photon::PeerBase::NetworkSimRun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"NetworkSimRun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PeerBase::get_TrafficStatsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_TrafficStatsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::TrafficStats* ExitGames::Client::Photon::PeerBase::get_TrafficStatsIncoming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_TrafficStatsIncoming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::TrafficStats*>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::TrafficStats* ExitGames::Client::Photon::PeerBase::get_TrafficStatsOutgoing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_TrafficStatsOutgoing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::TrafficStats*>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::TrafficStatsGameLevel* ExitGames::Client::Photon::PeerBase::get_TrafficStatsGameLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase*>(),
                        {"get_TrafficStatsGameLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::TrafficStatsGameLevel*>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PeerBase* ExitGames::Client::Photon::PeerBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::PeerBase*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PeerBase::PeerBase()   {
}
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::*)()>(&::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c9f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0._EnqueueStatusCallback_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::*)()>(&::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::_EnqueueStatusCallback_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa6c9f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0*>(),
                        {"<EnqueueStatusCallback>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::PeerBase*& ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::ExitGames::Client::Photon::PeerBase* const& ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::__cordl_internal_set___4__this(::ExitGames::Client::Photon::PeerBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ExitGames::Client::Photon::StatusCode& ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::__cordl_internal_get_statusValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusValue;
}
constexpr ::ExitGames::Client::Photon::StatusCode const& ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::__cordl_internal_get_statusValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusValue;
}
constexpr void ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::__cordl_internal_set_statusValue(::ExitGames::Client::Photon::StatusCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusValue = value;
}
inline void ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::_EnqueueStatusCallback_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0*>(),
                        {"<EnqueueStatusCallback>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0* ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0::PeerBase___c__DisplayClass109_0()   {
}
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::*)()>(&::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c9ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0._EnqueueDebugReturn_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::*)()>(&::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::_EnqueueDebugReturn_b__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa6c9ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0*>(),
                        {"<EnqueueDebugReturn>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::PeerBase*& ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::ExitGames::Client::Photon::PeerBase* const& ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::__cordl_internal_set___4__this(::ExitGames::Client::Photon::PeerBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::__cordl_internal_get_level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::__cordl_internal_get_level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level;
}
constexpr void ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::__cordl_internal_set_level(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___level = value;
}
constexpr ::StringW& ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::__cordl_internal_get_debugReturn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugReturn;
}
constexpr ::StringW const& ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::__cordl_internal_get_debugReturn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugReturn;
}
constexpr void ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::__cordl_internal_set_debugReturn(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugReturn = value;
}
inline void ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::_EnqueueDebugReturn_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0*>(),
                        {"<EnqueueDebugReturn>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0* ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0::PeerBase___c__DisplayClass108_0()   {
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PeerBase_GpBinaryV3Parameters::PeerBase_GpBinaryV3Parameters()   {
}
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase_MyAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase_MyAction::*)(::System::Object*, ::System::IntPtr)>(&::ExitGames::Client::Photon::PeerBase_MyAction::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa6c9dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase_MyAction.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase_MyAction::*)()>(&::ExitGames::Client::Photon::PeerBase_MyAction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6c9e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase_MyAction.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ExitGames::Client::Photon::PeerBase_MyAction::*)(::System::AsyncCallback*, ::System::Object*)>(&::ExitGames::Client::Photon::PeerBase_MyAction::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6c9e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PeerBase_MyAction.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PeerBase_MyAction::*)(::System::IAsyncResult*)>(&::ExitGames::Client::Photon::PeerBase_MyAction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6c9e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::PeerBase_MyAction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void ExitGames::Client::Photon::PeerBase_MyAction::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* ExitGames::Client::Photon::PeerBase_MyAction::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void ExitGames::Client::Photon::PeerBase_MyAction::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PeerBase_MyAction*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::ExitGames::Client::Photon::PeerBase_MyAction* ExitGames::Client::Photon::PeerBase_MyAction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::PeerBase_MyAction*>(object, method));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PeerBase_MyAction::PeerBase_MyAction()   {
}
