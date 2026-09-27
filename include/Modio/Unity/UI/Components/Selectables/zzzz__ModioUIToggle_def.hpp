#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUIToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
CORDL_MODULE_EXPORT(ModioUIToggle)
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
class ModioUIToggle;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::ModioUIToggle*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::ModioUIToggle*, "Modio.Unity.UI.Components.Selectables", "ModioUIToggle");
// Dependencies Modio.Unity.UI.Components.Selectables.IModioUISelectable::SelectionState, UnityEngine.UI.Toggle
namespace Modio::Unity::UI::Components::Selectables {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.ModioUIToggle
class CORDL_TYPE ModioUIToggle : public ::UnityEngine::UI::Toggle {
public:
// Declarations
 __declspec(property(get=get_State, put=set_State)) ::GlobalNamespace::IModioUISelectable_SelectionState  State;

/// @brief Field StateChanged, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_StateChanged, put=__cordl_internal_set_StateChanged)) ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  StateChanged;

/// @brief Field <State>k__BackingField, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::GlobalNamespace::IModioUISelectable_SelectionState  _State_k__BackingField;

/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr operator  ::Modio::Unity::UI::Components::Selectables::IModioUISelectable*() noexcept;

/// @brief Method Awake, addr 0x9fc2714, size 0xb0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DoStateTransition, addr 0x9fc27c4, size 0x54, virtual true, abstract: false, final false
inline void DoStateTransition(::GlobalNamespace::Selectable_SelectionState  state, bool  instant) ;

/// @brief Method FakeClicked, addr 0x9fc2818, size 0x54, virtual false, abstract: false, final false
inline void FakeClicked() ;

static inline ::Modio::Unity::UI::Components::Selectables::ModioUIToggle* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__7_0, addr 0x9fc2874, size 0x18, virtual false, abstract: false, final false
inline void _Awake_b__7_0(bool  value) ;

constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate* const& __cordl_internal_get_StateChanged() const;

constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*& __cordl_internal_get_StateChanged() ;

constexpr ::GlobalNamespace::IModioUISelectable_SelectionState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::GlobalNamespace::IModioUISelectable_SelectionState& __cordl_internal_get__State_k__BackingField() ;

constexpr void __cordl_internal_set_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::GlobalNamespace::IModioUISelectable_SelectionState  value) ;

/// @brief Method .ctor, addr 0x9fc286c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_StateChanged, addr 0x9fc25cc, size 0x9c, virtual true, abstract: false, final true
inline void add_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method get_State, addr 0x9fc2704, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::IModioUISelectable_SelectionState get_State() ;

/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable* i___Modio__Unity__UI__Components__Selectables__IModioUISelectable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_StateChanged, addr 0x9fc2668, size 0x9c, virtual true, abstract: false, final true
inline void remove_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0x9fc270c, size 0x8, virtual false, abstract: false, final false
inline void set_State(::GlobalNamespace::IModioUISelectable_SelectionState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIToggle(ModioUIToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIToggle(ModioUIToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27188};

/// [CompilerGenerated]
/// @brief Field StateChanged, offset: 0x128, size: 0x8, def value: None
 ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  ___StateChanged;

/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0x130, size: 0x4, def value: None
 ::GlobalNamespace::IModioUISelectable_SelectionState  ____State_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIToggle, ___StateChanged) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIToggle, ____State_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::ModioUIToggle) == 0x138, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables
