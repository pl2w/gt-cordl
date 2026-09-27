#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibBaseStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionMode_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Ionic/Zlib/zzzz__FlushType_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibBaseStream_StreamMode_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibStreamFlavor_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZlibBaseStream)
namespace GlobalNamespace {
struct ZlibBaseStream_StreamMode;
}
namespace Ionic::Crc {
class CRC32;
}
namespace Ionic::Zlib {
struct CompressionLevel;
}
namespace Ionic::Zlib {
struct CompressionMode;
}
namespace Ionic::Zlib {
class ZlibCodec;
}
namespace Ionic::Zlib {
struct ZlibStreamFlavor;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Ionic::Zlib {
class ZlibBaseStream;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::ZlibBaseStream*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::ZlibBaseStream*, "Ionic.Zlib", "ZlibBaseStream");
// Dependencies Ionic.Zlib.CompressionLevel, Ionic.Zlib.CompressionMode, Ionic.Zlib.CompressionStrategy, Ionic.Zlib.FlushType, Ionic.Zlib.ZlibBaseStream::StreamMode, Ionic.Zlib.ZlibStreamFlavor, System.DateTime, System.IO.Stream
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.ZlibBaseStream
class CORDL_TYPE ZlibBaseStream : public ::System::IO::Stream {
public:
// Declarations
using StreamMode = ::GlobalNamespace::ZlibBaseStream_StreamMode;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Crc32)) int32_t  Crc32;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field Strategy, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_Strategy, put=__cordl_internal_set_Strategy)) ::Ionic::Zlib::CompressionStrategy  Strategy;

/// @brief Field _GzipComment, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__GzipComment, put=__cordl_internal_set__GzipComment)) ::StringW  _GzipComment;

/// @brief Field _GzipFileName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__GzipFileName, put=__cordl_internal_set__GzipFileName)) ::StringW  _GzipFileName;

/// @brief Field _GzipMtime, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__GzipMtime, put=__cordl_internal_set__GzipMtime)) ::System::DateTime  _GzipMtime;

/// @brief Field _buf1, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__buf1, put=__cordl_internal_set__buf1)) ::ArrayW<uint8_t>  _buf1;

/// @brief Field _bufferSize, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize, put=__cordl_internal_set__bufferSize)) int32_t  _bufferSize;

/// @brief Field _compressionMode, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__compressionMode, put=__cordl_internal_set__compressionMode)) ::Ionic::Zlib::CompressionMode  _compressionMode;

/// @brief Field _flavor, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__flavor, put=__cordl_internal_set__flavor)) ::Ionic::Zlib::ZlibStreamFlavor  _flavor;

/// @brief Field _flushMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__flushMode, put=__cordl_internal_set__flushMode)) ::Ionic::Zlib::FlushType  _flushMode;

/// @brief Field _gzipHeaderByteCount, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__gzipHeaderByteCount, put=__cordl_internal_set__gzipHeaderByteCount)) int32_t  _gzipHeaderByteCount;

/// @brief Field _leaveOpen, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__leaveOpen, put=__cordl_internal_set__leaveOpen)) bool  _leaveOpen;

/// @brief Field _level, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__level, put=__cordl_internal_set__level)) ::Ionic::Zlib::CompressionLevel  _level;

/// @brief Field _stream, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _streamMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__streamMode, put=__cordl_internal_set__streamMode)) ::GlobalNamespace::ZlibBaseStream_StreamMode  _streamMode;

 __declspec(property(get=get__wantCompress)) bool  _wantCompress;

/// @brief Field _workingBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__workingBuffer, put=__cordl_internal_set__workingBuffer)) ::ArrayW<uint8_t>  _workingBuffer;

/// @brief Field _z, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__z, put=__cordl_internal_set__z)) ::Ionic::Zlib::ZlibCodec*  _z;

/// @brief Field crc, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_crc, put=__cordl_internal_set_crc)) ::Ionic::Crc::CRC32*  crc;

/// @brief Field nomoreinput, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_nomoreinput, put=__cordl_internal_set_nomoreinput)) bool  nomoreinput;

 __declspec(property(get=get_workingBuffer)) ::ArrayW<uint8_t>  workingBuffer;

 __declspec(property(get=get_z)) ::Ionic::Zlib::ZlibCodec*  z;

/// @brief Method Close, addr 0xa79c570, size 0xc8, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CompressBuffer, addr 0xa79d230, size 0x138, virtual false, abstract: false, final false
static inline void CompressBuffer(::ArrayW<uint8_t>  b, ::System::IO::Stream*  compressor) ;

/// @brief Method CompressString, addr 0xa79d0d0, size 0x160, virtual false, abstract: false, final false
static inline void CompressString(::StringW  s, ::System::IO::Stream*  compressor) ;

/// @brief Method Flush, addr 0xa79c638, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Ionic::Zlib::ZlibBaseStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  compressionMode, ::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::ZlibStreamFlavor  flavor, bool  leaveOpen) ;

/// @brief Method Read, addr 0xa79cba8, size 0x448, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadZeroTerminatedString, addr 0xa79c6b0, size 0x1ec, virtual false, abstract: false, final false
inline ::StringW ReadZeroTerminatedString() ;

/// @brief Method Seek, addr 0xa79c658, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa79c690, size 0x20, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method UncompressBuffer, addr 0xa79d68c, size 0x2c0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> UncompressBuffer(::ArrayW<uint8_t>  compressed, ::System::IO::Stream*  decompressor) ;

/// @brief Method UncompressString, addr 0xa79d368, size 0x324, virtual false, abstract: false, final false
static inline ::StringW UncompressString(::ArrayW<uint8_t>  compressed, ::System::IO::Stream*  decompressor) ;

/// @brief Method Write, addr 0xa79bb08, size 0x248, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method _ReadAndValidateGzipHeader, addr 0xa79c89c, size 0x30c, virtual false, abstract: false, final false
inline int32_t _ReadAndValidateGzipHeader() ;

constexpr ::Ionic::Zlib::CompressionStrategy const& __cordl_internal_get_Strategy() const;

constexpr ::Ionic::Zlib::CompressionStrategy& __cordl_internal_get_Strategy() ;

constexpr ::StringW const& __cordl_internal_get__GzipComment() const;

constexpr ::StringW& __cordl_internal_get__GzipComment() ;

constexpr ::StringW const& __cordl_internal_get__GzipFileName() const;

constexpr ::StringW& __cordl_internal_get__GzipFileName() ;

constexpr ::System::DateTime const& __cordl_internal_get__GzipMtime() const;

constexpr ::System::DateTime& __cordl_internal_get__GzipMtime() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buf1() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buf1() ;

constexpr int32_t const& __cordl_internal_get__bufferSize() const;

constexpr int32_t& __cordl_internal_get__bufferSize() ;

constexpr ::Ionic::Zlib::CompressionMode const& __cordl_internal_get__compressionMode() const;

constexpr ::Ionic::Zlib::CompressionMode& __cordl_internal_get__compressionMode() ;

constexpr ::Ionic::Zlib::ZlibStreamFlavor const& __cordl_internal_get__flavor() const;

constexpr ::Ionic::Zlib::ZlibStreamFlavor& __cordl_internal_get__flavor() ;

constexpr ::Ionic::Zlib::FlushType const& __cordl_internal_get__flushMode() const;

constexpr ::Ionic::Zlib::FlushType& __cordl_internal_get__flushMode() ;

constexpr int32_t const& __cordl_internal_get__gzipHeaderByteCount() const;

constexpr int32_t& __cordl_internal_get__gzipHeaderByteCount() ;

constexpr bool const& __cordl_internal_get__leaveOpen() const;

constexpr bool& __cordl_internal_get__leaveOpen() ;

constexpr ::Ionic::Zlib::CompressionLevel const& __cordl_internal_get__level() const;

constexpr ::Ionic::Zlib::CompressionLevel& __cordl_internal_get__level() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr ::GlobalNamespace::ZlibBaseStream_StreamMode const& __cordl_internal_get__streamMode() const;

constexpr ::GlobalNamespace::ZlibBaseStream_StreamMode& __cordl_internal_get__streamMode() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__workingBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__workingBuffer() ;

constexpr ::Ionic::Zlib::ZlibCodec* const& __cordl_internal_get__z() const;

constexpr ::Ionic::Zlib::ZlibCodec*& __cordl_internal_get__z() ;

constexpr ::Ionic::Crc::CRC32* const& __cordl_internal_get_crc() const;

constexpr ::Ionic::Crc::CRC32*& __cordl_internal_get_crc() ;

constexpr bool const& __cordl_internal_get_nomoreinput() const;

constexpr bool& __cordl_internal_get_nomoreinput() ;

constexpr void __cordl_internal_set_Strategy(::Ionic::Zlib::CompressionStrategy  value) ;

constexpr void __cordl_internal_set__GzipComment(::StringW  value) ;

constexpr void __cordl_internal_set__GzipFileName(::StringW  value) ;

constexpr void __cordl_internal_set__GzipMtime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__buf1(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__compressionMode(::Ionic::Zlib::CompressionMode  value) ;

constexpr void __cordl_internal_set__flavor(::Ionic::Zlib::ZlibStreamFlavor  value) ;

constexpr void __cordl_internal_set__flushMode(::Ionic::Zlib::FlushType  value) ;

constexpr void __cordl_internal_set__gzipHeaderByteCount(int32_t  value) ;

constexpr void __cordl_internal_set__leaveOpen(bool  value) ;

constexpr void __cordl_internal_set__level(::Ionic::Zlib::CompressionLevel  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__streamMode(::GlobalNamespace::ZlibBaseStream_StreamMode  value) ;

constexpr void __cordl_internal_set__workingBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__z(::Ionic::Zlib::ZlibCodec*  value) ;

constexpr void __cordl_internal_set_crc(::Ionic::Crc::CRC32*  value) ;

constexpr void __cordl_internal_set_nomoreinput(bool  value) ;

/// @brief Method .ctor, addr 0xa79b7ec, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  compressionMode, ::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::ZlibStreamFlavor  flavor, bool  leaveOpen) ;

/// @brief Method end, addr 0xa79c434, size 0x50, virtual false, abstract: false, final false
inline void end() ;

/// @brief Method finish, addr 0xa79befc, size 0x538, virtual false, abstract: false, final false
inline void finish() ;

/// @brief Method get_CanRead, addr 0xa79cff0, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa79d00c, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa79d028, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Crc32, addr 0xa79b7c4, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_Crc32() ;

/// @brief Method get_Length, addr 0xa79d044, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa79d060, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get__wantCompress, addr 0xa79b980, size 0x10, virtual false, abstract: false, final false
inline bool get__wantCompress() ;

/// @brief Method get_workingBuffer, addr 0xa79ba9c, size 0x6c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_workingBuffer() ;

/// @brief Method get_z, addr 0xa79b990, size 0xd8, virtual false, abstract: false, final false
inline ::Ionic::Zlib::ZlibCodec* get_z() ;

/// @brief Method set_Position, addr 0xa79d098, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZlibBaseStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZlibBaseStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZlibBaseStream(ZlibBaseStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZlibBaseStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZlibBaseStream(ZlibBaseStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19477};

/// @brief Field _z, offset: 0x28, size: 0x8, def value: None
 ::Ionic::Zlib::ZlibCodec*  ____z;

/// @brief Field _streamMode, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ZlibBaseStream_StreamMode  ____streamMode;

/// @brief Field _flushMode, offset: 0x34, size: 0x4, def value: None
 ::Ionic::Zlib::FlushType  ____flushMode;

/// @brief Field _flavor, offset: 0x38, size: 0x4, def value: None
 ::Ionic::Zlib::ZlibStreamFlavor  ____flavor;

/// @brief Field _compressionMode, offset: 0x3c, size: 0x4, def value: None
 ::Ionic::Zlib::CompressionMode  ____compressionMode;

/// @brief Field _level, offset: 0x40, size: 0x4, def value: None
 ::Ionic::Zlib::CompressionLevel  ____level;

/// @brief Field _leaveOpen, offset: 0x44, size: 0x1, def value: None
 bool  ____leaveOpen;

/// @brief Field _workingBuffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____workingBuffer;

/// @brief Field _bufferSize, offset: 0x50, size: 0x4, def value: None
 int32_t  ____bufferSize;

/// @brief Field _buf1, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buf1;

/// @brief Field _stream, offset: 0x60, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field Strategy, offset: 0x68, size: 0x4, def value: None
 ::Ionic::Zlib::CompressionStrategy  ___Strategy;

/// @brief Field crc, offset: 0x70, size: 0x8, def value: None
 ::Ionic::Crc::CRC32*  ___crc;

/// @brief Field _GzipFileName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____GzipFileName;

/// @brief Field _GzipComment, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____GzipComment;

/// @brief Field _GzipMtime, offset: 0x88, size: 0x8, def value: None
 ::System::DateTime  ____GzipMtime;

/// @brief Field _gzipHeaderByteCount, offset: 0x90, size: 0x4, def value: None
 int32_t  ____gzipHeaderByteCount;

/// @brief Field nomoreinput, offset: 0x94, size: 0x1, def value: None
 bool  ___nomoreinput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____z) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____streamMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____flushMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____flavor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____compressionMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____level) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____leaveOpen) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____workingBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____bufferSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____buf1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____stream) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ___Strategy) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ___crc) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____GzipFileName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____GzipComment) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____GzipMtime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ____gzipHeaderByteCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibBaseStream, ___nomoreinput) == 0x94, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::ZlibBaseStream) == 0x98, "Size mismatch!");

} // namespace end def Ionic::Zlib
