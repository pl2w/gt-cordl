#pragma once
// IWYU pragma private; include "Modio/Unity/UnityRootPathProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityRootPathProvider)
namespace Modio::FileIO {
class IModioRootPathProvider;
}
// Forward declare root types
namespace Modio::Unity {
class UnityRootPathProvider;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UnityRootPathProvider*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UnityRootPathProvider*, "Modio.Unity", "UnityRootPathProvider");
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.UnityRootPathProvider
class CORDL_TYPE UnityRootPathProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_UserPath)) ::StringW  UserPath;

/// @brief Convert operator to "::Modio::FileIO::IModioRootPathProvider"
constexpr operator  ::Modio::FileIO::IModioRootPathProvider*() noexcept;

static inline ::Modio::Unity::UnityRootPathProvider* New_ctor() ;

/// @brief Method .ctor, addr 0x9f97150, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Path, addr 0x9f97060, size 0x50, virtual true, abstract: false, final true
inline ::StringW get_Path() ;

/// @brief Method get_UserPath, addr 0x9f970b0, size 0xa0, virtual true, abstract: false, final true
inline ::StringW get_UserPath() ;

/// @brief Convert to "::Modio::FileIO::IModioRootPathProvider"
constexpr ::Modio::FileIO::IModioRootPathProvider* i___Modio__FileIO__IModioRootPathProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityRootPathProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityRootPathProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityRootPathProvider(UnityRootPathProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityRootPathProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityRootPathProvider(UnityRootPathProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32075};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UnityRootPathProvider) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity
