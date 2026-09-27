#pragma once
// IWYU pragma private; include "Modio/Unity/StreamingDownloadHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerScript_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamingDownloadHandler)
namespace GlobalNamespace {
struct AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty;
}
namespace GlobalNamespace {
struct ChunkedStreamBuffer_StreamingDownloadHandler__ReadAsync_d__6;
}
namespace GlobalNamespace {
struct StreamingDownloadHandler__ResponseReceived_d__11;
}
namespace Modio::Unity {
class ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent;
}
namespace Modio::Unity {
class ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk;
}
namespace Modio::Unity {
class StreamingDownloadHandler_ChunkedStreamBuffer;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Modio::Unity {
class ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent;
}
namespace Modio::Unity {
class ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk;
}
namespace Modio::Unity {
class StreamingDownloadHandler;
}
namespace Modio::Unity {
class StreamingDownloadHandler_ChunkedStreamBuffer;
}
// Write type traits
MARK_REF_T(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*);
MARK_REF_T(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*);
MARK_REF_T(::Modio::Unity::StreamingDownloadHandler*);
MARK_REF_T(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*, "Modio.Unity", "StreamingDownloadHandler/ChunkedStreamBuffer/AsyncAutoResetEvent");
DEFINE_IL2CPP_CLASS(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*, "Modio.Unity", "StreamingDownloadHandler/ChunkedStreamBuffer/BufferChunk");
DEFINE_IL2CPP_CLASS(::Modio::Unity::StreamingDownloadHandler*, "Modio.Unity", "StreamingDownloadHandler");
DEFINE_IL2CPP_CLASS(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*, "Modio.Unity", "StreamingDownloadHandler/ChunkedStreamBuffer");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Threading.CancellationToken, UnityEngine.Networking.DownloadHandlerScript
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.StreamingDownloadHandler
class CORDL_TYPE StreamingDownloadHandler : public ::UnityEngine::Networking::DownloadHandlerScript {
public:
// Declarations
using _ResponseReceived_d__11 = ::GlobalNamespace::StreamingDownloadHandler__ResponseReceived_d__11;

using ChunkedStreamBuffer = ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer;

/// @brief Field _callingRequest, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__callingRequest, put=__cordl_internal_set__callingRequest)) ::UnityEngine::Networking::UnityWebRequest*  _callingRequest;

/// @brief Field _cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellationToken, put=__cordl_internal_set__cancellationToken)) ::System::Threading::CancellationToken  _cancellationToken;

/// @brief Field _cancellationTokenSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellationTokenSource, put=__cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _hasReceivedHeaders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hasReceivedHeaders, put=__cordl_internal_set__hasReceivedHeaders)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _hasReceivedHeaders;

/// @brief Field _streamBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamBuffer, put=__cordl_internal_set__streamBuffer)) ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*  _streamBuffer;

/// @brief Method CompleteContent, addr 0x9f95c20, size 0x24, virtual true, abstract: false, final false
inline void CompleteContent() ;

/// @brief Method Dispose, addr 0x9f95ae0, size 0x2c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetStream, addr 0x9f95ad8, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetStream() ;

static inline ::Modio::Unity::StreamingDownloadHandler* New_ctor(::ArrayW<uint8_t>  buffer, ::System::Nullable_1<::System::Threading::CancellationToken>  token) ;

static inline ::Modio::Unity::StreamingDownloadHandler* New_ctor(int32_t  bufferSize, ::System::Nullable_1<::System::Threading::CancellationToken>  token) ;

/// @brief Method ReceiveData, addr 0x9f95b0c, size 0x114, virtual true, abstract: false, final false
inline bool ReceiveData(::ArrayW<uint8_t>  dataReceived, int32_t  dataLength) ;

/// [AsyncStateMachine(typeof(Modio.Unity.StreamingDownloadHandler::<ResponseReceived>d__11))]
/// @brief Method ResponseReceived, addr 0x9f94360, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ResponseReceived() ;

/// @brief Method SetCallingRequest, addr 0x9f95ad0, size 0x8, virtual false, abstract: false, final false
inline void SetCallingRequest(::UnityEngine::Networking::UnityWebRequest*  request) ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__callingRequest() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__callingRequest() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get__cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get__cancellationToken() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__hasReceivedHeaders() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__hasReceivedHeaders() ;

constexpr ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer* const& __cordl_internal_get__streamBuffer() const;

constexpr ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*& __cordl_internal_get__streamBuffer() ;

constexpr void __cordl_internal_set__callingRequest(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__hasReceivedHeaders(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__streamBuffer(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*  value) ;

/// @brief Method .ctor, addr 0x9f95844, size 0x184, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  buffer, ::System::Nullable_1<::System::Threading::CancellationToken>  token) ;

/// @brief Method .ctor, addr 0x9f942e8, size 0x78, virtual false, abstract: false, final false
inline void _ctor(int32_t  bufferSize, ::System::Nullable_1<::System::Threading::CancellationToken>  token) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamingDownloadHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamingDownloadHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamingDownloadHandler(StreamingDownloadHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamingDownloadHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamingDownloadHandler(StreamingDownloadHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32074};

/// @brief Field _streamBuffer, offset: 0x18, size: 0x8, def value: None
 ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*  ____streamBuffer;

/// @brief Field _cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ____cancellationToken;

/// [Nullable(2)]
/// @brief Field _cancellationTokenSource, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cancellationTokenSource;

/// @brief Field _hasReceivedHeaders, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____hasReceivedHeaders;

/// [Nullable(2)]
/// @brief Field _callingRequest, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____callingRequest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler, ____streamBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler, ____cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler, ____cancellationTokenSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler, ____hasReceivedHeaders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler, ____callingRequest) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::StreamingDownloadHandler) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity
// [Nullable(0)]
// Dependencies System.IO.Stream, System.Threading.CancellationToken
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.StreamingDownloadHandler/ChunkedStreamBuffer
class CORDL_TYPE StreamingDownloadHandler_ChunkedStreamBuffer : public ::System::IO::Stream {
public:
// Declarations
using _ReadAsync_d__6 = ::GlobalNamespace::ChunkedStreamBuffer_StreamingDownloadHandler__ReadAsync_d__6;

using AsyncAutoResetEvent = ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent;

using BufferChunk = ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_IsDone, put=set_IsDone)) bool  IsDone;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field <IsDone>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDone_k__BackingField, put=__cordl_internal_set__IsDone_k__BackingField)) bool  _IsDone_k__BackingField;

/// @brief Field <Position>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Position_k__BackingField, put=__cordl_internal_set__Position_k__BackingField)) int64_t  _Position_k__BackingField;

/// @brief Field _dataQueue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataQueue, put=__cordl_internal_set__dataQueue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>*  _dataQueue;

/// @brief Field _shutdownToken, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__shutdownToken, put=__cordl_internal_set__shutdownToken)) ::System::Threading::CancellationToken  _shutdownToken;

/// @brief Field _signal, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__signal, put=__cordl_internal_set__signal)) ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*  _signal;

/// @brief Method Complete, addr 0x9f95c44, size 0x20, virtual false, abstract: false, final false
inline void Complete() ;

/// @brief Method Flush, addr 0x9f95cec, size 0xa0, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer* New_ctor(::System::Threading::CancellationToken  shutdownToken) ;

/// @brief Method Read, addr 0x9f95dec, size 0x228, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// [AsyncStateMachine(typeof(Modio.Unity.StreamingDownloadHandler::ChunkedStreamBuffer::<ReadAsync>d__6))]
/// @brief Method ReadAsync, addr 0x9f96014, size 0x154, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Seek, addr 0x9f96168, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x9f961a0, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0x9f961d8, size 0x190, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr bool const& __cordl_internal_get__IsDone_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDone_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__Position_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Position_k__BackingField() ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>* const& __cordl_internal_get__dataQueue() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>*& __cordl_internal_get__dataQueue() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get__shutdownToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get__shutdownToken() ;

constexpr ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent* const& __cordl_internal_get__signal() const;

constexpr ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*& __cordl_internal_get__signal() ;

constexpr void __cordl_internal_set__IsDone_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Position_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__dataQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>*  value) ;

constexpr void __cordl_internal_set__shutdownToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set__signal(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*  value) ;

/// @brief Method .ctor, addr 0x9f959c8, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  shutdownToken) ;

/// @brief Method get_CanRead, addr 0x9f96510, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9f96518, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x9f96520, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_IsDone, addr 0x9f96540, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDone() ;

/// @brief Method get_Length, addr 0x9f96528, size 0x8, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// [CompilerGenerated]
/// @brief Method get_Position, addr 0x9f96530, size 0x8, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_IsDone, addr 0x9f96548, size 0x8, virtual false, abstract: false, final false
inline void set_IsDone(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Position, addr 0x9f96538, size 0x8, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamingDownloadHandler_ChunkedStreamBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamingDownloadHandler_ChunkedStreamBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamingDownloadHandler_ChunkedStreamBuffer(StreamingDownloadHandler_ChunkedStreamBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamingDownloadHandler_ChunkedStreamBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamingDownloadHandler_ChunkedStreamBuffer(StreamingDownloadHandler_ChunkedStreamBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32072};

/// @brief Field _dataQueue, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>*  ____dataQueue;

/// @brief Field _shutdownToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ____shutdownToken;

/// @brief Field _signal, offset: 0x38, size: 0x8, def value: None
 ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*  ____signal;

/// [CompilerGenerated]
/// @brief Field <Position>k__BackingField, offset: 0x40, size: 0x8, def value: None
 int64_t  ____Position_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDone>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____IsDone_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer, ____dataQueue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer, ____shutdownToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer, ____signal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer, ____Position_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer, ____IsDone_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer) == 0x50, "Size mismatch!");

} // namespace end def Modio::Unity
// [NullableContext(0)]
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.StreamingDownloadHandler/ChunkedStreamBuffer/AsyncAutoResetEvent
class CORDL_TYPE ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent : public ::System::Object {
public:
// Declarations
using Empty = ::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty;

/// @brief Field _signalWaiters, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__signalWaiters, put=__cordl_internal_set__signalWaiters)) ::System::Collections::Generic::Queue_1<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty>*>*  _signalWaiters;

/// @brief Field _signaled, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__signaled, put=__cordl_internal_set__signaled)) bool  _signaled;

static inline ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent* New_ctor() ;

/// @brief Method Set, addr 0x9f963a4, size 0x16c, virtual false, abstract: false, final false
inline void Set() ;

/// [NullableContext(1)]
/// @brief Method WaitAsync, addr 0x9f96598, size 0x2a0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitAsync(::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Collections::Generic::Queue_1<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty>*>* const& __cordl_internal_get__signalWaiters() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty>*>*& __cordl_internal_get__signalWaiters() ;

constexpr bool const& __cordl_internal_get__signaled() const;

constexpr bool& __cordl_internal_get__signaled() ;

constexpr void __cordl_internal_set__signalWaiters(::System::Collections::Generic::Queue_1<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty>*>*  value) ;

constexpr void __cordl_internal_set__signaled(bool  value) ;

/// @brief Method .ctor, addr 0x9f95c64, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent(ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent(ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32070};

/// [Nullable(1)]
/// @brief Field _signalWaiters, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty>*>*  ____signalWaiters;

/// @brief Field _signaled, offset: 0x18, size: 0x1, def value: None
 bool  ____signaled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent, ____signalWaiters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent, ____signaled) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity
// [NullableContext(0)]
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.StreamingDownloadHandler/ChunkedStreamBuffer/BufferChunk
class CORDL_TYPE ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Data)) ::Unity::Collections::NativeArray_1<uint8_t>  Data;

 __declspec(property(get=get_HasData)) bool  HasData;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Offset, put=set_Offset)) int32_t  Offset;

 __declspec(property(get=get_RemainingLength)) int32_t  RemainingLength;

/// @brief Field <Data>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::Unity::Collections::NativeArray_1<uint8_t>  _Data_k__BackingField;

/// @brief Field <Offset>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Offset_k__BackingField, put=__cordl_internal_set__Offset_k__BackingField)) int32_t  _Offset_k__BackingField;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9f95d8c, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk* New_ctor(::Unity::Collections::NativeArray_1<uint8_t>  data, int32_t  offset) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get__Data_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Offset_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Offset_k__BackingField() ;

constexpr void __cordl_internal_set__Data_k__BackingField(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set__Offset_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x9f96368, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t>  data, int32_t  offset) ;

/// [CompilerGenerated]
/// @brief Method get_Data, addr 0x9f96550, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint8_t> get_Data() ;

/// @brief Method get_HasData, addr 0x9f96574, size 0x14, virtual false, abstract: false, final false
inline bool get_HasData() ;

/// @brief Method get_Length, addr 0x9f9656c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// [CompilerGenerated]
/// @brief Method get_Offset, addr 0x9f9655c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Offset() ;

/// @brief Method get_RemainingLength, addr 0x9f96588, size 0x10, virtual false, abstract: false, final false
inline int32_t get_RemainingLength() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Offset, addr 0x9f96564, size 0x8, virtual false, abstract: false, final false
inline void set_Offset(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk(ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk(ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32068};

/// [CompilerGenerated]
/// @brief Field <Data>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ____Data_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Offset>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Offset_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk, ____Data_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk, ____Offset_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity
