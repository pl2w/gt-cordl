#pragma once
// IWYU pragma private; include "Modio/FileIO/WindowsRootPathProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WindowsRootPathProvider)
namespace Modio::FileIO {
class IModioRootPathProvider;
}
// Forward declare root types
namespace Modio::FileIO {
class WindowsRootPathProvider;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::WindowsRootPathProvider*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::WindowsRootPathProvider*, "Modio.FileIO", "WindowsRootPathProvider");
// Dependencies System.Object
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.WindowsRootPathProvider
class CORDL_TYPE WindowsRootPathProvider : public ::System::Object {
public:
// Declarations
/// @brief Field LegacyPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_LegacyPath, put=__cordl_internal_set_LegacyPath)) ::StringW  LegacyPath;

 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_UserPath)) ::StringW  UserPath;

/// @brief Convert operator to "::Modio::FileIO::IModioRootPathProvider"
constexpr operator  ::Modio::FileIO::IModioRootPathProvider*() noexcept;

/// @brief Method IsPublicEnvironmentVariableSet, addr 0xa054ac4, size 0x50, virtual false, abstract: false, final false
static inline bool IsPublicEnvironmentVariableSet() ;

static inline ::Modio::FileIO::WindowsRootPathProvider* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_LegacyPath() const;

constexpr ::StringW& __cordl_internal_get_LegacyPath() ;

constexpr void __cordl_internal_set_LegacyPath(::StringW  value) ;

/// @brief Method .ctor, addr 0xa054bd0, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Path, addr 0xa054b14, size 0x68, virtual true, abstract: false, final true
inline ::StringW get_Path() ;

/// @brief Method get_UserPath, addr 0xa054b7c, size 0x54, virtual true, abstract: false, final true
inline ::StringW get_UserPath() ;

/// @brief Convert to "::Modio::FileIO::IModioRootPathProvider"
constexpr ::Modio::FileIO::IModioRootPathProvider* i___Modio__FileIO__IModioRootPathProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsRootPathProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsRootPathProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsRootPathProvider(WindowsRootPathProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsRootPathProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsRootPathProvider(WindowsRootPathProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17681};

/// @brief Field LegacyPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___LegacyPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::FileIO::WindowsRootPathProvider, ___LegacyPath) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::FileIO::WindowsRootPathProvider) == 0x18, "Size mismatch!");

} // namespace end def Modio::FileIO
