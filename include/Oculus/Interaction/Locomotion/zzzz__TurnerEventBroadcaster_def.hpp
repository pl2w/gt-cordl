#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TurnerEventBroadcaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Locomotion/zzzz__TurnerEventBroadcaster_TurnMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TurnerEventBroadcaster)
namespace GlobalNamespace {
struct TurnerEventBroadcaster_TurnMode;
}
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction::Locomotion {
class TurnerEventBroadcaster___c;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class TurnerEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
class TurnerEventBroadcaster___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*);
MARK_REF_T(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*, "Oculus.Interaction.Locomotion", "TurnerEventBroadcaster");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*, "Oculus.Interaction.Locomotion", "TurnerEventBroadcaster/<>c");
// Dependencies Oculus.Interaction.Locomotion.TurnerEventBroadcaster::TurnMode, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TurnerEventBroadcaster
class CORDL_TYPE TurnerEventBroadcaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TurnMode = ::GlobalNamespace::TurnerEventBroadcaster_TurnMode;

using __c = ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c;

 __declspec(property(get=get_Axis, put=set_Axis)) ::Oculus::Interaction::Input::IAxis1D*  Axis;

 __declspec(property(get=get_FireSnapOnUnselect, put=set_FireSnapOnUnselect)) bool  FireSnapOnUnselect;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_Interactor, put=set_Interactor)) ::Oculus::Interaction::IInteractor*  Interactor;

 __declspec(property(get=get_SmoothTurnCurve, put=set_SmoothTurnCurve)) ::UnityEngine::AnimationCurve*  SmoothTurnCurve;

 __declspec(property(get=get_SnapTurnDegrees, put=set_SnapTurnDegrees)) float_t  SnapTurnDegrees;

 __declspec(property(get=get_TurnMethod, put=set_TurnMethod)) ::GlobalNamespace::TurnerEventBroadcaster_TurnMode  TurnMethod;

/// @brief Field <Axis>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Axis_k__BackingField, put=__cordl_internal_set__Axis_k__BackingField)) ::Oculus::Interaction::Input::IAxis1D*  _Axis_k__BackingField;

/// @brief Field <Interactor>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Interactor_k__BackingField, put=__cordl_internal_set__Interactor_k__BackingField)) ::Oculus::Interaction::IInteractor*  _Interactor_k__BackingField;

/// @brief Field _axis, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::UnityW<::UnityEngine::Object>  _axis;

/// @brief Field _fireSnapOnUnselect, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__fireSnapOnUnselect, put=__cordl_internal_set__fireSnapOnUnselect)) bool  _fireSnapOnUnselect;

/// @brief Field _identifier, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__identifier, put=__cordl_internal_set__identifier)) ::Oculus::Interaction::UniqueIdentifier*  _identifier;

/// @brief Field _interactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactor, put=__cordl_internal_set__interactor)) ::UnityW<::UnityEngine::Object>  _interactor;

/// @brief Field _smoothTurnCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__smoothTurnCurve, put=__cordl_internal_set__smoothTurnCurve)) ::UnityEngine::AnimationCurve*  _smoothTurnCurve;

/// @brief Field _snapTurnDegrees, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapTurnDegrees, put=__cordl_internal_set__snapTurnDegrees)) float_t  _snapTurnDegrees;

/// @brief Field _started, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _turnMethod, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__turnMethod, put=__cordl_internal_set__turnMethod)) ::GlobalNamespace::TurnerEventBroadcaster_TurnMode  _turnMethod;

/// @brief Field _wasSelecting, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasSelecting, put=__cordl_internal_set__wasSelecting)) bool  _wasSelecting;

/// @brief Field _whenLocomotionEventRaised, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenLocomotionEventRaised, put=__cordl_internal_set__whenLocomotionEventRaised)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  _whenLocomotionEventRaised;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept;

/// @brief Method Awake, addr 0xa4d5edc, size 0x14c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandlePostprocessed, addr 0xa4d6534, size 0x2e8, virtual false, abstract: false, final false
inline void HandlePostprocessed() ;

/// @brief Method HandleStateChanged, addr 0xa4d6520, size 0x14, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  obj) ;

/// @brief Method InjectAllTurnerEventBroadcaster, addr 0xa4d6968, size 0x28, virtual false, abstract: false, final false
inline void InjectAllTurnerEventBroadcaster(::Oculus::Interaction::IInteractor*  interactor, ::Oculus::Interaction::Input::IAxis1D*  axis) ;

/// @brief Method InjectAxis, addr 0xa4d6a60, size 0xd0, virtual false, abstract: false, final false
inline void InjectAxis(::Oculus::Interaction::Input::IAxis1D*  axis) ;

/// @brief Method InjectInteractor, addr 0xa4d6990, size 0xd0, virtual false, abstract: false, final false
inline void InjectInteractor(::Oculus::Interaction::IInteractor*  interactor) ;

static inline ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4d620c, size 0x1c4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4d6054, size 0x1b8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SmoothTurn, addr 0xa4d68b4, size 0xb4, virtual false, abstract: false, final false
inline void SmoothTurn(float_t  direction) ;

/// @brief Method SnapTurn, addr 0xa4d681c, size 0x98, virtual false, abstract: false, final false
inline void SnapTurn(float_t  direction) ;

/// @brief Method Start, addr 0xa4d6028, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get__Axis_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get__Axis_k__BackingField() ;

constexpr ::Oculus::Interaction::IInteractor* const& __cordl_internal_get__Interactor_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractor*& __cordl_internal_get__Interactor_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__axis() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__axis() ;

constexpr bool const& __cordl_internal_get__fireSnapOnUnselect() const;

constexpr bool& __cordl_internal_get__fireSnapOnUnselect() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get__identifier() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get__identifier() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__smoothTurnCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__smoothTurnCurve() ;

constexpr float_t const& __cordl_internal_get__snapTurnDegrees() const;

constexpr float_t& __cordl_internal_get__snapTurnDegrees() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::GlobalNamespace::TurnerEventBroadcaster_TurnMode const& __cordl_internal_get__turnMethod() const;

constexpr ::GlobalNamespace::TurnerEventBroadcaster_TurnMode& __cordl_internal_get__turnMethod() ;

constexpr bool const& __cordl_internal_get__wasSelecting() const;

constexpr bool& __cordl_internal_get__wasSelecting() ;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get__whenLocomotionEventRaised() const;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get__whenLocomotionEventRaised() ;

constexpr void __cordl_internal_set__Axis_k__BackingField(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractor*  value) ;

constexpr void __cordl_internal_set__axis(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__fireSnapOnUnselect(bool  value) ;

constexpr void __cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value) ;

constexpr void __cordl_internal_set__interactor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__smoothTurnCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__snapTurnDegrees(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__turnMethod(::GlobalNamespace::TurnerEventBroadcaster_TurnMode  value) ;

constexpr void __cordl_internal_set__wasSelecting(bool  value) ;

constexpr void __cordl_internal_set__whenLocomotionEventRaised(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method .ctor, addr 0xa4d6b30, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenLocomotionPerformed, addr 0xa4d63d0, size 0xa8, virtual true, abstract: false, final true
inline void add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Axis, addr 0xa4d5e74, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IAxis1D* get_Axis() ;

/// @brief Method get_FireSnapOnUnselect, addr 0xa4d5eb4, size 0x8, virtual false, abstract: false, final false
inline bool get_FireSnapOnUnselect() ;

/// @brief Method get_Identifier, addr 0xa4d5ec4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Identifier() ;

/// [CompilerGenerated]
/// @brief Method get_Interactor, addr 0xa4d5e64, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractor* get_Interactor() ;

/// @brief Method get_SmoothTurnCurve, addr 0xa4d5ea4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_SmoothTurnCurve() ;

/// @brief Method get_SnapTurnDegrees, addr 0xa4d5e94, size 0x8, virtual false, abstract: false, final false
inline float_t get_SnapTurnDegrees() ;

/// @brief Method get_TurnMethod, addr 0xa4d5e84, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TurnerEventBroadcaster_TurnMode get_TurnMethod() ;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept;

/// @brief Method remove_WhenLocomotionPerformed, addr 0xa4d6478, size 0xa8, virtual true, abstract: false, final true
inline void remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Axis, addr 0xa4d5e7c, size 0x8, virtual false, abstract: false, final false
inline void set_Axis(::Oculus::Interaction::Input::IAxis1D*  value) ;

/// @brief Method set_FireSnapOnUnselect, addr 0xa4d5ebc, size 0x8, virtual false, abstract: false, final false
inline void set_FireSnapOnUnselect(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Interactor, addr 0xa4d5e6c, size 0x8, virtual false, abstract: false, final false
inline void set_Interactor(::Oculus::Interaction::IInteractor*  value) ;

/// @brief Method set_SmoothTurnCurve, addr 0xa4d5eac, size 0x8, virtual false, abstract: false, final false
inline void set_SmoothTurnCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_SnapTurnDegrees, addr 0xa4d5e9c, size 0x8, virtual false, abstract: false, final false
inline void set_SnapTurnDegrees(float_t  value) ;

/// @brief Method set_TurnMethod, addr 0xa4d5e8c, size 0x8, virtual false, abstract: false, final false
inline void set_TurnMethod(::GlobalNamespace::TurnerEventBroadcaster_TurnMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TurnerEventBroadcaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnerEventBroadcaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnerEventBroadcaster(TurnerEventBroadcaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnerEventBroadcaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnerEventBroadcaster(TurnerEventBroadcaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16305};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractor), new[] {  })]
/// [Tooltip("The interactor defines when the Locomotion events are sent based on its Select state.")]
/// @brief Field _interactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactor;

/// [CompilerGenerated]
/// @brief Field <Interactor>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractor*  ____Interactor_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// [Tooltip("Axis from -1 to 1 indicating the turning direction and velocity.")]
/// @brief Field _axis, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____axis;

/// [CompilerGenerated]
/// @brief Field <Axis>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ____Axis_k__BackingField;

/// [SerializeField]
/// [Tooltip("Snap turn fires once during Select, while Smooth fires continuously during Select.")]
/// @brief Field _turnMethod, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::TurnerEventBroadcaster_TurnMode  ____turnMethod;

/// [SerializeField]
/// [Tooltip("Degrees to instantly turn when in Snap turn mode. Note the direction is provided by the axis")]
/// @brief Field _snapTurnDegrees, offset: 0x44, size: 0x4, def value: None
 float_t  ____snapTurnDegrees;

/// [SerializeField]
/// [Tooltip("Degrees to continuously rotate during selection when in Smooth turn mode, it is remapped from the Axis value")]
/// @brief Field _smoothTurnCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____smoothTurnCurve;

/// [SerializeField]
/// [Tooltip("When enabled, snap turn happens on unselect. If false it happens on select")]
/// @brief Field _fireSnapOnUnselect, offset: 0x50, size: 0x1, def value: None
 bool  ____fireSnapOnUnselect;

/// @brief Field _identifier, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ____identifier;

/// @brief Field _wasSelecting, offset: 0x60, size: 0x1, def value: None
 bool  ____wasSelecting;

/// @brief Field _started, offset: 0x61, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _whenLocomotionEventRaised, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ____whenLocomotionEventRaised;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____interactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____Interactor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____axis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____Axis_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____turnMethod) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____snapTurnDegrees) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____smoothTurnCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____fireSnapOnUnselect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____identifier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____wasSelecting) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____started) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster, ____whenLocomotionEventRaised) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TurnerEventBroadcaster/<>c
class CORDL_TYPE TurnerEventBroadcaster___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*  __9;

/// @brief Field <>9__47_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__47_0, put=setStaticF___9__47_0)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  __9__47_0;

static inline ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c* New_ctor() ;

/// @brief Method <.ctor>b__47_0, addr 0xa4d6cd0, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__47_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_) ;

/// @brief Method .ctor, addr 0xa4d6cc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* getStaticF___9__47_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*  value) ;

static inline void setStaticF___9__47_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TurnerEventBroadcaster___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnerEventBroadcaster___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnerEventBroadcaster___c(TurnerEventBroadcaster___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnerEventBroadcaster___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnerEventBroadcaster___c(TurnerEventBroadcaster___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16304};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
