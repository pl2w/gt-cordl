#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PanelWithManipulatorsStateSignaler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PanelWithManipulatorsStateSignaler)
namespace GlobalNamespace {
struct PanelWithManipulatorsStateSignaler_State;
}
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsStateSignaler___c;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsStateSignaler;
}
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsStateSignaler___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*);
MARK_REF_T(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*, "Oculus.Interaction.Samples", "PanelWithManipulatorsStateSignaler");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*, "Oculus.Interaction.Samples", "PanelWithManipulatorsStateSignaler/<>c");
// Dependencies Oculus.Interaction.Samples.PanelWithManipulatorsStateSignaler::State, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PanelWithManipulatorsStateSignaler
class CORDL_TYPE PanelWithManipulatorsStateSignaler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State;

using __c = ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c;

 __declspec(property(get=get_CurrentState, put=set_CurrentState)) ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  CurrentState;

/// @brief Field WhenStateChanged, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenStateChanged, put=__cordl_internal_set_WhenStateChanged)) ::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  WhenStateChanged;

/// @brief Field _state, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  _state;

static inline ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler* New_ctor() ;

constexpr ::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>* const& __cordl_internal_get_WhenStateChanged() const;

constexpr ::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*& __cordl_internal_get_WhenStateChanged() ;

constexpr ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set_WhenStateChanged(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  value) ;

/// @brief Method .ctor, addr 0xa43d360, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenStateChanged, addr 0xa43acd8, size 0xb0, virtual false, abstract: false, final false
inline void add_WhenStateChanged(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  value) ;

/// @brief Method get_CurrentState, addr 0xa43d358, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State get_CurrentState() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenStateChanged, addr 0xa43aff0, size 0xb0, virtual false, abstract: false, final false
inline void remove_WhenStateChanged(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  value) ;

/// @brief Method set_CurrentState, addr 0xa43b22c, size 0x34, virtual false, abstract: false, final false
inline void set_CurrentState(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelWithManipulatorsStateSignaler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsStateSignaler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelWithManipulatorsStateSignaler(PanelWithManipulatorsStateSignaler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsStateSignaler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelWithManipulatorsStateSignaler(PanelWithManipulatorsStateSignaler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28324};

/// [CompilerGenerated]
/// @brief Field WhenStateChanged, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  ___WhenStateChanged;

/// @brief Field _state, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler, ___WhenStateChanged) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler, ____state) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PanelWithManipulatorsStateSignaler/<>c
class CORDL_TYPE PanelWithManipulatorsStateSignaler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  __9__8_0;

static inline ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c* New_ctor() ;

/// @brief Method <.ctor>b__8_0, addr 0xa43d4c8, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__8_0(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  newState) ;

/// @brief Method .ctor, addr 0xa43d4c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c* getStaticF___9() ;

static inline ::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*  value) ;

static inline void setStaticF___9__8_0(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelWithManipulatorsStateSignaler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsStateSignaler___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelWithManipulatorsStateSignaler___c(PanelWithManipulatorsStateSignaler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsStateSignaler___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelWithManipulatorsStateSignaler___c(PanelWithManipulatorsStateSignaler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28323};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
