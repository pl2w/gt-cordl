#pragma once
// IWYU pragma private; include "Modio/FileIO/DefaultRootPathProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DefaultRootPathProvider)
namespace Modio::FileIO {
class IModioRootPathProvider;
}
// Forward declare root types
namespace Modio::FileIO {
class DefaultRootPathProvider;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::DefaultRootPathProvider*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::DefaultRootPathProvider*, "Modio.FileIO", "DefaultRootPathProvider");
// Dependencies System.Object
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.DefaultRootPathProvider
class CORDL_TYPE DefaultRootPathProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_UserPath)) ::StringW  UserPath;

/// @brief Convert operator to "::Modio::FileIO::IModioRootPathProvider"
constexpr operator  ::Modio::FileIO::IModioRootPathProvider*() noexcept;

static inline ::Modio::FileIO::DefaultRootPathProvider* New_ctor() ;

/// @brief Method .ctor, addr 0xa053a10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Path, addr 0xa0539b0, size 0x54, virtual true, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_UserPath, addr 0xa053a04, size 0xc, virtual true, abstract: false, final true
inline ::StringW get_UserPath() ;

/// @brief Convert to "::Modio::FileIO::IModioRootPathProvider"
constexpr ::Modio::FileIO::IModioRootPathProvider* i___Modio__FileIO__IModioRootPathProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultRootPathProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultRootPathProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultRootPathProvider(DefaultRootPathProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultRootPathProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultRootPathProvider(DefaultRootPathProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::FileIO::DefaultRootPathProvider) == 0x10, "Size mismatch!");

} // namespace end def Modio::FileIO
