#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IUsage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUsage)
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class IUsage;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IUsage*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IUsage*, "Oculus.Interaction.Input", "IUsage");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IUsage
class CORDL_TYPE IUsage {
public:
// Declarations
/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

// Ctor Parameters [CppParam { name: "", ty: "IUsage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUsage(IUsage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
