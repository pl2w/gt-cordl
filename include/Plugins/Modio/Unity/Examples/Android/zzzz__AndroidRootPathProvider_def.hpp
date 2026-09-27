#pragma once
// IWYU pragma private; include "Plugins/Modio/Unity/Examples/Android/AndroidRootPathProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AndroidRootPathProvider)
namespace Modio::FileIO {
class IModioRootPathProvider;
}
// Forward declare root types
namespace Plugins::Modio::Unity::Examples::Android {
class AndroidRootPathProvider;
}
// Write type traits
MARK_REF_T(::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider*);
DEFINE_IL2CPP_CLASS(::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider*, "Plugins.Modio.Unity.Examples.Android", "AndroidRootPathProvider");
// Dependencies System.Object
namespace Plugins::Modio::Unity::Examples::Android {
// Is value type: false
// CS Name: Plugins.Modio.Unity.Examples.Android.AndroidRootPathProvider
class CORDL_TYPE AndroidRootPathProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_UserPath)) ::StringW  UserPath;

/// @brief Convert operator to "::Modio::FileIO::IModioRootPathProvider"
constexpr operator  ::Modio::FileIO::IModioRootPathProvider*() noexcept;

static inline ::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider* New_ctor() ;

/// @brief Method .ctor, addr 0x9f9d1f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Path, addr 0x9f9d178, size 0x74, virtual true, abstract: false, final true
inline ::StringW get_Path() ;

/// @brief Method get_UserPath, addr 0x9f9d1ec, size 0x4, virtual true, abstract: false, final true
inline ::StringW get_UserPath() ;

/// @brief Convert to "::Modio::FileIO::IModioRootPathProvider"
constexpr ::Modio::FileIO::IModioRootPathProvider* i___Modio__FileIO__IModioRootPathProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidRootPathProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidRootPathProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidRootPathProvider(AndroidRootPathProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidRootPathProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidRootPathProvider(AndroidRootPathProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33002};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider) == 0x10, "Size mismatch!");

} // namespace end def Plugins::Modio::Unity::Examples::Android
