#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUIButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
CORDL_MODULE_EXPORT(ModioUIButton)
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
namespace GlobalNamespace {
struct Selectable_SelectionState;
}
namespace Modio::Unity::UI::Components::Selectables {
class IModioUISelectable_SelectableStateChangeDelegate;
}
namespace Modio::Unity::UI::Components::Selectables {
class IModioUISelectable;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables {
class ModioUIButton;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::ModioUIButton*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::ModioUIButton*, "Modio.Unity.UI.Components.Selectables", "ModioUIButton");
// Dependencies Modio.Unity.UI.Components.Selectables.IModioUISelectable::SelectionState, UnityEngine.UI.Button
namespace Modio::Unity::UI::Components::Selectables {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.ModioUIButton
class CORDL_TYPE ModioUIButton : public ::UnityEngine::UI::Button {
public:
// Declarations
 __declspec(property(get=get_State, put=set_State)) ::GlobalNamespace::IModioUISelectable_SelectionState  State;

/// @brief Field StateChanged, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_StateChanged, put=__cordl_internal_set_StateChanged)) ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  StateChanged;

/// @brief Field <State>k__BackingField, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::GlobalNamespace::IModioUISelectable_SelectionState  _State_k__BackingField;

/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr operator  ::Modio::Unity::UI::Components::Selectables::IModioUISelectable*() noexcept;

/// @brief Method DoStateTransition, addr 0x9fc1288, size 0x54, virtual true, abstract: false, final false
inline void DoStateTransition(::GlobalNamespace::Selectable_SelectionState  state, bool  instant) ;

/// @brief Method DoVisualOnlyStateTransition, addr 0x9fc12dc, size 0x10, virtual false, abstract: false, final false
inline void DoVisualOnlyStateTransition(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

static inline ::Modio::Unity::UI::Components::Selectables::ModioUIButton* New_ctor() ;

constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate* const& __cordl_internal_get_StateChanged() const;

constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*& __cordl_internal_get_StateChanged() ;

constexpr ::GlobalNamespace::IModioUISelectable_SelectionState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::GlobalNamespace::IModioUISelectable_SelectionState& __cordl_internal_get__State_k__BackingField() ;

constexpr void __cordl_internal_set_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::GlobalNamespace::IModioUISelectable_SelectionState  value) ;

/// @brief Method .ctor, addr 0x9fc12ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_StateChanged, addr 0x9fc1140, size 0x9c, virtual true, abstract: false, final true
inline void add_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method get_State, addr 0x9fc1278, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::IModioUISelectable_SelectionState get_State() ;

/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable* i___Modio__Unity__UI__Components__Selectables__IModioUISelectable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_StateChanged, addr 0x9fc11dc, size 0x9c, virtual true, abstract: false, final true
inline void remove_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0x9fc1280, size 0x8, virtual false, abstract: false, final false
inline void set_State(::GlobalNamespace::IModioUISelectable_SelectionState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIButton(ModioUIButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIButton(ModioUIButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27183};

/// [CompilerGenerated]
/// @brief Field StateChanged, offset: 0x108, size: 0x8, def value: None
 ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  ___StateChanged;

/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0x110, size: 0x4, def value: None
 ::GlobalNamespace::IModioUISelectable_SelectionState  ____State_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIButton, ___StateChanged) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIButton, ____State_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::ModioUIButton) == 0x118, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables
