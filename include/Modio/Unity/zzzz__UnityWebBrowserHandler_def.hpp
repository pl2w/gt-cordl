#pragma once
// IWYU pragma private; include "Modio/Unity/UnityWebBrowserHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityWebBrowserHandler)
namespace Modio::Platforms {
class IWebBrowserHandler;
}
// Forward declare root types
namespace Modio::Unity {
class UnityWebBrowserHandler;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UnityWebBrowserHandler*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UnityWebBrowserHandler*, "Modio.Unity", "UnityWebBrowserHandler");
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.UnityWebBrowserHandler
class CORDL_TYPE UnityWebBrowserHandler : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Modio::Platforms::IWebBrowserHandler"
constexpr operator  ::Modio::Platforms::IWebBrowserHandler*() noexcept;

static inline ::Modio::Unity::UnityWebBrowserHandler* New_ctor() ;

/// @brief Method OpenUrl, addr 0x9f97158, size 0xc, virtual true, abstract: false, final true
inline void OpenUrl(::StringW  url) ;

/// @brief Method .ctor, addr 0x9f97164, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Platforms::IWebBrowserHandler"
constexpr ::Modio::Platforms::IWebBrowserHandler* i___Modio__Platforms__IWebBrowserHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebBrowserHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebBrowserHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebBrowserHandler(UnityWebBrowserHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebBrowserHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebBrowserHandler(UnityWebBrowserHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32076};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UnityWebBrowserHandler) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity
