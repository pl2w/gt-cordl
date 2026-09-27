#pragma once
// IWYU pragma private; include "Fusion/INetworkRunnerCallbacks.hpp"
#include "Fusion/zzzz__INetworkRunnerCallbacks_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_def.hpp"
#include "Fusion/zzzz__HostMigrationToken_def.hpp"
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
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnObjectExitAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::INetworkRunnerCallbacks::OnObjectExitAOI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnObjectEnterAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::Fusion::PlayerRef)>(&::Fusion::INetworkRunnerCallbacks::OnObjectEnterAOI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Fusion::INetworkRunnerCallbacks::OnPlayerJoined)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef)>(&::Fusion::INetworkRunnerCallbacks::OnPlayerLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::ShutdownReason)>(&::Fusion::INetworkRunnerCallbacks::OnShutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnDisconnectedFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetDisconnectReason)>(&::Fusion::INetworkRunnerCallbacks::OnDisconnectedFromServer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, ::ArrayW<uint8_t>)>(&::Fusion::INetworkRunnerCallbacks::OnConnectRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnConnectFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Fusion::INetworkRunnerCallbacks::OnConnectFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnUserSimulationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessagePtr)>(&::Fusion::INetworkRunnerCallbacks::OnUserSimulationMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnReliableDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, ::System::ArraySegment_1<uint8_t>)>(&::Fusion::INetworkRunnerCallbacks::OnReliableDataReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnReliableDataProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::Sockets::ReliableKey, float_t)>(&::Fusion::INetworkRunnerCallbacks::OnReliableDataProgress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkInput)>(&::Fusion::INetworkRunnerCallbacks::OnInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnInputMissing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::NetworkInput)>(&::Fusion::INetworkRunnerCallbacks::OnInputMissing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*)>(&::Fusion::INetworkRunnerCallbacks::OnConnectedToServer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::Fusion::INetworkRunnerCallbacks::OnSessionListUpdated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::INetworkRunnerCallbacks::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*, ::Fusion::HostMigrationToken*)>(&::Fusion::INetworkRunnerCallbacks::OnHostMigration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnSceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*)>(&::Fusion::INetworkRunnerCallbacks::OnSceneLoadDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerCallbacks.OnSceneLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerCallbacks::*)(::Fusion::NetworkRunner*)>(&::Fusion::INetworkRunnerCallbacks::OnSceneLoadStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 18}
                ));
    return ___internal_method;
  }
};
inline void Fusion::INetworkRunnerCallbacks::OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Fusion::INetworkRunnerCallbacks::OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, player);
}
inline void Fusion::INetworkRunnerCallbacks::OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Fusion::INetworkRunnerCallbacks::OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player);
}
inline void Fusion::INetworkRunnerCallbacks::OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, shutdownReason);
}
inline void Fusion::INetworkRunnerCallbacks::OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, reason);
}
inline void Fusion::INetworkRunnerCallbacks::OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, request, token);
}
inline void Fusion::INetworkRunnerCallbacks::OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, remoteAddress, reason);
}
inline void Fusion::INetworkRunnerCallbacks::OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, message);
}
inline void Fusion::INetworkRunnerCallbacks::OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, data);
}
inline void Fusion::INetworkRunnerCallbacks::OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, key, progress);
}
inline void Fusion::INetworkRunnerCallbacks::OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, input);
}
inline void Fusion::INetworkRunnerCallbacks::OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, player, input);
}
inline void Fusion::INetworkRunnerCallbacks::OnConnectedToServer(::Fusion::NetworkRunner*  runner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::INetworkRunnerCallbacks::OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void Fusion::INetworkRunnerCallbacks::OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, data);
}
inline void Fusion::INetworkRunnerCallbacks::OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hostMigrationToken);
}
inline void Fusion::INetworkRunnerCallbacks::OnSceneLoadDone(::Fusion::NetworkRunner*  runner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::INetworkRunnerCallbacks::OnSceneLoadStart(::Fusion::NetworkRunner*  runner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerCallbacks*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::INetworkRunnerCallbacks::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::INetworkRunnerCallbacks::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
