#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/SelectableTransitionActive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SelectableTransitionActive)
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class ISelectableTransition;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class SelectableTransitionActive;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive*, "Modio.Unity.UI.Components.Selectables.Transitions", "SelectableTransitionActive");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::Selectables::Transitions {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.Transitions.SelectableTransitionActive
class CORDL_TYPE SelectableTransitionActive : public ::System::Object {
public:
// Declarations
/// @brief Field _disabled, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__disabled, put=__cordl_internal_set__disabled)) bool  _disabled;

/// @brief Field _highlighted, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__highlighted, put=__cordl_internal_set__highlighted)) bool  _highlighted;

/// @brief Field _normal, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__normal, put=__cordl_internal_set__normal)) bool  _normal;

/// @brief Field _pressed, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get__pressed, put=__cordl_internal_set__pressed)) bool  _pressed;

/// @brief Field _selected, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get__selected, put=__cordl_internal_set__selected)) bool  _selected;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::GameObject>  _target;

/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr operator  ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*() noexcept;

static inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive* New_ctor() ;

/// @brief Method OnSelectionStateChanged, addr 0x9fc302c, size 0xe8, virtual true, abstract: false, final true
inline void OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

constexpr bool const& __cordl_internal_get__disabled() const;

constexpr bool& __cordl_internal_get__disabled() ;

constexpr bool const& __cordl_internal_get__highlighted() const;

constexpr bool& __cordl_internal_get__highlighted() ;

constexpr bool const& __cordl_internal_get__normal() const;

constexpr bool& __cordl_internal_get__normal() ;

constexpr bool const& __cordl_internal_get__pressed() const;

constexpr bool& __cordl_internal_get__pressed() ;

constexpr bool const& __cordl_internal_get__selected() const;

constexpr bool& __cordl_internal_get__selected() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__disabled(bool  value) ;

constexpr void __cordl_internal_set__highlighted(bool  value) ;

constexpr void __cordl_internal_set__normal(bool  value) ;

constexpr void __cordl_internal_set__pressed(bool  value) ;

constexpr void __cordl_internal_set__selected(bool  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc3114, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition* i___Modio__Unity__UI__Components__Selectables__Transitions__ISelectableTransition() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectableTransitionActive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionActive", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableTransitionActive(SelectableTransitionActive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionActive", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableTransitionActive(SelectableTransitionActive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27193};

/// [SerializeField]
/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____target;

/// [SerializeField]
/// @brief Field _normal, offset: 0x18, size: 0x1, def value: None
 bool  ____normal;

/// [SerializeField]
/// @brief Field _highlighted, offset: 0x19, size: 0x1, def value: None
 bool  ____highlighted;

/// [SerializeField]
/// @brief Field _pressed, offset: 0x1a, size: 0x1, def value: None
 bool  ____pressed;

/// [SerializeField]
/// @brief Field _selected, offset: 0x1b, size: 0x1, def value: None
 bool  ____selected;

/// [SerializeField]
/// @brief Field _disabled, offset: 0x1c, size: 0x1, def value: None
 bool  ____disabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive, ____normal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive, ____highlighted) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive, ____pressed) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive, ____selected) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive, ____disabled) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionActive) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables::Transitions
