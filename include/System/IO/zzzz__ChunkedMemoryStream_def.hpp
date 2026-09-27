#pragma once
// IWYU pragma private; include "System/IO/ChunkedMemoryStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChunkedMemoryStream)
namespace System::IO {
class ChunkedMemoryStream_MemoryChunk;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::IO {
class ChunkedMemoryStream;
}
namespace System::IO {
class ChunkedMemoryStream_MemoryChunk;
}
// Write type traits
MARK_REF_T(::System::IO::ChunkedMemoryStream*);
MARK_REF_T(::System::IO::ChunkedMemoryStream_MemoryChunk*);
DEFINE_IL2CPP_CLASS(::System::IO::ChunkedMemoryStream*, "System.IO", "ChunkedMemoryStream");
DEFINE_IL2CPP_CLASS(::System::IO::ChunkedMemoryStream_MemoryChunk*, "System.IO", "ChunkedMemoryStream/MemoryChunk");
// Dependencies System.IO.Stream
namespace System::IO {
// Is value type: false
// CS Name: System.IO.ChunkedMemoryStream
class CORDL_TYPE ChunkedMemoryStream : public ::System::IO::Stream {
public:
// Declarations
using MemoryChunk = ::System::IO::ChunkedMemoryStream_MemoryChunk;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _currentChunk, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentChunk, put=__cordl_internal_set__currentChunk)) ::System::IO::ChunkedMemoryStream_MemoryChunk*  _currentChunk;

/// @brief Field _headChunk, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__headChunk, put=__cordl_internal_set__headChunk)) ::System::IO::ChunkedMemoryStream_MemoryChunk*  _headChunk;

/// @brief Field _totalLength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalLength, put=__cordl_internal_set__totalLength)) int32_t  _totalLength;

/// @brief Method AppendChunk, addr 0xada3b94, size 0x104, virtual false, abstract: false, final false
inline void AppendChunk(int64_t  count) ;

/// @brief Method Flush, addr 0xada3e4c, size 0x4, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0xada3e50, size 0x88, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::IO::ChunkedMemoryStream* New_ctor() ;

/// @brief Method Read, addr 0xada3f48, size 0x38, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xada3f80, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xada3fb8, size 0x44, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ToArray, addr 0xada39f0, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToArray() ;

/// @brief Method Write, addr 0xada3a7c, size 0x118, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteAsync, addr 0xada3c98, size 0x124, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk* const& __cordl_internal_get__currentChunk() const;

constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk*& __cordl_internal_get__currentChunk() ;

constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk* const& __cordl_internal_get__headChunk() const;

constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk*& __cordl_internal_get__headChunk() ;

constexpr int32_t const& __cordl_internal_get__totalLength() const;

constexpr int32_t& __cordl_internal_get__totalLength() ;

constexpr void __cordl_internal_set__currentChunk(::System::IO::ChunkedMemoryStream_MemoryChunk*  value) ;

constexpr void __cordl_internal_set__headChunk(::System::IO::ChunkedMemoryStream_MemoryChunk*  value) ;

constexpr void __cordl_internal_set__totalLength(int32_t  value) ;

/// @brief Method .ctor, addr 0xada3998, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanRead, addr 0xada3e2c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xada3e34, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xada3e3c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xada3e44, size 0x8, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xada3ed8, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0xada3f10, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkedMemoryStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkedMemoryStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkedMemoryStream(ChunkedMemoryStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkedMemoryStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkedMemoryStream(ChunkedMemoryStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10370};

/// @brief Field _headChunk, offset: 0x28, size: 0x8, def value: None
 ::System::IO::ChunkedMemoryStream_MemoryChunk*  ____headChunk;

/// @brief Field _currentChunk, offset: 0x30, size: 0x8, def value: None
 ::System::IO::ChunkedMemoryStream_MemoryChunk*  ____currentChunk;

/// @brief Field _totalLength, offset: 0x38, size: 0x4, def value: None
 int32_t  ____totalLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::ChunkedMemoryStream, ____headChunk) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::ChunkedMemoryStream, ____currentChunk) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::ChunkedMemoryStream, ____totalLength) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::IO::ChunkedMemoryStream) == 0x40, "Size mismatch!");

} // namespace end def System::IO
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.ChunkedMemoryStream/MemoryChunk
class CORDL_TYPE ChunkedMemoryStream_MemoryChunk : public ::System::Object {
public:
// Declarations
/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t>  _buffer;

/// @brief Field _freeOffset, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__freeOffset, put=__cordl_internal_set__freeOffset)) int32_t  _freeOffset;

/// @brief Field _next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__next, put=__cordl_internal_set__next)) ::System::IO::ChunkedMemoryStream_MemoryChunk*  _next;

static inline ::System::IO::ChunkedMemoryStream_MemoryChunk* New_ctor(int32_t  bufferSize) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__freeOffset() const;

constexpr int32_t& __cordl_internal_get__freeOffset() ;

constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk* const& __cordl_internal_get__next() const;

constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk*& __cordl_internal_get__next() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__freeOffset(int32_t  value) ;

constexpr void __cordl_internal_set__next(::System::IO::ChunkedMemoryStream_MemoryChunk*  value) ;

/// @brief Method .ctor, addr 0xada3dbc, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  bufferSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkedMemoryStream_MemoryChunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkedMemoryStream_MemoryChunk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkedMemoryStream_MemoryChunk(ChunkedMemoryStream_MemoryChunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkedMemoryStream_MemoryChunk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkedMemoryStream_MemoryChunk(ChunkedMemoryStream_MemoryChunk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10369};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buffer;

/// @brief Field _freeOffset, offset: 0x18, size: 0x4, def value: None
 int32_t  ____freeOffset;

/// @brief Field _next, offset: 0x20, size: 0x8, def value: None
 ::System::IO::ChunkedMemoryStream_MemoryChunk*  ____next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::ChunkedMemoryStream_MemoryChunk, ____buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::ChunkedMemoryStream_MemoryChunk, ____freeOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::ChunkedMemoryStream_MemoryChunk, ____next) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::IO::ChunkedMemoryStream_MemoryChunk) == 0x28, "Size mismatch!");

} // namespace end def System::IO
