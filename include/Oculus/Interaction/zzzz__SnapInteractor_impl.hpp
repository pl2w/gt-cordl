#pragma once
// IWYU pragma private; include "Oculus/Interaction/SnapInteractor.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__SnapInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IPointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__IRigidbodyRef_def.hpp"
#include "Oculus/Interaction/zzzz__PointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEventType_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "Oculus/Interaction/zzzz__SnapInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__SnapInteractor_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.get_PointableElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IPointableElement* (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::get_PointableElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa462948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"get_PointableElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.get_Rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::get_Rigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa462950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.get_SnapPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::get_SnapPose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa461eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"get_SnapPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa462958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.get_DistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::get_DistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4629e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"get_DistanceThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.set_DistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(float_t)>(&::Oculus::Interaction::SnapInteractor::set_DistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4629f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"set_DistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4629f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa462a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::OnEnable)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa462b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa462e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.ComputeShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::ComputeShouldSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa462f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.ComputeShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::ComputeShouldUnselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa462f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.DoHoverUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::DoHoverUpdate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa462f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa46310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InteractableSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::Oculus::Interaction::SnapInteractable*)>(&::Oculus::Interaction::SnapInteractor::InteractableSet)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4632f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InteractableUnset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::Oculus::Interaction::SnapInteractable*)>(&::Oculus::Interaction::SnapInteractor::InteractableUnset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4633a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::Oculus::Interaction::SnapInteractable*)>(&::Oculus::Interaction::SnapInteractor::InteractableSelected)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa46343c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InteractableUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::Oculus::Interaction::SnapInteractable*)>(&::Oculus::Interaction::SnapInteractor::InteractableUnselected)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa463548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.HandlePointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::SnapInteractor::HandlePointerEventRaised)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa4636fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.GeneratePointerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::Oculus::Interaction::PointerEventType)>(&::Oculus::Interaction::SnapInteractor::GeneratePointerEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa463030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"GeneratePointerEvent", {}, {::i2c::type_of<::Oculus::Interaction::PointerEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.DoPreprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::DoPreprocess)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa463a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.ComputePointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::ComputePointerPose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4638b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"ComputePointerPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.TimedOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::TimedOut)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa463a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"TimedOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::SnapInteractable> (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0xa463b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InjectAllSnapInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::Oculus::Interaction::PointableElement*, ::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::SnapInteractor::InjectAllSnapInteractor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa463f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectAllSnapInteractor", {}, {::i2c::type_of<::Oculus::Interaction::PointableElement*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InjectPointableElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::Oculus::Interaction::PointableElement*)>(&::Oculus::Interaction::SnapInteractor::InjectPointableElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa463f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectPointableElement", {}, {::i2c::type_of<::Oculus::Interaction::PointableElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InjectRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::SnapInteractor::InjectRigidbody)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa463f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InjectOptionalSnapPoseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::SnapInteractor::InjectOptionalSnapPoseTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa463f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectOptionalSnapPoseTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InjectOptionalTimeOutInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(::Oculus::Interaction::SnapInteractable*)>(&::Oculus::Interaction::SnapInteractor::InjectOptionalTimeOutInteractable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa463f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectOptionalTimeOutInteractable", {}, {::i2c::type_of<::Oculus::Interaction::SnapInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor.InjectOptionaTimeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)(float_t)>(&::Oculus::Interaction::SnapInteractor::InjectOptionaTimeOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa463f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectOptionaTimeOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa463f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor._Start_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::_Start_b__20_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa463fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"<Start>b__20_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor._OnEnable_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::SnapInteractable> (::Oculus::Interaction::SnapInteractor::*)()>(&::Oculus::Interaction::SnapInteractor::_OnEnable_b__21_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa464034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"<OnEnable>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::PointableElement>& Oculus::Interaction::SnapInteractor::__cordl_internal_get__pointableElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointableElement;
}
constexpr ::UnityW<::Oculus::Interaction::PointableElement> const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__pointableElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointableElement;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__pointableElement(::UnityW<::Oculus::Interaction::PointableElement>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointableElement = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::SnapInteractor::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr float_t& Oculus::Interaction::SnapInteractor::__cordl_internal_get__distanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceThreshold;
}
constexpr float_t const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__distanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceThreshold;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__distanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceThreshold = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::SnapInteractor::__cordl_internal_get__snapPoseTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapPoseTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__snapPoseTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapPoseTransform;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__snapPoseTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapPoseTransform = value;
}
constexpr ::UnityW<::Oculus::Interaction::SnapInteractable>& Oculus::Interaction::SnapInteractor::__cordl_internal_get__defaultInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::SnapInteractable> const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__defaultInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultInteractable;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__defaultInteractable(::UnityW<::Oculus::Interaction::SnapInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultInteractable = value;
}
constexpr ::UnityW<::Oculus::Interaction::SnapInteractable>& Oculus::Interaction::SnapInteractor::__cordl_internal_get__timeOutInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOutInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::SnapInteractable> const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__timeOutInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOutInteractable;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__timeOutInteractable(::UnityW<::Oculus::Interaction::SnapInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeOutInteractable = value;
}
constexpr float_t& Oculus::Interaction::SnapInteractor::__cordl_internal_get__timeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOut;
}
constexpr float_t const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__timeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOut;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__timeOut(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeOut = value;
}
constexpr float_t& Oculus::Interaction::SnapInteractor::__cordl_internal_get__idleStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idleStarted;
}
constexpr float_t const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__idleStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idleStarted;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__idleStarted(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____idleStarted = value;
}
constexpr ::Oculus::Interaction::IMovement*& Oculus::Interaction::SnapInteractor::__cordl_internal_get__movement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movement;
}
constexpr ::Oculus::Interaction::IMovement* const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__movement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movement;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__movement(::Oculus::Interaction::IMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movement = value;
}
constexpr bool& Oculus::Interaction::SnapInteractor::__cordl_internal_get__shouldSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldSelect;
}
constexpr bool const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__shouldSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldSelect;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__shouldSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldSelect = value;
}
constexpr bool& Oculus::Interaction::SnapInteractor::__cordl_internal_get__shouldUnselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldUnselect;
}
constexpr bool const& Oculus::Interaction::SnapInteractor::__cordl_internal_get__shouldUnselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldUnselect;
}
constexpr void Oculus::Interaction::SnapInteractor::__cordl_internal_set__shouldUnselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldUnselect = value;
}
inline ::Oculus::Interaction::IPointableElement* Oculus::Interaction::SnapInteractor::get_PointableElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"get_PointableElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IPointableElement*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::SnapInteractor::get_Rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::SnapInteractor::get_SnapPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"get_SnapPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::SnapInteractor::get_DistanceThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"get_DistanceThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::set_DistanceThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"set_DistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::SnapInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::SnapInteractor::ComputeShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::SnapInteractor::ComputeShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::DoHoverUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::InteractableSet(::Oculus::Interaction::SnapInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::SnapInteractor::InteractableUnset(::Oculus::Interaction::SnapInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::SnapInteractor::InteractableSelected(::Oculus::Interaction::SnapInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::SnapInteractor::InteractableUnselected(::Oculus::Interaction::SnapInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::SnapInteractor::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::SnapInteractor::GeneratePointerEvent(::Oculus::Interaction::PointerEventType  pointerEventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"GeneratePointerEvent", {}, {::i2c::type_of<::Oculus::Interaction::PointerEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEventType);
}
inline void Oculus::Interaction::SnapInteractor::DoPreprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::SnapInteractor::ComputePointerPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"ComputePointerPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::SnapInteractor::TimedOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"TimedOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::SnapInteractable> Oculus::Interaction::SnapInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::SnapInteractable>>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::InjectAllSnapInteractor(::Oculus::Interaction::PointableElement*  pointableElement, ::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectAllSnapInteractor", {}, {::i2c::type_of<::Oculus::Interaction::PointableElement*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointableElement, rigidbody);
}
inline void Oculus::Interaction::SnapInteractor::InjectPointableElement(::Oculus::Interaction::PointableElement*  pointableElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectPointableElement", {}, {::i2c::type_of<::Oculus::Interaction::PointableElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointableElement);
}
inline void Oculus::Interaction::SnapInteractor::InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::SnapInteractor::InjectOptionalSnapPoseTransform(::UnityEngine::Transform*  snapPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectOptionalSnapPoseTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapPoint);
}
inline void Oculus::Interaction::SnapInteractor::InjectOptionalTimeOutInteractable(::Oculus::Interaction::SnapInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectOptionalTimeOutInteractable", {}, {::i2c::type_of<::Oculus::Interaction::SnapInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::SnapInteractor::InjectOptionaTimeOut(float_t  timeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"InjectOptionaTimeOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeOut);
}
inline void Oculus::Interaction::SnapInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractor::_Start_b__20_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"<Start>b__20_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::SnapInteractable> Oculus::Interaction::SnapInteractor::_OnEnable_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor*>(),
                        {"<OnEnable>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::SnapInteractable>>(this, ___internal_method);
}
inline ::Oculus::Interaction::SnapInteractor* Oculus::Interaction::SnapInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SnapInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr  Oculus::Interaction::SnapInteractor::operator ::Oculus::Interaction::IRigidbodyRef*() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* Oculus::Interaction::SnapInteractor::i___Oculus__Interaction__IRigidbodyRef() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SnapInteractor::SnapInteractor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractor___c::*)()>(&::Oculus::Interaction::SnapInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4640a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractor___c._OnEnable_b__21_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SnapInteractor___c::*)()>(&::Oculus::Interaction::SnapInteractor___c::_OnEnable_b__21_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4640ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor___c*>(),
                        {"<OnEnable>b__21_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::SnapInteractor___c::setStaticF___9(::Oculus::Interaction::SnapInteractor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::SnapInteractor___c*, "<>9", ::Oculus::Interaction::SnapInteractor___c*>(std::forward<::Oculus::Interaction::SnapInteractor___c*>(value));
}
inline ::Oculus::Interaction::SnapInteractor___c* Oculus::Interaction::SnapInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::SnapInteractor___c*, "<>9", ::Oculus::Interaction::SnapInteractor___c*>();
}
inline void Oculus::Interaction::SnapInteractor___c::setStaticF___9__21_1(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__21_1", ::Oculus::Interaction::SnapInteractor___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* Oculus::Interaction::SnapInteractor___c::getStaticF___9__21_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__21_1", ::Oculus::Interaction::SnapInteractor___c*>();
}
inline void Oculus::Interaction::SnapInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::SnapInteractor___c::_OnEnable_b__21_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractor___c*>(),
                        {"<OnEnable>b__21_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Interaction::SnapInteractor___c* Oculus::Interaction::SnapInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SnapInteractor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SnapInteractor___c::SnapInteractor___c()   {
}
