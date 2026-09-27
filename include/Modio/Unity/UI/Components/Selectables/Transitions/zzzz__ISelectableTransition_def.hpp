#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/ISelectableTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISelectableTransition)
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class ISelectableTransition;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*, "Modio.Unity.UI.Components.Selectables.Transitions", "ISelectableTransition");
// Dependencies 
namespace Modio::Unity::UI::Components::Selectables::Transitions {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.Transitions.ISelectableTransition
class CORDL_TYPE ISelectableTransition {
public:
// Declarations
/// @brief Method OnSelectionStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

// Ctor Parameters [CppParam { name: "", ty: "ISelectableTransition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISelectableTransition(ISelectableTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27191};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components::Selectables::Transitions
