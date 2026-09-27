#pragma once
// IWYU pragma private; include "Modio/FileIO/IModioRootPathProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IModioRootPathProvider)
// Forward declare root types
namespace Modio::FileIO {
class IModioRootPathProvider;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::IModioRootPathProvider*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::IModioRootPathProvider*, "Modio.FileIO", "IModioRootPathProvider");
// Dependencies 
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.IModioRootPathProvider
class CORDL_TYPE IModioRootPathProvider {
public:
// Declarations
 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_UserPath)) ::StringW  UserPath;

/// @brief Method get_Path, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Path() ;

/// @brief Method get_UserPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_UserPath() ;

// Ctor Parameters [CppParam { name: "", ty: "IModioRootPathProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioRootPathProvider(IModioRootPathProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17671};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::FileIO
