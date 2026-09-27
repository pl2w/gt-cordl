#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/PhotonPeer.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__TargetFrameworks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_def.hpp"
#include "ExitGames/Client/Photon/Encryption/zzzz__IPhotonEncryptor_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlicePool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ITrafficRecorder_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NetworkSimulationSet_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerStateValue_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SupportClass_def.hpp"
#include "ExitGames/Client/Photon/zzzz__TrafficStatsGameLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__TrafficStats_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_CommandBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_CommandBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cb940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_CommandBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_CommandBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::set_CommandBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cb948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_CommandBufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LimitOfUnreliableCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_LimitOfUnreliableCommands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cb950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LimitOfUnreliableCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_LimitOfUnreliableCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::set_LimitOfUnreliableCommands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cb958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_LimitOfUnreliableCommands", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LocalTimeInMilliSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_LocalTimeInMilliSeconds)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa6cb960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LocalTimeInMilliSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.CommandLogToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::CommandLogToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"CommandLogToString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ClientSdkIdShifted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ClientSdkIdShifted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6cb9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ClientSdkIdShifted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ClientVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ClientVersion)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa6cb9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ClientVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_Version)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa6cbcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_SerializationProtocolType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::SerializationProtocol (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_SerializationProtocolType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cbf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SerializationProtocolType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_SerializationProtocolType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::SerializationProtocol)>(&::ExitGames::Client::Photon::PhotonPeer::set_SerializationProtocolType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cbfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_SerializationProtocolType", {}, {::i2c::type_of<::ExitGames::Client::Photon::SerializationProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_SocketImplementation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_SocketImplementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cbfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SocketImplementation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_SocketImplementation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::System::Type*)>(&::ExitGames::Client::Photon::PhotonPeer::set_SocketImplementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cbfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_SocketImplementation", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_SocketErrorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_SocketErrorCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6cbfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SocketErrorCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_Listener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::IPhotonPeerListener* (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_Listener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cbfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_Listener", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_Listener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::IPhotonPeerListener*)>(&::ExitGames::Client::Photon::PhotonPeer::set_Listener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cbfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_Listener", {}, {::i2c::type_of<::ExitGames::Client::Photon::IPhotonPeerListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.add_OnDisconnectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*)>(&::ExitGames::Client::Photon::PhotonPeer::add_OnDisconnectMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa6cbfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"add_OnDisconnectMessage", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.remove_OnDisconnectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*)>(&::ExitGames::Client::Photon::PhotonPeer::remove_OnDisconnectMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa6cc09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"remove_OnDisconnectMessage", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ReuseEventInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ReuseEventInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ReuseEventInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_ReuseEventInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::set_ReuseEventInstance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa6cc154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_ReuseEventInstance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_UseByteArraySlicePoolForEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_UseByteArraySlicePoolForEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_UseByteArraySlicePoolForEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_UseByteArraySlicePoolForEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::set_UseByteArraySlicePoolForEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_UseByteArraySlicePoolForEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_WrapIncomingStructs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_WrapIncomingStructs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_WrapIncomingStructs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_WrapIncomingStructs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::set_WrapIncomingStructs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_WrapIncomingStructs", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ByteArraySlicePool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ByteArraySlicePool* (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ByteArraySlicePool)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa6cc254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ByteArraySlicePool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_SequenceDeltaLimitSends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_SequenceDeltaLimitSends)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SequenceDeltaLimitSends", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_SequenceDeltaLimitSends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::set_SequenceDeltaLimitSends)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_SequenceDeltaLimitSends", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_BytesIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_BytesIn)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_BytesIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_BytesOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_BytesOut)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_BytesOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ByteCountCurrentDispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ByteCountCurrentDispatch)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ByteCountCurrentDispatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_CommandInfoCurrentDispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_CommandInfoCurrentDispatch)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6cc2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_CommandInfoCurrentDispatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ByteCountLastOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ByteCountLastOperation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ByteCountLastOperation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_EnableServerTracing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_EnableServerTracing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_EnableServerTracing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_EnableServerTracing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::set_EnableServerTracing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_EnableServerTracing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_QuickResendAttempts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_QuickResendAttempts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_QuickResendAttempts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_QuickResendAttempts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(uint8_t)>(&::ExitGames::Client::Photon::PhotonPeer::set_QuickResendAttempts)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_QuickResendAttempts", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PeerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::PeerStateValue (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_PeerState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa6cc354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PeerState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PeerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_PeerID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6cc388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PeerID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_QueuedIncomingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_QueuedIncomingCommands)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6cc3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_QueuedIncomingCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_QueuedOutgoingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_QueuedOutgoingCommands)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6cc3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_QueuedOutgoingCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.MessageBufferPoolTrim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::MessageBufferPoolTrim)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa6cc3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"MessageBufferPoolTrim", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.MessageBufferPoolSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::ExitGames::Client::Photon::PhotonPeer::MessageBufferPoolSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa6cc62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"MessageBufferPoolSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_CrcEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_CrcEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_CrcEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_CrcEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::set_CrcEnabled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6cc6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_CrcEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PacketLossByCrc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_PacketLossByCrc)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PacketLossByCrc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PacketLossByChallenge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_PacketLossByChallenge)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PacketLossByChallenge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_SentReliableCommandsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_SentReliableCommandsCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6cc750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SentReliableCommandsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ResentReliableCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ResentReliableCommands)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa6cc76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ResentReliableCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_DisconnectTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_DisconnectTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cc814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_DisconnectTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_DisconnectTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::set_DisconnectTimeout)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6cc81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_DisconnectTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ServerTimeInMilliSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ServerTimeInMilliSeconds)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6cc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ServerTimeInMilliSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_LocalMsTimestampDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*)>(&::ExitGames::Client::Photon::PhotonPeer::set_LocalMsTimestampDelegate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa6cc880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_LocalMsTimestampDelegate", {}, {::i2c::type_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ConnectionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ConnectionTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ConnectionTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LastSendAckTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_LastSendAckTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LastSendAckTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LastSendOutgoingTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_LastSendOutgoingTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LastSendOutgoingTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LongestSentCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_LongestSentCall)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LongestSentCall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_LongestSentCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::set_LongestSentCall)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_LongestSentCall", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_RoundTripTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_RoundTripTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_RoundTripTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_RoundTripTimeVariance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_RoundTripTimeVariance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cca00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_RoundTripTimeVariance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LastRoundTripTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_LastRoundTripTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cca18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LastRoundTripTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TimestampOfLastSocketReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_TimestampOfLastSocketReceive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TimestampOfLastSocketReceive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ServerAddress)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ServerIpAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_ServerIpAddress)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa6cca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ServerIpAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_UsedProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ConnectionProtocol (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_UsedProtocol)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cc7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_UsedProtocol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TransportProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ConnectionProtocol (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_TransportProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TransportProtocol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TransportProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::ConnectionProtocol)>(&::ExitGames::Client::Photon::PhotonPeer::set_TransportProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TransportProtocol", {}, {::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_IsSimulationEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_IsSimulationEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6ccab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_IsSimulationEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::set_IsSimulationEnabled)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa6ccaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_NetworkSimulationSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::NetworkSimulationSet* (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_NetworkSimulationSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6ccad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_NetworkSimulationSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_MaximumTransferUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_MaximumTransferUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_MaximumTransferUnit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_MaximumTransferUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::set_MaximumTransferUnit)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa6ccc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_MaximumTransferUnit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_IsEncryptionAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_IsEncryptionAvailable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6cccd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_IsEncryptionAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_IsSendingOnlyAcks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_IsSendingOnlyAcks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_IsSendingOnlyAcks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_IsSendingOnlyAcks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::set_IsSendingOnlyAcks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cccf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_IsSendingOnlyAcks", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsIncoming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::TrafficStats* (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsIncoming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsIncoming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TrafficStatsIncoming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::TrafficStats*)>(&::ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsIncoming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TrafficStatsIncoming", {}, {::i2c::type_of<::ExitGames::Client::Photon::TrafficStats*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsOutgoing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::TrafficStats* (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsOutgoing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsOutgoing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TrafficStatsOutgoing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::TrafficStats*)>(&::ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsOutgoing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TrafficStatsOutgoing", {}, {::i2c::type_of<::ExitGames::Client::Photon::TrafficStats*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsGameLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::TrafficStatsGameLevel* (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsGameLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsGameLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TrafficStatsGameLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::TrafficStatsGameLevel*)>(&::ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsGameLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TrafficStatsGameLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::TrafficStatsGameLevel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsElapsedMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsElapsedMs)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6ccd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsElapsedMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ccd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TrafficStatsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa6ccd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TrafficStatsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.TrafficStatsReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::TrafficStatsReset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6ccf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"TrafficStatsReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.InitializeTrafficStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::InitializeTrafficStats)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa6ccdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"InitializeTrafficStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.VitalStatsToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::VitalStatsToString)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0xa6ccf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"VitalStatsToString", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PayloadEncryptorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_PayloadEncryptorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cd4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PayloadEncryptorType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_PayloadEncryptorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::System::Type*)>(&::ExitGames::Client::Photon::PhotonPeer::set_PayloadEncryptorType)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa6cd504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_PayloadEncryptorType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_EncryptorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_EncryptorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cd65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_EncryptorType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_EncryptorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::System::Type*)>(&::ExitGames::Client::Photon::PhotonPeer::set_EncryptorType)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa6cd664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_EncryptorType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_CountDiscarded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_CountDiscarded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cd7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_CountDiscarded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_CountDiscarded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::set_CountDiscarded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cd7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_CountDiscarded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_DeltaUnreliableNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_DeltaUnreliableNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cd7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_DeltaUnreliableNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_DeltaUnreliableNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::set_DeltaUnreliableNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cd7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_DeltaUnreliableNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::ConnectionProtocol)>(&::ExitGames::Client::Photon::PhotonPeer::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa6cd7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::IPhotonPeerListener*, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::ExitGames::Client::Photon::PhotonPeer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa6cdbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(::StringW, ::StringW, ::System::Object*, ::System::Object*)>(&::ExitGames::Client::Photon::PhotonPeer::Connect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6cdc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(::StringW, ::StringW, ::StringW, ::System::Object*, ::System::Object*)>(&::ExitGames::Client::Photon::PhotonPeer::Connect)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0xa6cdc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.CreatePeerBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::CreatePeerBase)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa6cda6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"CreatePeerBase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::Disconnect)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa6ce3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.OnDisconnectMessageCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::DisconnectMessage*)>(&::ExitGames::Client::Photon::PhotonPeer::OnDisconnectMessageCall)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6ce560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"OnDisconnectMessageCall", {}, {::i2c::type_of<::ExitGames::Client::Photon::DisconnectMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.StopThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::StopThread)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa6ce57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.FetchServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::FetchServerTimestamp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6ce6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.EstablishEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::EstablishEncryption)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa6ce708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"EstablishEncryption", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.InitDatagramEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool, bool)>(&::ExitGames::Client::Photon::PhotonPeer::InitDatagramEncryption)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0xa6ce828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"InitDatagramEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.InitPayloadEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::PhotonPeer::InitPayloadEncryption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6cedc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"InitPayloadEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::Service)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6cedd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.SendOutgoingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::SendOutgoingCommands)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa6cee0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.SendAcksOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::SendAcksOnly)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa6cef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.DispatchIncomingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::DispatchIncomingCommands)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa6cf014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.SendOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*, ::ExitGames::Client::Photon::SendOptions)>(&::ExitGames::Client::Photon::PhotonPeer::SendOperation)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0xa6cf11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.SendOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, ::ExitGames::Client::Photon::SendOptions)>(&::ExitGames::Client::Photon::PhotonPeer::SendOperation)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0xa6cf684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.RegisterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeMethod*, ::ExitGames::Client::Photon::DeserializeMethod*)>(&::ExitGames::Client::Photon::PhotonPeer::RegisterType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6cfbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"RegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeMethod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.RegisterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeStreamMethod*, ::ExitGames::Client::Photon::DeserializeStreamMethod*)>(&::ExitGames::Client::Photon::PhotonPeer::RegisterType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6cfe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"RegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer._EstablishEncryption_b__225_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::_EstablishEncryption_b__225_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa6d007c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"<EstablishEncryption>b__225_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__CommandBufferSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandBufferSize_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__CommandBufferSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandBufferSize_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__CommandBufferSize_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CommandBufferSize_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__LimitOfUnreliableCommands_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LimitOfUnreliableCommands_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__LimitOfUnreliableCommands_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LimitOfUnreliableCommands_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__LimitOfUnreliableCommands_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LimitOfUnreliableCommands_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_WarningSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WarningSize;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_WarningSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WarningSize;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_WarningSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WarningSize = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_CommandLogSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommandLogSize;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_CommandLogSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommandLogSize;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_CommandLogSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CommandLogSize = value;
}
constexpr ::ExitGames::Client::Photon::TargetFrameworks& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TargetFramework()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetFramework;
}
constexpr ::ExitGames::Client::Photon::TargetFrameworks const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TargetFramework() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetFramework;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_TargetFramework(::ExitGames::Client::Photon::TargetFrameworks  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetFramework = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RemoveAppIdFromWebSocketPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoveAppIdFromWebSocketPath;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RemoveAppIdFromWebSocketPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoveAppIdFromWebSocketPath;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_RemoveAppIdFromWebSocketPath(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RemoveAppIdFromWebSocketPath = value;
}
constexpr uint8_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_ClientSdkId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientSdkId;
}
constexpr uint8_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_ClientSdkId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientSdkId;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_ClientSdkId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientSdkId = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_UseInitV3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseInitV3;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_UseInitV3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseInitV3;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_UseInitV3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseInitV3 = value;
}
constexpr ::ExitGames::Client::Photon::SerializationProtocol& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__SerializationProtocolType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SerializationProtocolType_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::SerializationProtocol const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__SerializationProtocolType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SerializationProtocolType_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__SerializationProtocolType_k__BackingField(::ExitGames::Client::Photon::SerializationProtocol  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SerializationProtocolType_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,::System::Type*>*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SocketImplementationConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SocketImplementationConfig;
}
constexpr ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,::System::Type*>* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SocketImplementationConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SocketImplementationConfig;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SocketImplementationConfig(::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,::System::Type*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SocketImplementationConfig = value;
}
constexpr ::System::Type*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__SocketImplementation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SocketImplementation_k__BackingField;
}
constexpr ::System::Type* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__SocketImplementation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SocketImplementation_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__SocketImplementation_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SocketImplementation_k__BackingField = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_DebugOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugOut;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_DebugOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugOut;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_DebugOut(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugOut = value;
}
constexpr ::ExitGames::Client::Photon::IPhotonPeerListener*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__Listener_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Listener_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::IPhotonPeerListener* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__Listener_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Listener_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__Listener_k__BackingField(::ExitGames::Client::Photon::IPhotonPeerListener*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Listener_k__BackingField = value;
}
constexpr ::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_OnDisconnectMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnectMessage;
}
constexpr ::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_OnDisconnectMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnectMessage;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_OnDisconnectMessage(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnectMessage = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_reuseEventInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reuseEventInstance;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_reuseEventInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reuseEventInstance;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_reuseEventInstance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reuseEventInstance = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_useByteArraySlicePoolForEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useByteArraySlicePoolForEvents;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_useByteArraySlicePoolForEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useByteArraySlicePoolForEvents;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_useByteArraySlicePoolForEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useByteArraySlicePoolForEvents = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_wrapIncomingStructs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrapIncomingStructs;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_wrapIncomingStructs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrapIncomingStructs;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_wrapIncomingStructs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrapIncomingStructs = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendInCreationOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendInCreationOrder;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendInCreationOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendInCreationOrder;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SendInCreationOrder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendInCreationOrder = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendWindowSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendWindowSize;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendWindowSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendWindowSize;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SendWindowSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendWindowSize = value;
}
constexpr ::ExitGames::Client::Photon::ITrafficRecorder*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TrafficRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrafficRecorder;
}
constexpr ::ExitGames::Client::Photon::ITrafficRecorder* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TrafficRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrafficRecorder;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_TrafficRecorder(::ExitGames::Client::Photon::ITrafficRecorder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrafficRecorder = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__EnableServerTracing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableServerTracing_k__BackingField;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__EnableServerTracing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableServerTracing_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__EnableServerTracing_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableServerTracing_k__BackingField = value;
}
constexpr uint8_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_quickResendAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quickResendAttempts;
}
constexpr uint8_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_quickResendAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quickResendAttempts;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_quickResendAttempts(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quickResendAttempts = value;
}
constexpr uint8_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_ChannelCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelCount;
}
constexpr uint8_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_ChannelCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelCount;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_ChannelCount(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChannelCount = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_EnableEncryptedFlag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableEncryptedFlag;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_EnableEncryptedFlag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableEncryptedFlag;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_EnableEncryptedFlag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableEncryptedFlag = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_crcEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crcEnabled;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_crcEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crcEnabled;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_crcEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crcEnabled = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SentCountAllowance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SentCountAllowance;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SentCountAllowance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SentCountAllowance;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SentCountAllowance(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SentCountAllowance = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_InitialResendTimeMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialResendTimeMax;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_InitialResendTimeMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialResendTimeMax;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_InitialResendTimeMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialResendTimeMax = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TimePingInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimePingInterval;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TimePingInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimePingInterval;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_TimePingInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TimePingInterval = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_PingUsedAsInit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingUsedAsInit;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_PingUsedAsInit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingUsedAsInit;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_PingUsedAsInit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PingUsedAsInit = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_disconnectTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectTimeout;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_disconnectTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectTimeout;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_disconnectTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disconnectTimeout = value;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TransportProtocol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransportProtocol_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TransportProtocol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransportProtocol_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__TransportProtocol_k__BackingField(::ExitGames::Client::Photon::ConnectionProtocol  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TransportProtocol_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_mtu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mtu;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_mtu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mtu;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_mtu(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mtu = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__IsSendingOnlyAcks_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSendingOnlyAcks_k__BackingField;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__IsSendingOnlyAcks_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSendingOnlyAcks_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__IsSendingOnlyAcks_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSendingOnlyAcks_k__BackingField = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RandomizeSequenceNumbers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomizeSequenceNumbers;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RandomizeSequenceNumbers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomizeSequenceNumbers;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_RandomizeSequenceNumbers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RandomizeSequenceNumbers = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RandomizedSequenceNumbers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomizedSequenceNumbers;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RandomizedSequenceNumbers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomizedSequenceNumbers;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_RandomizedSequenceNumbers(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RandomizedSequenceNumbers = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_GcmDatagramEncryption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GcmDatagramEncryption;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_GcmDatagramEncryption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GcmDatagramEncryption;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_GcmDatagramEncryption(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GcmDatagramEncryption = value;
}
constexpr ::ExitGames::Client::Photon::TrafficStats*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsIncoming_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrafficStatsIncoming_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::TrafficStats* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsIncoming_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrafficStatsIncoming_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__TrafficStatsIncoming_k__BackingField(::ExitGames::Client::Photon::TrafficStats*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrafficStatsIncoming_k__BackingField = value;
}
constexpr ::ExitGames::Client::Photon::TrafficStats*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsOutgoing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrafficStatsOutgoing_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::TrafficStats* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsOutgoing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrafficStatsOutgoing_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__TrafficStatsOutgoing_k__BackingField(::ExitGames::Client::Photon::TrafficStats*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrafficStatsOutgoing_k__BackingField = value;
}
constexpr ::ExitGames::Client::Photon::TrafficStatsGameLevel*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsGameLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrafficStatsGameLevel_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::TrafficStatsGameLevel* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsGameLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrafficStatsGameLevel_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__TrafficStatsGameLevel_k__BackingField(::ExitGames::Client::Photon::TrafficStatsGameLevel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrafficStatsGameLevel_k__BackingField = value;
}
constexpr ::System::Diagnostics::Stopwatch*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_trafficStatsStopwatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trafficStatsStopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_trafficStatsStopwatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trafficStatsStopwatch;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_trafficStatsStopwatch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trafficStatsStopwatch = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_trafficStatsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trafficStatsEnabled;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_trafficStatsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trafficStatsEnabled;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_trafficStatsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trafficStatsEnabled = value;
}
constexpr ::ExitGames::Client::Photon::PeerBase*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_peerBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerBase;
}
constexpr ::ExitGames::Client::Photon::PeerBase* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_peerBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerBase;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peerBase = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendOutgoingLockObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendOutgoingLockObject;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendOutgoingLockObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendOutgoingLockObject;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SendOutgoingLockObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendOutgoingLockObject = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_DispatchLockObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DispatchLockObject;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_DispatchLockObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DispatchLockObject;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_DispatchLockObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DispatchLockObject = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_EnqueueLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnqueueLock;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_EnqueueLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnqueueLock;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_EnqueueLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnqueueLock = value;
}
constexpr ::System::Type*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_payloadEncryptorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payloadEncryptorType;
}
constexpr ::System::Type* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_payloadEncryptorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payloadEncryptorType;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_payloadEncryptorType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___payloadEncryptorType = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_PayloadEncryptionSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PayloadEncryptionSecret;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_PayloadEncryptionSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PayloadEncryptionSecret;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_PayloadEncryptionSecret(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PayloadEncryptionSecret = value;
}
constexpr ::System::Type*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_encryptorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encryptorType;
}
constexpr ::System::Type* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_encryptorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encryptorType;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_encryptorType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encryptorType = value;
}
constexpr ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_Encryptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Encryptor;
}
constexpr ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor* const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_Encryptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Encryptor;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_Encryptor(::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Encryptor = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__CountDiscarded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CountDiscarded_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__CountDiscarded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CountDiscarded_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__CountDiscarded_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CountDiscarded_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__DeltaUnreliableNumber_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeltaUnreliableNumber_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__DeltaUnreliableNumber_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeltaUnreliableNumber_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__DeltaUnreliableNumber_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeltaUnreliableNumber_k__BackingField = value;
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_NoNativeCallbacks(bool  value)  {
::cordl_internals::setStaticField<bool, "NoNativeCallbacks", ::ExitGames::Client::Photon::PhotonPeer*>(std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_NoNativeCallbacks()  {
return ::cordl_internals::getStaticField<bool, "NoNativeCallbacks", ::ExitGames::Client::Photon::PhotonPeer*>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_clientVersion(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "clientVersion", ::ExitGames::Client::Photon::PhotonPeer*>(std::forward<::StringW>(value));
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::getStaticF_clientVersion()  {
return ::cordl_internals::getStaticField<::StringW, "clientVersion", ::ExitGames::Client::Photon::PhotonPeer*>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_NativeSocketLibAvailable(bool  value)  {
::cordl_internals::setStaticField<bool, "NativeSocketLibAvailable", ::ExitGames::Client::Photon::PhotonPeer*>(std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_NativeSocketLibAvailable()  {
return ::cordl_internals::getStaticField<bool, "NativeSocketLibAvailable", ::ExitGames::Client::Photon::PhotonPeer*>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_NativePayloadEncryptionLibAvailable(bool  value)  {
::cordl_internals::setStaticField<bool, "NativePayloadEncryptionLibAvailable", ::ExitGames::Client::Photon::PhotonPeer*>(std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_NativePayloadEncryptionLibAvailable()  {
return ::cordl_internals::getStaticField<bool, "NativePayloadEncryptionLibAvailable", ::ExitGames::Client::Photon::PhotonPeer*>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_NativeDatagramEncryptionLibAvailable(bool  value)  {
::cordl_internals::setStaticField<bool, "NativeDatagramEncryptionLibAvailable", ::ExitGames::Client::Photon::PhotonPeer*>(std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_NativeDatagramEncryptionLibAvailable()  {
return ::cordl_internals::getStaticField<bool, "NativeDatagramEncryptionLibAvailable", ::ExitGames::Client::Photon::PhotonPeer*>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_OutgoingStreamBufferSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "OutgoingStreamBufferSize", ::ExitGames::Client::Photon::PhotonPeer*>(std::forward<int32_t>(value));
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::getStaticF_OutgoingStreamBufferSize()  {
return ::cordl_internals::getStaticField<int32_t, "OutgoingStreamBufferSize", ::ExitGames::Client::Photon::PhotonPeer*>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_AsyncKeyExchange(bool  value)  {
::cordl_internals::setStaticField<bool, "AsyncKeyExchange", ::ExitGames::Client::Photon::PhotonPeer*>(std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_AsyncKeyExchange()  {
return ::cordl_internals::getStaticField<bool, "AsyncKeyExchange", ::ExitGames::Client::Photon::PhotonPeer*>();
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_CommandBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_CommandBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_CommandBufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_CommandBufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LimitOfUnreliableCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LimitOfUnreliableCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_LimitOfUnreliableCommands(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_LimitOfUnreliableCommands", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LocalTimeInMilliSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LocalTimeInMilliSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::CommandLogToString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"CommandLogToString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint8_t ExitGames::Client::Photon::PhotonPeer::get_ClientSdkIdShifted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ClientSdkIdShifted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_ClientVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ClientVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::ExitGames::Client::Photon::SerializationProtocol ExitGames::Client::Photon::PhotonPeer::get_SerializationProtocolType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SerializationProtocolType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::SerializationProtocol>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_SerializationProtocolType(::ExitGames::Client::Photon::SerializationProtocol  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_SerializationProtocolType", {}, {::i2c::type_of<::ExitGames::Client::Photon::SerializationProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* ExitGames::Client::Photon::PhotonPeer::get_SocketImplementation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SocketImplementation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_SocketImplementation(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_SocketImplementation", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_SocketErrorCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SocketErrorCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::IPhotonPeerListener* ExitGames::Client::Photon::PhotonPeer::get_Listener()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_Listener", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::IPhotonPeerListener*>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_Listener(::ExitGames::Client::Photon::IPhotonPeerListener*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_Listener", {}, {::i2c::type_of<::ExitGames::Client::Photon::IPhotonPeerListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::PhotonPeer::add_OnDisconnectMessage(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"add_OnDisconnectMessage", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::PhotonPeer::remove_OnDisconnectMessage(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"remove_OnDisconnectMessage", {}, {::i2c::type_of<::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_ReuseEventInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ReuseEventInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_ReuseEventInstance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_ReuseEventInstance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_UseByteArraySlicePoolForEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_UseByteArraySlicePoolForEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_UseByteArraySlicePoolForEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_UseByteArraySlicePoolForEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_WrapIncomingStructs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_WrapIncomingStructs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_WrapIncomingStructs(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_WrapIncomingStructs", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::ByteArraySlicePool* ExitGames::Client::Photon::PhotonPeer::get_ByteArraySlicePool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ByteArraySlicePool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ByteArraySlicePool*>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_SequenceDeltaLimitSends()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SequenceDeltaLimitSends", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_SequenceDeltaLimitSends(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_SequenceDeltaLimitSends", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ExitGames::Client::Photon::PhotonPeer::get_BytesIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_BytesIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ExitGames::Client::Photon::PhotonPeer::get_BytesOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_BytesOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ByteCountCurrentDispatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ByteCountCurrentDispatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_CommandInfoCurrentDispatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_CommandInfoCurrentDispatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ByteCountLastOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ByteCountLastOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_EnableServerTracing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_EnableServerTracing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_EnableServerTracing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_EnableServerTracing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t ExitGames::Client::Photon::PhotonPeer::get_QuickResendAttempts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_QuickResendAttempts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_QuickResendAttempts(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_QuickResendAttempts", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::PeerStateValue ExitGames::Client::Photon::PhotonPeer::get_PeerState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PeerState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PeerStateValue>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_PeerID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PeerID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_QueuedIncomingCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_QueuedIncomingCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_QueuedOutgoingCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_QueuedOutgoingCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::MessageBufferPoolTrim(int32_t  countOfBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"MessageBufferPoolTrim", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, countOfBuffers);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::MessageBufferPoolSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"MessageBufferPoolSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_CrcEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_CrcEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_CrcEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_CrcEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_PacketLossByCrc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PacketLossByCrc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_PacketLossByChallenge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PacketLossByChallenge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_SentReliableCommandsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_SentReliableCommandsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ResentReliableCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ResentReliableCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_DisconnectTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_DisconnectTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_DisconnectTimeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_DisconnectTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ServerTimeInMilliSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ServerTimeInMilliSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_LocalMsTimestampDelegate(::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_LocalMsTimestampDelegate", {}, {::i2c::type_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ConnectionTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ConnectionTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LastSendAckTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LastSendAckTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LastSendOutgoingTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LastSendOutgoingTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LongestSentCall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LongestSentCall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_LongestSentCall(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_LongestSentCall", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_RoundTripTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_RoundTripTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_RoundTripTimeVariance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_RoundTripTimeVariance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LastRoundTripTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_LastRoundTripTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_TimestampOfLastSocketReceive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TimestampOfLastSocketReceive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_ServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_ServerIpAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_ServerIpAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::ConnectionProtocol ExitGames::Client::Photon::PhotonPeer::get_UsedProtocol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_UsedProtocol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ConnectionProtocol>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::ConnectionProtocol ExitGames::Client::Photon::PhotonPeer::get_TransportProtocol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TransportProtocol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ConnectionProtocol>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TransportProtocol(::ExitGames::Client::Photon::ConnectionProtocol  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TransportProtocol", {}, {::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_IsSimulationEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_IsSimulationEnabled(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::NetworkSimulationSet* ExitGames::Client::Photon::PhotonPeer::get_NetworkSimulationSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_NetworkSimulationSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NetworkSimulationSet*>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_MaximumTransferUnit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_MaximumTransferUnit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_MaximumTransferUnit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_MaximumTransferUnit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_IsEncryptionAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_IsEncryptionAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_IsSendingOnlyAcks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_IsSendingOnlyAcks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_IsSendingOnlyAcks(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_IsSendingOnlyAcks", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::TrafficStats* ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsIncoming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsIncoming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::TrafficStats*>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsIncoming(::ExitGames::Client::Photon::TrafficStats*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TrafficStatsIncoming", {}, {::i2c::type_of<::ExitGames::Client::Photon::TrafficStats*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::TrafficStats* ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsOutgoing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsOutgoing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::TrafficStats*>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsOutgoing(::ExitGames::Client::Photon::TrafficStats*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TrafficStatsOutgoing", {}, {::i2c::type_of<::ExitGames::Client::Photon::TrafficStats*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::TrafficStatsGameLevel* ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsGameLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsGameLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::TrafficStatsGameLevel*>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsGameLevel(::ExitGames::Client::Photon::TrafficStatsGameLevel*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TrafficStatsGameLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::TrafficStatsGameLevel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsElapsedMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsElapsedMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_TrafficStatsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_TrafficStatsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::PhotonPeer::TrafficStatsReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"TrafficStatsReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::InitializeTrafficStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"InitializeTrafficStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::VitalStatsToString(bool  all)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"VitalStatsToString", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, all);
}
inline ::System::Type* ExitGames::Client::Photon::PhotonPeer::get_PayloadEncryptorType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_PayloadEncryptorType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_PayloadEncryptorType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_PayloadEncryptorType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* ExitGames::Client::Photon::PhotonPeer::get_EncryptorType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_EncryptorType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_EncryptorType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_EncryptorType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_CountDiscarded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_CountDiscarded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_CountDiscarded(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_CountDiscarded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_DeltaUnreliableNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"get_DeltaUnreliableNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_DeltaUnreliableNumber(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"set_DeltaUnreliableNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::PhotonPeer::_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, protocolType);
}
inline void ExitGames::Client::Photon::PhotonPeer::_ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener, protocolType);
}
inline bool ExitGames::Client::Photon::PhotonPeer::Connect(::StringW  serverAddress, ::StringW  appId, ::System::Object*  photonToken, ::System::Object*  customInitData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, serverAddress, appId, photonToken, customInitData);
}
inline bool ExitGames::Client::Photon::PhotonPeer::Connect(::StringW  serverAddress, ::StringW  proxyServerAddress, ::StringW  appId, ::System::Object*  photonToken, ::System::Object*  customInitData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, serverAddress, proxyServerAddress, appId, photonToken, customInitData);
}
inline void ExitGames::Client::Photon::PhotonPeer::CreatePeerBase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"CreatePeerBase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::OnDisconnectMessageCall(::ExitGames::Client::Photon::DisconnectMessage*  dm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"OnDisconnectMessageCall", {}, {::i2c::type_of<::ExitGames::Client::Photon::DisconnectMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dm);
}
inline void ExitGames::Client::Photon::PhotonPeer::StopThread()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::FetchServerTimestamp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::EstablishEncryption()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"EstablishEncryption", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::InitDatagramEncryption(::ArrayW<uint8_t>  encryptionSecret, ::ArrayW<uint8_t>  hmacSecret, bool  randomizedSequenceNumbers, bool  chainingModeGCM)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"InitDatagramEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, encryptionSecret, hmacSecret, randomizedSequenceNumbers, chainingModeGCM);
}
inline void ExitGames::Client::Photon::PhotonPeer::InitPayloadEncryption(::ArrayW<uint8_t>  secret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"InitPayloadEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secret);
}
inline void ExitGames::Client::Photon::PhotonPeer::Service()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::SendOutgoingCommands()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::SendAcksOnly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::DispatchIncomingCommands()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::SendOperation(uint8_t  operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  operationParameters, ::ExitGames::Client::Photon::SendOptions  sendOptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, operationCode, operationParameters, sendOptions);
}
inline bool ExitGames::Client::Photon::PhotonPeer::SendOperation(uint8_t  operationCode, ::ExitGames::Client::Photon::ParameterDictionary*  operationParameters, ::ExitGames::Client::Photon::SendOptions  sendOptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, operationCode, operationParameters, sendOptions);
}
inline bool ExitGames::Client::Photon::PhotonPeer::RegisterType(::System::Type*  customType, uint8_t  code, ::ExitGames::Client::Photon::SerializeMethod*  serializeMethod, ::ExitGames::Client::Photon::DeserializeMethod*  constructor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"RegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeMethod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, customType, code, serializeMethod, constructor);
}
inline bool ExitGames::Client::Photon::PhotonPeer::RegisterType(::System::Type*  customType, uint8_t  code, ::ExitGames::Client::Photon::SerializeStreamMethod*  serializeMethod, ::ExitGames::Client::Photon::DeserializeStreamMethod*  constructor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"RegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, customType, code, serializeMethod, constructor);
}
inline bool ExitGames::Client::Photon::PhotonPeer::_EstablishEncryption_b__225_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PhotonPeer*>(),
                        {"<EstablishEncryption>b__225_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonPeer* ExitGames::Client::Photon::PhotonPeer::New_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::PhotonPeer*>(protocolType));
}
inline ::ExitGames::Client::Photon::PhotonPeer* ExitGames::Client::Photon::PhotonPeer::New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::PhotonPeer*>(listener, protocolType));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PhotonPeer::PhotonPeer()   {
}
