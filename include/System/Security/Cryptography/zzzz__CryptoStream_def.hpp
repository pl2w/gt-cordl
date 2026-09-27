#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoStream)
namespace GlobalNamespace {
struct CryptoStream__ReadAsyncCore_d__42;
}
namespace GlobalNamespace {
struct CryptoStream__ReadAsyncInternal_d__37;
}
namespace GlobalNamespace {
struct CryptoStream__WriteAsyncCore_d__49;
}
namespace GlobalNamespace {
struct CryptoStream__WriteAsyncInternal_d__46;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
struct CryptoStreamMode;
}
namespace System::Security::Cryptography {
class CryptoStream___c;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
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
template<typename TResult>
class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Security::Cryptography {
class CryptoStream___c;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::CryptoStream*);
MARK_REF_T(::System::Security::Cryptography::CryptoStream___c*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::CryptoStream*, "System.Security.Cryptography", "CryptoStream");
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::CryptoStream___c*, "System.Security.Cryptography", "CryptoStream/<>c");
// Dependencies System.IO.Stream, System.Security.Cryptography.CryptoStreamMode
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.CryptoStream
class CORDL_TYPE CryptoStream : public ::System::IO::Stream {
public:
// Declarations
using _ReadAsyncCore_d__42 = ::GlobalNamespace::CryptoStream__ReadAsyncCore_d__42;

using _ReadAsyncInternal_d__37 = ::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37;

using _WriteAsyncCore_d__49 = ::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49;

using _WriteAsyncInternal_d__46 = ::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46;

using __c = ::System::Security::Cryptography::CryptoStream___c;

 __declspec(property(get=get_AsyncActiveSemaphore)) ::System::Threading::SemaphoreSlim*  AsyncActiveSemaphore;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_HasFlushedFinalBlock)) bool  HasFlushedFinalBlock;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _canRead, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__canRead, put=__cordl_internal_set__canRead)) bool  _canRead;

/// @brief Field _canWrite, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__canWrite, put=__cordl_internal_set__canWrite)) bool  _canWrite;

/// @brief Field _finalBlockTransformed, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get__finalBlockTransformed, put=__cordl_internal_set__finalBlockTransformed)) bool  _finalBlockTransformed;

/// @brief Field _inputBlockSize, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputBlockSize, put=__cordl_internal_set__inputBlockSize)) int32_t  _inputBlockSize;

/// @brief Field _inputBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputBuffer, put=__cordl_internal_set__inputBuffer)) ::ArrayW<uint8_t>  _inputBuffer;

/// @brief Field _inputBufferIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputBufferIndex, put=__cordl_internal_set__inputBufferIndex)) int32_t  _inputBufferIndex;

/// @brief Field _lazyAsyncActiveSemaphore, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__lazyAsyncActiveSemaphore, put=__cordl_internal_set__lazyAsyncActiveSemaphore)) ::System::Threading::SemaphoreSlim*  _lazyAsyncActiveSemaphore;

/// @brief Field _leaveOpen, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__leaveOpen, put=__cordl_internal_set__leaveOpen)) bool  _leaveOpen;

/// @brief Field _outputBlockSize, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__outputBlockSize, put=__cordl_internal_set__outputBlockSize)) int32_t  _outputBlockSize;

/// @brief Field _outputBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputBuffer, put=__cordl_internal_set__outputBuffer)) ::ArrayW<uint8_t>  _outputBuffer;

/// @brief Field _outputBufferIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__outputBufferIndex, put=__cordl_internal_set__outputBufferIndex)) int32_t  _outputBufferIndex;

/// @brief Field _stream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _transform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::System::Security::Cryptography::ICryptoTransform*  _transform;

/// @brief Field _transformMode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__transformMode, put=__cordl_internal_set__transformMode)) ::System::Security::Cryptography::CryptoStreamMode  _transformMode;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BeginRead, addr 0xa15c934, size 0xb4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginWrite, addr 0xa15cfe4, size 0xb4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method CheckReadArguments, addr 0xa15c698, size 0x138, virtual false, abstract: false, final false
inline void CheckReadArguments(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method CheckWriteArguments, addr 0xa15cd80, size 0x138, virtual false, abstract: false, final false
inline void CheckWriteArguments(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Clear, addr 0xa15d250, size 0x10, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0xa15d260, size 0xa4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndRead, addr 0xa15c9e8, size 0x48, virtual true, abstract: false, final false
inline int32_t EndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndWrite, addr 0xa15d098, size 0xc, virtual true, abstract: false, final false
inline void EndWrite(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Flush, addr 0xa15c438, size 0x4, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0xa15c43c, size 0x17c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FlushFinalBlock, addr 0xa15c210, size 0x228, virtual false, abstract: false, final false
inline void FlushFinalBlock() ;

/// @brief Method InitializeBuffer, addr 0xa15bf98, size 0x174, virtual false, abstract: false, final false
inline void InitializeBuffer() ;

static inline ::System::Security::Cryptography::CryptoStream* New_ctor(::System::IO::Stream*  stream, ::System::Security::Cryptography::ICryptoTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode) ;

static inline ::System::Security::Cryptography::CryptoStream* New_ctor(::System::IO::Stream*  stream, ::System::Security::Cryptography::ICryptoTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode, bool  leaveOpen) ;

/// @brief Method Read, addr 0xa15cb00, size 0xc4, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadAsync, addr 0xa15c650, size 0x48, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Security.Cryptography.CryptoStream::<ReadAsyncCore>d__42))]
/// @brief Method ReadAsyncCore, addr 0xa15cbc4, size 0x174, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsyncCore(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken, bool  useAsync) ;

/// [AsyncStateMachine(typeof(System.Security.Cryptography.CryptoStream::<ReadAsyncInternal>d__37))]
/// @brief Method ReadAsyncInternal, addr 0xa15c7d0, size 0x164, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsyncInternal(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadByte, addr 0xa15ca30, size 0x7c, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Seek, addr 0xa15c5b8, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa15c604, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xa15d0a4, size 0x70, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteAsync, addr 0xa15cd38, size 0x48, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Security.Cryptography.CryptoStream::<WriteAsyncCore>d__49))]
/// @brief Method WriteAsyncCore, addr 0xa15d114, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsyncCore(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken, bool  useAsync) ;

/// [AsyncStateMachine(typeof(System.Security.Cryptography.CryptoStream::<WriteAsyncInternal>d__46))]
/// @brief Method WriteAsyncInternal, addr 0xa15ceb8, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsyncInternal(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteByte, addr 0xa15caac, size 0x54, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr bool const& __cordl_internal_get__canRead() const;

constexpr bool& __cordl_internal_get__canRead() ;

constexpr bool const& __cordl_internal_get__canWrite() const;

constexpr bool& __cordl_internal_get__canWrite() ;

constexpr bool const& __cordl_internal_get__finalBlockTransformed() const;

constexpr bool& __cordl_internal_get__finalBlockTransformed() ;

constexpr int32_t const& __cordl_internal_get__inputBlockSize() const;

constexpr int32_t& __cordl_internal_get__inputBlockSize() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__inputBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__inputBuffer() ;

constexpr int32_t const& __cordl_internal_get__inputBufferIndex() const;

constexpr int32_t& __cordl_internal_get__inputBufferIndex() ;

constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__lazyAsyncActiveSemaphore() const;

constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__lazyAsyncActiveSemaphore() ;

constexpr bool const& __cordl_internal_get__leaveOpen() const;

constexpr bool& __cordl_internal_get__leaveOpen() ;

constexpr int32_t const& __cordl_internal_get__outputBlockSize() const;

constexpr int32_t& __cordl_internal_get__outputBlockSize() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__outputBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__outputBuffer() ;

constexpr int32_t const& __cordl_internal_get__outputBufferIndex() const;

constexpr int32_t& __cordl_internal_get__outputBufferIndex() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr ::System::Security::Cryptography::ICryptoTransform* const& __cordl_internal_get__transform() const;

constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get__transform() ;

constexpr ::System::Security::Cryptography::CryptoStreamMode const& __cordl_internal_get__transformMode() const;

constexpr ::System::Security::Cryptography::CryptoStreamMode& __cordl_internal_get__transformMode() ;

constexpr void __cordl_internal_set__canRead(bool  value) ;

constexpr void __cordl_internal_set__canWrite(bool  value) ;

constexpr void __cordl_internal_set__finalBlockTransformed(bool  value) ;

constexpr void __cordl_internal_set__inputBlockSize(int32_t  value) ;

constexpr void __cordl_internal_set__inputBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__inputBufferIndex(int32_t  value) ;

constexpr void __cordl_internal_set__lazyAsyncActiveSemaphore(::System::Threading::SemaphoreSlim*  value) ;

constexpr void __cordl_internal_set__leaveOpen(bool  value) ;

constexpr void __cordl_internal_set__outputBlockSize(int32_t  value) ;

constexpr void __cordl_internal_set__outputBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__outputBufferIndex(int32_t  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__transform(::System::Security::Cryptography::ICryptoTransform*  value) ;

constexpr void __cordl_internal_set__transformMode(::System::Security::Cryptography::CryptoStreamMode  value) ;

/// @brief Method .ctor, addr 0xa15bda4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Security::Cryptography::ICryptoTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode) ;

/// @brief Method .ctor, addr 0xa15bdac, size 0x1ec, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Security::Cryptography::ICryptoTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode, bool  leaveOpen) ;

/// @brief Method get_AsyncActiveSemaphore, addr 0xa15d304, size 0x200, virtual false, abstract: false, final false
inline ::System::Threading::SemaphoreSlim* get_AsyncActiveSemaphore() ;

/// @brief Method get_CanRead, addr 0xa15c10c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa15c114, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa15c11c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_HasFlushedFinalBlock, addr 0xa15c208, size 0x8, virtual false, abstract: false, final false
inline bool get_HasFlushedFinalBlock() ;

/// @brief Method get_Length, addr 0xa15c124, size 0x4c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa15c170, size 0x4c, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Position, addr 0xa15c1bc, size 0x4c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CryptoStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CryptoStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoStream(CryptoStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoStream(CryptoStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6059};

/// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _transform, offset: 0x30, size: 0x8, def value: None
 ::System::Security::Cryptography::ICryptoTransform*  ____transform;

/// @brief Field _transformMode, offset: 0x38, size: 0x4, def value: None
 ::System::Security::Cryptography::CryptoStreamMode  ____transformMode;

/// @brief Field _inputBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____inputBuffer;

/// @brief Field _inputBufferIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ____inputBufferIndex;

/// @brief Field _inputBlockSize, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____inputBlockSize;

/// @brief Field _outputBuffer, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____outputBuffer;

/// @brief Field _outputBufferIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ____outputBufferIndex;

/// @brief Field _outputBlockSize, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____outputBlockSize;

/// @brief Field _canRead, offset: 0x60, size: 0x1, def value: None
 bool  ____canRead;

/// @brief Field _canWrite, offset: 0x61, size: 0x1, def value: None
 bool  ____canWrite;

/// @brief Field _finalBlockTransformed, offset: 0x62, size: 0x1, def value: None
 bool  ____finalBlockTransformed;

/// @brief Field _lazyAsyncActiveSemaphore, offset: 0x68, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim*  ____lazyAsyncActiveSemaphore;

/// @brief Field _leaveOpen, offset: 0x70, size: 0x1, def value: None
 bool  ____leaveOpen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____transform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____transformMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____inputBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____inputBufferIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____inputBlockSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____outputBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____outputBufferIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____outputBlockSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____canRead) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____canWrite) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____finalBlockTransformed) == 0x62, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____lazyAsyncActiveSemaphore) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CryptoStream, ____leaveOpen) == 0x70, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::CryptoStream) == 0x78, "Size mismatch!");

} // namespace end def System::Security::Cryptography
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.CryptoStream/<>c
class CORDL_TYPE CryptoStream___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Security::Cryptography::CryptoStream___c*  __9;

/// @brief Field <>9__54_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_0, put=setStaticF___9__54_0)) ::System::Func_1<::System::Threading::SemaphoreSlim*>*  __9__54_0;

static inline ::System::Security::Cryptography::CryptoStream___c* New_ctor() ;

/// @brief Method .ctor, addr 0xa15ffb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_AsyncActiveSemaphore>b__54_0, addr 0xa15ffb8, size 0x5c, virtual false, abstract: false, final false
inline ::System::Threading::SemaphoreSlim* _get_AsyncActiveSemaphore_b__54_0() ;

static inline ::System::Security::Cryptography::CryptoStream___c* getStaticF___9() ;

static inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* getStaticF___9__54_0() ;

static inline void setStaticF___9(::System::Security::Cryptography::CryptoStream___c*  value) ;

static inline void setStaticF___9__54_0(::System::Func_1<::System::Threading::SemaphoreSlim*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CryptoStream___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CryptoStream___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoStream___c(CryptoStream___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoStream___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoStream___c(CryptoStream___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6058};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::CryptoStream___c) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
