#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/SelectableTransitionActionListenerOnSelected.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Input/zzzz__ModioUIInput_ModioAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SelectableTransitionActionListenerOnSelected)
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class ISelectableTransition;
}
namespace Modio::Unity::UI::Components {
class IPropertyMonoBehaviourEvents;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class SelectableTransitionActionListenerOnSelected;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActionListenerOnSelected*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActionListenerOnSelected*, "Modio.Unity.UI.Components.Selectables.Transitions", "SelectableTransitionActionListenerOnSelected");
// Dependencies Modio.Unity.UI.Input.ModioUIInput::ModioAction, System.Object
namespace Modio::Unity::UI::Components::Selectables::Transitions {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.Transitions.SelectableTransitionActionListenerOnSelected
class CORDL_TYPE SelectableTransitionActionListenerOnSelected : public ::System::Object {
public:
// Declarations
/// @brief Field _inputAction, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputAction, put=__cordl_internal_set__inputAction)) ::GlobalNamespace::ModioUIInput_ModioAction  _inputAction;

/// @brief Field _onPressed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPressed, put=__cordl_internal_set__onPressed)) ::UnityEngine::Events::UnityEvent*  _onPressed;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr operator  ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept;

/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr operator  ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*() noexcept;

/// @brief Method ActionPressed, addr 0x9fc2eac, size 0x18, virtual false, abstract: false, final false
inline void ActionPressed() ;

static inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActionListenerOnSelected* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fc2ec8, size 0xac, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9fc2f78, size 0xac, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fc2f74, size 0x4, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnSelectionStateChanged, addr 0x9fc2d90, size 0x11c, virtual true, abstract: false, final true
inline void OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

/// @brief Method Start, addr 0x9fc2ec4, size 0x4, virtual true, abstract: false, final true
inline void Start() ;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction const& __cordl_internal_get__inputAction() const;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction& __cordl_internal_get__inputAction() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onPressed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onPressed() ;

constexpr void __cordl_internal_set__inputAction(::GlobalNamespace::ModioUIInput_ModioAction  value) ;

constexpr void __cordl_internal_set__onPressed(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9fc3024, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept;

/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition* i___Modio__Unity__UI__Components__Selectables__Transitions__ISelectableTransition() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectableTransitionActionListenerOnSelected() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionActionListenerOnSelected", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableTransitionActionListenerOnSelected(SelectableTransitionActionListenerOnSelected && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionActionListenerOnSelected", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableTransitionActionListenerOnSelected(SelectableTransitionActionListenerOnSelected const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27192};

/// [SerializeField]
/// @brief Field _inputAction, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::ModioUIInput_ModioAction  ____inputAction;

/// [SerializeField]
/// @brief Field _onPressed, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onPressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActionListenerOnSelected, ____inputAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActionListenerOnSelected, ____onPressed) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActionListenerOnSelected) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables::Transitions
