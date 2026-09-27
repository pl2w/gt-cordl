#pragma once
// IWYU pragma private; include "Modio/Customizations/IWssAuthPrompter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IWssAuthPrompter)
// Forward declare root types
namespace Modio::Customizations {
class IWssAuthPrompter;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::IWssAuthPrompter*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::IWssAuthPrompter*, "Modio.Customizations", "IWssAuthPrompter");
// Dependencies 
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.IWssAuthPrompter
class CORDL_TYPE IWssAuthPrompter {
public:
// Declarations
/// @brief Method ShowPrompt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ShowPrompt(::StringW  url, ::StringW  code) ;

// Ctor Parameters [CppParam { name: "", ty: "IWssAuthPrompter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWssAuthPrompter(IWssAuthPrompter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17751};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Customizations
