#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateSelector)
namespace Oculus::Interaction {
class ActiveStateSelector___c;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ActiveStateSelector;
}
namespace Oculus::Interaction {
class ActiveStateSelector___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ActiveStateSelector*);
MARK_REF_T(::Oculus::Interaction::ActiveStateSelector___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateSelector*, "Oculus.Interaction", "ActiveStateSelector");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateSelector___c*, "Oculus.Interaction", "ActiveStateSelector/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateSelector
class CORDL_TYPE ActiveStateSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::ActiveStateSelector___c;

 __declspec(property(get=get_ActiveState, put=set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

/// @brief Field WhenSelected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelected, put=__cordl_internal_set_WhenSelected)) ::System::Action*  WhenSelected;

/// @brief Field WhenUnselected, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenUnselected, put=__cordl_internal_set_WhenUnselected)) ::System::Action*  WhenUnselected;

/// @brief Field <ActiveState>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActiveState_k__BackingField, put=__cordl_internal_set__ActiveState_k__BackingField)) ::Oculus::Interaction::IActiveState*  _ActiveState_k__BackingField;

/// @brief Field _activeState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _selecting, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__selecting, put=__cordl_internal_set__selecting)) bool  _selecting;

/// @brief Convert operator to "::Oculus::Interaction::ISelector"
constexpr operator  ::Oculus::Interaction::ISelector*() noexcept;

/// @brief Method Awake, addr 0xa40a05c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectActiveState, addr 0xa40a210, size 0xd0, virtual false, abstract: false, final false
inline void InjectActiveState(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectAllActiveStateSelector, addr 0xa40a20c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllActiveStateSelector(::Oculus::Interaction::IActiveState*  activeState) ;

static inline ::Oculus::Interaction::ActiveStateSelector* New_ctor() ;

/// @brief Method Start, addr 0xa40a0b4, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa40a0b8, size 0x154, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenSelected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenSelected() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenUnselected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenUnselected() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get__ActiveState_k__BackingField() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get__ActiveState_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr bool const& __cordl_internal_get__selecting() const;

constexpr bool& __cordl_internal_get__selecting() ;

constexpr void __cordl_internal_set_WhenSelected(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenUnselected(::System::Action*  value) ;

constexpr void __cordl_internal_set__ActiveState_k__BackingField(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__selecting(bool  value) ;

/// @brief Method .ctor, addr 0xa40a2e0, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelected, addr 0xa409dec, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUnselected, addr 0xa409f24, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenUnselected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method get_ActiveState, addr 0xa409ddc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* get_ActiveState() ;

/// @brief Convert to "::Oculus::Interaction::ISelector"
constexpr ::Oculus::Interaction::ISelector* i___Oculus__Interaction__ISelector() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelected, addr 0xa409e88, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUnselected, addr 0xa409fc0, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenUnselected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ActiveState, addr 0xa409de4, size 0x8, virtual false, abstract: false, final false
inline void set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateSelector(ActiveStateSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateSelector(ActiveStateSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15732};

/// [Tooltip("ISelector events will be raised based on state changes of this IActiveState.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// [CompilerGenerated]
/// @brief Field <ActiveState>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ____ActiveState_k__BackingField;

/// @brief Field _selecting, offset: 0x30, size: 0x1, def value: None
 bool  ____selecting;

/// [CompilerGenerated]
/// @brief Field WhenSelected, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___WhenSelected;

/// [CompilerGenerated]
/// @brief Field WhenUnselected, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___WhenUnselected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ActiveStateSelector, ____activeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateSelector, ____ActiveState_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateSelector, ____selecting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateSelector, ___WhenSelected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateSelector, ___WhenUnselected) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ActiveStateSelector) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateSelector/<>c
class CORDL_TYPE ActiveStateSelector___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::ActiveStateSelector___c*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Action*  __9__17_0;

/// @brief Field <>9__17_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_1, put=setStaticF___9__17_1)) ::System::Action*  __9__17_1;

static inline ::Oculus::Interaction::ActiveStateSelector___c* New_ctor() ;

/// @brief Method <.ctor>b__17_0, addr 0xa40a4dc, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__17_0() ;

/// @brief Method <.ctor>b__17_1, addr 0xa40a4e0, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__17_1() ;

/// @brief Method .ctor, addr 0xa40a4d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::ActiveStateSelector___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__17_0() ;

static inline ::System::Action* getStaticF___9__17_1() ;

static inline void setStaticF___9(::Oculus::Interaction::ActiveStateSelector___c*  value) ;

static inline void setStaticF___9__17_0(::System::Action*  value) ;

static inline void setStaticF___9__17_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateSelector___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateSelector___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateSelector___c(ActiveStateSelector___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateSelector___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateSelector___c(ActiveStateSelector___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15731};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ActiveStateSelector___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
