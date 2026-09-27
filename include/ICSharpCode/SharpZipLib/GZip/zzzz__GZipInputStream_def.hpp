#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipInputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__InflaterInputStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GZipInputStream)
namespace ICSharpCode::SharpZipLib::Checksum {
class Crc32;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::GZip {
class GZipInputStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::GZip::GZipInputStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::GZip::GZipInputStream*, "ICSharpCode.SharpZipLib.GZip", "GZipInputStream");
// Dependencies ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
namespace ICSharpCode::SharpZipLib::GZip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.GZip.GZipInputStream
class CORDL_TYPE GZipInputStream : public ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream {
public:
// Declarations
/// @brief Field completedLastBlock, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_completedLastBlock, put=__cordl_internal_set_completedLastBlock)) bool  completedLastBlock;

/// @brief Field crc, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_crc, put=__cordl_internal_set_crc)) ::ICSharpCode::SharpZipLib::Checksum::Crc32*  crc;

/// @brief Field fileName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileName, put=__cordl_internal_set_fileName)) ::StringW  fileName;

/// @brief Field readGZIPHeader, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_readGZIPHeader, put=__cordl_internal_set_readGZIPHeader)) bool  readGZIPHeader;

/// @brief Method GetFilename, addr 0x9ff746c, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetFilename() ;

static inline ::ICSharpCode::SharpZipLib::GZip::GZipInputStream* New_ctor(::System::IO::Stream*  baseInputStream) ;

static inline ::ICSharpCode::SharpZipLib::GZip::GZipInputStream* New_ctor(::System::IO::Stream*  baseInputStream, int32_t  size) ;

/// @brief Method Read, addr 0x9ff65dc, size 0x254, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadFooter, addr 0x9ff71c8, size 0x2a4, virtual false, abstract: false, final false
inline void ReadFooter() ;

/// @brief Method ReadHeader, addr 0x9ff6830, size 0x904, virtual false, abstract: false, final false
inline bool ReadHeader() ;

constexpr bool const& __cordl_internal_get_completedLastBlock() const;

constexpr bool& __cordl_internal_get_completedLastBlock() ;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32* const& __cordl_internal_get_crc() const;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32*& __cordl_internal_get_crc() ;

constexpr ::StringW const& __cordl_internal_get_fileName() const;

constexpr ::StringW& __cordl_internal_get_fileName() ;

constexpr bool const& __cordl_internal_get_readGZIPHeader() const;

constexpr bool& __cordl_internal_get_readGZIPHeader() ;

constexpr void __cordl_internal_set_completedLastBlock(bool  value) ;

constexpr void __cordl_internal_set_crc(::ICSharpCode::SharpZipLib::Checksum::Crc32*  value) ;

constexpr void __cordl_internal_set_fileName(::StringW  value) ;

constexpr void __cordl_internal_set_readGZIPHeader(bool  value) ;

/// @brief Method .ctor, addr 0x9ff5e74, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseInputStream) ;

/// @brief Method .ctor, addr 0x9ff6560, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseInputStream, int32_t  size) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GZipInputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GZipInputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GZipInputStream(GZipInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GZipInputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GZipInputStream(GZipInputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17407};

/// @brief Field crc, offset: 0x58, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Checksum::Crc32*  ___crc;

/// @brief Field readGZIPHeader, offset: 0x60, size: 0x1, def value: None
 bool  ___readGZIPHeader;

/// @brief Field completedLastBlock, offset: 0x61, size: 0x1, def value: None
 bool  ___completedLastBlock;

/// @brief Field fileName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___fileName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::GZip::GZipInputStream, ___crc) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::GZip::GZipInputStream, ___readGZIPHeader) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::GZip::GZipInputStream, ___completedLastBlock) == 0x61, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::GZip::GZipInputStream, ___fileName) == 0x68, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::GZip::GZipInputStream) == 0x70, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::GZip
