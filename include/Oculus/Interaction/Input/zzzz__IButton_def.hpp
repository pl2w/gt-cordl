#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IButton)
// Forward declare root types
namespace Oculus::Interaction::Input {
class IButton;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IButton*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IButton*, "Oculus.Interaction.Input", "IButton");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IButton
class CORDL_TYPE IButton {
public:
// Declarations
/// @brief Method Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Value() ;

// Ctor Parameters [CppParam { name: "", ty: "IButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IButton(IButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16513};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
