#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/LoadBalancingClientAsyncExtensions.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__LoadBalancingClientAsyncExtensions_def.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__LoadBalancingClientAsyncExtensions_def.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__OperationHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__OpJoinRandomRoomParams_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.GetRegionsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Fusion::Photon::Realtime::RegionHandler*>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, bool, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::GetRegionsAsync)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5f693d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"GetRegionsAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.ConnectUsingSettingsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::AppSettings*, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::ConnectUsingSettingsAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f69984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"ConnectUsingSettingsAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::AppSettings*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.ReconnectAndRejoinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, bool, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::ReconnectAndRejoinAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5f69b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"ReconnectAndRejoinAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.DisconnectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::DisconnectAsync)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5f69c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"DisconnectAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.LeaveRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::LeaveRoomAsync)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5f69e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"LeaveRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.CreateRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::EnterRoomParams*, bool, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateRoomAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f6a02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"CreateRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.CreateOrJoinRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::EnterRoomParams*, bool, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateOrJoinRoomAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f6a13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"CreateOrJoinRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.JoinRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::EnterRoomParams*, bool, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRoomAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f6a24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"JoinRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.JoinRandomOrCreateRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams*, ::Fusion::Photon::Realtime::EnterRoomParams*, bool, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRandomOrCreateRoomAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f6a35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"JoinRandomOrCreateRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.JoinRandomRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams*, bool, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRandomRoomAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f6a474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"JoinRandomRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.JoinLobbyAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int16_t>* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::Fusion::Photon::Realtime::TypedLobby*, bool, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinLobbyAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f6a584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"JoinLobbyAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.CreateOpHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Async::OperationHandler* (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, bool, bool, ::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateOpHandler)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f69748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"CreateOpHandler", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions.Service_ClientUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Photon::Realtime::LoadBalancingClient*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::Service_ClientUpdate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f6a99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"Service_ClientUpdate", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Fusion::Photon::Realtime::RegionHandler*>* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::GetRegionsAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancelationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"GetRegionsAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Fusion::Photon::Realtime::RegionHandler*>*>(nullptr, ___internal_method, client, throwOnError, createServiceTask, externalCancelationToken);
}
inline ::System::Threading::Tasks::Task* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::ConnectUsingSettingsAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::AppSettings*  appSettings, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"ConnectUsingSettingsAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::AppSettings*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, client, appSettings, createServiceTask, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::ReconnectAndRejoinAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"ReconnectAndRejoinAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, client, throwOnError, createServiceTask, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::DisconnectAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"DisconnectAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, client, createServiceTask, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::LeaveRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"LeaveRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, client, createServiceTask, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int16_t>* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"CreateRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int16_t>*>(nullptr, ___internal_method, client, enterRoomParams, throwOnError, createServiceTask, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int16_t>* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateOrJoinRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"CreateOrJoinRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int16_t>*>(nullptr, ___internal_method, client, enterRoomParams, throwOnError, createServiceTask, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int16_t>* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"JoinRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int16_t>*>(nullptr, ___internal_method, client, enterRoomParams, throwOnError, createServiceTask, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int16_t>* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRandomOrCreateRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  joinRandomRoomParams, ::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"JoinRandomOrCreateRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>(), ::i2c::type_of<::Fusion::Photon::Realtime::EnterRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int16_t>*>(nullptr, ___internal_method, client, joinRandomRoomParams, enterRoomParams, throwOnError, createServiceTask, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int16_t>* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinRandomRoomAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  joinRandomRoomParams, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"JoinRandomRoomAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int16_t>*>(nullptr, ___internal_method, client, joinRandomRoomParams, throwOnError, createServiceTask, externalCancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int16_t>* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::JoinLobbyAsync(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::Fusion::Photon::Realtime::TypedLobby*  lobby, bool  throwOnError, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancelationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"JoinLobbyAsync", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::Fusion::Photon::Realtime::TypedLobby*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int16_t>*>(nullptr, ___internal_method, client, lobby, throwOnError, createServiceTask, externalCancelationToken);
}
inline ::Fusion::Photon::Realtime::Async::OperationHandler* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::CreateOpHandler(::Fusion::Photon::Realtime::LoadBalancingClient*  client, bool  throwOnErrors, bool  createServiceTask, ::System::Threading::CancellationToken  externalCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"CreateOpHandler", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Async::OperationHandler*>(nullptr, ___internal_method, client, throwOnErrors, createServiceTask, externalCancellationToken);
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::Service_ClientUpdate(::Fusion::Photon::Realtime::LoadBalancingClient*  client, ::System::Threading::CancellationToken  token, ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  completionSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions*>(),
                        {"Service_ClientUpdate", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, client, token, completionSource);
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions::LoadBalancingClientAsyncExtensions()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::*)()>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6a024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0._LeaveRoomAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::*)()>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::_LeaveRoomAsync_b__0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f6b0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0*>(),
                        {"<LeaveRoomAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::Async::OperationHandler*& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::Fusion::Photon::Realtime::Async::OperationHandler* const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::__cordl_internal_set_handler(::Fusion::Photon::Realtime::Async::OperationHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::_LeaveRoomAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0*>(),
                        {"<LeaveRoomAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0::LoadBalancingClientAsyncExtensions___c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::*)()>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f69e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0._DisconnectAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::_DisconnectAsync_b__0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f6b008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0*>(),
                        {"<DisconnectAsync>b__0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::Async::OperationHandler*& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::Fusion::Photon::Realtime::Async::OperationHandler* const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::__cordl_internal_set_handler(::Fusion::Photon::Realtime::Async::OperationHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::_DisconnectAsync_b__0(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0*>(),
                        {"<DisconnectAsync>b__0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0::LoadBalancingClientAsyncExtensions___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::*)()>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f69740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0._GetRegionsAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::_GetRegionsAsync_b__0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f6acfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*>(),
                        {"<GetRegionsAsync>b__0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0._GetRegionsAsync_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::_GetRegionsAsync_b__1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f6ae94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*>(),
                        {"<GetRegionsAsync>b__1", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0._GetRegionsAsync_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::_GetRegionsAsync_b__2)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f6af50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*>(),
                        {"<GetRegionsAsync>b__2", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::Async::OperationHandler*& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::Fusion::Photon::Realtime::Async::OperationHandler* const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_set_handler(::Fusion::Photon::Realtime::Async::OperationHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Fusion::Photon::Realtime::RegionHandler*>*& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Fusion::Photon::Realtime::RegionHandler*>* const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_set_result(::System::Threading::Tasks::TaskCompletionSource_1<::Fusion::Photon::Realtime::RegionHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::System::Threading::CancellationToken& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_get_externalCancelationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalCancelationToken;
}
constexpr ::System::Threading::CancellationToken const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_get_externalCancelationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalCancelationToken;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_set_externalCancelationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___externalCancelationToken = value;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::__cordl_internal_set___9__2(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__2 = value;
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::_GetRegionsAsync_b__0(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*>(),
                        {"<GetRegionsAsync>b__0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::_GetRegionsAsync_b__1(::Fusion::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*>(),
                        {"<GetRegionsAsync>b__1", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::_GetRegionsAsync_b__2(::Fusion::Photon::Realtime::RegionHandler*  regionHandlerWithPing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*>(),
                        {"<GetRegionsAsync>b__2", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandlerWithPing);
}
inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0::LoadBalancingClientAsyncExtensions___c__DisplayClass1_0()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::*)()>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6aae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0._Service_ClientUpdate_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::*)()>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::_Service_ClientUpdate_b__0)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5f6ab8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0*>(),
                        {"<Service_ClientUpdate>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr ::System::Threading::CancellationToken const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::__cordl_internal_set_token(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::__cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::__cordl_internal_get_completionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>* const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::__cordl_internal_get_completionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::__cordl_internal_set_completionSource(::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completionSource = value;
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::_Service_ClientUpdate_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0*>(),
                        {"<Service_ClientUpdate>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0::LoadBalancingClientAsyncExtensions___c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::*)()>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6a694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0._CreateOpHandler_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::*)(::System::Threading::CancellationToken)>(&::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::_CreateOpHandler_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f6aae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0*>(),
                        {"<CreateOpHandler>b__0", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::__cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr ::Fusion::Photon::Realtime::Async::OperationHandler*& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::Fusion::Photon::Realtime::Async::OperationHandler* const& Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::__cordl_internal_set_handler(::Fusion::Photon::Realtime::Async::OperationHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::_CreateOpHandler_b__0(::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0*>(),
                        {"<CreateOpHandler>b__0", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token);
}
inline ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0* Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0::LoadBalancingClientAsyncExtensions___c__DisplayClass12_0()   {
}
