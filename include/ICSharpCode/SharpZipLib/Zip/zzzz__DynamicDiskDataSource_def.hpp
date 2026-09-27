#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/DynamicDiskDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DynamicDiskDataSource)
namespace ICSharpCode::SharpZipLib::Zip {
class IDynamicDataSource;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class DynamicDiskDataSource;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource*, "ICSharpCode.SharpZipLib.Zip", "DynamicDiskDataSource");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.DynamicDiskDataSource
class CORDL_TYPE DynamicDiskDataSource : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource"
constexpr operator  ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*() noexcept;

/// @brief Method GetSource, addr 0x9f8ea3c, size 0x24, virtual true, abstract: false, final true
inline ::System::IO::Stream* GetSource(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource* New_ctor() ;

/// @brief Method .ctor, addr 0x9f87e64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource"
constexpr ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource* i___ICSharpCode__SharpZipLib__Zip__IDynamicDataSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicDiskDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicDiskDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicDiskDataSource(DynamicDiskDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicDiskDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicDiskDataSource(DynamicDiskDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17356};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
