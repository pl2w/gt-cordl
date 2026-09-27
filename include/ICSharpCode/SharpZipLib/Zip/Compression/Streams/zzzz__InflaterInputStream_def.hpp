#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/InflaterInputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InflaterInputStream)
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class InflaterInputBuffer;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class Inflater;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class InflaterInputStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*, "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "InflaterInputStream");
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
class CORDL_TYPE InflaterInputStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_Available)) int32_t  Available;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field <IsStreamOwner>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStreamOwner_k__BackingField, put=__cordl_internal_set__IsStreamOwner_k__BackingField)) bool  _IsStreamOwner_k__BackingField;

/// @brief Field baseInputStream, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseInputStream, put=__cordl_internal_set_baseInputStream)) ::System::IO::Stream*  baseInputStream;

/// @brief Field csize, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_csize, put=__cordl_internal_set_csize)) int64_t  csize;

/// @brief Field inf, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_inf, put=__cordl_internal_set_inf)) ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inf;

/// @brief Field inputBuffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputBuffer, put=__cordl_internal_set_inputBuffer)) ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*  inputBuffer;

/// @brief Field isClosed, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_isClosed, put=__cordl_internal_set_isClosed)) bool  isClosed;

/// @brief Method Dispose, addr 0x9fcd92c, size 0x34, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Fill, addr 0x9fda24c, size 0x8c, virtual false, abstract: false, final false
inline void Fill() ;

/// @brief Method Flush, addr 0x9fda3bc, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream* New_ctor(::System::IO::Stream*  baseInputStream) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream* New_ctor(::System::IO::Stream*  baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inf) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream* New_ctor(::System::IO::Stream*  baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inflater, int32_t  bufferSize) ;

/// @brief Method Read, addr 0x9fcd700, size 0x14c, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0x9fda3dc, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x9fda428, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Skip, addr 0x9fcc60c, size 0x140, virtual false, abstract: false, final false
inline int64_t Skip(int64_t  count) ;

/// @brief Method StopDecrypting, addr 0x9fcc51c, size 0x18, virtual false, abstract: false, final false
inline void StopDecrypting() ;

/// @brief Method Write, addr 0x9fda474, size 0x4c, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0x9fda4c0, size 0x4c, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr bool const& __cordl_internal_get__IsStreamOwner_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStreamOwner_k__BackingField() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_baseInputStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_baseInputStream() ;

constexpr int64_t const& __cordl_internal_get_csize() const;

constexpr int64_t& __cordl_internal_get_csize() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* const& __cordl_internal_get_inf() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*& __cordl_internal_get_inf() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer* const& __cordl_internal_get_inputBuffer() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*& __cordl_internal_get_inputBuffer() ;

constexpr bool const& __cordl_internal_get_isClosed() const;

constexpr bool& __cordl_internal_get_isClosed() ;

constexpr void __cordl_internal_set__IsStreamOwner_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_baseInputStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_csize(int64_t  value) ;

constexpr void __cordl_internal_set_inf(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  value) ;

constexpr void __cordl_internal_set_inputBuffer(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*  value) ;

constexpr void __cordl_internal_set_isClosed(bool  value) ;

/// @brief Method .ctor, addr 0x9fda18c, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseInputStream) ;

/// @brief Method .ctor, addr 0x9fcb570, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inf) ;

/// @brief Method .ctor, addr 0x9fcb738, size 0x184, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inflater, int32_t  bufferSize) ;

/// @brief Method get_Available, addr 0x9fda20c, size 0x40, virtual true, abstract: false, final false
inline int32_t get_Available() ;

/// @brief Method get_CanRead, addr 0x9fda2d8, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9fda2f4, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x9fda2fc, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_IsStreamOwner, addr 0x9fda1fc, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_Length, addr 0x9fda304, size 0x4c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x9fda350, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_IsStreamOwner, addr 0x9fda204, size 0x8, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_Position, addr 0x9fda370, size 0x4c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InflaterInputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InflaterInputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InflaterInputStream(InflaterInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InflaterInputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InflaterInputStream(InflaterInputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17385};

/// [CompilerGenerated]
/// @brief Field <IsStreamOwner>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____IsStreamOwner_k__BackingField;

/// @brief Field inf, offset: 0x30, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  ___inf;

/// @brief Field inputBuffer, offset: 0x38, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*  ___inputBuffer;

/// @brief Field baseInputStream, offset: 0x40, size: 0x8, def value: None
 ::System::IO::Stream*  ___baseInputStream;

/// @brief Field csize, offset: 0x48, size: 0x8, def value: None
 int64_t  ___csize;

/// @brief Field isClosed, offset: 0x50, size: 0x1, def value: None
 bool  ___isClosed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream, ____IsStreamOwner_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream, ___inf) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream, ___inputBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream, ___baseInputStream) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream, ___csize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream, ___isClosed) == 0x50, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream) == 0x58, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression::Streams
