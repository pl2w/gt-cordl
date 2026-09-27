#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/DeflateStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeflateStream)
namespace Pathfinding::Ionic::Zlib {
struct CompressionLevel;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionMode;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionStrategy;
}
namespace Pathfinding::Ionic::Zlib {
class ZlibBaseStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class DeflateStream;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::DeflateStream*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::DeflateStream*, "Pathfinding.Ionic.Zlib", "DeflateStream");
// Dependencies System.IO.Stream
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.DeflateStream
class CORDL_TYPE DeflateStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(put=set_BufferSize)) int32_t  BufferSize;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(put=set_Strategy)) ::Pathfinding::Ionic::Zlib::CompressionStrategy  Strategy;

/// @brief Field _baseStream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseStream, put=__cordl_internal_set__baseStream)) ::Pathfinding::Ionic::Zlib::ZlibBaseStream*  _baseStream;

/// @brief Field _disposed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _innerStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerStream, put=__cordl_internal_set__innerStream)) ::System::IO::Stream*  _innerStream;

/// @brief Method Dispose, addr 0xa6a56c4, size 0xc0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0xa6a587c, size 0x74, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Pathfinding::Ionic::Zlib::DeflateStream* New_ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen) ;

static inline ::Pathfinding::Ionic::Zlib::DeflateStream* New_ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionMode  mode, ::Pathfinding::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen) ;

/// @brief Method Read, addr 0xa6a59b0, size 0x74, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa6a5a24, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa6a5a5c, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xa6a5a94, size 0x74, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::Pathfinding::Ionic::Zlib::ZlibBaseStream* const& __cordl_internal_get__baseStream() const;

constexpr ::Pathfinding::Ionic::Zlib::ZlibBaseStream*& __cordl_internal_get__baseStream() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__innerStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__innerStream() ;

constexpr void __cordl_internal_set__baseStream(::Pathfinding::Ionic::Zlib::ZlibBaseStream*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__innerStream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xa6a5434, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen) ;

/// @brief Method .ctor, addr 0xa6a5440, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionMode  mode, ::Pathfinding::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen) ;

/// @brief Method get_CanRead, addr 0xa6a5784, size 0x78, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa6a57fc, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa6a5804, size 0x78, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xa6a58f0, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa6a5928, size 0x50, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_BufferSize, addr 0xa6a5514, size 0x144, virtual false, abstract: false, final false
inline void set_BufferSize(int32_t  value) ;

/// @brief Method set_Position, addr 0xa6a5978, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

/// @brief Method set_Strategy, addr 0xa6a5658, size 0x6c, virtual false, abstract: false, final false
inline void set_Strategy(::Pathfinding::Ionic::Zlib::CompressionStrategy  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflateStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflateStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflateStream(DeflateStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflateStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflateStream(DeflateStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28181};

/// @brief Field _baseStream, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::ZlibBaseStream*  ____baseStream;

/// @brief Field _innerStream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____innerStream;

/// @brief Field _disposed, offset: 0x38, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateStream, ____baseStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateStream, ____innerStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateStream, ____disposed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::DeflateStream) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
