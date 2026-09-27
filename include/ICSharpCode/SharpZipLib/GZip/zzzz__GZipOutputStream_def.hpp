#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipOutputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipFlags_def.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipOutputStream_OutputState_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__DeflaterOutputStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GZipOutputStream)
namespace GlobalNamespace {
struct GZipOutputStream_OutputState;
}
namespace ICSharpCode::SharpZipLib::Checksum {
class Crc32;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::GZip {
class GZipOutputStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*, "ICSharpCode.SharpZipLib.GZip", "GZipOutputStream");
// Dependencies ICSharpCode.SharpZipLib.GZip.GZipFlags, ICSharpCode.SharpZipLib.GZip.GZipOutputStream::OutputState, ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
namespace ICSharpCode::SharpZipLib::GZip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.GZip.GZipOutputStream
class CORDL_TYPE GZipOutputStream : public ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream {
public:
// Declarations
using OutputState = ::GlobalNamespace::GZipOutputStream_OutputState;

 __declspec(property(get=get_FileName, put=set_FileName)) ::StringW  FileName;

/// @brief Field crc, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_crc, put=__cordl_internal_set_crc)) ::ICSharpCode::SharpZipLib::Checksum::Crc32*  crc;

/// @brief Field fileName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileName, put=__cordl_internal_set_fileName)) ::StringW  fileName;

/// @brief Field flags, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) ::ICSharpCode::SharpZipLib::GZip::GZipFlags  flags;

/// @brief Field state_, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_state_, put=__cordl_internal_set_state_)) ::GlobalNamespace::GZipOutputStream_OutputState  state_;

/// @brief Method CleanFilename, addr 0x9ff756c, size 0x34, virtual false, abstract: false, final false
static inline ::StringW CleanFilename(::StringW  path) ;

/// @brief Method Dispose, addr 0x9ff78d8, size 0xb8, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finish, addr 0x9ff79b8, size 0x154, virtual true, abstract: false, final false
inline void Finish() ;

/// @brief Method Flush, addr 0x9ff7990, size 0x28, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method GetLevel, addr 0x9ff74fc, size 0x18, virtual false, abstract: false, final false
inline int32_t GetLevel() ;

static inline ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream* New_ctor(::System::IO::Stream*  baseOutputStream) ;

static inline ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream* New_ctor(::System::IO::Stream*  baseOutputStream, int32_t  size) ;

/// @brief Method SetLevel, addr 0x9ff6420, size 0x88, virtual false, abstract: false, final false
inline void SetLevel(int32_t  level) ;

/// @brief Method Write, addr 0x9ff75a0, size 0x10c, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteHeader, addr 0x9ff76ac, size 0x22c, virtual false, abstract: false, final false
inline void WriteHeader() ;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32* const& __cordl_internal_get_crc() const;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32*& __cordl_internal_get_crc() ;

constexpr ::StringW const& __cordl_internal_get_fileName() const;

constexpr ::StringW& __cordl_internal_get_fileName() ;

constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags const& __cordl_internal_get_flags() const;

constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags& __cordl_internal_get_flags() ;

constexpr ::GlobalNamespace::GZipOutputStream_OutputState const& __cordl_internal_get_state_() const;

constexpr ::GlobalNamespace::GZipOutputStream_OutputState& __cordl_internal_get_state_() ;

constexpr void __cordl_internal_set_crc(::ICSharpCode::SharpZipLib::Checksum::Crc32*  value) ;

constexpr void __cordl_internal_set_fileName(::StringW  value) ;

constexpr void __cordl_internal_set_flags(::ICSharpCode::SharpZipLib::GZip::GZipFlags  value) ;

constexpr void __cordl_internal_set_state_(::GlobalNamespace::GZipOutputStream_OutputState  value) ;

/// @brief Method .ctor, addr 0x9ff74f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseOutputStream) ;

/// @brief Method .ctor, addr 0x9ff6358, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseOutputStream, int32_t  size) ;

/// @brief Method get_FileName, addr 0x9ff7514, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FileName() ;

/// @brief Method set_FileName, addr 0x9ff751c, size 0x50, virtual false, abstract: false, final false
inline void set_FileName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GZipOutputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GZipOutputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GZipOutputStream(GZipOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GZipOutputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GZipOutputStream(GZipOutputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17409};

/// @brief Field crc, offset: 0x60, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Checksum::Crc32*  ___crc;

/// @brief Field state_, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::GZipOutputStream_OutputState  ___state_;

/// @brief Field fileName, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___fileName;

/// @brief Field flags, offset: 0x78, size: 0x1, def value: None
 ::ICSharpCode::SharpZipLib::GZip::GZipFlags  ___flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::GZip::GZipOutputStream, ___crc) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::GZip::GZipOutputStream, ___state_) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::GZip::GZipOutputStream, ___fileName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::GZip::GZipOutputStream, ___flags) == 0x78, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::GZip::GZipOutputStream) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::GZip
