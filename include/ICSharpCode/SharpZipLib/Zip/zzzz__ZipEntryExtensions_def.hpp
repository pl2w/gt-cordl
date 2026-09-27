#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEntryExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ZipEntryExtensions)
namespace ICSharpCode::SharpZipLib::Zip {
struct GeneralBitFlags;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntryExtensions;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions*, "ICSharpCode.SharpZipLib.Zip", "ZipEntryExtensions");
// [Extension]
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipEntryExtensions
class CORDL_TYPE ZipEntryExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method HasFlag, addr 0x9f7f9f4, size 0x1c, virtual false, abstract: false, final false
static inline bool HasFlag(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  flag) ;

/// [Extension]
/// @brief Method SetFlag, addr 0x9f7fa1c, size 0x34, virtual false, abstract: false, final false
static inline void SetFlag(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  flag, bool  enabled) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipEntryExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipEntryExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipEntryExtensions(ZipEntryExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipEntryExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipEntryExtensions(ZipEntryExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17326};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
