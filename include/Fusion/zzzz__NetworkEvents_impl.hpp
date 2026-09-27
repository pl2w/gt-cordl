#pragma once
// IWYU pragma private; include "Fusion/NetworkEvents.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_impl.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_impl.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_impl.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__NetworkInput_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__ShutdownReason_impl.hpp"
#include "Fusion/zzzz__SimulationMessagePtr_impl.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_4_impl.hpp"
#include "Fusion/zzzz__NetworkEvents_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_def.hpp"
#include "Fusion/zzzz__HostMigrationToken_def.hpp"
#include "Fusion/zzzz__INetworkRunnerCallbacks_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__NetworkEvents_def.hpp"
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
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnObjectExitAOI)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fd78f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fd7960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnPlayerJoined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd79d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnPlayerLeft)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd7a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkInput)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnInput)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fd7ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::NetworkInput)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnInputMissing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fd7b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnShutdown)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd7bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnConnectedToServer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fd7c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetDisconnectReason)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd7c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, ::ArrayW<uint8_t>)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnConnectRequest)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fd7d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnConnectFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fd7d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd7e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd7eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::System::ArraySegment_1<uint8_t>)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnReliableDataReceived)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fd7f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, float_t)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnReliableDataProgress)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fd7fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fd8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fd80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd8130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents.Fusion_INetworkRunnerCallbacks_OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnHostMigration)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd81a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents::*)()>(&::Fusion::NetworkEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd8218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkEvents_InputEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInput;
}
constexpr ::Fusion::NetworkEvents_InputEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInput;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnInput(::Fusion::NetworkEvents_InputEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnInput = value;
}
constexpr ::Fusion::NetworkEvents_InputPlayerEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnInputMissing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInputMissing;
}
constexpr ::Fusion::NetworkEvents_InputPlayerEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnInputMissing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInputMissing;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnInputMissing(::Fusion::NetworkEvents_InputPlayerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnInputMissing = value;
}
constexpr ::Fusion::NetworkEvents_RunnerEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnConnectedToServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectedToServer;
}
constexpr ::Fusion::NetworkEvents_RunnerEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnConnectedToServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectedToServer;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnConnectedToServer(::Fusion::NetworkEvents_RunnerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnectedToServer = value;
}
constexpr ::Fusion::NetworkEvents_DisconnectFromServerEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnDisconnectedFromServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnectedFromServer;
}
constexpr ::Fusion::NetworkEvents_DisconnectFromServerEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnDisconnectedFromServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnectedFromServer;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnDisconnectedFromServer(::Fusion::NetworkEvents_DisconnectFromServerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnectedFromServer = value;
}
constexpr ::Fusion::NetworkEvents_ConnectRequestEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnConnectRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectRequest;
}
constexpr ::Fusion::NetworkEvents_ConnectRequestEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnConnectRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectRequest;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnConnectRequest(::Fusion::NetworkEvents_ConnectRequestEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnectRequest = value;
}
constexpr ::Fusion::NetworkEvents_ConnectFailedEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnConnectFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectFailed;
}
constexpr ::Fusion::NetworkEvents_ConnectFailedEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnConnectFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectFailed;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnConnectFailed(::Fusion::NetworkEvents_ConnectFailedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnectFailed = value;
}
constexpr ::Fusion::NetworkEvents_PlayerEvent*& Fusion::NetworkEvents::__cordl_internal_get_PlayerJoined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerJoined;
}
constexpr ::Fusion::NetworkEvents_PlayerEvent* const& Fusion::NetworkEvents::__cordl_internal_get_PlayerJoined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerJoined;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_PlayerJoined(::Fusion::NetworkEvents_PlayerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerJoined = value;
}
constexpr ::Fusion::NetworkEvents_PlayerEvent*& Fusion::NetworkEvents::__cordl_internal_get_PlayerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerLeft;
}
constexpr ::Fusion::NetworkEvents_PlayerEvent* const& Fusion::NetworkEvents::__cordl_internal_get_PlayerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerLeft;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_PlayerLeft(::Fusion::NetworkEvents_PlayerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerLeft = value;
}
constexpr ::Fusion::NetworkEvents_SimulationMessageEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnSimulationMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSimulationMessage;
}
constexpr ::Fusion::NetworkEvents_SimulationMessageEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnSimulationMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSimulationMessage;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnSimulationMessage(::Fusion::NetworkEvents_SimulationMessageEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSimulationMessage = value;
}
constexpr ::Fusion::NetworkEvents_ShutdownEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnShutdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnShutdown;
}
constexpr ::Fusion::NetworkEvents_ShutdownEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnShutdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnShutdown;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnShutdown(::Fusion::NetworkEvents_ShutdownEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnShutdown = value;
}
constexpr ::Fusion::NetworkEvents_SessionListUpdateEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnSessionListUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSessionListUpdate;
}
constexpr ::Fusion::NetworkEvents_SessionListUpdateEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnSessionListUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSessionListUpdate;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnSessionListUpdate(::Fusion::NetworkEvents_SessionListUpdateEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSessionListUpdate = value;
}
constexpr ::Fusion::NetworkEvents_CustomAuthenticationResponse*& Fusion::NetworkEvents::__cordl_internal_get_OnCustomAuthenticationResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCustomAuthenticationResponse;
}
constexpr ::Fusion::NetworkEvents_CustomAuthenticationResponse* const& Fusion::NetworkEvents::__cordl_internal_get_OnCustomAuthenticationResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCustomAuthenticationResponse;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnCustomAuthenticationResponse(::Fusion::NetworkEvents_CustomAuthenticationResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCustomAuthenticationResponse = value;
}
constexpr ::Fusion::NetworkEvents_HostMigrationEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnHostMigration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHostMigration;
}
constexpr ::Fusion::NetworkEvents_HostMigrationEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnHostMigration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHostMigration;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnHostMigration(::Fusion::NetworkEvents_HostMigrationEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHostMigration = value;
}
constexpr ::Fusion::NetworkEvents_RunnerEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnSceneLoadDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadDone;
}
constexpr ::Fusion::NetworkEvents_RunnerEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnSceneLoadDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadDone;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnSceneLoadDone(::Fusion::NetworkEvents_RunnerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSceneLoadDone = value;
}
constexpr ::Fusion::NetworkEvents_RunnerEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnSceneLoadStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadStart;
}
constexpr ::Fusion::NetworkEvents_RunnerEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnSceneLoadStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadStart;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnSceneLoadStart(::Fusion::NetworkEvents_RunnerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSceneLoadStart = value;
}
constexpr ::Fusion::NetworkEvents_ReliableDataEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnReliableData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReliableData;
}
constexpr ::Fusion::NetworkEvents_ReliableDataEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnReliableData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReliableData;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnReliableData(::Fusion::NetworkEvents_ReliableDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReliableData = value;
}
constexpr ::Fusion::NetworkEvents_ReliableProgressEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnReliableProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReliableProgress;
}
constexpr ::Fusion::NetworkEvents_ReliableProgressEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnReliableProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReliableProgress;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnReliableProgress(::Fusion::NetworkEvents_ReliableProgressEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReliableProgress = value;
}
constexpr ::Fusion::NetworkEvents_ObjectPlayerEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnObjectEnterAOI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectEnterAOI;
}
constexpr ::Fusion::NetworkEvents_ObjectPlayerEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnObjectEnterAOI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectEnterAOI;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnObjectEnterAOI(::Fusion::NetworkEvents_ObjectPlayerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnObjectEnterAOI = value;
}
constexpr ::Fusion::NetworkEvents_ObjectPlayerEvent*& Fusion::NetworkEvents::__cordl_internal_get_OnObjectExitAOI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectExitAOI;
}
constexpr ::Fusion::NetworkEvents_ObjectPlayerEvent* const& Fusion::NetworkEvents::__cordl_internal_get_OnObjectExitAOI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectExitAOI;
}
constexpr void Fusion::NetworkEvents::__cordl_internal_set_OnObjectExitAOI(::Fusion::NetworkEvents_ObjectPlayerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnObjectExitAOI = value;
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, input);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, input);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, shutdownReason);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, reason);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, request, token);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, remoteAddress, reason);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, data);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, progress);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, data);
}
inline void Fusion::NetworkEvents::Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void Fusion::NetworkEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents* Fusion::NetworkEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents*>());
}
/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr  Fusion::NetworkEvents::operator ::Fusion::INetworkRunnerCallbacks*() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* Fusion::NetworkEvents::i___Fusion__INetworkRunnerCallbacks() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::NetworkEvents::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::NetworkEvents::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents::NetworkEvents()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_ObjectPlayerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_ObjectPlayerEvent::*)()>(&::Fusion::NetworkEvents_ObjectPlayerEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ObjectPlayerEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_ObjectPlayerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ObjectPlayerEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_ObjectPlayerEvent* Fusion::NetworkEvents_ObjectPlayerEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_ObjectPlayerEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_ObjectPlayerEvent::NetworkEvents_ObjectPlayerEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_ObjectEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_ObjectEvent::*)()>(&::Fusion::NetworkEvents_ObjectEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ObjectEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_ObjectEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ObjectEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_ObjectEvent* Fusion::NetworkEvents_ObjectEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_ObjectEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_ObjectEvent::NetworkEvents_ObjectEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_ReliableProgressEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_ReliableProgressEvent::*)()>(&::Fusion::NetworkEvents_ReliableProgressEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd85c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ReliableProgressEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_ReliableProgressEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ReliableProgressEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_ReliableProgressEvent* Fusion::NetworkEvents_ReliableProgressEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_ReliableProgressEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_ReliableProgressEvent::NetworkEvents_ReliableProgressEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_ReliableDataEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_ReliableDataEvent::*)()>(&::Fusion::NetworkEvents_ReliableDataEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ReliableDataEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_ReliableDataEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ReliableDataEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_ReliableDataEvent* Fusion::NetworkEvents_ReliableDataEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_ReliableDataEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_ReliableDataEvent::NetworkEvents_ReliableDataEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_HostMigrationEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_HostMigrationEvent::*)()>(&::Fusion::NetworkEvents_HostMigrationEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_HostMigrationEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_HostMigrationEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_HostMigrationEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_HostMigrationEvent* Fusion::NetworkEvents_HostMigrationEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_HostMigrationEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_HostMigrationEvent::NetworkEvents_HostMigrationEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_CustomAuthenticationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_CustomAuthenticationResponse::*)()>(&::Fusion::NetworkEvents_CustomAuthenticationResponse::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd84f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_CustomAuthenticationResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_CustomAuthenticationResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_CustomAuthenticationResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_CustomAuthenticationResponse* Fusion::NetworkEvents_CustomAuthenticationResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_CustomAuthenticationResponse*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_CustomAuthenticationResponse::NetworkEvents_CustomAuthenticationResponse()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_SessionListUpdateEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_SessionListUpdateEvent::*)()>(&::Fusion::NetworkEvents_SessionListUpdateEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd84a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_SessionListUpdateEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_SessionListUpdateEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_SessionListUpdateEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_SessionListUpdateEvent* Fusion::NetworkEvents_SessionListUpdateEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_SessionListUpdateEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_SessionListUpdateEvent::NetworkEvents_SessionListUpdateEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_SimulationMessageEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_SimulationMessageEvent::*)()>(&::Fusion::NetworkEvents_SimulationMessageEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_SimulationMessageEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_SimulationMessageEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_SimulationMessageEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_SimulationMessageEvent* Fusion::NetworkEvents_SimulationMessageEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_SimulationMessageEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_SimulationMessageEvent::NetworkEvents_SimulationMessageEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_RunnerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_RunnerEvent::*)()>(&::Fusion::NetworkEvents_RunnerEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_RunnerEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_RunnerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_RunnerEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_RunnerEvent* Fusion::NetworkEvents_RunnerEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_RunnerEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_RunnerEvent::NetworkEvents_RunnerEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_PlayerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_PlayerEvent::*)()>(&::Fusion::NetworkEvents_PlayerEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd83d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_PlayerEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_PlayerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_PlayerEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_PlayerEvent* Fusion::NetworkEvents_PlayerEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_PlayerEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_PlayerEvent::NetworkEvents_PlayerEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_ShutdownEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_ShutdownEvent::*)()>(&::Fusion::NetworkEvents_ShutdownEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ShutdownEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_ShutdownEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ShutdownEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_ShutdownEvent* Fusion::NetworkEvents_ShutdownEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_ShutdownEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_ShutdownEvent::NetworkEvents_ShutdownEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_DisconnectFromServerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_DisconnectFromServerEvent::*)()>(&::Fusion::NetworkEvents_DisconnectFromServerEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_DisconnectFromServerEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_DisconnectFromServerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_DisconnectFromServerEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_DisconnectFromServerEvent* Fusion::NetworkEvents_DisconnectFromServerEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_DisconnectFromServerEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_DisconnectFromServerEvent::NetworkEvents_DisconnectFromServerEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_ConnectFailedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_ConnectFailedEvent::*)()>(&::Fusion::NetworkEvents_ConnectFailedEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd82f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ConnectFailedEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_ConnectFailedEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ConnectFailedEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_ConnectFailedEvent* Fusion::NetworkEvents_ConnectFailedEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_ConnectFailedEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_ConnectFailedEvent::NetworkEvents_ConnectFailedEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_ConnectRequestEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_ConnectRequestEvent::*)()>(&::Fusion::NetworkEvents_ConnectRequestEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd82b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ConnectRequestEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_ConnectRequestEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_ConnectRequestEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_ConnectRequestEvent* Fusion::NetworkEvents_ConnectRequestEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_ConnectRequestEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_ConnectRequestEvent::NetworkEvents_ConnectRequestEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_InputPlayerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_InputPlayerEvent::*)()>(&::Fusion::NetworkEvents_InputPlayerEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_InputPlayerEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_InputPlayerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_InputPlayerEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_InputPlayerEvent* Fusion::NetworkEvents_InputPlayerEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_InputPlayerEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_InputPlayerEvent::NetworkEvents_InputPlayerEvent()   {
}
//  Writing Method size for method: ::Fusion::NetworkEvents_InputEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkEvents_InputEvent::*)()>(&::Fusion::NetworkEvents_InputEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_InputEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkEvents_InputEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkEvents_InputEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkEvents_InputEvent* Fusion::NetworkEvents_InputEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkEvents_InputEvent*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkEvents_InputEvent::NetworkEvents_InputEvent()   {
}
