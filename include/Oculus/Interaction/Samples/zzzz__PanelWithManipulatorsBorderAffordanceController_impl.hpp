#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PanelWithManipulatorsBorderAffordanceController.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsBorderAffordanceController_AffordanceState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Animator_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsBorderAffordanceController_def.hpp"
#include "GlobalNamespace/zzzz__PanelHoverState_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsBorderAffordanceController_AffordanceState_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsBorderAffordanceController_RailState_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsBorderAffordanceController_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_State_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_def.hpp"
#include "Oculus/Interaction/zzzz__GrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__Grabbable_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "Oculus/Interaction/zzzz__RayInteractable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController._projectToRoundedBoxEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Transform*, float_t)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::_projectToRoundedBoxEdge)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa43bcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"_projectToRoundedBoxEdge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::Start)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0xa43beec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::OnDestroy)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa43c334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.CreateFadePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)(int32_t)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::CreateFadePoint)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa43c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"CreateFadePoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.HandlePointerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::HandlePointerEvent)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa43c6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"HandlePointerEvent", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.SetRailAnimatorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::SetRailAnimatorState)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa43c8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"SetRailAnimatorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.UpdateFadePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::UpdateFadePoints)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xa43ca18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"UpdateFadePoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.UpdateMaterialProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::UpdateMaterialProperties)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa43cef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"UpdateMaterialProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::Update)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa43d108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.HandleInteractableStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)(::Oculus::Interaction::InteractableStateChangeArgs)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::HandleInteractableStateChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa43d128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"HandleInteractableStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController.HandleStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::HandleStateChanged)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa43d170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__grabInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__grabInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabInteractable;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__grabInteractable(::UnityW<::Oculus::Interaction::GrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabInteractable = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__handGrabInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__handGrabInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractable;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__handGrabInteractable(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabInteractable = value;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractable>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__rayInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractable> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__rayInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractable;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__rayInteractable(::UnityW<::Oculus::Interaction::RayInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayInteractable = value;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__stateSignaler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateSignaler;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__stateSignaler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateSignaler;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__stateSignaler(::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateSignaler = value;
}
constexpr ::UnityW<::GlobalNamespace::PanelHoverState>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__panelHoverState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panelHoverState;
}
constexpr ::UnityW<::GlobalNamespace::PanelHoverState> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__panelHoverState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panelHoverState;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__panelHoverState(::UnityW<::GlobalNamespace::PanelHoverState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____panelHoverState = value;
}
constexpr ::UnityW<::Oculus::Interaction::Grabbable>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__grabbale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbale;
}
constexpr ::UnityW<::Oculus::Interaction::Grabbable> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__grabbale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbale;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__grabbale(::UnityW<::Oculus::Interaction::Grabbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbale = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__boneTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__boneTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneTransform;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__boneTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boneTransform = value;
}
constexpr float_t& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__cornerArcRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cornerArcRadius;
}
constexpr float_t const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__cornerArcRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cornerArcRadius;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__cornerArcRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cornerArcRadius = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__railOpacityAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____railOpacityAnimator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__railOpacityAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____railOpacityAnimator;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__railOpacityAnimator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____railOpacityAnimator = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__railOpacityTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____railOpacityTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__railOpacityTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____railOpacityTransform;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__railOpacityTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____railOpacityTransform = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__affordances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affordances;
}
constexpr ::ArrayW<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__affordances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affordances;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__affordances(::ArrayW<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____affordances = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__railRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____railRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__railRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____railRenderer;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__railRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____railRenderer = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__fadePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadePoints;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__fadePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadePoints;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__fadePoints(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadePoints = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__materialPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__materialPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialPropertyBlock;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialPropertyBlock = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>*& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>* const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__points(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____points = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__affordancesInUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affordancesInUse;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__affordancesInUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affordancesInUse;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__affordancesInUse(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____affordancesInUse = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__deletePointKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deletePointKeys;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_get__deletePointKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deletePointKeys;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::__cordl_internal_set__deletePointKeys(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deletePointKeys = value;
}
inline ::System::Nullable_1<::UnityEngine::Vector3> Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::_projectToRoundedBoxEdge(::UnityEngine::Vector3  worldSpacePoint, ::UnityEngine::Transform*  targetTransform, ::UnityEngine::Transform*  boneTransform, float_t  arcRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"_projectToRoundedBoxEdge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(nullptr, ___internal_method, worldSpacePoint, targetTransform, boneTransform, arcRadius);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::CreateFadePoint(int32_t  eventIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"CreateFadePoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventIdentifier);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::HandlePointerEvent(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"HandlePointerEvent", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::SetRailAnimatorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"SetRailAnimatorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::UpdateFadePoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"UpdateFadePoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::UpdateMaterialProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"UpdateMaterialProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::HandleInteractableStateChanged(::Oculus::Interaction::InteractableStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"HandleInteractableStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::HandleStateChanged(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController* Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController::PanelWithManipulatorsBorderAffordanceController()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::*)(int32_t)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa43c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::__cordl_internal_get_affordanceIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affordanceIndex;
}
constexpr int32_t const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::__cordl_internal_get_affordanceIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affordanceIndex;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::__cordl_internal_set_affordanceIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affordanceIndex = value;
}
constexpr bool& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::__cordl_internal_get_removeFlag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFlag;
}
constexpr bool const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::__cordl_internal_get_removeFlag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFlag;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::__cordl_internal_set_removeFlag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeFlag = value;
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::_ctor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint* Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::New_ctor(int32_t  index)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>(index));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint::PanelWithManipulatorsBorderAffordanceController_FadePoint()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance.get_AnimationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::get_AnimationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"get_AnimationState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance.set_AnimationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::*)(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::set_AnimationState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa43ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"set_AnimationState", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance.get_LastKnownPositionParentSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::get_LastKnownPositionParentSpace)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa43d330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"get_LastKnownPositionParentSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance.set_LastKnownPositionParentSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::set_LastKnownPositionParentSpace)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa43d33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"set_LastKnownPositionParentSpace", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance.get_Geometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::get_Geometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"get_Geometry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance.get_Opacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::get_Opacity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa43ced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"get_Opacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__geometry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____geometry;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__geometry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____geometry;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_set__geometry(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____geometry = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__opacityTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opacityTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__opacityTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opacityTransform;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_set__opacityTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____opacityTransform = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__animators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animators;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__animators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animators;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_set__animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animators = value;
}
constexpr ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__animationState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationState;
}
constexpr ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__animationState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationState;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_set__animationState(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationState = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__lastKnownPositionParentSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastKnownPositionParentSpace;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_get__lastKnownPositionParentSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastKnownPositionParentSpace;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::__cordl_internal_set__lastKnownPositionParentSpace(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastKnownPositionParentSpace = value;
}
inline ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::get_AnimationState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"get_AnimationState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::set_AnimationState(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"set_AnimationState", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::get_LastKnownPositionParentSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"get_LastKnownPositionParentSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::set_LastKnownPositionParentSpace(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"set_LastKnownPositionParentSpace", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::get_Geometry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"get_Geometry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::get_Opacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {"get_Opacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance* Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance::PanelWithManipulatorsBorderAffordanceController_Affordance()   {
}
