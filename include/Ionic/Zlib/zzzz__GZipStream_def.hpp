#pragma once
// IWYU pragma private; include "Ionic/Zlib/GZipStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GZipStream)
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
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace Ionic::Zlib {
class GZipStream;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::GZipStream*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::GZipStream*, "Ionic.Zlib", "GZipStream");
// Dependencies System.DateTime, System.IO.Stream, System.Nullable`1<T>
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.GZipStream
class CORDL_TYPE GZipStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_BufferSize, put=set_BufferSize)) int32_t  BufferSize;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Comment, put=set_Comment)) ::StringW  Comment;

 __declspec(property(get=get_Crc32)) int32_t  Crc32;

 __declspec(property(get=get_FileName, put=set_FileName)) ::StringW  FileName;

 __declspec(property(get=get_FlushMode, put=set_FlushMode)) ::Ionic::Zlib::FlushType  FlushMode;

/// @brief Field LastModified, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_LastModified, put=__cordl_internal_set_LastModified)) ::System::Nullable_1<::System::DateTime>  LastModified;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_TotalIn)) int64_t  TotalIn;

 __declspec(property(get=get_TotalOut)) int64_t  TotalOut;

/// @brief Field _Comment, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Comment, put=__cordl_internal_set__Comment)) ::StringW  _Comment;

/// @brief Field _Crc32, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__Crc32, put=__cordl_internal_set__Crc32)) int32_t  _Crc32;

/// @brief Field _FileName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__FileName, put=__cordl_internal_set__FileName)) ::StringW  _FileName;

/// @brief Field _baseStream, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseStream, put=__cordl_internal_set__baseStream)) ::Ionic::Zlib::ZlibBaseStream*  _baseStream;

/// @brief Field _disposed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _firstReadDone, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__firstReadDone, put=__cordl_internal_set__firstReadDone)) bool  _firstReadDone;

/// @brief Field _headerByteCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__headerByteCount, put=__cordl_internal_set__headerByteCount)) int32_t  _headerByteCount;

/// @brief Field _unixEpoch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unixEpoch, put=setStaticF__unixEpoch)) ::System::DateTime  _unixEpoch;

/// @brief Field iso8859dash1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_iso8859dash1, put=setStaticF_iso8859dash1)) ::System::Text::Encoding*  iso8859dash1;

/// @brief Method CompressBuffer, addr 0xa7946dc, size 0x1b4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> CompressBuffer(::ArrayW<uint8_t>  b) ;

/// @brief Method CompressString, addr 0xa794528, size 0x1b4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> CompressString(::StringW  s) ;

/// @brief Method Dispose, addr 0xa793c00, size 0xe8, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EmitHeader, addr 0xa79414c, size 0x3dc, virtual false, abstract: false, final false
inline int32_t EmitHeader() ;

/// @brief Method Flush, addr 0xa793de0, size 0x74, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Ionic::Zlib::GZipStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode) ;

static inline ::Ionic::Zlib::GZipStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen) ;

static inline ::Ionic::Zlib::GZipStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level) ;

static inline ::Ionic::Zlib::GZipStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen) ;

/// @brief Method Read, addr 0xa793f24, size 0xc4, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa793fe8, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa794020, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method UncompressBuffer, addr 0xa794a24, size 0x194, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> UncompressBuffer(::ArrayW<uint8_t>  compressed) ;

/// @brief Method UncompressString, addr 0xa794890, size 0x194, virtual false, abstract: false, final false
static inline ::StringW UncompressString(::ArrayW<uint8_t>  compressed) ;

/// @brief Method Write, addr 0xa794058, size 0xf4, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_LastModified() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_LastModified() ;

constexpr ::StringW const& __cordl_internal_get__Comment() const;

constexpr ::StringW& __cordl_internal_get__Comment() ;

constexpr int32_t const& __cordl_internal_get__Crc32() const;

constexpr int32_t& __cordl_internal_get__Crc32() ;

constexpr ::StringW const& __cordl_internal_get__FileName() const;

constexpr ::StringW& __cordl_internal_get__FileName() ;

constexpr ::Ionic::Zlib::ZlibBaseStream* const& __cordl_internal_get__baseStream() const;

constexpr ::Ionic::Zlib::ZlibBaseStream*& __cordl_internal_get__baseStream() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr bool const& __cordl_internal_get__firstReadDone() const;

constexpr bool& __cordl_internal_get__firstReadDone() ;

constexpr int32_t const& __cordl_internal_get__headerByteCount() const;

constexpr int32_t& __cordl_internal_get__headerByteCount() ;

constexpr void __cordl_internal_set_LastModified(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set__Comment(::StringW  value) ;

constexpr void __cordl_internal_set__Crc32(int32_t  value) ;

constexpr void __cordl_internal_set__FileName(::StringW  value) ;

constexpr void __cordl_internal_set__baseStream(::Ionic::Zlib::ZlibBaseStream*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__firstReadDone(bool  value) ;

constexpr void __cordl_internal_set__headerByteCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xa7938f4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode) ;

/// @brief Method .ctor, addr 0xa7939cc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen) ;

/// @brief Method .ctor, addr 0xa7939c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level) ;

/// @brief Method .ctor, addr 0xa793900, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen) ;

static inline ::System::DateTime getStaticF__unixEpoch() ;

static inline ::System::Text::Encoding* getStaticF_iso8859dash1() ;

/// @brief Method get_BufferSize, addr 0xa793a5c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_CanRead, addr 0xa793ce8, size 0x78, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa793d60, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa793d68, size 0x78, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Comment, addr 0xa7936cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Comment() ;

/// @brief Method get_Crc32, addr 0xa7938ec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Crc32() ;

/// @brief Method get_FileName, addr 0xa793730, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FileName() ;

/// @brief Method get_FlushMode, addr 0xa7939d8, size 0x18, virtual true, abstract: false, final false
inline ::Ionic::Zlib::FlushType get_FlushMode() ;

/// @brief Method get_Length, addr 0xa793e54, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa793e8c, size 0x60, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get_TotalIn, addr 0xa793bb8, size 0x24, virtual true, abstract: false, final false
inline int64_t get_TotalIn() ;

/// @brief Method get_TotalOut, addr 0xa793bdc, size 0x24, virtual true, abstract: false, final false
inline int64_t get_TotalOut() ;

static inline void setStaticF__unixEpoch(::System::DateTime  value) ;

static inline void setStaticF_iso8859dash1(::System::Text::Encoding*  value) ;

/// @brief Method set_BufferSize, addr 0xa793a74, size 0x144, virtual false, abstract: false, final false
inline void set_BufferSize(int32_t  value) ;

/// @brief Method set_Comment, addr 0xa7936d4, size 0x5c, virtual false, abstract: false, final false
inline void set_Comment(::StringW  value) ;

/// @brief Method set_FileName, addr 0xa793738, size 0x1b4, virtual false, abstract: false, final false
inline void set_FileName(::StringW  value) ;

/// @brief Method set_FlushMode, addr 0xa7939f0, size 0x6c, virtual true, abstract: false, final false
inline void set_FlushMode(::Ionic::Zlib::FlushType  value) ;

/// @brief Method set_Position, addr 0xa793eec, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GZipStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GZipStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GZipStream(GZipStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GZipStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GZipStream(GZipStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19455};

/// @brief Field LastModified, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___LastModified;

/// @brief Field _headerByteCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____headerByteCount;

/// @brief Field _baseStream, offset: 0x40, size: 0x8, def value: None
 ::Ionic::Zlib::ZlibBaseStream*  ____baseStream;

/// @brief Field _disposed, offset: 0x48, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _firstReadDone, offset: 0x49, size: 0x1, def value: None
 bool  ____firstReadDone;

/// @brief Field _FileName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____FileName;

/// @brief Field _Comment, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____Comment;

/// @brief Field _Crc32, offset: 0x60, size: 0x4, def value: None
 int32_t  ____Crc32;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::GZipStream, ___LastModified) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::GZipStream, ____headerByteCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::GZipStream, ____baseStream) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::GZipStream, ____disposed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::GZipStream, ____firstReadDone) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::GZipStream, ____FileName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::GZipStream, ____Comment) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::GZipStream, ____Crc32) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::GZipStream) == 0x68, "Size mismatch!");

} // namespace end def Ionic::Zlib
