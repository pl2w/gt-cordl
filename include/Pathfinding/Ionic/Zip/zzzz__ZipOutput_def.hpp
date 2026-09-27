#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipOutput)
namespace Pathfinding::Ionic::Zip {
struct Zip64Option;
}
namespace Pathfinding::Ionic::Zip {
class ZipContainer;
}
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipOutput;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipOutput*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipOutput*, "Pathfinding.Ionic.Zip", "ZipOutput");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipOutput
class CORDL_TYPE ZipOutput : public ::System::Object {
public:
// Declarations
/// @brief Method CountEntries, addr 0xa69e558, size 0x2c0, virtual false, abstract: false, final false
static inline int32_t CountEntries(::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  _entries) ;

/// @brief Method GenCentralDirectoryFooter, addr 0xa69ea68, size 0x314, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GenCentralDirectoryFooter(int64_t  StartOfCentralDirectory, int64_t  EndOfCentralDirectory, ::Pathfinding::Ionic::Zip::Zip64Option  zip64, int32_t  entryCount, ::StringW  comment, ::Pathfinding::Ionic::Zip::ZipContainer*  container) ;

/// @brief Method GenZip64EndOfCentralDirectory, addr 0xa69e818, size 0x250, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GenZip64EndOfCentralDirectory(int64_t  StartOfCentralDirectory, int64_t  EndOfCentralDirectory, int32_t  entryCount, uint32_t  numSegments) ;

/// @brief Method GetEncoding, addr 0xa69edc8, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* GetEncoding(::Pathfinding::Ionic::Zip::ZipContainer*  container, ::StringW  t) ;

/// @brief Method WriteCentralDirectoryStructure, addr 0xa69dd2c, size 0x82c, virtual false, abstract: false, final false
static inline bool WriteCentralDirectoryStructure(::System::IO::Stream*  s, ::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  entries, uint32_t  numSegments, ::Pathfinding::Ionic::Zip::Zip64Option  zip64, ::StringW  comment, ::Pathfinding::Ionic::Zip::ZipContainer*  container) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipOutput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipOutput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipOutput(ZipOutput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipOutput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipOutput(ZipOutput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28168};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipOutput) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
