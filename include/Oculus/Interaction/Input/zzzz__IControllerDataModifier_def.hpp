#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IControllerDataModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerDataModifier)
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class IControllerDataModifier;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IControllerDataModifier*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IControllerDataModifier*, "Oculus.Interaction.Input", "IControllerDataModifier");
// [Obsolete]
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IControllerDataModifier
class CORDL_TYPE IControllerDataModifier {
public:
// Declarations
/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::Oculus::Interaction::Input::Handedness  handedness) ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerDataModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerDataModifier(IControllerDataModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
