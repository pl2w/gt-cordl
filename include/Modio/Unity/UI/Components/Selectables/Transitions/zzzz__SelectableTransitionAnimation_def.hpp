#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/SelectableTransitionAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SelectableTransitionAnimation)
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class ISelectableTransition;
}
namespace UnityEngine::UI {
class AnimationTriggers;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class SelectableTransitionAnimation;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation*, "Modio.Unity.UI.Components.Selectables.Transitions", "SelectableTransitionAnimation");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::Selectables::Transitions {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.Transitions.SelectableTransitionAnimation
class CORDL_TYPE SelectableTransitionAnimation : public ::System::Object {
public:
// Declarations
/// @brief Field _animationTriggers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationTriggers, put=__cordl_internal_set__animationTriggers)) ::UnityEngine::UI::AnimationTriggers*  _animationTriggers;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Animator>  _target;

/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr operator  ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*() noexcept;

static inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation* New_ctor() ;

/// @brief Method OnSelectionStateChanged, addr 0x9fc311c, size 0x1dc, virtual true, abstract: false, final true
inline void OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

constexpr ::UnityEngine::UI::AnimationTriggers* const& __cordl_internal_get__animationTriggers() const;

constexpr ::UnityEngine::UI::AnimationTriggers*& __cordl_internal_get__animationTriggers() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__animationTriggers(::UnityEngine::UI::AnimationTriggers*  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Animator>  value) ;

/// @brief Method .ctor, addr 0x9fc32f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition* i___Modio__Unity__UI__Components__Selectables__Transitions__ISelectableTransition() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectableTransitionAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionAnimation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableTransitionAnimation(SelectableTransitionAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionAnimation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableTransitionAnimation(SelectableTransitionAnimation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27194};

/// [SerializeField]
/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____target;

/// [SerializeField]
/// @brief Field _animationTriggers, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UI::AnimationTriggers*  ____animationTriggers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation, ____animationTriggers) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionAnimation) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables::Transitions
