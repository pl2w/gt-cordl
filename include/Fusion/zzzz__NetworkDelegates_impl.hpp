#pragma once
// IWYU pragma private; include "Fusion/NetworkDelegates.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkDelegates_def.hpp"
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
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnObjectExitAOI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd7674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd7694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnPlayerJoined)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd76b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnPlayerLeft)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd76d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetDisconnectReason)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd76f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnShutdown)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd7710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, ::ArrayW<uint8_t>)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnConnectRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd772c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnConnectFailed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fd7748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd77a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::System::ArraySegment_1<uint8_t>)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnReliableDataReceived)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd77c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, float_t)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnReliableDataProgress)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd77e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkInput)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnInput)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd7804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::NetworkInput)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnInputMissing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd7820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnConnectedToServer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd7840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd785c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd7878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd7894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd78b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates.Fusion_INetworkRunnerCallbacks_OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnHostMigration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd78cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkDelegates._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDelegates::*)()>(&::Fusion::NetworkDelegates::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd78e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*& Fusion::NetworkDelegates::__cordl_internal_get_OnPlayerJoined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerJoined;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnPlayerJoined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerJoined;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnPlayerJoined(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerJoined = value;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*& Fusion::NetworkDelegates::__cordl_internal_get_OnPlayerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerLeft;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnPlayerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerLeft;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnPlayerLeft(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerLeft = value;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*& Fusion::NetworkDelegates::__cordl_internal_get_OnInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInput;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInput;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnInput(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnInput = value;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*& Fusion::NetworkDelegates::__cordl_internal_get_OnInputMissing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInputMissing;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnInputMissing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInputMissing;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnInputMissing(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnInputMissing = value;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*& Fusion::NetworkDelegates::__cordl_internal_get_OnShutdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnShutdown;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnShutdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnShutdown;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnShutdown(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnShutdown = value;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*& Fusion::NetworkDelegates::__cordl_internal_get_OnDisconnectedFromServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnectedFromServer;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnDisconnectedFromServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnectedFromServer;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnDisconnectedFromServer(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnectedFromServer = value;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*& Fusion::NetworkDelegates::__cordl_internal_get_OnConnectRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectRequest;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnConnectRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectRequest;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnConnectRequest(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnectRequest = value;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*& Fusion::NetworkDelegates::__cordl_internal_get_OnConnectFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectFailed;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnConnectFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectFailed;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnConnectFailed(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnectFailed = value;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*& Fusion::NetworkDelegates::__cordl_internal_get_OnUserSimulationMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUserSimulationMessage;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnUserSimulationMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUserSimulationMessage;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnUserSimulationMessage(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnUserSimulationMessage = value;
}
constexpr ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*& Fusion::NetworkDelegates::__cordl_internal_get_OnReliableDataReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReliableDataReceived;
}
constexpr ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnReliableDataReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReliableDataReceived;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnReliableDataReceived(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReliableDataReceived = value;
}
constexpr ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*& Fusion::NetworkDelegates::__cordl_internal_get_OnReliableDataProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReliableDataProgress;
}
constexpr ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnReliableDataProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReliableDataProgress;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnReliableDataProgress(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReliableDataProgress = value;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*& Fusion::NetworkDelegates::__cordl_internal_get_OnObjectExitAOI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectExitAOI;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnObjectExitAOI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectExitAOI;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnObjectExitAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnObjectExitAOI = value;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*& Fusion::NetworkDelegates::__cordl_internal_get_OnObjectEnterAOI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectEnterAOI;
}
constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnObjectEnterAOI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectEnterAOI;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnObjectEnterAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnObjectEnterAOI = value;
}
constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*& Fusion::NetworkDelegates::__cordl_internal_get_OnConnectedToServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectedToServer;
}
constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnConnectedToServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectedToServer;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnConnectedToServer(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnectedToServer = value;
}
constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*& Fusion::NetworkDelegates::__cordl_internal_get_OnSceneLoadDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadDone;
}
constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnSceneLoadDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadDone;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnSceneLoadDone(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSceneLoadDone = value;
}
constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*& Fusion::NetworkDelegates::__cordl_internal_get_OnSceneLoadStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadStart;
}
constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnSceneLoadStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSceneLoadStart;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnSceneLoadStart(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSceneLoadStart = value;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*& Fusion::NetworkDelegates::__cordl_internal_get_OnSessionListUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSessionListUpdated;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnSessionListUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSessionListUpdated;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnSessionListUpdated(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSessionListUpdated = value;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& Fusion::NetworkDelegates::__cordl_internal_get_OnCustomAuthenticationResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCustomAuthenticationResponse;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnCustomAuthenticationResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCustomAuthenticationResponse;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnCustomAuthenticationResponse(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCustomAuthenticationResponse = value;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*& Fusion::NetworkDelegates::__cordl_internal_get_OnHostMigration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHostMigration;
}
constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>* const& Fusion::NetworkDelegates::__cordl_internal_get_OnHostMigration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHostMigration;
}
constexpr void Fusion::NetworkDelegates::__cordl_internal_set_OnHostMigration(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHostMigration = value;
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectExitAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerJoined", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnPlayerLeft", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, reason);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnShutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, shutdownReason);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectRequest", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, request, token);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectFailed", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, remoteAddress, reason);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessagePtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataReceived", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, data);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnReliableDataProgress", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::Sockets::ReliableKey>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, progress);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInput", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, input);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnInputMissing", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::NetworkInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, input);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnConnectedToServer", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadDone", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnSceneLoadStart", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, data);
}
inline void Fusion::NetworkDelegates::Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {"Fusion.INetworkRunnerCallbacks.OnHostMigration", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::HostMigrationToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void Fusion::NetworkDelegates::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDelegates*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkDelegates* Fusion::NetworkDelegates::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkDelegates*>());
}
/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr  Fusion::NetworkDelegates::operator ::Fusion::INetworkRunnerCallbacks*() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* Fusion::NetworkDelegates::i___Fusion__INetworkRunnerCallbacks() noexcept {
return static_cast<::Fusion::INetworkRunnerCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::NetworkDelegates::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::NetworkDelegates::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkDelegates::NetworkDelegates()   {
}
