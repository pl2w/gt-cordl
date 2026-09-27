#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUIInputField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUIInputField)
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
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables {
class ModioUIInputField;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::ModioUIInputField*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::ModioUIInputField*, "Modio.Unity.UI.Components.Selectables", "ModioUIInputField");
// Dependencies Modio.Unity.UI.Components.Selectables.IModioUISelectable::SelectionState, TMPro.TMP_InputField
namespace Modio::Unity::UI::Components::Selectables {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.ModioUIInputField
class CORDL_TYPE ModioUIInputField : public ::TMPro::TMP_InputField {
public:
// Declarations
 __declspec(property(get=get_State, put=set_State)) ::GlobalNamespace::IModioUISelectable_SelectionState  State;

/// @brief Field StateChanged, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_StateChanged, put=__cordl_internal_set_StateChanged)) ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  StateChanged;

/// @brief Field <State>k__BackingField, offset 0x308, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::GlobalNamespace::IModioUISelectable_SelectionState  _State_k__BackingField;

/// @brief Field _layoutPriority, offset 0x2f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__layoutPriority, put=__cordl_internal_set__layoutPriority)) int32_t  _layoutPriority;

 __declspec(property(get=get_layoutPriority)) int32_t  layoutPriority;

/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr operator  ::Modio::Unity::UI::Components::Selectables::IModioUISelectable*() noexcept;

/// @brief Method DoStateTransition, addr 0x9fc15f0, size 0x54, virtual true, abstract: false, final false
inline void DoStateTransition(::GlobalNamespace::Selectable_SelectionState  state, bool  instant) ;

/// @brief Method DoVisualOnlyStateTransition, addr 0x9fc1644, size 0x10, virtual false, abstract: false, final false
inline void DoVisualOnlyStateTransition(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

static inline ::Modio::Unity::UI::Components::Selectables::ModioUIInputField* New_ctor() ;

/// @brief Method OnSelect, addr 0x9fc1444, size 0x1ac, virtual true, abstract: false, final false
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// [CompilerGenerated]
/// @brief Method <OnSelect>b__10_0, addr 0x9fc16b4, size 0x44, virtual false, abstract: false, final false
inline void _OnSelect_b__10_0(::StringW  s) ;

constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate* const& __cordl_internal_get_StateChanged() const;

constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*& __cordl_internal_get_StateChanged() ;

constexpr ::GlobalNamespace::IModioUISelectable_SelectionState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::GlobalNamespace::IModioUISelectable_SelectionState& __cordl_internal_get__State_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__layoutPriority() const;

constexpr int32_t& __cordl_internal_get__layoutPriority() ;

constexpr void __cordl_internal_set_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::GlobalNamespace::IModioUISelectable_SelectionState  value) ;

constexpr void __cordl_internal_set__layoutPriority(int32_t  value) ;

/// @brief Method .ctor, addr 0x9fc1654, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_StateChanged, addr 0x9fc12fc, size 0x9c, virtual true, abstract: false, final true
inline void add_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method get_State, addr 0x9fc1434, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::IModioUISelectable_SelectionState get_State() ;

/// @brief Method get_layoutPriority, addr 0x9fc12f4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_layoutPriority() ;

/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::IModioUISelectable"
constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable* i___Modio__Unity__UI__Components__Selectables__IModioUISelectable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_StateChanged, addr 0x9fc1398, size 0x9c, virtual true, abstract: false, final true
inline void remove_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0x9fc143c, size 0x8, virtual false, abstract: false, final false
inline void set_State(::GlobalNamespace::IModioUISelectable_SelectionState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIInputField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInputField", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIInputField(ModioUIInputField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInputField", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIInputField(ModioUIInputField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27184};

/// [SerializeField]
/// @brief Field _layoutPriority, offset: 0x2f8, size: 0x4, def value: None
 int32_t  ____layoutPriority;

/// [CompilerGenerated]
/// @brief Field StateChanged, offset: 0x300, size: 0x8, def value: None
 ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  ___StateChanged;

/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0x308, size: 0x4, def value: None
 ::GlobalNamespace::IModioUISelectable_SelectionState  ____State_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIInputField, ____layoutPriority) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIInputField, ___StateChanged) == 0x300, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIInputField, ____State_k__BackingField) == 0x308, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::ModioUIInputField) == 0x310, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables
