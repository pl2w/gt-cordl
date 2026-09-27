#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageHeader_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocket_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageHeader_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageOpcode_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_WebSocketReceiveResultGetter_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__CloseAsyncPrivate_d__68_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__EnsureBufferContainsAsync_d__71_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__HandleReceivedCloseAsync_d__62_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__HandleReceivedPingPongAsync_d__64_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__ReceiveAsyncPrivate_d__61_2_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__SendCloseFrameAsync_d__69_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__SendFrameFallbackAsync_d__56_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__WaitForWriteTaskAsync_d__55_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketError_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CreateFromConnectedStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::ManagedWebSocket* (*)(::System::IO::Stream*, bool, ::StringW, ::System::TimeSpan)>(&::System::Net::WebSockets::ManagedWebSocket::CreateFromConnectedStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xace4930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CreateFromConnectedStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.get_StateUpdateLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::get_StateUpdateLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace4df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"get_StateUpdateLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.get_ReceiveAsyncLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::get_ReceiveAsyncLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace4df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"get_ReceiveAsyncLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(::System::IO::Stream*, bool, ::StringW, ::System::TimeSpan)>(&::System::Net::WebSockets::ManagedWebSocket::_ctor)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0xace49b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xace4e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.DisposeCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::DisposeCore)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xace4ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"DisposeCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.get_CloseStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::get_CloseStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace4f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.get_CloseStatusDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::get_CloseStatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace4f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::WebSocketState (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace4f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::SendAsync)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xace4f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendPrivateAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::WebSockets::ManagedWebSocket::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::SendPrivateAsync)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xace5368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendPrivateAsync", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ReceiveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xace58fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CloseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::CloseAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xace5c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CloseOutputAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::CloseOutputAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xace608c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::Abort)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xace6304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendFrameAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::WebSockets::ManagedWebSocket::*)(::GlobalNamespace::ManagedWebSocket_MessageOpcode, bool, ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::SendFrameAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xace57e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendFrameAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendFrameLockAcquiredNonCancelableAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::WebSockets::ManagedWebSocket::*)(::GlobalNamespace::ManagedWebSocket_MessageOpcode, bool, ::System::ReadOnlyMemory_1<uint8_t>)>(&::System::Net::WebSockets::ManagedWebSocket::SendFrameLockAcquiredNonCancelableAsync)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xace6334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendFrameLockAcquiredNonCancelableAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WaitForWriteTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Threading::Tasks::ValueTask)>(&::System::Net::WebSockets::ManagedWebSocket::WaitForWriteTaskAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xace6cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WaitForWriteTaskAsync", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendFrameFallbackAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::GlobalNamespace::ManagedWebSocket_MessageOpcode, bool, ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::SendFrameFallbackAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xace6830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendFrameFallbackAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WriteFrameToSendBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebSockets::ManagedWebSocket::*)(::GlobalNamespace::ManagedWebSocket_MessageOpcode, bool, ::System::ReadOnlySpan_1<uint8_t>)>(&::System::Net::WebSockets::ManagedWebSocket::WriteFrameToSendBuffer)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xace696c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WriteFrameToSendBuffer", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendKeepAliveFrameAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::SendKeepAliveFrameAsync)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xace70e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendKeepAliveFrameAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WriteHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::ManagedWebSocket_MessageOpcode, ::ArrayW<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, bool, bool)>(&::System::Net::WebSockets::ManagedWebSocket::WriteHeader)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xace6eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WriteHeader", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WriteRandomMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Net::WebSockets::ManagedWebSocket::WriteRandomMask)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xace7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WriteRandomMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.HandleReceivedCloseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::GlobalNamespace::ManagedWebSocket_MessageHeader, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::HandleReceivedCloseAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xace7504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"HandleReceivedCloseAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageHeader>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WaitForServerToCloseConnectionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::WaitForServerToCloseConnectionAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xace761c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WaitForServerToCloseConnectionAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.HandleReceivedPingPongAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::GlobalNamespace::ManagedWebSocket_MessageHeader, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::HandleReceivedPingPongAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xace7718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"HandleReceivedPingPongAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageHeader>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.IsValidCloseStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::WebSockets::WebSocketCloseStatus)>(&::System::Net::WebSockets::ManagedWebSocket::IsValidCloseStatus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xace7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"IsValidCloseStatus", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CloseWithReceiveErrorAndThrowAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::System::Net::WebSockets::WebSocketError, ::System::Exception*)>(&::System::Net::WebSockets::ManagedWebSocket::CloseWithReceiveErrorAndThrowAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xace7870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CloseWithReceiveErrorAndThrowAsync", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketError>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.TryParseMessageHeaderFromReceiveBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebSockets::ManagedWebSocket::*)(::by_ref<::GlobalNamespace::ManagedWebSocket_MessageHeader>)>(&::System::Net::WebSockets::ManagedWebSocket::TryParseMessageHeaderFromReceiveBuffer)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xace797c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"TryParseMessageHeaderFromReceiveBuffer", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ManagedWebSocket_MessageHeader>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CloseAsyncPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::CloseAsyncPrivate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xace5f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CloseAsyncPrivate", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendCloseFrameAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::SendCloseFrameAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xace61e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendCloseFrameAsync", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ConsumeFromBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(int32_t)>(&::System::Net::WebSockets::ManagedWebSocket::ConsumeFromBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xace7b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ConsumeFromBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.EnsureBufferContainsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(int32_t, ::System::Threading::CancellationToken, bool)>(&::System::Net::WebSockets::ManagedWebSocket::EnsureBufferContainsAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xace7c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"EnsureBufferContainsAsync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ThrowIfEOFUnexpected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(bool)>(&::System::Net::WebSockets::ManagedWebSocket::ThrowIfEOFUnexpected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xace7d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ThrowIfEOFUnexpected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.AllocateSendBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(int32_t)>(&::System::Net::WebSockets::ManagedWebSocket::AllocateSendBuffer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xace6db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"AllocateSendBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ReleaseSendBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::ReleaseSendBuffer)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xace7e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ReleaseSendBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CombineMaskBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<uint8_t>, int32_t)>(&::System::Net::WebSockets::ManagedWebSocket::CombineMaskBytes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xace7ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CombineMaskBytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ApplyMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::WebSockets::ManagedWebSocket::ApplyMask)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xace7028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ApplyMask", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ApplyMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<uint8_t>, int32_t, int32_t)>(&::System::Net::WebSockets::ManagedWebSocket::ApplyMask)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xace7f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ApplyMask", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ThrowIfOperationInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(bool, ::StringW)>(&::System::Net::WebSockets::ManagedWebSocket::ThrowIfOperationInProgress)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xace5c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ThrowIfOperationInProgress", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ThrowOperationInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(::StringW)>(&::System::Net::WebSockets::ManagedWebSocket::ThrowOperationInProgress)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xace802c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ThrowOperationInProgress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CreateOperationCanceledException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::CreateOperationCanceledException)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xace6c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CreateOperationCanceledException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.TryValidateUtf8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Span_1<uint8_t>, bool, ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*)>(&::System::Net::WebSockets::ManagedWebSocket::TryValidateUtf8)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xace808c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"TryValidateUtf8", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ValidateAndReceiveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Threading::Tasks::Task*, ::ArrayW<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::ValidateAndReceiveAsync)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xace8284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ValidateAndReceiveAsync", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stream = value;
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__isServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isServer;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__isServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isServer;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__isServer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isServer = value;
}
constexpr ::StringW& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__subprotocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subprotocol;
}
constexpr ::StringW const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__subprotocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subprotocol;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__subprotocol(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subprotocol = value;
}
constexpr ::System::Threading::Timer*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__keepAliveTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keepAliveTimer;
}
constexpr ::System::Threading::Timer* const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__keepAliveTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keepAliveTimer;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__keepAliveTimer(::System::Threading::Timer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keepAliveTimer = value;
}
constexpr ::System::Threading::CancellationTokenSource*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__abortSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abortSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__abortSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abortSource;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__abortSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____abortSource = value;
}
constexpr ::System::Memory_1<uint8_t>& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiveBuffer;
}
constexpr ::System::Memory_1<uint8_t> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiveBuffer;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receiveBuffer(::System::Memory_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receiveBuffer = value;
}
constexpr ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__utf8TextState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____utf8TextState;
}
constexpr ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState* const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__utf8TextState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____utf8TextState;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__utf8TextState(::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____utf8TextState = value;
}
constexpr ::System::Threading::SemaphoreSlim*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sendFrameAsyncLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendFrameAsyncLock;
}
constexpr ::System::Threading::SemaphoreSlim* const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sendFrameAsyncLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendFrameAsyncLock;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__sendFrameAsyncLock(::System::Threading::SemaphoreSlim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendFrameAsyncLock = value;
}
constexpr ::System::Net::WebSockets::WebSocketState& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::System::Net::WebSockets::WebSocketState const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__state(::System::Net::WebSockets::WebSocketState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sentCloseFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sentCloseFrame;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sentCloseFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sentCloseFrame;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__sentCloseFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sentCloseFrame = value;
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receivedCloseFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedCloseFrame;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receivedCloseFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedCloseFrame;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receivedCloseFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedCloseFrame = value;
}
constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__closeStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeStatus;
}
constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__closeStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeStatus;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__closeStatus(::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closeStatus = value;
}
constexpr ::StringW& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__closeStatusDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeStatusDescription;
}
constexpr ::StringW const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__closeStatusDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeStatusDescription;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__closeStatusDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closeStatusDescription = value;
}
constexpr ::GlobalNamespace::ManagedWebSocket_MessageHeader& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastReceiveHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReceiveHeader;
}
constexpr ::GlobalNamespace::ManagedWebSocket_MessageHeader const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastReceiveHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReceiveHeader;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__lastReceiveHeader(::GlobalNamespace::ManagedWebSocket_MessageHeader  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastReceiveHeader = value;
}
constexpr int32_t& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBufferOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiveBufferOffset;
}
constexpr int32_t const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBufferOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiveBufferOffset;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receiveBufferOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receiveBufferOffset = value;
}
constexpr int32_t& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBufferCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiveBufferCount;
}
constexpr int32_t const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBufferCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiveBufferCount;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receiveBufferCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receiveBufferCount = value;
}
constexpr int32_t& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receivedMaskOffsetOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedMaskOffsetOffset;
}
constexpr int32_t const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receivedMaskOffsetOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedMaskOffsetOffset;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receivedMaskOffsetOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedMaskOffsetOffset = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sendBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sendBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendBuffer;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__sendBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendBuffer = value;
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastSendWasFragment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSendWasFragment;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastSendWasFragment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSendWasFragment;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__lastSendWasFragment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSendWasFragment = value;
}
constexpr ::System::Threading::Tasks::Task*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastReceiveAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReceiveAsync;
}
constexpr ::System::Threading::Tasks::Task* const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastReceiveAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReceiveAsync;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__lastReceiveAsync(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastReceiveAsync = value;
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_random(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "s_random", ::System::Net::WebSockets::ManagedWebSocket*>(std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* System::Net::WebSockets::ManagedWebSocket::getStaticF_s_random()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "s_random", ::System::Net::WebSockets::ManagedWebSocket*>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_textEncoding(::System::Text::UTF8Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::UTF8Encoding*, "s_textEncoding", ::System::Net::WebSockets::ManagedWebSocket*>(std::forward<::System::Text::UTF8Encoding*>(value));
}
inline ::System::Text::UTF8Encoding* System::Net::WebSockets::ManagedWebSocket::getStaticF_s_textEncoding()  {
return ::cordl_internals::getStaticField<::System::Text::UTF8Encoding*, "s_textEncoding", ::System::Net::WebSockets::ManagedWebSocket*>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_validSendStates(::ArrayW<::System::Net::WebSockets::WebSocketState>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState>, "s_validSendStates", ::System::Net::WebSockets::ManagedWebSocket*>(std::forward<::ArrayW<::System::Net::WebSockets::WebSocketState>>(value));
}
inline ::ArrayW<::System::Net::WebSockets::WebSocketState> System::Net::WebSockets::ManagedWebSocket::getStaticF_s_validSendStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState>, "s_validSendStates", ::System::Net::WebSockets::ManagedWebSocket*>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_validReceiveStates(::ArrayW<::System::Net::WebSockets::WebSocketState>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState>, "s_validReceiveStates", ::System::Net::WebSockets::ManagedWebSocket*>(std::forward<::ArrayW<::System::Net::WebSockets::WebSocketState>>(value));
}
inline ::ArrayW<::System::Net::WebSockets::WebSocketState> System::Net::WebSockets::ManagedWebSocket::getStaticF_s_validReceiveStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState>, "s_validReceiveStates", ::System::Net::WebSockets::ManagedWebSocket*>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_validCloseOutputStates(::ArrayW<::System::Net::WebSockets::WebSocketState>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState>, "s_validCloseOutputStates", ::System::Net::WebSockets::ManagedWebSocket*>(std::forward<::ArrayW<::System::Net::WebSockets::WebSocketState>>(value));
}
inline ::ArrayW<::System::Net::WebSockets::WebSocketState> System::Net::WebSockets::ManagedWebSocket::getStaticF_s_validCloseOutputStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState>, "s_validCloseOutputStates", ::System::Net::WebSockets::ManagedWebSocket*>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_validCloseStates(::ArrayW<::System::Net::WebSockets::WebSocketState>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState>, "s_validCloseStates", ::System::Net::WebSockets::ManagedWebSocket*>(std::forward<::ArrayW<::System::Net::WebSockets::WebSocketState>>(value));
}
inline ::ArrayW<::System::Net::WebSockets::WebSocketState> System::Net::WebSockets::ManagedWebSocket::getStaticF_s_validCloseStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState>, "s_validCloseStates", ::System::Net::WebSockets::ManagedWebSocket*>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_cachedCloseTask(::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*, "s_cachedCloseTask", ::System::Net::WebSockets::ManagedWebSocket*>(std::forward<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(value));
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* System::Net::WebSockets::ManagedWebSocket::getStaticF_s_cachedCloseTask()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*, "s_cachedCloseTask", ::System::Net::WebSockets::ManagedWebSocket*>();
}
inline ::System::Net::WebSockets::ManagedWebSocket* System::Net::WebSockets::ManagedWebSocket::CreateFromConnectedStream(::System::IO::Stream*  stream, bool  isServer, ::StringW  subprotocol, ::System::TimeSpan  keepAliveInterval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CreateFromConnectedStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::ManagedWebSocket*>(nullptr, ___internal_method, stream, isServer, subprotocol, keepAliveInterval);
}
inline ::System::Object* System::Net::WebSockets::ManagedWebSocket::get_StateUpdateLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"get_StateUpdateLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Net::WebSockets::ManagedWebSocket::get_ReceiveAsyncLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"get_ReceiveAsyncLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Net::WebSockets::ManagedWebSocket::_ctor(::System::IO::Stream*  stream, bool  isServer, ::StringW  subprotocol, ::System::TimeSpan  keepAliveInterval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, isServer, subprotocol, keepAliveInterval);
}
inline void System::Net::WebSockets::ManagedWebSocket::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebSockets::ManagedWebSocket::DisposeCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"DisposeCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> System::Net::WebSockets::ManagedWebSocket::get_CloseStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>(this, ___internal_method);
}
inline ::StringW System::Net::WebSockets::ManagedWebSocket::get_CloseStatusDescription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::ManagedWebSocket::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketState>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::SendAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, messageType, endOfMessage, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::Net::WebSockets::ManagedWebSocket::SendPrivateAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendPrivateAsync", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, buffer, messageType, endOfMessage, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* System::Net::WebSockets::ManagedWebSocket::ReceiveAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline void System::Net::WebSockets::ManagedWebSocket::Abort()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ValueTask System::Net::WebSockets::ManagedWebSocket::SendFrameAsync(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, bool  endOfMessage, ::System::ReadOnlyMemory_1<uint8_t>  payloadBuffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendFrameAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, opcode, endOfMessage, payloadBuffer, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::Net::WebSockets::ManagedWebSocket::SendFrameLockAcquiredNonCancelableAsync(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, bool  endOfMessage, ::System::ReadOnlyMemory_1<uint8_t>  payloadBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendFrameLockAcquiredNonCancelableAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, opcode, endOfMessage, payloadBuffer);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::WaitForWriteTaskAsync(::System::Threading::Tasks::ValueTask  writeTask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WaitForWriteTaskAsync", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, writeTask);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::SendFrameFallbackAsync(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, bool  endOfMessage, ::System::ReadOnlyMemory_1<uint8_t>  payloadBuffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendFrameFallbackAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, opcode, endOfMessage, payloadBuffer, cancellationToken);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::WriteFrameToSendBuffer(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, bool  endOfMessage, ::System::ReadOnlySpan_1<uint8_t>  payloadBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WriteFrameToSendBuffer", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, opcode, endOfMessage, payloadBuffer);
}
inline void System::Net::WebSockets::ManagedWebSocket::SendKeepAliveFrameAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendKeepAliveFrameAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::WriteHeader(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, ::ArrayW<uint8_t>  sendBuffer, ::System::ReadOnlySpan_1<uint8_t>  payload, bool  endOfMessage, bool  useMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WriteHeader", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageOpcode>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, opcode, sendBuffer, payload, endOfMessage, useMask);
}
inline void System::Net::WebSockets::ManagedWebSocket::WriteRandomMask(::ArrayW<uint8_t>  buffer, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WriteRandomMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset);
}
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
requires(::cordl_internals::type_constraint<TWebSocketReceiveResultGetter, ::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<TWebSocketReceiveResult>*> && ::cordl_internals::value_type_constraint<TWebSocketReceiveResultGetter> && ::cordl_internals::default_constructor_constraint<TWebSocketReceiveResultGetter>)
inline ::System::Threading::Tasks::ValueTask_1<TWebSocketReceiveResult> System::Net::WebSockets::ManagedWebSocket::ReceiveAsyncPrivate(::System::Memory_1<uint8_t>  payloadBuffer, ::System::Threading::CancellationToken  cancellationToken, TWebSocketReceiveResultGetter  resultGetter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                    {"ReceiveAsyncPrivate", {::i2c::class_of<TWebSocketReceiveResultGetter>(), ::i2c::class_of<TWebSocketReceiveResult>()}, {::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<TWebSocketReceiveResultGetter>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TWebSocketReceiveResultGetter>(), ::i2c::class_of<TWebSocketReceiveResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<TWebSocketReceiveResult>>(this, ___internal_method, payloadBuffer, cancellationToken, resultGetter);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::HandleReceivedCloseAsync(::GlobalNamespace::ManagedWebSocket_MessageHeader  header, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"HandleReceivedCloseAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageHeader>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, header, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::WaitForServerToCloseConnectionAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"WaitForServerToCloseConnectionAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::HandleReceivedPingPongAsync(::GlobalNamespace::ManagedWebSocket_MessageHeader  header, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"HandleReceivedPingPongAsync", {}, {::i2c::type_of<::GlobalNamespace::ManagedWebSocket_MessageHeader>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, header, cancellationToken);
}
inline bool System::Net::WebSockets::ManagedWebSocket::IsValidCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"IsValidCloseStatus", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, closeStatus);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::CloseWithReceiveErrorAndThrowAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::System::Net::WebSockets::WebSocketError  error, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CloseWithReceiveErrorAndThrowAsync", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketError>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, error, innerException);
}
inline bool System::Net::WebSockets::ManagedWebSocket::TryParseMessageHeaderFromReceiveBuffer(::by_ref<::GlobalNamespace::ManagedWebSocket_MessageHeader>  resultHeader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"TryParseMessageHeaderFromReceiveBuffer", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ManagedWebSocket_MessageHeader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, resultHeader);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::CloseAsyncPrivate(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CloseAsyncPrivate", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::SendCloseFrameAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  closeStatusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"SendCloseFrameAsync", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, closeStatusDescription, cancellationToken);
}
inline void System::Net::WebSockets::ManagedWebSocket::ConsumeFromBuffer(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ConsumeFromBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::EnsureBufferContainsAsync(int32_t  minimumRequiredBytes, ::System::Threading::CancellationToken  cancellationToken, bool  throwOnPrematureClosure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"EnsureBufferContainsAsync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, minimumRequiredBytes, cancellationToken, throwOnPrematureClosure);
}
inline void System::Net::WebSockets::ManagedWebSocket::ThrowIfEOFUnexpected(bool  throwOnPrematureClosure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ThrowIfEOFUnexpected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, throwOnPrematureClosure);
}
inline void System::Net::WebSockets::ManagedWebSocket::AllocateSendBuffer(int32_t  minLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"AllocateSendBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minLength);
}
inline void System::Net::WebSockets::ManagedWebSocket::ReleaseSendBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ReleaseSendBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::CombineMaskBytes(::System::Span_1<uint8_t>  buffer, int32_t  maskOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CombineMaskBytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, maskOffset);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::ApplyMask(::System::Span_1<uint8_t>  toMask, ::ArrayW<uint8_t>  mask, int32_t  maskOffset, int32_t  maskOffsetIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ApplyMask", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, toMask, mask, maskOffset, maskOffsetIndex);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::ApplyMask(::System::Span_1<uint8_t>  toMask, int32_t  mask, int32_t  maskIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ApplyMask", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, toMask, mask, maskIndex);
}
inline void System::Net::WebSockets::ManagedWebSocket::ThrowIfOperationInProgress(bool  operationCompleted, /* [CallerMemberName] */ ::StringW  methodName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ThrowIfOperationInProgress", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationCompleted, methodName);
}
inline void System::Net::WebSockets::ManagedWebSocket::ThrowOperationInProgress(::StringW  methodName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ThrowOperationInProgress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline ::System::Exception* System::Net::WebSockets::ManagedWebSocket::CreateOperationCanceledException(::System::Exception*  innerException, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"CreateOperationCanceledException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, innerException, cancellationToken);
}
inline bool System::Net::WebSockets::ManagedWebSocket::TryValidateUtf8(::System::Span_1<uint8_t>  span, bool  endOfMessage, ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"TryValidateUtf8", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, endOfMessage, state);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::ValidateAndReceiveAsync(::System::Threading::Tasks::Task*  receiveTask, ::ArrayW<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket*>(),
                        {"ValidateAndReceiveAsync", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, receiveTask, buffer, cancellationToken);
}
inline ::System::Net::WebSockets::ManagedWebSocket* System::Net::WebSockets::ManagedWebSocket::New_ctor(::System::IO::Stream*  stream, bool  isServer, ::StringW  subprotocol, ::System::TimeSpan  keepAliveInterval)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::ManagedWebSocket*>(stream, isServer, subprotocol, keepAliveInterval));
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::ManagedWebSocket::ManagedWebSocket()   {
}
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::setStaticF___9(::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*  value)  {
::cordl_internals::setStaticField<::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*, "<>9", ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*>(std::forward<::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*>(value));
}
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
inline ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>* System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*, "<>9", ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*>();
}
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::setStaticF___9__61_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__61_0", ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::getStaticF___9__61_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__61_0", ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*>();
}
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::_ReceiveAsyncPrivate_b__61_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*>(),
                        {"<ReceiveAsyncPrivate>b__61_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
inline ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>* System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*>());
}
// Ctor Parameters []
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
constexpr ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::ManagedWebSocket___c__61_2()   {
}
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket___c::*)()>(&::System::Net::WebSockets::ManagedWebSocket___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace8854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket___c.__ctor_b__36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket___c::*)(::System::Object*)>(&::System::Net::WebSockets::ManagedWebSocket___c::__ctor_b__36_0)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xace885c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<.ctor>b__36_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket___c.__ctor_b__36_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket___c::*)(::System::Object*)>(&::System::Net::WebSockets::ManagedWebSocket___c::__ctor_b__36_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xace8988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<.ctor>b__36_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket___c._SendFrameFallbackAsync_b__56_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket___c::*)(::System::Object*)>(&::System::Net::WebSockets::ManagedWebSocket___c::_SendFrameFallbackAsync_b__56_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xace89e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<SendFrameFallbackAsync>b__56_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket___c._SendKeepAliveFrameAsync_b__58_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket___c::*)(::System::Threading::Tasks::Task*)>(&::System::Net::WebSockets::ManagedWebSocket___c::_SendKeepAliveFrameAsync_b__58_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xace8a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<SendKeepAliveFrameAsync>b__58_0", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket___c._WaitForServerToCloseConnectionAsync_b__63_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket___c::*)(::System::Object*)>(&::System::Net::WebSockets::ManagedWebSocket___c::_WaitForServerToCloseConnectionAsync_b__63_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xace8a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<WaitForServerToCloseConnectionAsync>b__63_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WebSockets::ManagedWebSocket___c::setStaticF___9(::System::Net::WebSockets::ManagedWebSocket___c*  value)  {
::cordl_internals::setStaticField<::System::Net::WebSockets::ManagedWebSocket___c*, "<>9", ::System::Net::WebSockets::ManagedWebSocket___c*>(std::forward<::System::Net::WebSockets::ManagedWebSocket___c*>(value));
}
inline ::System::Net::WebSockets::ManagedWebSocket___c* System::Net::WebSockets::ManagedWebSocket___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Net::WebSockets::ManagedWebSocket___c*, "<>9", ::System::Net::WebSockets::ManagedWebSocket___c*>();
}
inline void System::Net::WebSockets::ManagedWebSocket___c::setStaticF___9__36_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__36_0", ::System::Net::WebSockets::ManagedWebSocket___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::ManagedWebSocket___c::getStaticF___9__36_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__36_0", ::System::Net::WebSockets::ManagedWebSocket___c*>();
}
inline void System::Net::WebSockets::ManagedWebSocket___c::setStaticF___9__36_1(::System::Threading::TimerCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::TimerCallback*, "<>9__36_1", ::System::Net::WebSockets::ManagedWebSocket___c*>(std::forward<::System::Threading::TimerCallback*>(value));
}
inline ::System::Threading::TimerCallback* System::Net::WebSockets::ManagedWebSocket___c::getStaticF___9__36_1()  {
return ::cordl_internals::getStaticField<::System::Threading::TimerCallback*, "<>9__36_1", ::System::Net::WebSockets::ManagedWebSocket___c*>();
}
inline void System::Net::WebSockets::ManagedWebSocket___c::setStaticF___9__56_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__56_0", ::System::Net::WebSockets::ManagedWebSocket___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::ManagedWebSocket___c::getStaticF___9__56_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__56_0", ::System::Net::WebSockets::ManagedWebSocket___c*>();
}
inline void System::Net::WebSockets::ManagedWebSocket___c::setStaticF___9__58_0(::System::Action_1<::System::Threading::Tasks::Task*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Threading::Tasks::Task*>*, "<>9__58_0", ::System::Net::WebSockets::ManagedWebSocket___c*>(std::forward<::System::Action_1<::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Action_1<::System::Threading::Tasks::Task*>* System::Net::WebSockets::ManagedWebSocket___c::getStaticF___9__58_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Threading::Tasks::Task*>*, "<>9__58_0", ::System::Net::WebSockets::ManagedWebSocket___c*>();
}
inline void System::Net::WebSockets::ManagedWebSocket___c::setStaticF___9__63_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__63_0", ::System::Net::WebSockets::ManagedWebSocket___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::ManagedWebSocket___c::getStaticF___9__63_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__63_0", ::System::Net::WebSockets::ManagedWebSocket___c*>();
}
inline void System::Net::WebSockets::ManagedWebSocket___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebSockets::ManagedWebSocket___c::__ctor_b__36_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<.ctor>b__36_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::WebSockets::ManagedWebSocket___c::__ctor_b__36_1(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<.ctor>b__36_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::WebSockets::ManagedWebSocket___c::_SendFrameFallbackAsync_b__56_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<SendFrameFallbackAsync>b__56_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::WebSockets::ManagedWebSocket___c::_SendKeepAliveFrameAsync_b__58_0(::System::Threading::Tasks::Task*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<SendKeepAliveFrameAsync>b__58_0", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void System::Net::WebSockets::ManagedWebSocket___c::_WaitForServerToCloseConnectionAsync_b__63_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket___c*>(),
                        {"<WaitForServerToCloseConnectionAsync>b__63_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Net::WebSockets::ManagedWebSocket___c* System::Net::WebSockets::ManagedWebSocket___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::ManagedWebSocket___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::ManagedWebSocket___c::ManagedWebSocket___c()   {
}
template<typename TResult>
inline TResult System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<TResult>::GetResult(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  closeStatus, ::StringW  closeDescription)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<TResult>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, count, messageType, endOfMessage, closeStatus, closeDescription);
}
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::*)()>(&::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace4e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_get_SequenceInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SequenceInProgress;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_get_SequenceInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SequenceInProgress;
}
constexpr void System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_set_SequenceInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SequenceInProgress = value;
}
constexpr int32_t& System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_get_AdditionalBytesExpected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdditionalBytesExpected;
}
constexpr int32_t const& System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_get_AdditionalBytesExpected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdditionalBytesExpected;
}
constexpr void System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_set_AdditionalBytesExpected(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdditionalBytesExpected = value;
}
constexpr int32_t& System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_get_ExpectedValueMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedValueMin;
}
constexpr int32_t const& System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_get_ExpectedValueMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedValueMin;
}
constexpr void System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_set_ExpectedValueMin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedValueMin = value;
}
constexpr int32_t& System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_get_CurrentDecodeBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentDecodeBits;
}
constexpr int32_t const& System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_get_CurrentDecodeBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentDecodeBits;
}
constexpr void System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::__cordl_internal_set_CurrentDecodeBits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentDecodeBits = value;
}
inline void System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState* System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState::ManagedWebSocket_Utf8MessageState()   {
}
