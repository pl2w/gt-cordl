#pragma once
// IWYU pragma private; include "System/Net/Http/DelegatingStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DelegatingStream)
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
namespace System {
class AsyncCallback;
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
namespace System::Net::Http {
class DelegatingStream;
}
// Write type traits
MARK_REF_T(::System::Net::Http::DelegatingStream*);
DEFINE_IL2CPP_CLASS(::System::Net::Http::DelegatingStream*, "System.Net.Http", "DelegatingStream");
// Dependencies System.IO.Stream
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.DelegatingStream
class CORDL_TYPE DelegatingStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanTimeout)) bool  CanTimeout;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) int32_t  ReadTimeout;

 __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) int32_t  WriteTimeout;

/// @brief Field _innerStream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerStream, put=__cordl_internal_set__innerStream)) ::System::IO::Stream*  _innerStream;

/// @brief Method BeginRead, addr 0xace4790, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginWrite, addr 0xace48d0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method CopyToAsync, addr 0xace4910, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream*  destination, int32_t  bufferSize, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Dispose, addr 0xace4690, size 0x40, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndRead, addr 0xace47b0, size 0x20, virtual true, abstract: false, final false
inline int32_t EndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndWrite, addr 0xace48f0, size 0x20, virtual true, abstract: false, final false
inline void EndWrite(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Flush, addr 0xace47d0, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0xace47f0, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Net::Http::DelegatingStream* New_ctor(::System::IO::Stream*  innerStream) ;

/// @brief Method Read, addr 0xace46f0, size 0x20, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Read, addr 0xace4710, size 0x20, virtual true, abstract: false, final false
inline int32_t Read(::System::Span_1<uint8_t>  buffer) ;

/// @brief Method ReadAsync, addr 0xace4750, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAsync, addr 0xace4770, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadByte, addr 0xace4730, size 0x20, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Seek, addr 0xace46d0, size 0x20, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xace4810, size 0x20, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xace4830, size 0x20, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Write, addr 0xace4850, size 0x20, virtual true, abstract: false, final false
inline void Write(::System::ReadOnlySpan_1<uint8_t>  buffer) ;

/// @brief Method WriteAsync, addr 0xace4890, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteAsync, addr 0xace48b0, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteByte, addr 0xace4870, size 0x20, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__innerStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__innerStream() ;

constexpr void __cordl_internal_set__innerStream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xace461c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  innerStream) ;

/// @brief Method get_CanRead, addr 0xace44d0, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xace44ec, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanTimeout, addr 0xace45c0, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanTimeout() ;

/// @brief Method get_CanWrite, addr 0xace4508, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xace4524, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xace4540, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get_ReadTimeout, addr 0xace4580, size 0x20, virtual true, abstract: false, final false
inline int32_t get_ReadTimeout() ;

/// @brief Method get_WriteTimeout, addr 0xace45dc, size 0x20, virtual true, abstract: false, final false
inline int32_t get_WriteTimeout() ;

/// @brief Method set_Position, addr 0xace4560, size 0x20, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

/// @brief Method set_ReadTimeout, addr 0xace45a0, size 0x20, virtual true, abstract: false, final false
inline void set_ReadTimeout(int32_t  value) ;

/// @brief Method set_WriteTimeout, addr 0xace45fc, size 0x20, virtual true, abstract: false, final false
inline void set_WriteTimeout(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelegatingStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelegatingStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegatingStream(DelegatingStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegatingStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegatingStream(DelegatingStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10883};

/// @brief Field _innerStream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____innerStream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::DelegatingStream, ____innerStream) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::Http::DelegatingStream) == 0x30, "Size mismatch!");

} // namespace end def System::Net::Http
