#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceGrabInteractor.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__DistanceGrabInteractor_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IThrowVelocityCalculator_def.hpp"
#include "Oculus/Interaction/zzzz__DistanceGrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__DistantCandidateComputer_2_def.hpp"
#include "Oculus/Interaction/zzzz__IDistanceInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IRelativeToRef_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.get_VelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator* (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::get_VelocityCalculator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44fdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"get_VelocityCalculator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.set_VelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::Oculus::Interaction::Throw::IThrowVelocityCalculator*)>(&::Oculus::Interaction::DistanceGrabInteractor::set_VelocityCalculator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa44fde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"set_VelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.get_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::get_Origin)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa44fdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.get_HitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::get_HitPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa44fe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"get_HitPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.set_HitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::DistanceGrabInteractor::set_HitPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa44fe44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"set_HitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.get_DistanceInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IRelativeToRef* (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::get_DistanceInteractable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa44fe54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"get_DistanceInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa44fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::Start)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa44ff74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.DoPreprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::DoPreprocess)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4500c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::DistanceGrabInteractable> (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa45013c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.InteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::Oculus::Interaction::DistanceGrabInteractable*)>(&::Oculus::Interaction::DistanceGrabInteractor::InteractableSelected)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa450254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.InteractableUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::Oculus::Interaction::DistanceGrabInteractable*)>(&::Oculus::Interaction::DistanceGrabInteractor::InteractableUnselected)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa450370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.HandleOtherPointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::DistanceGrabInteractor::HandleOtherPointerEventRaised)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xa450560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"HandleOtherPointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.ComputePointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::ComputePointerPose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4508a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa450978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.InjectAllDistanceGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::Oculus::Interaction::ISelector*, ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*)>(&::Oculus::Interaction::DistanceGrabInteractor::InjectAllDistanceGrabInteractor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa450b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectAllDistanceGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.InjectSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::DistanceGrabInteractor::InjectSelector)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa450b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.InjectDistantCandidateComputer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*)>(&::Oculus::Interaction::DistanceGrabInteractor::InjectDistantCandidateComputer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa450c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectDistantCandidateComputer", {}, {::i2c::type_of<::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.InjectOptionalGrabCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::DistanceGrabInteractor::InjectOptionalGrabCenter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa450c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectOptionalGrabCenter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.InjectOptionalGrabTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::DistanceGrabInteractor::InjectOptionalGrabTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa450c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectOptionalGrabTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor.InjectOptionalVelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)(::Oculus::Interaction::Throw::IThrowVelocityCalculator*)>(&::Oculus::Interaction::DistanceGrabInteractor::InjectOptionalVelocityCalculator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa450c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectOptionalVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa450d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractor._Start_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractor::*)()>(&::Oculus::Interaction::DistanceGrabInteractor::_Start_b__19_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa450db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"<Start>b__19_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr void Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selector = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__grabCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__grabCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabCenter;
}
constexpr void Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_set__grabCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabCenter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__grabTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__grabTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabTarget;
}
constexpr void Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_set__grabTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabTarget = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__velocityCalculator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityCalculator;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__velocityCalculator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityCalculator;
}
constexpr void Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_set__velocityCalculator(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocityCalculator = value;
}
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator*& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__VelocityCalculator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityCalculator_k__BackingField;
}
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* const& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__VelocityCalculator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityCalculator_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_set__VelocityCalculator_k__BackingField(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VelocityCalculator_k__BackingField = value;
}
constexpr ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__distantCandidateComputer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distantCandidateComputer;
}
constexpr ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>* const& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__distantCandidateComputer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distantCandidateComputer;
}
constexpr void Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_set__distantCandidateComputer(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distantCandidateComputer = value;
}
constexpr ::Oculus::Interaction::IMovement*& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__movement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movement;
}
constexpr ::Oculus::Interaction::IMovement* const& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__movement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movement;
}
constexpr void Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_set__movement(::Oculus::Interaction::IMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movement = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__HitPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HitPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_get__HitPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HitPoint_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceGrabInteractor::__cordl_internal_set__HitPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HitPoint_k__BackingField = value;
}
inline ::Oculus::Interaction::Throw::IThrowVelocityCalculator* Oculus::Interaction::DistanceGrabInteractor::get_VelocityCalculator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"get_VelocityCalculator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractor::set_VelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"set_VelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose Oculus::Interaction::DistanceGrabInteractor::get_Origin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::DistanceGrabInteractor::get_HitPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"get_HitPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractor::set_HitPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"set_HitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IRelativeToRef* Oculus::Interaction::DistanceGrabInteractor::get_DistanceInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"get_DistanceInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IRelativeToRef*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractor::DoPreprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::DistanceGrabInteractable> Oculus::Interaction::DistanceGrabInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractor::InteractableSelected(::Oculus::Interaction::DistanceGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::DistanceGrabInteractor::InteractableUnselected(::Oculus::Interaction::DistanceGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::DistanceGrabInteractor::HandleOtherPointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"HandleOtherPointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::Pose Oculus::Interaction::DistanceGrabInteractor::ComputePointerPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractor::InjectAllDistanceGrabInteractor(::Oculus::Interaction::ISelector*  selector, ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*  distantCandidateComputer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectAllDistanceGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector, distantCandidateComputer);
}
inline void Oculus::Interaction::DistanceGrabInteractor::InjectSelector(::Oculus::Interaction::ISelector*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector);
}
inline void Oculus::Interaction::DistanceGrabInteractor::InjectDistantCandidateComputer(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*  distantCandidateComputer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectDistantCandidateComputer", {}, {::i2c::type_of<::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distantCandidateComputer);
}
inline void Oculus::Interaction::DistanceGrabInteractor::InjectOptionalGrabCenter(::UnityEngine::Transform*  grabCenter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectOptionalGrabCenter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabCenter);
}
inline void Oculus::Interaction::DistanceGrabInteractor::InjectOptionalGrabTarget(::UnityEngine::Transform*  grabTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectOptionalGrabTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabTarget);
}
inline void Oculus::Interaction::DistanceGrabInteractor::InjectOptionalVelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  velocityCalculator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"InjectOptionalVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocityCalculator);
}
inline void Oculus::Interaction::DistanceGrabInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractor::_Start_b__19_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractor*>(),
                        {"<Start>b__19_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceGrabInteractor* Oculus::Interaction::DistanceGrabInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceGrabInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IDistanceInteractor"
constexpr  Oculus::Interaction::DistanceGrabInteractor::operator ::Oculus::Interaction::IDistanceInteractor*() noexcept {
return static_cast<::Oculus::Interaction::IDistanceInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IDistanceInteractor"
constexpr ::Oculus::Interaction::IDistanceInteractor* Oculus::Interaction::DistanceGrabInteractor::i___Oculus__Interaction__IDistanceInteractor() noexcept {
return static_cast<::Oculus::Interaction::IDistanceInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr  Oculus::Interaction::DistanceGrabInteractor::operator ::Oculus::Interaction::IInteractorView*() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* Oculus::Interaction::DistanceGrabInteractor::i___Oculus__Interaction__IInteractorView() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceGrabInteractor::DistanceGrabInteractor()   {
}
