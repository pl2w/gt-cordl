#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabInteractor.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "Oculus/Interaction/zzzz__GrabInteractor_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IThrowVelocityCalculator_def.hpp"
#include "Oculus/Interaction/zzzz__GrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__GrabInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IRigidbodyRef_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "Oculus/Interaction/zzzz__Tween_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.get_Rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::get_Rigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa451284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.get_VelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator* (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::get_VelocityCalculator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45128c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"get_VelocityCalculator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.set_VelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::Oculus::Interaction::Throw::IThrowVelocityCalculator*)>(&::Oculus::Interaction::GrabInteractor::set_VelocityCalculator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa451294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"set_VelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4512a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::Start)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa451388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.DoPreprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::DoPreprocess)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa451704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::GrabInteractable> (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xa451780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.ForceSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::Oculus::Interaction::GrabInteractable*)>(&::Oculus::Interaction::GrabInteractor::ForceSelect)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa451a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"ForceSelect", {}, {::i2c::type_of<::Oculus::Interaction::GrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.ForceRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::ForceRelease)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa451c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"ForceRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.Unselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::Unselect)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa451dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.InteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::Oculus::Interaction::GrabInteractable*)>(&::Oculus::Interaction::GrabInteractor::InteractableSelected)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa451ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.InteractableUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::Oculus::Interaction::GrabInteractable*)>(&::Oculus::Interaction::GrabInteractor::InteractableUnselected)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa452144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.HandlePointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::GrabInteractor::HandlePointerEventRaised)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xa4522c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.ComputePointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::ComputePointerPose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa4526d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa452798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.ComputeShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::ComputeShouldUnselect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa452c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.InjectAllGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::Oculus::Interaction::ISelector*, ::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::GrabInteractor::InjectAllGrabInteractor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa452c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectAllGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.InjectSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::GrabInteractor::InjectSelector)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa452cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.InjectRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::GrabInteractor::InjectRigidbody)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa452d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.InjectOptionalGrabCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::GrabInteractor::InjectOptionalGrabCenter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa452da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectOptionalGrabCenter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.InjectOptionalGrabTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::GrabInteractor::InjectOptionalGrabTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa452db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectOptionalGrabTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor.InjectOptionalVelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)(::Oculus::Interaction::Throw::IThrowVelocityCalculator*)>(&::Oculus::Interaction::GrabInteractor::InjectOptionalVelocityCalculator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa452dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectOptionalVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa452e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor._Start_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor::*)()>(&::Oculus::Interaction::GrabInteractor::_Start_b__17_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa452edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"<Start>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::GrabInteractor::__cordl_internal_get__selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selector = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::GrabInteractor::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::GrabInteractor::__cordl_internal_get__grabCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__grabCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabCenter;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__grabCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabCenter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::GrabInteractor::__cordl_internal_get__grabTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__grabTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabTarget;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__grabTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabTarget = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Oculus::Interaction::GrabInteractor::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliders = value;
}
constexpr ::Oculus::Interaction::Tween*& Oculus::Interaction::GrabInteractor::__cordl_internal_get__tween()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tween;
}
constexpr ::Oculus::Interaction::Tween* const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__tween() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tween;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__tween(::Oculus::Interaction::Tween*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tween = value;
}
constexpr bool& Oculus::Interaction::GrabInteractor::__cordl_internal_get__outsideReleaseDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outsideReleaseDist;
}
constexpr bool const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__outsideReleaseDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outsideReleaseDist;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__outsideReleaseDist(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outsideReleaseDist = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::GrabInteractor::__cordl_internal_get__velocityCalculator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityCalculator;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__velocityCalculator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityCalculator;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__velocityCalculator(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocityCalculator = value;
}
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator*& Oculus::Interaction::GrabInteractor::__cordl_internal_get__VelocityCalculator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityCalculator_k__BackingField;
}
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__VelocityCalculator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityCalculator_k__BackingField;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__VelocityCalculator_k__BackingField(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VelocityCalculator_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& Oculus::Interaction::GrabInteractor::__cordl_internal_get__selectedInteractableOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedInteractableOverride;
}
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__selectedInteractableOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedInteractableOverride;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__selectedInteractableOverride(::UnityW<::Oculus::Interaction::GrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedInteractableOverride = value;
}
constexpr bool& Oculus::Interaction::GrabInteractor::__cordl_internal_get__isSelectionOverriden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSelectionOverriden;
}
constexpr bool const& Oculus::Interaction::GrabInteractor::__cordl_internal_get__isSelectionOverriden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSelectionOverriden;
}
constexpr void Oculus::Interaction::GrabInteractor::__cordl_internal_set__isSelectionOverriden(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSelectionOverriden = value;
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::GrabInteractor::get_Rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::IThrowVelocityCalculator* Oculus::Interaction::GrabInteractor::get_VelocityCalculator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"get_VelocityCalculator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractor::set_VelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"set_VelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GrabInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractor::DoPreprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::GrabInteractable> Oculus::Interaction::GrabInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::GrabInteractable>>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractor::ForceSelect(::Oculus::Interaction::GrabInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"ForceSelect", {}, {::i2c::type_of<::Oculus::Interaction::GrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::GrabInteractor::ForceRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"ForceRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractor::Unselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractor::InteractableSelected(::Oculus::Interaction::GrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::GrabInteractor::InteractableUnselected(::Oculus::Interaction::GrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::GrabInteractor::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::Pose Oculus::Interaction::GrabInteractor::ComputePointerPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabInteractor::ComputeShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractor::InjectAllGrabInteractor(::Oculus::Interaction::ISelector*  selector, ::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectAllGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector, rigidbody);
}
inline void Oculus::Interaction::GrabInteractor::InjectSelector(::Oculus::Interaction::ISelector*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector);
}
inline void Oculus::Interaction::GrabInteractor::InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::GrabInteractor::InjectOptionalGrabCenter(::UnityEngine::Transform*  grabCenter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectOptionalGrabCenter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabCenter);
}
inline void Oculus::Interaction::GrabInteractor::InjectOptionalGrabTarget(::UnityEngine::Transform*  grabTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectOptionalGrabTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabTarget);
}
inline void Oculus::Interaction::GrabInteractor::InjectOptionalVelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  velocityCalculator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"InjectOptionalVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocityCalculator);
}
inline void Oculus::Interaction::GrabInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractor::_Start_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor*>(),
                        {"<Start>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabInteractor* Oculus::Interaction::GrabInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr  Oculus::Interaction::GrabInteractor::operator ::Oculus::Interaction::IRigidbodyRef*() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* Oculus::Interaction::GrabInteractor::i___Oculus__Interaction__IRigidbodyRef() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabInteractor::GrabInteractor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::*)()>(&::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa451c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0._ForceSelect_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::GrabInteractable> (::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::*)()>(&::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::_ForceSelect_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa452f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*>(),
                        {"<ForceSelect>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0._ForceSelect_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::*)()>(&::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::_ForceSelect_b__1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa452fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*>(),
                        {"<ForceSelect>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0._ForceSelect_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::*)()>(&::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::_ForceSelect_b__2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa452ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*>(),
                        {"<ForceSelect>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::__cordl_internal_get_interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactable;
}
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::__cordl_internal_get_interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactable;
}
constexpr void Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::__cordl_internal_set_interactable(::UnityW<::Oculus::Interaction::GrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactable = value;
}
constexpr ::UnityW<::Oculus::Interaction::GrabInteractor>& Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::GrabInteractor> const& Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::GrabInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::GrabInteractable> Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::_ForceSelect_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*>(),
                        {"<ForceSelect>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::GrabInteractable>>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::_ForceSelect_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*>(),
                        {"<ForceSelect>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::_ForceSelect_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*>(),
                        {"<ForceSelect>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0* Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0::GrabInteractor___c__DisplayClass20_0()   {
}
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractor___c::*)()>(&::Oculus::Interaction::GrabInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa452f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractor___c._ForceRelease_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabInteractor___c::*)()>(&::Oculus::Interaction::GrabInteractor___c::_ForceRelease_b__21_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa452f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c*>(),
                        {"<ForceRelease>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::GrabInteractor___c::setStaticF___9(::Oculus::Interaction::GrabInteractor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::GrabInteractor___c*, "<>9", ::Oculus::Interaction::GrabInteractor___c*>(std::forward<::Oculus::Interaction::GrabInteractor___c*>(value));
}
inline ::Oculus::Interaction::GrabInteractor___c* Oculus::Interaction::GrabInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::GrabInteractor___c*, "<>9", ::Oculus::Interaction::GrabInteractor___c*>();
}
inline void Oculus::Interaction::GrabInteractor___c::setStaticF___9__21_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__21_0", ::Oculus::Interaction::GrabInteractor___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* Oculus::Interaction::GrabInteractor___c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__21_0", ::Oculus::Interaction::GrabInteractor___c*>();
}
inline void Oculus::Interaction::GrabInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabInteractor___c::_ForceRelease_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractor___c*>(),
                        {"<ForceRelease>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabInteractor___c* Oculus::Interaction::GrabInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabInteractor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabInteractor___c::GrabInteractor___c()   {
}
