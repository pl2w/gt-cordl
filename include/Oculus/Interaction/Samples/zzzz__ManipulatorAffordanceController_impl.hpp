#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ManipulatorAffordanceController.hpp"
#include "UnityEngine/zzzz__Animator_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__ManipulatorAffordanceController_def.hpp"
#include "GlobalNamespace/zzzz__PanelHoverState_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_State_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_def.hpp"
#include "Oculus/Interaction/zzzz__GrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractableView_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__RayInteractable_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::ManipulatorAffordanceController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ManipulatorAffordanceController::*)()>(&::Oculus::Interaction::Samples::ManipulatorAffordanceController::Start)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xa43a8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ManipulatorAffordanceController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ManipulatorAffordanceController::*)()>(&::Oculus::Interaction::Samples::ManipulatorAffordanceController::OnDestroy)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xa43ad88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ManipulatorAffordanceController.GetAnimatorStateFromInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Samples::ManipulatorAffordanceController::*)(::Oculus::Interaction::IInteractableView*)>(&::Oculus::Interaction::Samples::ManipulatorAffordanceController::GetAnimatorStateFromInteractable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa43b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"GetAnimatorStateFromInteractable", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ManipulatorAffordanceController.GetAnimatorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Samples::ManipulatorAffordanceController::*)()>(&::Oculus::Interaction::Samples::ManipulatorAffordanceController::GetAnimatorState)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa43abb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"GetAnimatorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ManipulatorAffordanceController.HandleInteractableStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ManipulatorAffordanceController::*)(::Oculus::Interaction::InteractableStateChangeArgs)>(&::Oculus::Interaction::Samples::ManipulatorAffordanceController::HandleInteractableStateChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa43b14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"HandleInteractableStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ManipulatorAffordanceController.PanelHoverStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ManipulatorAffordanceController::*)(bool)>(&::Oculus::Interaction::Samples::ManipulatorAffordanceController::PanelHoverStateChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa43b260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"PanelHoverStateChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ManipulatorAffordanceController.HandleStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ManipulatorAffordanceController::*)(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State)>(&::Oculus::Interaction::Samples::ManipulatorAffordanceController::HandleStateChanged)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa43b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ManipulatorAffordanceController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ManipulatorAffordanceController::*)()>(&::Oculus::Interaction::Samples::ManipulatorAffordanceController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43b4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__grabInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__grabInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabInteractable;
}
constexpr void Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_set__grabInteractable(::UnityW<::Oculus::Interaction::GrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabInteractable = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__handGrabInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__handGrabInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractable;
}
constexpr void Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_set__handGrabInteractable(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabInteractable = value;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractable>& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__rayInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractable> const& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__rayInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractable;
}
constexpr void Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_set__rayInteractable(::UnityW<::Oculus::Interaction::RayInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayInteractable = value;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__stateSignaler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateSignaler;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler> const& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__stateSignaler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateSignaler;
}
constexpr void Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_set__stateSignaler(::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateSignaler = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__animators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animators;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__animators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animators;
}
constexpr void Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_set__animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animators = value;
}
constexpr ::UnityW<::GlobalNamespace::PanelHoverState>& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__panelHoverState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panelHoverState;
}
constexpr ::UnityW<::GlobalNamespace::PanelHoverState> const& Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_get__panelHoverState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panelHoverState;
}
constexpr void Oculus::Interaction::Samples::ManipulatorAffordanceController::__cordl_internal_set__panelHoverState(::UnityW<::GlobalNamespace::PanelHoverState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____panelHoverState = value;
}
inline void Oculus::Interaction::Samples::ManipulatorAffordanceController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ManipulatorAffordanceController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::Samples::ManipulatorAffordanceController::GetAnimatorStateFromInteractable(::Oculus::Interaction::IInteractableView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"GetAnimatorStateFromInteractable", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, view);
}
inline int32_t Oculus::Interaction::Samples::ManipulatorAffordanceController::GetAnimatorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"GetAnimatorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ManipulatorAffordanceController::HandleInteractableStateChanged(::Oculus::Interaction::InteractableStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"HandleInteractableStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Oculus::Interaction::Samples::ManipulatorAffordanceController::PanelHoverStateChanged(bool  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"PanelHoverStateChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void Oculus::Interaction::Samples::ManipulatorAffordanceController::HandleStateChanged(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Oculus::Interaction::Samples::ManipulatorAffordanceController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::ManipulatorAffordanceController* Oculus::Interaction::Samples::ManipulatorAffordanceController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::ManipulatorAffordanceController*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::ManipulatorAffordanceController::ManipulatorAffordanceController()   {
}
