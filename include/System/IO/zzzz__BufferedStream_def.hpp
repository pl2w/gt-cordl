#pragma once
// IWYU pragma private; include "System/IO/BufferedStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedStream)
namespace GlobalNamespace {
struct BufferedStream__CopyToAsyncCore_d__71;
}
namespace GlobalNamespace {
struct BufferedStream__DisposeAsync_d__34;
}
namespace GlobalNamespace {
struct BufferedStream__FlushAsyncInternal_d__38;
}
namespace GlobalNamespace {
struct BufferedStream__FlushWriteAsync_d__42;
}
namespace GlobalNamespace {
struct BufferedStream__ReadFromUnderlyingStreamAsync_d__51;
}
namespace GlobalNamespace {
struct BufferedStream__WriteToUnderlyingStreamAsync_d__63;
}
namespace System::IO {
class BufferedStream___c;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
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
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
template<typename T>
struct Memory_1;
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
// Forward declare root types
namespace System::IO {
class BufferedStream;
}
namespace System::IO {
class BufferedStream___c;
}
// Write type traits
MARK_REF_T(::System::IO::BufferedStream*);
MARK_REF_T(::System::IO::BufferedStream___c*);
DEFINE_IL2CPP_CLASS(::System::IO::BufferedStream*, "System.IO", "BufferedStream");
DEFINE_IL2CPP_CLASS(::System::IO::BufferedStream___c*, "System.IO", "BufferedStream/<>c");
// Dependencies System.IO.Stream
namespace System::IO {
// Is value type: false
// CS Name: System.IO.BufferedStream
class CORDL_TYPE BufferedStream : public ::System::IO::Stream {
public:
// Declarations
using _CopyToAsyncCore_d__71 = ::GlobalNamespace::BufferedStream__CopyToAsyncCore_d__71;

using _DisposeAsync_d__34 = ::GlobalNamespace::BufferedStream__DisposeAsync_d__34;

using _FlushAsyncInternal_d__38 = ::GlobalNamespace::BufferedStream__FlushAsyncInternal_d__38;

using _FlushWriteAsync_d__42 = ::GlobalNamespace::BufferedStream__FlushWriteAsync_d__42;

using _ReadFromUnderlyingStreamAsync_d__51 = ::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51;

using _WriteToUnderlyingStreamAsync_d__63 = ::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63;

using __c = ::System::IO::BufferedStream___c;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _asyncActiveSemaphore, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncActiveSemaphore, put=__cordl_internal_set__asyncActiveSemaphore)) ::System::Threading::SemaphoreSlim*  _asyncActiveSemaphore;

/// @brief Field _buffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t>  _buffer;

/// @brief Field _bufferSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize, put=__cordl_internal_set__bufferSize)) int32_t  _bufferSize;

/// @brief Field _lastSyncCompletedReadTask, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSyncCompletedReadTask, put=__cordl_internal_set__lastSyncCompletedReadTask)) ::System::Threading::Tasks::Task_1<int32_t>*  _lastSyncCompletedReadTask;

/// @brief Field _readLen, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__readLen, put=__cordl_internal_set__readLen)) int32_t  _readLen;

/// @brief Field _readPos, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__readPos, put=__cordl_internal_set__readPos)) int32_t  _readPos;

/// @brief Field _stream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _writePos, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__writePos, put=__cordl_internal_set__writePos)) int32_t  _writePos;

/// @brief Method BeginRead, addr 0xa29e13c, size 0xb4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginWrite, addr 0xa29f0ec, size 0xb4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method ClearReadBufferBeforeWrite, addr 0xa29d00c, size 0x90, virtual false, abstract: false, final false
inline void ClearReadBufferBeforeWrite() ;

/// @brief Method CopyTo, addr 0xa29f41c, size 0x8c, virtual true, abstract: false, final false
inline void CopyTo(::System::IO::Stream*  destination, int32_t  bufferSize) ;

/// @brief Method CopyToAsync, addr 0xa29f4a8, size 0xec, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream*  destination, int32_t  bufferSize, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.IO.BufferedStream::<CopyToAsyncCore>d__71))]
/// @brief Method CopyToAsyncCore, addr 0xa29f594, size 0x3dc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CopyToAsyncCore(::System::IO::Stream*  destination, int32_t  bufferSize, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Dispose, addr 0xa29cbe0, size 0x160, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// [AsyncStateMachine(typeof(System.IO.BufferedStream::<DisposeAsync>d__34))]
/// @brief Method DisposeAsync, addr 0xa29cae8, size 0xf8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask DisposeAsync() ;

/// @brief Method EndRead, addr 0xa29e1f0, size 0x48, virtual true, abstract: false, final false
inline int32_t EndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndWrite, addr 0xa29f1a0, size 0xc, virtual true, abstract: false, final false
inline void EndWrite(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EnsureBufferAllocated, addr 0xa29c898, size 0x70, virtual false, abstract: false, final false
inline void EnsureBufferAllocated() ;

/// @brief Method EnsureCanRead, addr 0xa29c6cc, size 0x70, virtual false, abstract: false, final false
inline void EnsureCanRead() ;

/// @brief Method EnsureCanSeek, addr 0xa29c65c, size 0x70, virtual false, abstract: false, final false
inline void EnsureCanSeek() ;

/// @brief Method EnsureCanWrite, addr 0xa29c73c, size 0x70, virtual false, abstract: false, final false
inline void EnsureCanWrite() ;

/// @brief Method EnsureNotClosed, addr 0xa29c600, size 0x5c, virtual false, abstract: false, final false
inline void EnsureNotClosed() ;

/// @brief Method EnsureShadowBufferAllocated, addr 0xa29c7ac, size 0xec, virtual false, abstract: false, final false
inline void EnsureShadowBufferAllocated() ;

/// @brief Method Flush, addr 0xa29cd40, size 0xc4, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0xa29ce48, size 0xcc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.IO.BufferedStream::<FlushAsyncInternal>d__38))]
/// @brief Method FlushAsyncInternal, addr 0xa29cf14, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsyncInternal(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FlushRead, addr 0xa29ce04, size 0x44, virtual false, abstract: false, final false
inline void FlushRead() ;

/// @brief Method FlushWrite, addr 0xa29c98c, size 0x50, virtual false, abstract: false, final false
inline void FlushWrite() ;

/// [AsyncStateMachine(typeof(System.IO.BufferedStream::<FlushWriteAsync>d__42))]
/// @brief Method FlushWriteAsync, addr 0xa29d09c, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushWriteAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method LastSyncCompletedReadTask, addr 0xa29d788, size 0xbc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* LastSyncCompletedReadTask(int32_t  val) ;

/// @brief Method LazyEnsureAsyncActiveSemaphoreInitialized, addr 0xa29c31c, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::SemaphoreSlim* LazyEnsureAsyncActiveSemaphoreInitialized() ;

static inline ::System::IO::BufferedStream* New_ctor(::System::IO::Stream*  stream) ;

static inline ::System::IO::BufferedStream* New_ctor(::System::IO::Stream*  stream, int32_t  bufferSize) ;

/// @brief Method Read, addr 0xa29d40c, size 0x218, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method Read, addr 0xa29d624, size 0x164, virtual true, abstract: false, final false
inline int32_t Read(::System::Span_1<uint8_t>  destination) ;

/// @brief Method ReadAsync, addr 0xa29d844, size 0x408, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAsync, addr 0xa29dddc, size 0x360, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadByte, addr 0xa29e238, size 0x50, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method ReadByteSlow, addr 0xa29e288, size 0x90, virtual false, abstract: false, final false
inline int32_t ReadByteSlow() ;

/// @brief Method ReadFromBuffer, addr 0xa29d194, size 0x64, virtual false, abstract: false, final false
inline int32_t ReadFromBuffer(::ArrayW<uint8_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadFromBuffer, addr 0xa29d32c, size 0xe0, virtual false, abstract: false, final false
inline int32_t ReadFromBuffer(::ArrayW<uint8_t>  array, int32_t  offset, int32_t  count, ::by_ref<::System::Exception*>  error) ;

/// @brief Method ReadFromBuffer, addr 0xa29d1f8, size 0x134, virtual false, abstract: false, final false
inline int32_t ReadFromBuffer(::System::Span_1<uint8_t>  destination) ;

/// [AsyncStateMachine(typeof(System.IO.BufferedStream::<ReadFromUnderlyingStreamAsync>d__51))]
/// @brief Method ReadFromUnderlyingStreamAsync, addr 0xa29dc4c, size 0x190, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadFromUnderlyingStreamAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken, int32_t  bytesAlreadySatisfied, ::System::Threading::Tasks::Task*  semaphoreLockTask) ;

/// @brief Method Seek, addr 0xa29f238, size 0x124, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa29f35c, size 0xc0, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xa29e568, size 0x310, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method Write, addr 0xa29e878, size 0x2ac, virtual true, abstract: false, final false
inline void Write(::System::ReadOnlySpan_1<uint8_t>  buffer) ;

/// @brief Method WriteAsync, addr 0xa29eb24, size 0x1f4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteAsync, addr 0xa29ed18, size 0x298, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteByte, addr 0xa29f1ac, size 0x8c, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

/// @brief Method WriteToBuffer, addr 0xa29e3f4, size 0x174, virtual false, abstract: false, final false
inline int32_t WriteToBuffer(::System::ReadOnlySpan_1<uint8_t>  buffer) ;

/// @brief Method WriteToBuffer, addr 0xa29e318, size 0xdc, virtual false, abstract: false, final false
inline void WriteToBuffer(::ArrayW<uint8_t>  array, ::by_ref<int32_t>  offset, ::by_ref<int32_t>  count) ;

/// [AsyncStateMachine(typeof(System.IO.BufferedStream::<WriteToUnderlyingStreamAsync>d__63))]
/// @brief Method WriteToUnderlyingStreamAsync, addr 0xa29efb0, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteToUnderlyingStreamAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::Task*  semaphoreLockTask) ;

constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__asyncActiveSemaphore() const;

constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__asyncActiveSemaphore() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__bufferSize() const;

constexpr int32_t& __cordl_internal_get__bufferSize() ;

constexpr ::System::Threading::Tasks::Task_1<int32_t>* const& __cordl_internal_get__lastSyncCompletedReadTask() const;

constexpr ::System::Threading::Tasks::Task_1<int32_t>*& __cordl_internal_get__lastSyncCompletedReadTask() ;

constexpr int32_t const& __cordl_internal_get__readLen() const;

constexpr int32_t& __cordl_internal_get__readLen() ;

constexpr int32_t const& __cordl_internal_get__readPos() const;

constexpr int32_t& __cordl_internal_get__readPos() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr int32_t const& __cordl_internal_get__writePos() const;

constexpr int32_t& __cordl_internal_get__writePos() ;

constexpr void __cordl_internal_set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim*  value) ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__lastSyncCompletedReadTask(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__readLen(int32_t  value) ;

constexpr void __cordl_internal_set__readPos(int32_t  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__writePos(int32_t  value) ;

/// @brief Method .ctor, addr 0xa29c414, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0xa29c41c, size 0x1e4, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, int32_t  bufferSize) ;

/// @brief Method get_CanRead, addr 0xa29c908, size 0x18, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa29c938, size 0x18, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa29c920, size 0x18, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xa29c950, size 0x3c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa29c9dc, size 0x4c, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0xa29ca28, size 0xc0, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferedStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferedStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedStream(BufferedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedStream(BufferedStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7042};

/// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _buffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buffer;

/// @brief Field _bufferSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ____bufferSize;

/// @brief Field _readPos, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____readPos;

/// @brief Field _readLen, offset: 0x40, size: 0x4, def value: None
 int32_t  ____readLen;

/// @brief Field _writePos, offset: 0x44, size: 0x4, def value: None
 int32_t  ____writePos;

/// @brief Field _lastSyncCompletedReadTask, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<int32_t>*  ____lastSyncCompletedReadTask;

/// @brief Field _asyncActiveSemaphore, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim*  ____asyncActiveSemaphore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::BufferedStream, ____stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____bufferSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____readPos) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____readLen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____writePos) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____lastSyncCompletedReadTask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::BufferedStream, ____asyncActiveSemaphore) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::IO::BufferedStream) == 0x58, "Size mismatch!");

} // namespace end def System::IO
// [CompilerGenerated]
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.BufferedStream/<>c
class CORDL_TYPE BufferedStream___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::IO::BufferedStream___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Func_1<::System::Threading::SemaphoreSlim*>*  __9__10_0;

static inline ::System::IO::BufferedStream___c* New_ctor() ;

/// @brief Method <LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0, addr 0xa29f9e0, size 0x5c, virtual false, abstract: false, final false
inline ::System::Threading::SemaphoreSlim* _LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0() ;

/// @brief Method .ctor, addr 0xa29f9d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IO::BufferedStream___c* getStaticF___9() ;

static inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* getStaticF___9__10_0() ;

static inline void setStaticF___9(::System::IO::BufferedStream___c*  value) ;

static inline void setStaticF___9__10_0(::System::Func_1<::System::Threading::SemaphoreSlim*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferedStream___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferedStream___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedStream___c(BufferedStream___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedStream___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedStream___c(BufferedStream___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7035};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::BufferedStream___c) == 0x10, "Size mismatch!");

} // namespace end def System::IO
