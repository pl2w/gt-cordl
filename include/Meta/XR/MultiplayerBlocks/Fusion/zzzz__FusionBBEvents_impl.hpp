#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/FusionBBEvents.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__FusionBBEvents_def.hpp"
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
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnConnectedToServer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f5dc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnConnectedToServer", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnConnectedToServer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f5dd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnConnectedToServer", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnPlayerJoined)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5de04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnPlayerJoined", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnPlayerJoined)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5ded4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnPlayerJoined", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnInput)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5dfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnInput", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnInput)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnInput", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnConnectFailed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnConnectFailed", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnConnectFailed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnConnectFailed", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnConnectRequest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnConnectRequest", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnConnectRequest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnConnectRequest", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnHostMigration)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnHostMigration", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnHostMigration)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnHostMigration", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnInputMissing)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnInputMissing", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnInputMissing)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnInputMissing", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnPlayerLeft)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5e964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnPlayerLeft", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnPlayerLeft)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5ea34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnPlayerLeft", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnSceneLoadDone)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5eb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnSceneLoadDone", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnSceneLoadDone)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5ebd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnSceneLoadDone", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnSceneLoadStart)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5eca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnSceneLoadStart", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnSceneLoadStart)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5ed74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnSceneLoadStart", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnSessionListUpdated)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5a224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnSessionListUpdated", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnSessionListUpdated)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5a370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnSessionListUpdated", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnShutdown)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5ee44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnShutdown", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnShutdown)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5ef14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnShutdown", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5efe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnUserSimulationMessage", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnUserSimulationMessage", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnObjectExitAOI)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnObjectExitAOI", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnObjectExitAOI)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnObjectExitAOI", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnObjectEnterAOI", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnObjectEnterAOI", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnDisconnectedFromServer", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnDisconnectedFromServer", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnReliableDataReceived)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnReliableDataReceived", {}, {::i2c::type_of<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnReliableDataReceived)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnReliableDataReceived", {}, {::i2c::type_of<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.add_OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnReliableDataProgress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnReliableDataProgress", {}, {::i2c::type_of<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.remove_OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnReliableDataProgress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f5f8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnReliableDataProgress", {}, {::i2c::type_of<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnConnectedToServer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9f5f9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnPlayerJoined)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f5fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkInput)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnInput)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f5fa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnConnectFailed)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9f5fb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, ::ArrayW<uint8_t>)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnConnectRequest)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f5fc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f5fce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnHostMigration)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f5fd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::NetworkInput)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnInputMissing)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f5fde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnPlayerLeft)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f5fe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9f5ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9f5ff6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f5ffd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnShutdown)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f60058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f600d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnObjectExitAOI)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f60158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f601e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetDisconnectReason)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f60268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::System::ArraySegment_1<uint8_t>)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnReliableDataReceived)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9f602e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents.Fusion_INetworkRunnerCallbacks_OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, float_t)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnReliableDataProgress)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f603a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f60450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnConnectedToServer(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*, "OnConnectedToServer", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>(value));
}
inline ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnConnectedToServer()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*, "OnConnectedToServer", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnPlayerJoined(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*, "OnPlayerJoined", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>(value));
}
inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnPlayerJoined()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*, "OnPlayerJoined", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnInput(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*, "OnInput", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*>(value));
}
inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnInput()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*, "OnInput", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnConnectFailed(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*, "OnConnectFailed", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*>(value));
}
inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnConnectFailed()  {
return ::cordl_internals::getStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*, "OnConnectFailed", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnConnectRequest(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*, "OnConnectRequest", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*>(value));
}
inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnConnectRequest()  {
return ::cordl_internals::getStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*, "OnConnectRequest", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnCustomAuthenticationResponse(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*, "OnCustomAuthenticationResponse", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>(value));
}
inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnCustomAuthenticationResponse()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*, "OnCustomAuthenticationResponse", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnHostMigration(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*, "OnHostMigration", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*>(value));
}
inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnHostMigration()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*, "OnHostMigration", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnInputMissing(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*, "OnInputMissing", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*>(value));
}
inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnInputMissing()  {
return ::cordl_internals::getStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*, "OnInputMissing", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnPlayerLeft(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*, "OnPlayerLeft", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>(value));
}
inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnPlayerLeft()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*, "OnPlayerLeft", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnSceneLoadDone(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*, "OnSceneLoadDone", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>(value));
}
inline ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnSceneLoadDone()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*, "OnSceneLoadDone", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnSceneLoadStart(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*, "OnSceneLoadStart", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>(value));
}
inline ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnSceneLoadStart()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*, "OnSceneLoadStart", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnSessionListUpdated(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*, "OnSessionListUpdated", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*>(value));
}
inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnSessionListUpdated()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*, "OnSessionListUpdated", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnShutdown(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*, "OnShutdown", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*>(value));
}
inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnShutdown()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*, "OnShutdown", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnUserSimulationMessage(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*, "OnUserSimulationMessage", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*>(value));
}
inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnUserSimulationMessage()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*, "OnUserSimulationMessage", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnObjectExitAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*, "OnObjectExitAOI", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>(value));
}
inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnObjectExitAOI()  {
return ::cordl_internals::getStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*, "OnObjectExitAOI", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnObjectEnterAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*, "OnObjectEnterAOI", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>(value));
}
inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnObjectEnterAOI()  {
return ::cordl_internals::getStaticField<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*, "OnObjectEnterAOI", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnDisconnectedFromServer(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*, "OnDisconnectedFromServer", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*>(value));
}
inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnDisconnectedFromServer()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*, "OnDisconnectedFromServer", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnReliableDataReceived(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*, "OnReliableDataReceived", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*>(value));
}
inline ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnReliableDataReceived()  {
return ::cordl_internals::getStaticField<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*, "OnReliableDataReceived", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::setStaticF_OnReliableDataProgress(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*, "OnReliableDataProgress", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(std::forward<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*>(value));
}
inline ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::getStaticF_OnReliableDataProgress()  {
return ::cordl_internals::getStaticField<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*, "OnReliableDataProgress", ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnConnectedToServer(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnConnectedToServer", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnConnectedToServer(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnConnectedToServer", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnPlayerJoined(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnPlayerJoined", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnPlayerJoined(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnPlayerJoined", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnInput(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnInput", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnInput(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnInput", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnConnectFailed(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnConnectFailed", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnConnectFailed(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnConnectFailed", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnConnectRequest(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnConnectRequest", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnConnectRequest(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnConnectRequest", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnCustomAuthenticationResponse(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnCustomAuthenticationResponse(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnHostMigration(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnHostMigration", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnHostMigration(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnHostMigration", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnInputMissing(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnInputMissing", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnInputMissing(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnInputMissing", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnPlayerLeft(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnPlayerLeft", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnPlayerLeft(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnPlayerLeft", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnSceneLoadDone(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnSceneLoadDone", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnSceneLoadDone(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnSceneLoadDone", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnSceneLoadStart(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnSceneLoadStart", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnSceneLoadStart(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnSceneLoadStart", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnSessionListUpdated(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnSessionListUpdated", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnSessionListUpdated(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnSessionListUpdated", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnShutdown(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnShutdown", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnShutdown(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnShutdown", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnUserSimulationMessage(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnUserSimulationMessage", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnUserSimulationMessage(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnUserSimulationMessage", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnObjectExitAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnObjectExitAOI", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnObjectExitAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnObjectExitAOI", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnObjectEnterAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnObjectEnterAOI", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnObjectEnterAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnObjectEnterAOI", {}, {::i2c::type_of<::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnDisconnectedFromServer(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnDisconnectedFromServer", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnDisconnectedFromServer(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnDisconnectedFromServer", {}, {::i2c::type_of<::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnReliableDataReceived(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnReliableDataReceived", {}, {::i2c::type_of<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnReliableDataReceived(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnReliableDataReceived", {}, {::i2c::type_of<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::add_OnReliableDataProgress(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"add_OnReliableDataProgress", {}, {::i2c::type_of<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::remove_OnReliableDataProgress(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"remove_OnReliableDataProgress", {}, {::i2c::type_of<::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, input);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, remoteAddress, reason);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, request, token);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, data);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, input);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, shutdownReason);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, reason);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, data);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::Fusion_INetworkRunnerCallbacks_OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, progress);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*>());
}
/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::operator ::Fusion::INetworkRunnerCallbacks*() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::i___Fusion__INetworkRunnerCallbacks() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents::FusionBBEvents()   {
}
