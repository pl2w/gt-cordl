#pragma once
// IWYU pragma private; include "Fusion/RunnerEnableVisibility.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__RunnerEnableVisibility_def.hpp"
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
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)()>(&::Fusion::RunnerEnableVisibility::Awake)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x60f4c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)()>(&::Fusion::RunnerEnableVisibility::OnDestroy)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x60f4d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.RunnerOnObjectAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*)>(&::Fusion::RunnerEnableVisibility::RunnerOnObjectAcquired)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60f4ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"RunnerOnObjectAcquired", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, float_t)>(&::Fusion::RunnerEnableVisibility::OnReliableDataProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f4fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x60f4fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnObjectExitAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnPlayerJoined)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnPlayerLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkInput)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::NetworkInput)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnInputMissing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnShutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnConnectedToServer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f512c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetDisconnectReason)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, ::ArrayW<uint8_t>)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnConnectRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnConnectFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f513c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnHostMigration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::System::ArraySegment_1<uint8_t>)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnReliableDataReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f514c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility.Fusion_INetworkRunnerCallbacks_OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)(::Fusion::NetworkRunner*)>(&::Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f5150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerEnableVisibility._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerEnableVisibility::*)()>(&::Fusion::RunnerEnableVisibility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f5154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::RunnerEnableVisibility::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerEnableVisibility::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerEnableVisibility::RunnerOnObjectAcquired(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"RunnerOnObjectAcquired", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj);
}
inline void Fusion::RunnerEnableVisibility::OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, progress);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, input);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, input);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, shutdownReason);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, reason);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, request, token);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, remoteAddress, reason);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, data);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, data);
}
inline void Fusion::RunnerEnableVisibility::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::RunnerEnableVisibility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerEnableVisibility*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::RunnerEnableVisibility* Fusion::RunnerEnableVisibility::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RunnerEnableVisibility*>());
}
/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr  Fusion::RunnerEnableVisibility::operator ::Fusion::INetworkRunnerCallbacks*() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* Fusion::RunnerEnableVisibility::i___Fusion__INetworkRunnerCallbacks() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::RunnerEnableVisibility::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::RunnerEnableVisibility::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::RunnerEnableVisibility::RunnerEnableVisibility()   {
}
