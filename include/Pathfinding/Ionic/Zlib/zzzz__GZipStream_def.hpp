#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/GZipStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GZipStream)
namespace Pathfinding::Ionic::Zlib {
class ZlibBaseStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class GZipStream;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::GZipStream*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::GZipStream*, "Pathfinding.Ionic.Zlib", "GZipStream");
// Dependencies System.DateTime, System.IO.Stream, System.Nullable`1<T>
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.GZipStream
class CORDL_TYPE GZipStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Comment, put=set_Comment)) ::StringW  Comment;

 __declspec(property(get=get_FileName, put=set_FileName)) ::StringW  FileName;

/// @brief Field LastModified, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_LastModified, put=__cordl_internal_set_LastModified)) ::System::Nullable_1<::System::DateTime>  LastModified;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _Comment, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Comment, put=__cordl_internal_set__Comment)) ::StringW  _Comment;

/// @brief Field _FileName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__FileName, put=__cordl_internal_set__FileName)) ::StringW  _FileName;

/// @brief Field _baseStream, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseStream, put=__cordl_internal_set__baseStream)) ::Pathfinding::Ionic::Zlib::ZlibBaseStream*  _baseStream;

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

/// @brief Method EmitHeader, addr 0xa6a6240, size 0x3dc, virtual false, abstract: false, final false
inline int32_t EmitHeader() ;

/// @brief Method Flush, addr 0xa6a5ed4, size 0x74, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method Read, addr 0xa6a6018, size 0xc4, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa6a60dc, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa6a6114, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xa6a614c, size 0xf4, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_LastModified() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_LastModified() ;

constexpr ::StringW const& __cordl_internal_get__Comment() const;

constexpr ::StringW& __cordl_internal_get__Comment() ;

constexpr ::StringW const& __cordl_internal_get__FileName() const;

constexpr ::StringW& __cordl_internal_get__FileName() ;

constexpr ::Pathfinding::Ionic::Zlib::ZlibBaseStream* const& __cordl_internal_get__baseStream() const;

constexpr ::Pathfinding::Ionic::Zlib::ZlibBaseStream*& __cordl_internal_get__baseStream() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr bool const& __cordl_internal_get__firstReadDone() const;

constexpr bool& __cordl_internal_get__firstReadDone() ;

constexpr int32_t const& __cordl_internal_get__headerByteCount() const;

constexpr int32_t& __cordl_internal_get__headerByteCount() ;

constexpr void __cordl_internal_set_LastModified(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set__Comment(::StringW  value) ;

constexpr void __cordl_internal_set__FileName(::StringW  value) ;

constexpr void __cordl_internal_set__baseStream(::Pathfinding::Ionic::Zlib::ZlibBaseStream*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__firstReadDone(bool  value) ;

constexpr void __cordl_internal_set__headerByteCount(int32_t  value) ;

static inline ::System::DateTime getStaticF__unixEpoch() ;

static inline ::System::Text::Encoding* getStaticF_iso8859dash1() ;

/// @brief Method get_CanRead, addr 0xa6a5ddc, size 0x78, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa6a5e54, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa6a5e5c, size 0x78, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Comment, addr 0xa6a5bbc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Comment() ;

/// @brief Method get_FileName, addr 0xa6a5c20, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FileName() ;

/// @brief Method get_Length, addr 0xa6a5f48, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa6a5f80, size 0x60, virtual true, abstract: false, final false
inline int64_t get_Position() ;

static inline void setStaticF__unixEpoch(::System::DateTime  value) ;

static inline void setStaticF_iso8859dash1(::System::Text::Encoding*  value) ;

/// @brief Method set_Comment, addr 0xa6a5bc4, size 0x5c, virtual false, abstract: false, final false
inline void set_Comment(::StringW  value) ;

/// @brief Method set_FileName, addr 0xa6a5c28, size 0x1b4, virtual false, abstract: false, final false
inline void set_FileName(::StringW  value) ;

/// @brief Method set_Position, addr 0xa6a5fe0, size 0x38, virtual true, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28182};

/// @brief Field LastModified, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___LastModified;

/// @brief Field _headerByteCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____headerByteCount;

/// @brief Field _baseStream, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::ZlibBaseStream*  ____baseStream;

/// @brief Field _disposed, offset: 0x48, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _firstReadDone, offset: 0x49, size: 0x1, def value: None
 bool  ____firstReadDone;

/// @brief Field _FileName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____FileName;

/// @brief Field _Comment, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____Comment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::GZipStream, ___LastModified) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::GZipStream, ____headerByteCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::GZipStream, ____baseStream) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::GZipStream, ____disposed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::GZipStream, ____firstReadDone) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::GZipStream, ____FileName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::GZipStream, ____Comment) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::GZipStream) == 0x60, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
