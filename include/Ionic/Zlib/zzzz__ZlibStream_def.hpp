#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZlibStream)
namespace Ionic::Zlib {
struct CompressionLevel;
}
namespace Ionic::Zlib {
struct CompressionMode;
}
namespace Ionic::Zlib {
struct FlushType;
}
namespace Ionic::Zlib {
class ZlibBaseStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Ionic::Zlib {
class ZlibStream;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::ZlibStream*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::ZlibStream*, "Ionic.Zlib", "ZlibStream");
// Dependencies System.IO.Stream
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.ZlibStream
class CORDL_TYPE ZlibStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_BufferSize, put=set_BufferSize)) int32_t  BufferSize;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_FlushMode, put=set_FlushMode)) ::Ionic::Zlib::FlushType  FlushMode;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_TotalIn)) int64_t  TotalIn;

 __declspec(property(get=get_TotalOut)) int64_t  TotalOut;

/// @brief Field _baseStream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseStream, put=__cordl_internal_set__baseStream)) ::Ionic::Zlib::ZlibBaseStream*  _baseStream;

/// @brief Field _disposed, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Method CompressBuffer, addr 0xa79e930, size 0x1b0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> CompressBuffer(::ArrayW<uint8_t>  b) ;

/// @brief Method CompressString, addr 0xa79e780, size 0x1b0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> CompressString(::StringW  s) ;

/// @brief Method Dispose, addr 0xa79e33c, size 0xc0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0xa79e4f4, size 0x74, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Ionic::Zlib::ZlibStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode) ;

static inline ::Ionic::Zlib::ZlibStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen) ;

static inline ::Ionic::Zlib::ZlibStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level) ;

static inline ::Ionic::Zlib::ZlibStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen) ;

/// @brief Method Read, addr 0xa79e628, size 0x74, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa79e69c, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa79e6d4, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method UncompressBuffer, addr 0xa79ec6c, size 0x18c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> UncompressBuffer(::ArrayW<uint8_t>  compressed) ;

/// @brief Method UncompressString, addr 0xa79eae0, size 0x18c, virtual false, abstract: false, final false
static inline ::StringW UncompressString(::ArrayW<uint8_t>  compressed) ;

/// @brief Method Write, addr 0xa79e70c, size 0x74, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::Ionic::Zlib::ZlibBaseStream* const& __cordl_internal_get__baseStream() const;

constexpr ::Ionic::Zlib::ZlibBaseStream*& __cordl_internal_get__baseStream() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr void __cordl_internal_set__baseStream(::Ionic::Zlib::ZlibBaseStream*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

/// @brief Method .ctor, addr 0xa79e03c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode) ;

/// @brief Method .ctor, addr 0xa79e110, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen) ;

/// @brief Method .ctor, addr 0xa79e108, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level) ;

/// @brief Method .ctor, addr 0xa79e048, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen) ;

/// @brief Method get_BufferSize, addr 0xa79e1a0, size 0x18, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_CanRead, addr 0xa79e3fc, size 0x78, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa79e474, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa79e47c, size 0x78, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_FlushMode, addr 0xa79e11c, size 0x18, virtual true, abstract: false, final false
inline ::Ionic::Zlib::FlushType get_FlushMode() ;

/// @brief Method get_Length, addr 0xa79e568, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa79e5a0, size 0x50, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get_TotalIn, addr 0xa79e2f4, size 0x24, virtual true, abstract: false, final false
inline int64_t get_TotalIn() ;

/// @brief Method get_TotalOut, addr 0xa79e318, size 0x24, virtual true, abstract: false, final false
inline int64_t get_TotalOut() ;

/// @brief Method set_BufferSize, addr 0xa79e1b8, size 0x13c, virtual false, abstract: false, final false
inline void set_BufferSize(int32_t  value) ;

/// @brief Method set_FlushMode, addr 0xa79e134, size 0x6c, virtual true, abstract: false, final false
inline void set_FlushMode(::Ionic::Zlib::FlushType  value) ;

/// @brief Method set_Position, addr 0xa79e5f0, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZlibStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZlibStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZlibStream(ZlibStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZlibStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZlibStream(ZlibStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19480};

/// @brief Field _baseStream, offset: 0x28, size: 0x8, def value: None
 ::Ionic::Zlib::ZlibBaseStream*  ____baseStream;

/// @brief Field _disposed, offset: 0x30, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::ZlibStream, ____baseStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibStream, ____disposed) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::ZlibStream) == 0x38, "Size mismatch!");

} // namespace end def Ionic::Zlib
