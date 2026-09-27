#pragma once
// IWYU pragma private; include "System/Net/DelegatedStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DelegatedStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class NetworkStream;
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
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class DelegatedStream;
}
// Write type traits
MARK_REF_T(::System::Net::DelegatedStream*);
DEFINE_IL2CPP_CLASS(::System::Net::DelegatedStream*, "System.Net", "DelegatedStream");
// Dependencies System.IO.Stream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DelegatedStream
class CORDL_TYPE DelegatedStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_BaseStream)) ::System::IO::Stream*  BaseStream;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _netStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__netStream, put=__cordl_internal_set__netStream)) ::System::Net::Sockets::NetworkStream*  _netStream;

/// @brief Field _stream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Method BeginRead, addr 0xadafc7c, size 0xcc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginWrite, addr 0xadafd48, size 0xcc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method Close, addr 0xadae138, size 0x20, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method EndRead, addr 0xadafe14, size 0x94, virtual true, abstract: false, final false
inline int32_t EndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndWrite, addr 0xadafea8, size 0x94, virtual true, abstract: false, final false
inline void EndWrite(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Flush, addr 0xadaef08, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0xadaff3c, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Net::DelegatedStream* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method Read, addr 0xadaf0f0, size 0xac, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadAsync, addr 0xadaff5c, size 0xb4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Seek, addr 0xadb0010, size 0x9c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xadb00ac, size 0x94, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xadaef28, size 0xac, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteAsync, addr 0xadb0140, size 0xb4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Net::Sockets::NetworkStream* const& __cordl_internal_get__netStream() const;

constexpr ::System::Net::Sockets::NetworkStream*& __cordl_internal_get__netStream() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr void __cordl_internal_set__netStream(::System::Net::Sockets::NetworkStream*  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xadad638, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method get_BaseStream, addr 0xadafa90, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_BaseStream() ;

/// @brief Method get_CanRead, addr 0xadafa98, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xadafab4, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xadafad0, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xadafaec, size 0x7c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xadafb68, size 0x80, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0xadafbe8, size 0x94, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelegatedStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelegatedStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegatedStream(DelegatedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegatedStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegatedStream(DelegatedStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10407};

/// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _netStream, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Sockets::NetworkStream*  ____netStream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DelegatedStream, ____stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::DelegatedStream, ____netStream) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Net::DelegatedStream) == 0x38, "Size mismatch!");

} // namespace end def System::Net
