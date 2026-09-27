#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipHelperStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipHelperStream)
namespace ICSharpCode::SharpZipLib::Zip {
class DescriptorData;
}
namespace ICSharpCode::SharpZipLib::Zip {
class EntryPatchData;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipHelperStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipHelperStream*, "ICSharpCode.SharpZipLib.Zip", "ZipHelperStream");
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipHelperStream
class CORDL_TYPE ZipHelperStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanTimeout)) bool  CanTimeout;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field isOwner_, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOwner_, put=__cordl_internal_set_isOwner_)) bool  isOwner_;

/// @brief Field stream_, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream_, put=__cordl_internal_set_stream_)) ::System::IO::Stream*  stream_;

/// @brief Method Dispose, addr 0x9f8f360, size 0x54, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x9f8f2c0, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method LocateBlockWithSignature, addr 0x9f8d894, size 0x100, virtual false, abstract: false, final false
inline int64_t LocateBlockWithSignature(int32_t  signature, int64_t  endLocation, int32_t  minimumBlockSize, int32_t  maximumVariableData) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream* New_ctor(::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipHelperStream* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method Read, addr 0x9f8f320, size 0x20, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadDataDescriptor, addr 0x9f8744c, size 0x10c, virtual false, abstract: false, final false
inline void ReadDataDescriptor(bool  zip64, ::ICSharpCode::SharpZipLib::Zip::DescriptorData*  data) ;

/// @brief Method ReadLEInt, addr 0x9f81934, size 0x2c, virtual false, abstract: false, final false
inline int32_t ReadLEInt() ;

/// @brief Method ReadLELong, addr 0x9f82674, size 0x48, virtual false, abstract: false, final false
inline int64_t ReadLELong() ;

/// @brief Method ReadLEShort, addr 0x9f825e4, size 0x90, virtual false, abstract: false, final false
inline int32_t ReadLEShort() ;

/// @brief Method Seek, addr 0x9f8f2e0, size 0x20, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x9f8f300, size 0x20, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0x9f8f340, size 0x20, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteDataDescriptor, addr 0x9f8cf7c, size 0x160, virtual false, abstract: false, final false
inline int32_t WriteDataDescriptor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method WriteEndOfCentralDirectory, addr 0x9f894d4, size 0x23c, virtual false, abstract: false, final false
inline void WriteEndOfCentralDirectory(int64_t  noOfEntries, int64_t  sizeEntries, int64_t  startOfCentralDirectory, ::ArrayW<uint8_t>  comment) ;

/// @brief Method WriteLEInt, addr 0x9f81eb8, size 0x28, virtual false, abstract: false, final false
inline void WriteLEInt(int32_t  value) ;

/// @brief Method WriteLELong, addr 0x9f82a68, size 0x40, virtual false, abstract: false, final false
inline void WriteLELong(int64_t  value) ;

/// @brief Method WriteLEShort, addr 0x9f82a18, size 0x50, virtual false, abstract: false, final false
inline void WriteLEShort(int32_t  value) ;

/// @brief Method WriteLEUint, addr 0x9f8f8bc, size 0x28, virtual false, abstract: false, final false
inline void WriteLEUint(uint32_t  value) ;

/// @brief Method WriteLEUlong, addr 0x9f8f8e4, size 0x40, virtual false, abstract: false, final false
inline void WriteLEUlong(uint64_t  value) ;

/// @brief Method WriteLEUshort, addr 0x9f8f86c, size 0x50, virtual false, abstract: false, final false
inline void WriteLEUshort(uint16_t  value) ;

/// @brief Method WriteLocalHeader, addr 0x9f8f3b4, size 0x39c, virtual false, abstract: false, final false
inline void WriteLocalHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::ICSharpCode::SharpZipLib::Zip::EntryPatchData*  patchData) ;

/// @brief Method WriteZip64EndOfCentralDirectory, addr 0x9f8f750, size 0x11c, virtual false, abstract: false, final false
inline void WriteZip64EndOfCentralDirectory(int64_t  noOfEntries, int64_t  sizeEntries, int64_t  centralDirOffset) ;

constexpr bool const& __cordl_internal_get_isOwner_() const;

constexpr bool& __cordl_internal_get_isOwner_() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream_() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream_() ;

constexpr void __cordl_internal_set_isOwner_(bool  value) ;

constexpr void __cordl_internal_set_stream_(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x9f8d7e0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x9f818c0, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method get_CanRead, addr 0x9f8f1f4, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9f8f210, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanTimeout, addr 0x9f8f22c, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanTimeout() ;

/// @brief Method get_CanWrite, addr 0x9f8f2a4, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_IsStreamOwner, addr 0x9f8f1e4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_Length, addr 0x9f8f248, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x9f8f264, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_IsStreamOwner, addr 0x9f8f1ec, size 0x8, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_Position, addr 0x9f8f284, size 0x20, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipHelperStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipHelperStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipHelperStream(ZipHelperStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipHelperStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipHelperStream(ZipHelperStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17363};

/// @brief Field isOwner_, offset: 0x28, size: 0x1, def value: None
 bool  ___isOwner_;

/// @brief Field stream_, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipHelperStream, ___isOwner_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipHelperStream, ___stream_) == 0x30, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipHelperStream) == 0x38, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
