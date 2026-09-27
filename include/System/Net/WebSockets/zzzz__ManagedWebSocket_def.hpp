#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageHeader_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocket_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket)
namespace GlobalNamespace {
struct ManagedWebSocket_MessageHeader;
}
namespace GlobalNamespace {
struct ManagedWebSocket_MessageOpcode;
}
namespace GlobalNamespace {
struct ManagedWebSocket_WebSocketReceiveResultGetter;
}
namespace GlobalNamespace {
struct ManagedWebSocket__CloseAsyncPrivate_d__68;
}
namespace GlobalNamespace {
struct ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66;
}
namespace GlobalNamespace {
struct ManagedWebSocket__EnsureBufferContainsAsync_d__71;
}
namespace GlobalNamespace {
struct ManagedWebSocket__HandleReceivedCloseAsync_d__62;
}
namespace GlobalNamespace {
struct ManagedWebSocket__HandleReceivedPingPongAsync_d__64;
}
namespace GlobalNamespace {
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
struct ManagedWebSocket__ReceiveAsyncPrivate_d__61_2;
}
namespace GlobalNamespace {
struct ManagedWebSocket__SendCloseFrameAsync_d__69;
}
namespace GlobalNamespace {
struct ManagedWebSocket__SendFrameFallbackAsync_d__56;
}
namespace GlobalNamespace {
struct ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63;
}
namespace GlobalNamespace {
struct ManagedWebSocket__WaitForWriteTaskAsync_d__55;
}
namespace System::IO {
class Stream;
}
namespace System::Net::WebSockets {
template<typename TResult>
class ManagedWebSocket_IWebSocketReceiveResultGetter_1;
}
namespace System::Net::WebSockets {
class ManagedWebSocket_Utf8MessageState;
}
namespace System::Net::WebSockets {
class ManagedWebSocket___c;
}
namespace System::Net::WebSockets {
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
class ManagedWebSocket___c__61_2;
}
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
struct WebSocketError;
}
namespace System::Net::WebSockets {
struct WebSocketMessageType;
}
namespace System::Net::WebSockets {
class WebSocketReceiveResult;
}
namespace System::Net::WebSockets {
struct WebSocketState;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class TimerCallback;
}
namespace System::Threading {
class Timer;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::WebSockets {
class ManagedWebSocket;
}
namespace System::Net::WebSockets {
template<typename TResult>
class ManagedWebSocket_IWebSocketReceiveResultGetter_1;
}
namespace System::Net::WebSockets {
class ManagedWebSocket_Utf8MessageState;
}
namespace System::Net::WebSockets {
class ManagedWebSocket___c;
}
namespace System::Net::WebSockets {
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
class ManagedWebSocket___c__61_2;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::ManagedWebSocket*);
MARK_GEN_REF_T_PTR(::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1);
MARK_REF_T(::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*);
MARK_REF_T(::System::Net::WebSockets::ManagedWebSocket___c*);
MARK_GEN_REF_T_PTR(::System::Net::WebSockets::ManagedWebSocket___c__61_2);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::ManagedWebSocket*, "System.Net.WebSockets", "ManagedWebSocket");
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1, "System.Net.WebSockets", "ManagedWebSocket/IWebSocketReceiveResultGetter`1");
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*, "System.Net.WebSockets", "ManagedWebSocket/Utf8MessageState");
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::ManagedWebSocket___c*, "System.Net.WebSockets", "ManagedWebSocket/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Net::WebSockets::ManagedWebSocket___c__61_2, "System.Net.WebSockets", "ManagedWebSocket/<>c__61`2");
// Dependencies System.Memory`1<T>, System.Net.WebSockets.ManagedWebSocket::IWebSocketReceiveResultGetter`1<TResult>, System.Net.WebSockets.ManagedWebSocket::MessageHeader, System.Net.WebSockets.WebSocket, System.Net.WebSockets.WebSocketCloseStatus, System.Net.WebSockets.WebSocketState, System.Nullable`1<T>
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.ManagedWebSocket
class CORDL_TYPE ManagedWebSocket : public ::System::Net::WebSockets::WebSocket {
public:
// Declarations
using MessageHeader = ::GlobalNamespace::ManagedWebSocket_MessageHeader;

using MessageOpcode = ::GlobalNamespace::ManagedWebSocket_MessageOpcode;

using WebSocketReceiveResultGetter = ::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter;

using _CloseAsyncPrivate_d__68 = ::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68;

using _CloseWithReceiveErrorAndThrowAsync_d__66 = ::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66;

using _EnsureBufferContainsAsync_d__71 = ::GlobalNamespace::ManagedWebSocket__EnsureBufferContainsAsync_d__71;

using _HandleReceivedCloseAsync_d__62 = ::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62;

using _HandleReceivedPingPongAsync_d__64 = ::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64;

template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
using _ReceiveAsyncPrivate_d__61_2 = ::GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>;

using _SendCloseFrameAsync_d__69 = ::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69;

using _SendFrameFallbackAsync_d__56 = ::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56;

using _WaitForServerToCloseConnectionAsync_d__63 = ::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63;

using _WaitForWriteTaskAsync_d__55 = ::GlobalNamespace::ManagedWebSocket__WaitForWriteTaskAsync_d__55;

template<typename TResult>
using IWebSocketReceiveResultGetter_1 = ::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<TResult>;

using Utf8MessageState = ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState;

using __c = ::System::Net::WebSockets::ManagedWebSocket___c;

template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
using __c__61_2 = ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>;

 __declspec(property(get=get_CloseStatus)) ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  CloseStatus;

 __declspec(property(get=get_CloseStatusDescription)) ::StringW  CloseStatusDescription;

 __declspec(property(get=get_ReceiveAsyncLock)) ::System::Object*  ReceiveAsyncLock;

 __declspec(property(get=get_State)) ::System::Net::WebSockets::WebSocketState  State;

 __declspec(property(get=get_StateUpdateLock)) ::System::Object*  StateUpdateLock;

/// @brief Field _abortSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__abortSource, put=__cordl_internal_set__abortSource)) ::System::Threading::CancellationTokenSource*  _abortSource;

/// @brief Field _closeStatus, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__closeStatus, put=__cordl_internal_set__closeStatus)) ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  _closeStatus;

/// @brief Field _closeStatusDescription, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeStatusDescription, put=__cordl_internal_set__closeStatusDescription)) ::StringW  _closeStatusDescription;

/// @brief Field _disposed, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _isServer, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isServer, put=__cordl_internal_set__isServer)) bool  _isServer;

/// @brief Field _keepAliveTimer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__keepAliveTimer, put=__cordl_internal_set__keepAliveTimer)) ::System::Threading::Timer*  _keepAliveTimer;

/// @brief Field _lastReceiveAsync, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastReceiveAsync, put=__cordl_internal_set__lastReceiveAsync)) ::System::Threading::Tasks::Task*  _lastReceiveAsync;

/// @brief Field _lastReceiveHeader, offset 0x78, size 0x18 
 __declspec(property(get=__cordl_internal_get__lastReceiveHeader, put=__cordl_internal_set__lastReceiveHeader)) ::GlobalNamespace::ManagedWebSocket_MessageHeader  _lastReceiveHeader;

/// @brief Field _lastSendWasFragment, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastSendWasFragment, put=__cordl_internal_set__lastSendWasFragment)) bool  _lastSendWasFragment;

/// @brief Field _receiveBuffer, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__receiveBuffer, put=__cordl_internal_set__receiveBuffer)) ::System::Memory_1<uint8_t>  _receiveBuffer;

/// @brief Field _receiveBufferCount, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__receiveBufferCount, put=__cordl_internal_set__receiveBufferCount)) int32_t  _receiveBufferCount;

/// @brief Field _receiveBufferOffset, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__receiveBufferOffset, put=__cordl_internal_set__receiveBufferOffset)) int32_t  _receiveBufferOffset;

/// @brief Field _receivedCloseFrame, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get__receivedCloseFrame, put=__cordl_internal_set__receivedCloseFrame)) bool  _receivedCloseFrame;

/// @brief Field _receivedMaskOffsetOffset, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__receivedMaskOffsetOffset, put=__cordl_internal_set__receivedMaskOffsetOffset)) int32_t  _receivedMaskOffsetOffset;

/// @brief Field _sendBuffer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__sendBuffer, put=__cordl_internal_set__sendBuffer)) ::ArrayW<uint8_t>  _sendBuffer;

/// @brief Field _sendFrameAsyncLock, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__sendFrameAsyncLock, put=__cordl_internal_set__sendFrameAsyncLock)) ::System::Threading::SemaphoreSlim*  _sendFrameAsyncLock;

/// @brief Field _sentCloseFrame, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__sentCloseFrame, put=__cordl_internal_set__sentCloseFrame)) bool  _sentCloseFrame;

/// @brief Field _state, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::System::Net::WebSockets::WebSocketState  _state;

/// @brief Field _stream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _subprotocol, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__subprotocol, put=__cordl_internal_set__subprotocol)) ::StringW  _subprotocol;

/// @brief Field _utf8TextState, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__utf8TextState, put=__cordl_internal_set__utf8TextState)) ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*  _utf8TextState;

/// @brief Field s_cachedCloseTask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cachedCloseTask, put=setStaticF_s_cachedCloseTask)) ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*  s_cachedCloseTask;

/// @brief Field s_random, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_random, put=setStaticF_s_random)) ::System::Security::Cryptography::RandomNumberGenerator*  s_random;

/// @brief Field s_textEncoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_textEncoding, put=setStaticF_s_textEncoding)) ::System::Text::UTF8Encoding*  s_textEncoding;

/// @brief Field s_validCloseOutputStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_validCloseOutputStates, put=setStaticF_s_validCloseOutputStates)) ::ArrayW<::System::Net::WebSockets::WebSocketState>  s_validCloseOutputStates;

/// @brief Field s_validCloseStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_validCloseStates, put=setStaticF_s_validCloseStates)) ::ArrayW<::System::Net::WebSockets::WebSocketState>  s_validCloseStates;

/// @brief Field s_validReceiveStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_validReceiveStates, put=setStaticF_s_validReceiveStates)) ::ArrayW<::System::Net::WebSockets::WebSocketState>  s_validReceiveStates;

/// @brief Field s_validSendStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_validSendStates, put=setStaticF_s_validSendStates)) ::ArrayW<::System::Net::WebSockets::WebSocketState>  s_validSendStates;

/// @brief Method Abort, addr 0xace6304, size 0x30, virtual true, abstract: false, final false
inline void Abort() ;

/// @brief Method AllocateSendBuffer, addr 0xace6db4, size 0x104, virtual false, abstract: false, final false
inline void AllocateSendBuffer(int32_t  minLength) ;

/// @brief Method ApplyMask, addr 0xace7028, size 0xc0, virtual false, abstract: false, final false
static inline int32_t ApplyMask(::System::Span_1<uint8_t>  toMask, ::ArrayW<uint8_t>  mask, int32_t  maskOffset, int32_t  maskOffsetIndex) ;

/// @brief Method ApplyMask, addr 0xace7f2c, size 0x100, virtual false, abstract: false, final false
static inline int32_t ApplyMask(::System::Span_1<uint8_t>  toMask, int32_t  mask, int32_t  maskIndex) ;

/// @brief Method CloseAsync, addr 0xace5c7c, size 0x154, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<CloseAsyncPrivate>d__68))]
/// @brief Method CloseAsyncPrivate, addr 0xace5f6c, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseAsyncPrivate(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CloseOutputAsync, addr 0xace608c, size 0x154, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<CloseWithReceiveErrorAndThrowAsync>d__66))]
/// @brief Method CloseWithReceiveErrorAndThrowAsync, addr 0xace7870, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseWithReceiveErrorAndThrowAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::System::Net::WebSockets::WebSocketError  error, ::System::Exception*  innerException) ;

/// @brief Method CombineMaskBytes, addr 0xace7ba4, size 0xa0, virtual false, abstract: false, final false
static inline int32_t CombineMaskBytes(::System::Span_1<uint8_t>  buffer, int32_t  maskOffset) ;

/// @brief Method ConsumeFromBuffer, addr 0xace7b90, size 0x14, virtual false, abstract: false, final false
inline void ConsumeFromBuffer(int32_t  count) ;

/// @brief Method CreateFromConnectedStream, addr 0xace4930, size 0x80, virtual false, abstract: false, final false
static inline ::System::Net::WebSockets::ManagedWebSocket* CreateFromConnectedStream(::System::IO::Stream*  stream, bool  isServer, ::StringW  subprotocol, ::System::TimeSpan  keepAliveInterval) ;

/// @brief Method CreateOperationCanceledException, addr 0xace6c0c, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* CreateOperationCanceledException(::System::Exception*  innerException, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Dispose, addr 0xace4e10, size 0xb8, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method DisposeCore, addr 0xace4ec8, size 0x58, virtual false, abstract: false, final false
inline void DisposeCore() ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<EnsureBufferContainsAsync>d__71))]
/// @brief Method EnsureBufferContainsAsync, addr 0xace7c44, size 0x114, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* EnsureBufferContainsAsync(int32_t  minimumRequiredBytes, ::System::Threading::CancellationToken  cancellationToken, bool  throwOnPrematureClosure) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<HandleReceivedCloseAsync>d__62))]
/// @brief Method HandleReceivedCloseAsync, addr 0xace7504, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* HandleReceivedCloseAsync(::GlobalNamespace::ManagedWebSocket_MessageHeader  header, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<HandleReceivedPingPongAsync>d__64))]
/// @brief Method HandleReceivedPingPongAsync, addr 0xace7718, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* HandleReceivedPingPongAsync(::GlobalNamespace::ManagedWebSocket_MessageHeader  header, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method IsValidCloseStatus, addr 0xace7834, size 0x3c, virtual false, abstract: false, final false
static inline bool IsValidCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus) ;

static inline ::System::Net::WebSockets::ManagedWebSocket* New_ctor(::System::IO::Stream*  stream, bool  isServer, ::StringW  subprotocol, ::System::TimeSpan  keepAliveInterval) ;

/// @brief Method ReceiveAsync, addr 0xace58fc, size 0x35c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<ReceiveAsyncPrivate>d__61`2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>))]
/// @brief Method ReceiveAsyncPrivate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
requires(::cordl_internals::type_constraint<TWebSocketReceiveResultGetter, ::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<TWebSocketReceiveResult>*> && ::cordl_internals::value_type_constraint<TWebSocketReceiveResultGetter> && ::cordl_internals::default_constructor_constraint<TWebSocketReceiveResultGetter>)
inline ::System::Threading::Tasks::ValueTask_1<TWebSocketReceiveResult> ReceiveAsyncPrivate(::System::Memory_1<uint8_t>  payloadBuffer, ::System::Threading::CancellationToken  cancellationToken, TWebSocketReceiveResultGetter  resultGetter) ;

/// @brief Method ReleaseSendBuffer, addr 0xace7e10, size 0x11c, virtual false, abstract: false, final false
inline void ReleaseSendBuffer() ;

/// @brief Method SendAsync, addr 0xace4f38, size 0x298, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<SendCloseFrameAsync>d__69))]
/// @brief Method SendCloseFrameAsync, addr 0xace61e0, size 0x124, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendCloseFrameAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  closeStatusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SendFrameAsync, addr 0xace57e0, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask SendFrameAsync(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, bool  endOfMessage, ::System::ReadOnlyMemory_1<uint8_t>  payloadBuffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<SendFrameFallbackAsync>d__56))]
/// @brief Method SendFrameFallbackAsync, addr 0xace6830, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendFrameFallbackAsync(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, bool  endOfMessage, ::System::ReadOnlyMemory_1<uint8_t>  payloadBuffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SendFrameLockAcquiredNonCancelableAsync, addr 0xace6334, size 0x4fc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask SendFrameLockAcquiredNonCancelableAsync(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, bool  endOfMessage, ::System::ReadOnlyMemory_1<uint8_t>  payloadBuffer) ;

/// @brief Method SendKeepAliveFrameAsync, addr 0xace70e8, size 0x398, virtual false, abstract: false, final false
inline void SendKeepAliveFrameAsync() ;

/// @brief Method SendPrivateAsync, addr 0xace5368, size 0x324, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask SendPrivateAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ThrowIfEOFUnexpected, addr 0xace7d58, size 0x80, virtual false, abstract: false, final false
inline void ThrowIfEOFUnexpected(bool  throwOnPrematureClosure) ;

/// @brief Method ThrowIfOperationInProgress, addr 0xace5c58, size 0x24, virtual false, abstract: false, final false
inline void ThrowIfOperationInProgress(bool  operationCompleted, /* [CallerMemberName] */ ::StringW  methodName) ;

/// @brief Method ThrowOperationInProgress, addr 0xace802c, size 0x60, virtual false, abstract: false, final false
inline void ThrowOperationInProgress(::StringW  methodName) ;

/// @brief Method TryParseMessageHeaderFromReceiveBuffer, addr 0xace797c, size 0x214, virtual false, abstract: false, final false
inline bool TryParseMessageHeaderFromReceiveBuffer(::by_ref<::GlobalNamespace::ManagedWebSocket_MessageHeader>  resultHeader) ;

/// @brief Method TryValidateUtf8, addr 0xace808c, size 0x1f8, virtual false, abstract: false, final false
static inline bool TryValidateUtf8(::System::Span_1<uint8_t>  span, bool  endOfMessage, ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*  state) ;

/// @brief Method ValidateAndReceiveAsync, addr 0xace8284, size 0x1a0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ValidateAndReceiveAsync(::System::Threading::Tasks::Task*  receiveTask, ::ArrayW<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<WaitForServerToCloseConnectionAsync>d__63))]
/// @brief Method WaitForServerToCloseConnectionAsync, addr 0xace761c, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForServerToCloseConnectionAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ManagedWebSocket::<WaitForWriteTaskAsync>d__55))]
/// @brief Method WaitForWriteTaskAsync, addr 0xace6cb0, size 0x104, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForWriteTaskAsync(::System::Threading::Tasks::ValueTask  writeTask) ;

/// @brief Method WriteFrameToSendBuffer, addr 0xace696c, size 0x260, virtual false, abstract: false, final false
inline int32_t WriteFrameToSendBuffer(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, bool  endOfMessage, ::System::ReadOnlySpan_1<uint8_t>  payloadBuffer) ;

/// @brief Method WriteHeader, addr 0xace6eb8, size 0x170, virtual false, abstract: false, final false
static inline int32_t WriteHeader(::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, ::ArrayW<uint8_t>  sendBuffer, ::System::ReadOnlySpan_1<uint8_t>  payload, bool  endOfMessage, bool  useMask) ;

/// @brief Method WriteRandomMask, addr 0xace7480, size 0x84, virtual false, abstract: false, final false
static inline void WriteRandomMask(::ArrayW<uint8_t>  buffer, int32_t  offset) ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__abortSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__abortSource() ;

constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> const& __cordl_internal_get__closeStatus() const;

constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>& __cordl_internal_get__closeStatus() ;

constexpr ::StringW const& __cordl_internal_get__closeStatusDescription() const;

constexpr ::StringW& __cordl_internal_get__closeStatusDescription() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr bool const& __cordl_internal_get__isServer() const;

constexpr bool& __cordl_internal_get__isServer() ;

constexpr ::System::Threading::Timer* const& __cordl_internal_get__keepAliveTimer() const;

constexpr ::System::Threading::Timer*& __cordl_internal_get__keepAliveTimer() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__lastReceiveAsync() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__lastReceiveAsync() ;

constexpr ::GlobalNamespace::ManagedWebSocket_MessageHeader const& __cordl_internal_get__lastReceiveHeader() const;

constexpr ::GlobalNamespace::ManagedWebSocket_MessageHeader& __cordl_internal_get__lastReceiveHeader() ;

constexpr bool const& __cordl_internal_get__lastSendWasFragment() const;

constexpr bool& __cordl_internal_get__lastSendWasFragment() ;

constexpr ::System::Memory_1<uint8_t> const& __cordl_internal_get__receiveBuffer() const;

constexpr ::System::Memory_1<uint8_t>& __cordl_internal_get__receiveBuffer() ;

constexpr int32_t const& __cordl_internal_get__receiveBufferCount() const;

constexpr int32_t& __cordl_internal_get__receiveBufferCount() ;

constexpr int32_t const& __cordl_internal_get__receiveBufferOffset() const;

constexpr int32_t& __cordl_internal_get__receiveBufferOffset() ;

constexpr bool const& __cordl_internal_get__receivedCloseFrame() const;

constexpr bool& __cordl_internal_get__receivedCloseFrame() ;

constexpr int32_t const& __cordl_internal_get__receivedMaskOffsetOffset() const;

constexpr int32_t& __cordl_internal_get__receivedMaskOffsetOffset() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__sendBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__sendBuffer() ;

constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__sendFrameAsyncLock() const;

constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__sendFrameAsyncLock() ;

constexpr bool const& __cordl_internal_get__sentCloseFrame() const;

constexpr bool& __cordl_internal_get__sentCloseFrame() ;

constexpr ::System::Net::WebSockets::WebSocketState const& __cordl_internal_get__state() const;

constexpr ::System::Net::WebSockets::WebSocketState& __cordl_internal_get__state() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr ::StringW const& __cordl_internal_get__subprotocol() const;

constexpr ::StringW& __cordl_internal_get__subprotocol() ;

constexpr ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState* const& __cordl_internal_get__utf8TextState() const;

constexpr ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*& __cordl_internal_get__utf8TextState() ;

constexpr void __cordl_internal_set__abortSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__closeStatus(::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  value) ;

constexpr void __cordl_internal_set__closeStatusDescription(::StringW  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__isServer(bool  value) ;

constexpr void __cordl_internal_set__keepAliveTimer(::System::Threading::Timer*  value) ;

constexpr void __cordl_internal_set__lastReceiveAsync(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__lastReceiveHeader(::GlobalNamespace::ManagedWebSocket_MessageHeader  value) ;

constexpr void __cordl_internal_set__lastSendWasFragment(bool  value) ;

constexpr void __cordl_internal_set__receiveBuffer(::System::Memory_1<uint8_t>  value) ;

constexpr void __cordl_internal_set__receiveBufferCount(int32_t  value) ;

constexpr void __cordl_internal_set__receiveBufferOffset(int32_t  value) ;

constexpr void __cordl_internal_set__receivedCloseFrame(bool  value) ;

constexpr void __cordl_internal_set__receivedMaskOffsetOffset(int32_t  value) ;

constexpr void __cordl_internal_set__sendBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__sendFrameAsyncLock(::System::Threading::SemaphoreSlim*  value) ;

constexpr void __cordl_internal_set__sentCloseFrame(bool  value) ;

constexpr void __cordl_internal_set__state(::System::Net::WebSockets::WebSocketState  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__subprotocol(::StringW  value) ;

constexpr void __cordl_internal_set__utf8TextState(::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*  value) ;

/// @brief Method .ctor, addr 0xace49b0, size 0x440, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, bool  isServer, ::StringW  subprotocol, ::System::TimeSpan  keepAliveInterval) ;

static inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* getStaticF_s_cachedCloseTask() ;

static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_s_random() ;

static inline ::System::Text::UTF8Encoding* getStaticF_s_textEncoding() ;

static inline ::ArrayW<::System::Net::WebSockets::WebSocketState> getStaticF_s_validCloseOutputStates() ;

static inline ::ArrayW<::System::Net::WebSockets::WebSocketState> getStaticF_s_validCloseStates() ;

static inline ::ArrayW<::System::Net::WebSockets::WebSocketState> getStaticF_s_validReceiveStates() ;

static inline ::ArrayW<::System::Net::WebSockets::WebSocketState> getStaticF_s_validSendStates() ;

/// @brief Method get_CloseStatus, addr 0xace4f20, size 0x8, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> get_CloseStatus() ;

/// @brief Method get_CloseStatusDescription, addr 0xace4f28, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_CloseStatusDescription() ;

/// @brief Method get_ReceiveAsyncLock, addr 0xace4df8, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_ReceiveAsyncLock() ;

/// @brief Method get_State, addr 0xace4f30, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::WebSockets::WebSocketState get_State() ;

/// @brief Method get_StateUpdateLock, addr 0xace4df0, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_StateUpdateLock() ;

static inline void setStaticF_s_cachedCloseTask(::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*  value) ;

static inline void setStaticF_s_random(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

static inline void setStaticF_s_textEncoding(::System::Text::UTF8Encoding*  value) ;

static inline void setStaticF_s_validCloseOutputStates(::ArrayW<::System::Net::WebSockets::WebSocketState>  value) ;

static inline void setStaticF_s_validCloseStates(::ArrayW<::System::Net::WebSockets::WebSocketState>  value) ;

static inline void setStaticF_s_validReceiveStates(::ArrayW<::System::Net::WebSockets::WebSocketState>  value) ;

static inline void setStaticF_s_validSendStates(::ArrayW<::System::Net::WebSockets::WebSocketState>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManagedWebSocket(ManagedWebSocket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManagedWebSocket(ManagedWebSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10901};

/// @brief Field _stream, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _isServer, offset: 0x18, size: 0x1, def value: None
 bool  ____isServer;

/// @brief Field _subprotocol, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____subprotocol;

/// @brief Field _keepAliveTimer, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Timer*  ____keepAliveTimer;

/// @brief Field _abortSource, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____abortSource;

/// @brief Field _receiveBuffer, offset: 0x38, size: 0x10, def value: None
 ::System::Memory_1<uint8_t>  ____receiveBuffer;

/// @brief Field _utf8TextState, offset: 0x48, size: 0x8, def value: None
 ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState*  ____utf8TextState;

/// @brief Field _sendFrameAsyncLock, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim*  ____sendFrameAsyncLock;

/// @brief Field _state, offset: 0x58, size: 0x4, def value: None
 ::System::Net::WebSockets::WebSocketState  ____state;

/// @brief Field _disposed, offset: 0x5c, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _sentCloseFrame, offset: 0x5d, size: 0x1, def value: None
 bool  ____sentCloseFrame;

/// @brief Field _receivedCloseFrame, offset: 0x5e, size: 0x1, def value: None
 bool  ____receivedCloseFrame;

/// @brief Field _closeStatus, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  ____closeStatus;

/// @brief Field _closeStatusDescription, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____closeStatusDescription;

/// @brief Field _lastReceiveHeader, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::ManagedWebSocket_MessageHeader  ____lastReceiveHeader;

/// @brief Field _receiveBufferOffset, offset: 0x90, size: 0x4, def value: None
 int32_t  ____receiveBufferOffset;

/// @brief Field _receiveBufferCount, offset: 0x94, size: 0x4, def value: None
 int32_t  ____receiveBufferCount;

/// @brief Field _receivedMaskOffsetOffset, offset: 0x98, size: 0x4, def value: None
 int32_t  ____receivedMaskOffsetOffset;

/// @brief Field _sendBuffer, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____sendBuffer;

/// @brief Field _lastSendWasFragment, offset: 0xa8, size: 0x1, def value: None
 bool  ____lastSendWasFragment;

/// @brief Field _lastReceiveAsync, offset: 0xb0, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____lastReceiveAsync;

/// @brief Size padding 0xb0 - 0xb8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____isServer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____subprotocol) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____keepAliveTimer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____abortSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receiveBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____utf8TextState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____sendFrameAsyncLock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____state) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____disposed) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____sentCloseFrame) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receivedCloseFrame) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____closeStatus) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____closeStatusDescription) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____lastReceiveHeader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receiveBufferOffset) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receiveBufferCount) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____receivedMaskOffsetOffset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____sendBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____lastSendWasFragment) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket, ____lastReceiveAsync) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::ManagedWebSocket) == 0xb0, "Size mismatch!");

} // namespace end def System::Net::WebSockets
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net::WebSockets {
// cpp template
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
// Is value type: false
// CS Name: System.Net.WebSockets.ManagedWebSocket/<>c__61`2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>
class CORDL_TYPE ManagedWebSocket___c__61_2 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*  __9;

/// @brief Field <>9__61_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__61_0, put=setStaticF___9__61_0)) ::System::Action_1<::System::Object*>*  __9__61_0;

static inline ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>* New_ctor() ;

/// @brief Method <ReceiveAsyncPrivate>b__61_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ReceiveAsyncPrivate_b__61_0(::System::Object*  s) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__61_0() ;

static inline void setStaticF___9(::System::Net::WebSockets::ManagedWebSocket___c__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>*  value) ;

static inline void setStaticF___9__61_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket___c__61_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket___c__61_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManagedWebSocket___c__61_2(ManagedWebSocket___c__61_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket___c__61_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManagedWebSocket___c__61_2(ManagedWebSocket___c__61_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::WebSockets
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.ManagedWebSocket/<>c
class CORDL_TYPE ManagedWebSocket___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::WebSockets::ManagedWebSocket___c*  __9;

/// @brief Field <>9__36_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_0, put=setStaticF___9__36_0)) ::System::Action_1<::System::Object*>*  __9__36_0;

/// @brief Field <>9__36_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_1, put=setStaticF___9__36_1)) ::System::Threading::TimerCallback*  __9__36_1;

/// @brief Field <>9__56_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__56_0, put=setStaticF___9__56_0)) ::System::Action_1<::System::Object*>*  __9__56_0;

/// @brief Field <>9__58_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_0, put=setStaticF___9__58_0)) ::System::Action_1<::System::Threading::Tasks::Task*>*  __9__58_0;

/// @brief Field <>9__63_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__63_0, put=setStaticF___9__63_0)) ::System::Action_1<::System::Object*>*  __9__63_0;

static inline ::System::Net::WebSockets::ManagedWebSocket___c* New_ctor() ;

/// @brief Method <SendFrameFallbackAsync>b__56_0, addr 0xace89e8, size 0x6c, virtual false, abstract: false, final false
inline void _SendFrameFallbackAsync_b__56_0(::System::Object*  s) ;

/// @brief Method <SendKeepAliveFrameAsync>b__58_0, addr 0xace8a54, size 0x18, virtual false, abstract: false, final false
inline void _SendKeepAliveFrameAsync_b__58_0(::System::Threading::Tasks::Task*  p) ;

/// @brief Method <WaitForServerToCloseConnectionAsync>b__63_0, addr 0xace8a6c, size 0x6c, virtual false, abstract: false, final false
inline void _WaitForServerToCloseConnectionAsync_b__63_0(::System::Object*  s) ;

/// @brief Method <.ctor>b__36_0, addr 0xace885c, size 0x12c, virtual false, abstract: false, final false
inline void __ctor_b__36_0(::System::Object*  s) ;

/// @brief Method <.ctor>b__36_1, addr 0xace8988, size 0x60, virtual false, abstract: false, final false
inline void __ctor_b__36_1(::System::Object*  s) ;

/// @brief Method .ctor, addr 0xace8854, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::WebSockets::ManagedWebSocket___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__36_0() ;

static inline ::System::Threading::TimerCallback* getStaticF___9__36_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__56_0() ;

static inline ::System::Action_1<::System::Threading::Tasks::Task*>* getStaticF___9__58_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__63_0() ;

static inline void setStaticF___9(::System::Net::WebSockets::ManagedWebSocket___c*  value) ;

static inline void setStaticF___9__36_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__36_1(::System::Threading::TimerCallback*  value) ;

static inline void setStaticF___9__56_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__58_0(::System::Action_1<::System::Threading::Tasks::Task*>*  value) ;

static inline void setStaticF___9__63_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManagedWebSocket___c(ManagedWebSocket___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManagedWebSocket___c(ManagedWebSocket___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10889};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebSockets::ManagedWebSocket___c) == 0x10, "Size mismatch!");

} // namespace end def System::Net::WebSockets
// Dependencies 
namespace System::Net::WebSockets {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: System.Net.WebSockets.ManagedWebSocket/IWebSocketReceiveResultGetter`1<TResult>
class CORDL_TYPE ManagedWebSocket_IWebSocketReceiveResultGetter_1 {
public:
// Declarations
/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TResult GetResult(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  closeStatus, ::StringW  closeDescription) ;

// Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket_IWebSocketReceiveResultGetter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManagedWebSocket_IWebSocketReceiveResultGetter_1(ManagedWebSocket_IWebSocketReceiveResultGetter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10887};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::WebSockets
// Dependencies System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.ManagedWebSocket/Utf8MessageState
class CORDL_TYPE ManagedWebSocket_Utf8MessageState : public ::System::Object {
public:
// Declarations
/// @brief Field AdditionalBytesExpected, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_AdditionalBytesExpected, put=__cordl_internal_set_AdditionalBytesExpected)) int32_t  AdditionalBytesExpected;

/// @brief Field CurrentDecodeBits, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentDecodeBits, put=__cordl_internal_set_CurrentDecodeBits)) int32_t  CurrentDecodeBits;

/// @brief Field ExpectedValueMin, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExpectedValueMin, put=__cordl_internal_set_ExpectedValueMin)) int32_t  ExpectedValueMin;

/// @brief Field SequenceInProgress, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_SequenceInProgress, put=__cordl_internal_set_SequenceInProgress)) bool  SequenceInProgress;

static inline ::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_AdditionalBytesExpected() const;

constexpr int32_t& __cordl_internal_get_AdditionalBytesExpected() ;

constexpr int32_t const& __cordl_internal_get_CurrentDecodeBits() const;

constexpr int32_t& __cordl_internal_get_CurrentDecodeBits() ;

constexpr int32_t const& __cordl_internal_get_ExpectedValueMin() const;

constexpr int32_t& __cordl_internal_get_ExpectedValueMin() ;

constexpr bool const& __cordl_internal_get_SequenceInProgress() const;

constexpr bool& __cordl_internal_get_SequenceInProgress() ;

constexpr void __cordl_internal_set_AdditionalBytesExpected(int32_t  value) ;

constexpr void __cordl_internal_set_CurrentDecodeBits(int32_t  value) ;

constexpr void __cordl_internal_set_ExpectedValueMin(int32_t  value) ;

constexpr void __cordl_internal_set_SequenceInProgress(bool  value) ;

/// @brief Method .ctor, addr 0xace4e00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket_Utf8MessageState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket_Utf8MessageState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManagedWebSocket_Utf8MessageState(ManagedWebSocket_Utf8MessageState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManagedWebSocket_Utf8MessageState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManagedWebSocket_Utf8MessageState(ManagedWebSocket_Utf8MessageState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10884};

/// @brief Field SequenceInProgress, offset: 0x10, size: 0x1, def value: None
 bool  ___SequenceInProgress;

/// @brief Field AdditionalBytesExpected, offset: 0x14, size: 0x4, def value: None
 int32_t  ___AdditionalBytesExpected;

/// @brief Field ExpectedValueMin, offset: 0x18, size: 0x4, def value: None
 int32_t  ___ExpectedValueMin;

/// @brief Field CurrentDecodeBits, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___CurrentDecodeBits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState, ___SequenceInProgress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState, ___AdditionalBytesExpected) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState, ___ExpectedValueMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState, ___CurrentDecodeBits) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::ManagedWebSocket_Utf8MessageState) == 0x20, "Size mismatch!");

} // namespace end def System::Net::WebSockets
