#pragma once
// IWYU pragma private; include "Photon/Voice/Fusion/FusionVoiceBridge.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "Photon/Voice/Fusion/zzzz__FusionVoiceBridge_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_def.hpp"
#include "Fusion/zzzz__HostMigrationToken_def.hpp"
#include "Fusion/zzzz__INetworkRunnerCallbacks_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__NetworkInput_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunnerCallbackArgs_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SessionInfo_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "Fusion/zzzz__SimulationMessagePtr_def.hpp"
#include "Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.get_UseFusionAppSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::get_UseFusionAppSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa777900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"get_UseFusionAppSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.set_UseFusionAppSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(bool)>(&::Photon::Voice::Fusion::FusionVoiceBridge::set_UseFusionAppSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa777908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"set_UseFusionAppSettings", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.get_UseFusionAuthValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::get_UseFusionAuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa777910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"get_UseFusionAuthValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.set_UseFusionAuthValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(bool)>(&::Photon::Voice::Fusion::FusionVoiceBridge::set_UseFusionAuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa777918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"set_UseFusionAuthValues", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa777920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                    {::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa777b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa777c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.OnVoiceClientStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState)>(&::Photon::Voice::Fusion::FusionVoiceBridge::OnVoiceClientStateChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa777d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnVoiceClientStateChanged", {}, {::i2c::type_of<::Photon::Realtime::ClientState>(), ::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.FusionSpeakerFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Speaker> (::Photon::Voice::Fusion::FusionVoiceBridge::*)(int32_t, uint8_t, ::System::Object*)>(&::Photon::Voice::Fusion::FusionVoiceBridge::FusionSpeakerFactory)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0xa778098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"FusionSpeakerFactory", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.VoiceGetMirroringRoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::VoiceGetMirroringRoomName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7788e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceGetMirroringRoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.VoiceConnectOrJoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::VoiceConnectOrJoinRoom)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa777c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceConnectOrJoinRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.VoiceConnectOrJoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Photon::Realtime::ClientState)>(&::Photon::Voice::Fusion::FusionVoiceBridge::VoiceConnectOrJoinRoom)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0xa777d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceConnectOrJoinRoom", {}, {::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.VoiceConnectAndFollowFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::VoiceConnectAndFollowFusion)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0xa778940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceConnectAndFollowFusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.VoiceDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::VoiceDisconnect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa779118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.VoiceJoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::StringW)>(&::Photon::Voice::Fusion::FusionVoiceBridge::VoiceJoinRoom)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa779144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceJoinRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.VoiceJoinMirroringRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::VoiceJoinMirroringRoom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa7790fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceJoinMirroringRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.VoiceRegisterCustomTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::VoiceRegisterCustomTypes)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa777a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceRegisterCustomTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.DeserializeFusionNetworkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::Photon::Voice::Fusion::FusionVoiceBridge::DeserializeFusionNetworkId)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa779288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"DeserializeFusionNetworkId", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.ReadCompressedUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::Photon::Voice::Fusion::FusionVoiceBridge::ReadCompressedUInt64)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa7793d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"ReadCompressedUInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.WriteCompressedUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ExitGames::Client::Photon::StreamBuffer*, uint64_t)>(&::Photon::Voice::Fusion::FusionVoiceBridge::WriteCompressedUInt64)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa7794bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"WriteCompressedUInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.SerializeFusionNetworkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::Photon::Voice::Fusion::FusionVoiceBridge::SerializeFusionNetworkId)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa779708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"SerializeFusionNetworkId", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnPlayerJoined)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa7797b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnPlayerLeft)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa7799e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkInput)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::NetworkInput)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnInputMissing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnShutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnConnectedToServer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, ::ArrayW<uint8_t>)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnConnectRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnConnectFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnHostMigration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.Fusion_INetworkRunnerCallbacks_OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*)>(&::Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Photon::Voice::Fusion::FusionVoiceBridge::OnObjectExitAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Photon::Voice::Fusion::FusionVoiceBridge::OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetDisconnectReason)>(&::Photon::Voice::Fusion::FusionVoiceBridge::OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa779c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::System::ArraySegment_1<uint8_t>)>(&::Photon::Voice::Fusion::FusionVoiceBridge::OnReliableDataReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge.OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, float_t)>(&::Photon::Voice::Fusion::FusionVoiceBridge::OnReliableDataProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa779d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::FusionVoiceBridge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::FusionVoiceBridge::*)()>(&::Photon::Voice::Fusion::FusionVoiceBridge::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa779d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Fusion::NetworkRunner>& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get_networkRunner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkRunner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get_networkRunner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkRunner;
}
constexpr void Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_set_networkRunner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkRunner = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get_voiceConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get_voiceConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr void Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceConnection = value;
}
constexpr ::Photon::Realtime::EnterRoomParams*& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get_voiceRoomParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceRoomParams;
}
constexpr ::Photon::Realtime::EnterRoomParams* const& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get_voiceRoomParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceRoomParams;
}
constexpr void Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_set_voiceRoomParams(::Photon::Realtime::EnterRoomParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceRoomParams = value;
}
constexpr bool& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get__UseFusionAppSettings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseFusionAppSettings_k__BackingField;
}
constexpr bool const& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get__UseFusionAppSettings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseFusionAppSettings_k__BackingField;
}
constexpr void Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_set__UseFusionAppSettings_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseFusionAppSettings_k__BackingField = value;
}
constexpr bool& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get__UseFusionAuthValues_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseFusionAuthValues_k__BackingField;
}
constexpr bool const& Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_get__UseFusionAuthValues_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseFusionAuthValues_k__BackingField;
}
constexpr void Photon::Voice::Fusion::FusionVoiceBridge::__cordl_internal_set__UseFusionAuthValues_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseFusionAuthValues_k__BackingField = value;
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::setStaticF_memCompressedUInt64(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memCompressedUInt64", ::Photon::Voice::Fusion::FusionVoiceBridge*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Photon::Voice::Fusion::FusionVoiceBridge::getStaticF_memCompressedUInt64()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memCompressedUInt64", ::Photon::Voice::Fusion::FusionVoiceBridge*>();
}
inline bool Photon::Voice::Fusion::FusionVoiceBridge::get_UseFusionAppSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"get_UseFusionAppSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::set_UseFusionAppSettings(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"set_UseFusionAppSettings", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Fusion::FusionVoiceBridge::get_UseFusionAuthValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"get_UseFusionAuthValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::set_UseFusionAuthValues(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"set_UseFusionAuthValues", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::OnVoiceClientStateChanged(::Photon::Realtime::ClientState  previous, ::Photon::Realtime::ClientState  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnVoiceClientStateChanged", {}, {::i2c::type_of<::Photon::Realtime::ClientState>(), ::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::UnityW<::Photon::Voice::Unity::Speaker> Photon::Voice::Fusion::FusionVoiceBridge::FusionSpeakerFactory(int32_t  playerId, uint8_t  voiceId, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"FusionSpeakerFactory", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Speaker>>(this, ___internal_method, playerId, voiceId, userData);
}
inline ::StringW Photon::Voice::Fusion::FusionVoiceBridge::VoiceGetMirroringRoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceGetMirroringRoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::VoiceConnectOrJoinRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceConnectOrJoinRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::VoiceConnectOrJoinRoom(::Photon::Realtime::ClientState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceConnectOrJoinRoom", {}, {::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool Photon::Voice::Fusion::FusionVoiceBridge::VoiceConnectAndFollowFusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceConnectAndFollowFusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::VoiceDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::FusionVoiceBridge::VoiceJoinRoom(::StringW  voiceRoomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceJoinRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, voiceRoomName);
}
inline bool Photon::Voice::Fusion::FusionVoiceBridge::VoiceJoinMirroringRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceJoinMirroringRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::VoiceRegisterCustomTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"VoiceRegisterCustomTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Object* Photon::Voice::Fusion::FusionVoiceBridge::DeserializeFusionNetworkId(::ExitGames::Client::Photon::StreamBuffer*  instream, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"DeserializeFusionNetworkId", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, instream, length);
}
inline uint64_t Photon::Voice::Fusion::FusionVoiceBridge::ReadCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"ReadCompressedUInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, stream);
}
inline int32_t Photon::Voice::Fusion::FusionVoiceBridge::WriteCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream, uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"WriteCompressedUInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stream, value);
}
inline int16_t Photon::Voice::Fusion::FusionVoiceBridge::SerializeFusionNetworkId(::ExitGames::Client::Photon::StreamBuffer*  outstream, ::System::Object*  customobject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"SerializeFusionNetworkId", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, outstream, customobject);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, input);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, input);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, shutdownReason);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, request, token);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, remoteAddress, reason);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, data);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, reason);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, data);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, progress);
}
inline void Photon::Voice::Fusion::FusionVoiceBridge::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::FusionVoiceBridge*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Fusion::FusionVoiceBridge* Photon::Voice::Fusion::FusionVoiceBridge::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Fusion::FusionVoiceBridge*>());
}
/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr  Photon::Voice::Fusion::FusionVoiceBridge::operator ::Fusion::INetworkRunnerCallbacks*() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* Photon::Voice::Fusion::FusionVoiceBridge::i___Fusion__INetworkRunnerCallbacks() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Photon::Voice::Fusion::FusionVoiceBridge::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Photon::Voice::Fusion::FusionVoiceBridge::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Fusion::FusionVoiceBridge::FusionVoiceBridge()   {
}
