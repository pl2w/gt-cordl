#pragma once
// IWYU pragma private; include "Modio/Platforms/IWebBrowserHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IWebBrowserHandler)
// Forward declare root types
namespace Modio::Platforms {
class IWebBrowserHandler;
}
// Write type traits
MARK_REF_T(::Modio::Platforms::IWebBrowserHandler*);
DEFINE_IL2CPP_CLASS(::Modio::Platforms::IWebBrowserHandler*, "Modio.Platforms", "IWebBrowserHandler");
// Dependencies 
namespace Modio::Platforms {
// Is value type: false
// CS Name: Modio.Platforms.IWebBrowserHandler
class CORDL_TYPE IWebBrowserHandler {
public:
// Declarations
/// @brief Method OpenUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OpenUrl(::StringW  url) ;

// Ctor Parameters [CppParam { name: "", ty: "IWebBrowserHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebBrowserHandler(IWebBrowserHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17559};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Platforms
