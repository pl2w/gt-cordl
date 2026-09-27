#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportProceduralArcVisual.hpp"
#include "Oculus/Interaction/zzzz__TubePoint_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportProceduralArcVisual_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__IReticleData_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractable_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__PinchPointerVisual_def.hpp"
#include "Oculus/Interaction/zzzz__TubeRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.get_ArcPointsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::get_ArcPointsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cfadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"get_ArcPointsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.set_ArcPointsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(int32_t)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::set_ArcPointsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cfae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"set_ArcPointsCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.get_NoDestinationTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::get_NoDestinationTint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4cfaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"get_NoDestinationTint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.set_NoDestinationTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::set_NoDestinationTint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4cfaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"set_NoDestinationTint", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4cfb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::Start)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4cfb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::OnEnable)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xa4cfbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::OnDisable)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xa4cfea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.HandleInteractableSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::HandleInteractableSet)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4d0160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"HandleInteractableSet", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.HandleInteractableUnset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::HandleInteractableUnset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4d0214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"HandleInteractableUnset", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.HandleInteractorStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::HandleInteractorStateChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4d0220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"HandleInteractorStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.HandleInteractorPostProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::HandleInteractorPostProcessed)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xa4d0248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"HandleInteractorPostProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.UpdatePointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::UnityEngine::Color, ::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::UpdatePointer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa4d0ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"UpdatePointer", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.UpdateVisualArcPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::UpdateVisualArcPoints)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0xa4d04e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"UpdateVisualArcPoints", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.EvaluateBezierArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::EvaluateBezierArc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4d0c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"EvaluateBezierArc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.CalculateMidpointFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::CalculateMidpointFactor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4d0c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"CalculateMidpointFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.InjectAllTeleportProceduralArcVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::Oculus::Interaction::Locomotion::TeleportInteractor*)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectAllTeleportProceduralArcVisual)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectAllTeleportProceduralArcVisual", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.InjectTeleportInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::Oculus::Interaction::Locomotion::TeleportInteractor*)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectTeleportInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectTeleportInteractor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.InjectOptionalProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectOptionalProgress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4d0d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectOptionalProgress", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.InjectOptionalPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::Oculus::Interaction::PinchPointerVisual*)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectOptionalPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectOptionalPointer", {}, {::i2c::type_of<::Oculus::Interaction::PinchPointerVisual*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual.InjectOptionalPointerAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectOptionalPointerAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectOptionalPointerAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4d0de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor> const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__interactor(::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactor = value;
}
constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__tubeRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tubeRenderer;
}
constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__tubeRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tubeRenderer;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__tubeRenderer(::UnityW<::Oculus::Interaction::TubeRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tubeRenderer = value;
}
constexpr ::UnityW<::Oculus::Interaction::PinchPointerVisual>& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__pointer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointer;
}
constexpr ::UnityW<::Oculus::Interaction::PinchPointerVisual> const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__pointer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointer;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__pointer(::UnityW<::Oculus::Interaction::PinchPointerVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__pointerAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__pointerAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerAnchor;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__pointerAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__progress(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progress = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set_Progress(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Progress = value;
}
constexpr int32_t& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__arcPointsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcPointsCount;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__arcPointsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcPointsCount;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__arcPointsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arcPointsCount = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__noDestinationTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noDestinationTint;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__noDestinationTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noDestinationTint;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__noDestinationTint(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noDestinationTint = value;
}
constexpr ::ArrayW<::Oculus::Interaction::TubePoint>& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__arcPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcPoints;
}
constexpr ::ArrayW<::Oculus::Interaction::TubePoint> const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__arcPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcPoints;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__arcPoints(::ArrayW<::Oculus::Interaction::TubePoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arcPoints = value;
}
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData*& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__reticleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reticleData;
}
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__reticleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reticleData;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__reticleData(::Oculus::Interaction::DistanceReticles::IReticleData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reticleData = value;
}
constexpr bool& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline int32_t Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::get_ArcPointsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"get_ArcPointsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::set_ArcPointsCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"set_ArcPointsCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::get_NoDestinationTint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"get_NoDestinationTint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::set_NoDestinationTint(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"set_NoDestinationTint", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::HandleInteractableSet(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"HandleInteractableSet", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::HandleInteractableUnset(::Oculus::Interaction::Locomotion::TeleportInteractable*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"HandleInteractableUnset", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::HandleInteractorStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"HandleInteractorStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateChange);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::HandleInteractorPostProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"HandleInteractorPostProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::UpdatePointer(::UnityEngine::Color  tint, ::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"UpdatePointer", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tint, target);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::UpdateVisualArcPoints(::UnityEngine::Pose  origin, ::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"UpdateVisualArcPoints", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, target);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::EvaluateBezierArc(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  middle, ::UnityEngine::Vector3  end, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"EvaluateBezierArc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, start, middle, end, t);
}
inline float_t Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::CalculateMidpointFactor(float_t  pitchDot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"CalculateMidpointFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pitchDot);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectAllTeleportProceduralArcVisual(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectAllTeleportProceduralArcVisual", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectTeleportInteractor(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectTeleportInteractor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectOptionalProgress(::Oculus::Interaction::Input::IAxis1D*  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectOptionalProgress", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectOptionalPointer(::Oculus::Interaction::PinchPointerVisual*  pointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectOptionalPointer", {}, {::i2c::type_of<::Oculus::Interaction::PinchPointerVisual*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::InjectOptionalPointerAnchor(::UnityEngine::Transform*  pointerAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {"InjectOptionalPointerAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerAnchor);
}
inline void Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual* Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual::TeleportProceduralArcVisual()   {
}
