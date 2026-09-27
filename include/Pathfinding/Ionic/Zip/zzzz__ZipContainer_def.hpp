#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipContainer)
namespace Pathfinding::Ionic::Zip {
struct Zip64Option;
}
namespace Pathfinding::Ionic::Zip {
class ZipFile;
}
namespace Pathfinding::Ionic::Zip {
class ZipInputStream;
}
namespace Pathfinding::Ionic::Zip {
struct ZipOption;
}
namespace Pathfinding::Ionic::Zip {
class ZipOutputStream;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionStrategy;
}
namespace Pathfinding::Ionic::Zlib {
class ParallelDeflateOutputStream;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipContainer;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipContainer*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipContainer*, "Pathfinding.Ionic.Zip", "ZipContainer");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipContainer
class CORDL_TYPE ZipContainer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlternateEncoding)) ::System::Text::Encoding*  AlternateEncoding;

 __declspec(property(get=get_AlternateEncodingUsage)) ::Pathfinding::Ionic::Zip::ZipOption  AlternateEncodingUsage;

 __declspec(property(get=get_BufferSize)) int32_t  BufferSize;

 __declspec(property(get=get_CodecBufferSize)) int32_t  CodecBufferSize;

 __declspec(property(get=get_DefaultEncoding)) ::System::Text::Encoding*  DefaultEncoding;

 __declspec(property(get=get_ParallelDeflateMaxBufferPairs)) int32_t  ParallelDeflateMaxBufferPairs;

 __declspec(property(get=get_ParallelDeflateThreshold)) int64_t  ParallelDeflateThreshold;

 __declspec(property(get=get_ParallelDeflater, put=set_ParallelDeflater)) ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  ParallelDeflater;

 __declspec(property(get=get_Password)) ::StringW  Password;

 __declspec(property(get=get_ReadStream)) ::System::IO::Stream*  ReadStream;

 __declspec(property(get=get_Strategy)) ::Pathfinding::Ionic::Zlib::CompressionStrategy  Strategy;

 __declspec(property(get=get_UseZip64WhenSaving)) ::Pathfinding::Ionic::Zip::Zip64Option  UseZip64WhenSaving;

 __declspec(property(get=get_Zip64)) ::Pathfinding::Ionic::Zip::Zip64Option  Zip64;

 __declspec(property(get=get_ZipFile)) ::Pathfinding::Ionic::Zip::ZipFile*  ZipFile;

 __declspec(property(get=get_ZipOutputStream)) ::Pathfinding::Ionic::Zip::ZipOutputStream*  ZipOutputStream;

/// @brief Field _zf, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__zf, put=__cordl_internal_set__zf)) ::Pathfinding::Ionic::Zip::ZipFile*  _zf;

/// @brief Field _zis, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__zis, put=__cordl_internal_set__zis)) ::Pathfinding::Ionic::Zip::ZipInputStream*  _zis;

/// @brief Field _zos, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__zos, put=__cordl_internal_set__zos)) ::Pathfinding::Ionic::Zip::ZipOutputStream*  _zos;

static inline ::Pathfinding::Ionic::Zip::ZipContainer* New_ctor(::System::Object*  o) ;

constexpr ::Pathfinding::Ionic::Zip::ZipFile* const& __cordl_internal_get__zf() const;

constexpr ::Pathfinding::Ionic::Zip::ZipFile*& __cordl_internal_get__zf() ;

constexpr ::Pathfinding::Ionic::Zip::ZipInputStream* const& __cordl_internal_get__zis() const;

constexpr ::Pathfinding::Ionic::Zip::ZipInputStream*& __cordl_internal_get__zis() ;

constexpr ::Pathfinding::Ionic::Zip::ZipOutputStream* const& __cordl_internal_get__zos() const;

constexpr ::Pathfinding::Ionic::Zip::ZipOutputStream*& __cordl_internal_get__zos() ;

constexpr void __cordl_internal_set__zf(::Pathfinding::Ionic::Zip::ZipFile*  value) ;

constexpr void __cordl_internal_set__zis(::Pathfinding::Ionic::Zip::ZipInputStream*  value) ;

constexpr void __cordl_internal_set__zos(::Pathfinding::Ionic::Zip::ZipOutputStream*  value) ;

/// @brief Method .ctor, addr 0xa69f75c, size 0x1e8, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  o) ;

/// @brief Method get_AlternateEncoding, addr 0xa69eee0, size 0x2c, virtual false, abstract: false, final false
inline ::System::Text::Encoding* get_AlternateEncoding() ;

/// @brief Method get_AlternateEncodingUsage, addr 0xa69eeb8, size 0x28, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipOption get_AlternateEncodingUsage() ;

/// @brief Method get_BufferSize, addr 0xa69f9fc, size 0x58, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_CodecBufferSize, addr 0xa69fb10, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_CodecBufferSize() ;

/// @brief Method get_DefaultEncoding, addr 0xa69ef0c, size 0xb4, virtual false, abstract: false, final false
inline ::System::Text::Encoding* get_DefaultEncoding() ;

/// @brief Method get_ParallelDeflateMaxBufferPairs, addr 0xa69fae4, size 0x2c, virtual false, abstract: false, final false
inline int32_t get_ParallelDeflateMaxBufferPairs() ;

/// @brief Method get_ParallelDeflateThreshold, addr 0xa69fab8, size 0x2c, virtual false, abstract: false, final false
inline int64_t get_ParallelDeflateThreshold() ;

/// @brief Method get_ParallelDeflater, addr 0xa69fa54, size 0x3c, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream* get_ParallelDeflater() ;

/// @brief Method get_Password, addr 0xa69f954, size 0x3c, virtual false, abstract: false, final false
inline ::StringW get_Password() ;

/// @brief Method get_ReadStream, addr 0xa69fba4, size 0x2c, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_ReadStream() ;

/// @brief Method get_Strategy, addr 0xa69fb4c, size 0x2c, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::CompressionStrategy get_Strategy() ;

/// @brief Method get_UseZip64WhenSaving, addr 0xa69fb78, size 0x2c, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::Zip64Option get_UseZip64WhenSaving() ;

/// @brief Method get_Zip64, addr 0xa69f990, size 0x6c, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::Zip64Option get_Zip64() ;

/// @brief Method get_ZipFile, addr 0xa69f944, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipFile* get_ZipFile() ;

/// @brief Method get_ZipOutputStream, addr 0xa69f94c, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipOutputStream* get_ZipOutputStream() ;

/// @brief Method set_ParallelDeflater, addr 0xa69fa90, size 0x28, virtual false, abstract: false, final false
inline void set_ParallelDeflater(::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipContainer(ZipContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipContainer(ZipContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28173};

/// @brief Field _zf, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipFile*  ____zf;

/// @brief Field _zos, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipOutputStream*  ____zos;

/// @brief Field _zis, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipInputStream*  ____zis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipContainer, ____zf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipContainer, ____zos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipContainer, ____zis) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipContainer) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
