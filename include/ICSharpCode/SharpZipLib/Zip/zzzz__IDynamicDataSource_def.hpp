#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/IDynamicDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IDynamicDataSource)
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class IDynamicDataSource;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*, "ICSharpCode.SharpZipLib.Zip", "IDynamicDataSource");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.IDynamicDataSource
class CORDL_TYPE IDynamicDataSource {
public:
// Declarations
/// @brief Method GetSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* GetSource(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "IDynamicDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDynamicDataSource(IDynamicDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17354};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ICSharpCode::SharpZipLib::Zip
