#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUISelectableTransitions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/Selectables/Transitions/zzzz__ISelectableTransition_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__ModioUISelectableTransitions_ToggleFilter_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__IPropertyMonoBehaviourEvents_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModioUISelectableTransitions)
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
namespace GlobalNamespace {
struct ModioUISelectableTransitions_ToggleFilter;
}
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class ISelectableTransition;
}
namespace Modio::Unity::UI::Components::Selectables {
class IModioUISelectable;
}
namespace Modio::Unity::UI::Components::Selectables {
class ModioUISelectableTransitions___c;
}
namespace Modio::Unity::UI::Components::Selectables {
class ModioUIToggle;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables {
class ModioUISelectableTransitions;
}
namespace Modio::Unity::UI::Components::Selectables {
class ModioUISelectableTransitions___c;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions*);
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions___c*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions*, "Modio.Unity.UI.Components.Selectables", "ModioUISelectableTransitions");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions___c*, "Modio.Unity.UI.Components.Selectables", "ModioUISelectableTransitions/<>c");
// Dependencies Modio.Unity.UI.Components.IPropertyMonoBehaviourEvents, Modio.Unity.UI.Components.Selectables.ModioUISelectableTransitions::ToggleFilter, Modio.Unity.UI.Components.Selectables.Transitions.ISelectableTransition, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components::Selectables {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.ModioUISelectableTransitions
class CORDL_TYPE ModioUISelectableTransitions : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ToggleFilter = ::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter;

using __c = ::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions___c;

/// @brief Field _monoBehaviourEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__monoBehaviourEvents, put=__cordl_internal_set__monoBehaviourEvents)) ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>  _monoBehaviourEvents;

/// @brief Field _owner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__owner, put=__cordl_internal_set__owner)) ::Modio::Unity::UI::Components::Selectables::IModioUISelectable*  _owner;

/// @brief Field _toggle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  _toggle;

/// @brief Field _toggleFilter, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__toggleFilter, put=__cordl_internal_set__toggleFilter)) ::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter  _toggleFilter;

/// @brief Field _transitions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transitions, put=__cordl_internal_set__transitions)) ::ArrayW<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>  _transitions;

/// @brief Method Awake, addr 0x9fc16f8, size 0x388, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fc2214, size 0x220, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9fc1ff4, size 0x220, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fc1b64, size 0x220, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSelectionStateChanged, addr 0x9fc1d84, size 0x270, virtual false, abstract: false, final false
inline void OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

/// @brief Method OnSwappedToController, addr 0x9fc2434, size 0xc4, virtual false, abstract: false, final false
inline void OnSwappedToController(bool  isController) ;

/// @brief Method Start, addr 0x9fc1a80, size 0xe4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*> const& __cordl_internal_get__monoBehaviourEvents() const;

constexpr ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>& __cordl_internal_get__monoBehaviourEvents() ;

constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable* const& __cordl_internal_get__owner() const;

constexpr ::Modio::Unity::UI::Components::Selectables::IModioUISelectable*& __cordl_internal_get__owner() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>& __cordl_internal_get__toggle() ;

constexpr ::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter const& __cordl_internal_get__toggleFilter() const;

constexpr ::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter& __cordl_internal_get__toggleFilter() ;

constexpr ::ArrayW<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*> const& __cordl_internal_get__transitions() const;

constexpr ::ArrayW<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>& __cordl_internal_get__transitions() ;

constexpr void __cordl_internal_set__monoBehaviourEvents(::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>  value) ;

constexpr void __cordl_internal_set__owner(::Modio::Unity::UI::Components::Selectables::IModioUISelectable*  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  value) ;

constexpr void __cordl_internal_set__toggleFilter(::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter  value) ;

constexpr void __cordl_internal_set__transitions(::ArrayW<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>  value) ;

/// @brief Method .ctor, addr 0x9fc24f8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISelectableTransitions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISelectableTransitions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISelectableTransitions(ModioUISelectableTransitions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISelectableTransitions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISelectableTransitions(ModioUISelectableTransitions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27187};

/// [SerializeField]
/// [Tooltip("Use to limit transitions to a toggle value.\ne.g. \"Only On\" will only trigger if the toggle is on. ")]
/// @brief Field _toggleFilter, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ModioUISelectableTransitions_ToggleFilter  ____toggleFilter;

/// [SerializeReference]
/// @brief Field _transitions, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*>  ____transitions;

/// @brief Field _monoBehaviourEvents, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>  ____monoBehaviourEvents;

/// @brief Field _owner, offset: 0x38, size: 0x8, def value: None
 ::Modio::Unity::UI::Components::Selectables::IModioUISelectable*  ____owner;

/// @brief Field _toggle, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  ____toggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions, ____toggleFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions, ____transitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions, ____monoBehaviourEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions, ____owner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions, ____toggle) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions) == 0x48, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Components::Selectables {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.ModioUISelectableTransitions/<>c
class CORDL_TYPE ModioUISelectableTransitions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_2<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*,bool>*  __9__6_0;

static inline ::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions___c* New_ctor() ;

/// @brief Method <Awake>b__6_0, addr 0x9fc2578, size 0x54, virtual false, abstract: false, final false
inline bool _Awake_b__6_0(::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*  property) ;

/// @brief Method .ctor, addr 0x9fc2570, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*,bool>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions___c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_2<::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISelectableTransitions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISelectableTransitions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISelectableTransitions___c(ModioUISelectableTransitions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISelectableTransitions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISelectableTransitions___c(ModioUISelectableTransitions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27186};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::ModioUISelectableTransitions___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables
