#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/IEntryFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IEntryFactory)
namespace GlobalNamespace {
struct ZipEntryFactory_TimeSetting;
}
namespace ICSharpCode::SharpZipLib::Core {
class INameTransform;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class IEntryFactory;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*, "ICSharpCode.SharpZipLib.Zip", "IEntryFactory");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.IEntryFactory
class CORDL_TYPE IEntryFactory {
public:
// Declarations
 __declspec(property(get=get_FixedDateTime)) ::System::DateTime  FixedDateTime;

 __declspec(property(get=get_NameTransform, put=set_NameTransform)) ::ICSharpCode::SharpZipLib::Core::INameTransform*  NameTransform;

 __declspec(property(get=get_Setting)) ::GlobalNamespace::ZipEntryFactory_TimeSetting  Setting;

/// @brief Method MakeDirectoryEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeDirectoryEntry(::StringW  directoryName) ;

/// @brief Method MakeDirectoryEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeDirectoryEntry(::StringW  directoryName, bool  useFileSystem) ;

/// @brief Method MakeFileEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeFileEntry(::StringW  fileName) ;

/// @brief Method MakeFileEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeFileEntry(::StringW  fileName, ::StringW  entryName, bool  useFileSystem) ;

/// @brief Method MakeFileEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeFileEntry(::StringW  fileName, bool  useFileSystem) ;

/// @brief Method get_FixedDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::DateTime get_FixedDateTime() ;

/// @brief Method get_NameTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Core::INameTransform* get_NameTransform() ;

/// @brief Method get_Setting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::ZipEntryFactory_TimeSetting get_Setting() ;

/// @brief Method set_NameTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IEntryFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEntryFactory(IEntryFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17315};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ICSharpCode::SharpZipLib::Zip
