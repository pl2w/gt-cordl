#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/SelectableTransitionSpriteSwap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_def.hpp"
CORDL_MODULE_EXPORT(SelectableTransitionSpriteSwap)
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class ISelectableTransition;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class SelectableTransitionSpriteSwap;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap*, "Modio.Unity.UI.Components.Selectables.Transitions", "SelectableTransitionSpriteSwap");
// Dependencies System.Object, UnityEngine.UI.SpriteState
namespace Modio::Unity::UI::Components::Selectables::Transitions {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.Transitions.SelectableTransitionSpriteSwap
class CORDL_TYPE SelectableTransitionSpriteSwap : public ::System::Object {
public:
// Declarations
/// @brief Field _defaultSprite, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultSprite, put=__cordl_internal_set__defaultSprite)) ::UnityW<::UnityEngine::Sprite>  _defaultSprite;

/// @brief Field _isInitialised, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialised, put=__cordl_internal_set__isInitialised)) bool  _isInitialised;

/// @brief Field _overrideDefault, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideDefault, put=__cordl_internal_set__overrideDefault)) ::UnityW<::UnityEngine::Sprite>  _overrideDefault;

/// @brief Field _spriteState, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get__spriteState, put=__cordl_internal_set__spriteState)) ::UnityEngine::UI::SpriteState  _spriteState;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::UI::Image>  _target;

/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr operator  ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*() noexcept;

static inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap* New_ctor() ;

/// @brief Method OnSelectionStateChanged, addr 0x9fc3868, size 0x14c, virtual true, abstract: false, final true
inline void OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__defaultSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__defaultSprite() ;

constexpr bool const& __cordl_internal_get__isInitialised() const;

constexpr bool& __cordl_internal_get__isInitialised() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__overrideDefault() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__overrideDefault() ;

constexpr ::UnityEngine::UI::SpriteState const& __cordl_internal_get__spriteState() const;

constexpr ::UnityEngine::UI::SpriteState& __cordl_internal_get__spriteState() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__defaultSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__isInitialised(bool  value) ;

constexpr void __cordl_internal_set__overrideDefault(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__spriteState(::UnityEngine::UI::SpriteState  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x9fc39b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition* i___Modio__Unity__UI__Components__Selectables__Transitions__ISelectableTransition() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectableTransitionSpriteSwap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionSpriteSwap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableTransitionSpriteSwap(SelectableTransitionSpriteSwap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionSpriteSwap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableTransitionSpriteSwap(SelectableTransitionSpriteSwap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27197};

/// [SerializeField]
/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____target;

/// [SerializeField]
/// @brief Field _spriteState, offset: 0x18, size: 0x20, def value: None
 ::UnityEngine::UI::SpriteState  ____spriteState;

/// [SerializeField]
/// @brief Field _overrideDefault, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____overrideDefault;

/// @brief Field _isInitialised, offset: 0x40, size: 0x1, def value: None
 bool  ____isInitialised;

/// @brief Field _defaultSprite, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____defaultSprite;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap, ____spriteState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap, ____overrideDefault) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap, ____isInitialised) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap, ____defaultSprite) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionSpriteSwap) == 0x50, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables::Transitions
