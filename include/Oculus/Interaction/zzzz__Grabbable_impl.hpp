#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grabbable.hpp"
#include "Oculus/Interaction/zzzz__PointableElement_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__Grabbable_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__RANSACVelocity_def.hpp"
#include "Oculus/Interaction/zzzz__Grabbable_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__IPointable_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.get_MaxGrabPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::get_MaxGrabPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"get_MaxGrabPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.set_MaxGrabPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(int32_t)>(&::Oculus::Interaction::Grabbable::set_MaxGrabPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"set_MaxGrabPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::get_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.get_GrabPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Pose>* (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::get_GrabPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"get_GrabPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Grabbable::SetTimeProvider)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa444e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa444e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa444ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::Start)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xa444f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa445570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa445654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.GenerateTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::ITransformer* (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::GenerateTransformer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4452b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"GenerateTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.ProcessPointerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::Grabbable::ProcessPointerEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa445918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.PointableElementUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::Grabbable::PointableElementUpdated)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa445c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.UpdateKinematicLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(bool)>(&::Oculus::Interaction::Grabbable::UpdateKinematicLock)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa445c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"UpdateKinematicLock", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.ForceMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::Grabbable::ForceMove)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4459dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"ForceMove", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::BeginTransform)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa445a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::UpdateTransform)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa445b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::EndTransform)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa445598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.InjectOptionalOneGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(::Oculus::Interaction::ITransformer*)>(&::Oculus::Interaction::Grabbable::InjectOptionalOneGrabTransformer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa445778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalOneGrabTransformer", {}, {::i2c::type_of<::Oculus::Interaction::ITransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.InjectOptionalTwoGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(::Oculus::Interaction::ITransformer*)>(&::Oculus::Interaction::Grabbable::InjectOptionalTwoGrabTransformer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa445848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalTwoGrabTransformer", {}, {::i2c::type_of<::Oculus::Interaction::ITransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.InjectOptionalTargetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grabbable::InjectOptionalTargetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa445d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalTargetTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.InjectOptionalRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::Grabbable::InjectOptionalRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa445d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.InjectOptionalThrowWhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(bool)>(&::Oculus::Interaction::Grabbable::InjectOptionalThrowWhenUnselected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa445d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalThrowWhenUnselected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable.InjectOptionalKinematicWhileSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)(bool)>(&::Oculus::Interaction::Grabbable::InjectOptionalKinematicWhileSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa445d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalKinematicWhileSelected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa445d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable._Start_b__23_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable::*)()>(&::Oculus::Interaction::Grabbable::_Start_b__23_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa445e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"<Start>b__23_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Grabbable::__cordl_internal_get__oneGrabTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneGrabTransformer;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Grabbable::__cordl_internal_get__oneGrabTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneGrabTransformer;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__oneGrabTransformer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oneGrabTransformer = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Grabbable::__cordl_internal_get__twoGrabTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____twoGrabTransformer;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Grabbable::__cordl_internal_get__twoGrabTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____twoGrabTransformer;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__twoGrabTransformer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____twoGrabTransformer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Grabbable::__cordl_internal_get__targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Grabbable::__cordl_internal_get__targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetTransform;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetTransform = value;
}
constexpr int32_t& Oculus::Interaction::Grabbable::__cordl_internal_get__maxGrabPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxGrabPoints;
}
constexpr int32_t const& Oculus::Interaction::Grabbable::__cordl_internal_get__maxGrabPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxGrabPoints;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__maxGrabPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxGrabPoints = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::Grabbable::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::Grabbable::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr bool& Oculus::Interaction::Grabbable::__cordl_internal_get__kinematicWhileSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kinematicWhileSelected;
}
constexpr bool const& Oculus::Interaction::Grabbable::__cordl_internal_get__kinematicWhileSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kinematicWhileSelected;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__kinematicWhileSelected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____kinematicWhileSelected = value;
}
constexpr bool& Oculus::Interaction::Grabbable::__cordl_internal_get__throwWhenUnselected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwWhenUnselected;
}
constexpr bool const& Oculus::Interaction::Grabbable::__cordl_internal_get__throwWhenUnselected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwWhenUnselected;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__throwWhenUnselected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____throwWhenUnselected = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Grabbable::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Grabbable::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::Oculus::Interaction::ITransformer*& Oculus::Interaction::Grabbable::__cordl_internal_get__activeTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTransformer;
}
constexpr ::Oculus::Interaction::ITransformer* const& Oculus::Interaction::Grabbable::__cordl_internal_get__activeTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTransformer;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__activeTransformer(::Oculus::Interaction::ITransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeTransformer = value;
}
constexpr ::Oculus::Interaction::ITransformer*& Oculus::Interaction::Grabbable::__cordl_internal_get_OneGrabTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OneGrabTransformer;
}
constexpr ::Oculus::Interaction::ITransformer* const& Oculus::Interaction::Grabbable::__cordl_internal_get_OneGrabTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OneGrabTransformer;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set_OneGrabTransformer(::Oculus::Interaction::ITransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OneGrabTransformer = value;
}
constexpr ::Oculus::Interaction::ITransformer*& Oculus::Interaction::Grabbable::__cordl_internal_get_TwoGrabTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoGrabTransformer;
}
constexpr ::Oculus::Interaction::ITransformer* const& Oculus::Interaction::Grabbable::__cordl_internal_get_TwoGrabTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoGrabTransformer;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set_TwoGrabTransformer(::Oculus::Interaction::ITransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwoGrabTransformer = value;
}
constexpr ::Oculus::Interaction::Grabbable_ThrowWhenUnselected*& Oculus::Interaction::Grabbable::__cordl_internal_get__throw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throw;
}
constexpr ::Oculus::Interaction::Grabbable_ThrowWhenUnselected* const& Oculus::Interaction::Grabbable::__cordl_internal_get__throw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throw;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__throw(::Oculus::Interaction::Grabbable_ThrowWhenUnselected*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____throw = value;
}
constexpr bool& Oculus::Interaction::Grabbable::__cordl_internal_get__isKinematicLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isKinematicLocked;
}
constexpr bool const& Oculus::Interaction::Grabbable::__cordl_internal_get__isKinematicLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isKinematicLocked;
}
constexpr void Oculus::Interaction::Grabbable::__cordl_internal_set__isKinematicLocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isKinematicLocked = value;
}
inline int32_t Oculus::Interaction::Grabbable::get_MaxGrabPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"get_MaxGrabPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::set_MaxGrabPoints(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"set_MaxGrabPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Grabbable::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Pose>* Oculus::Interaction::Grabbable::get_GrabPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"get_GrabPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::Grabbable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ITransformer* Oculus::Interaction::Grabbable::GenerateTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"GenerateTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::ITransformer*>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::ProcessPointerEvent(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::Grabbable::PointableElementUpdated(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grabbable*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::Grabbable::UpdateKinematicLock(bool  isGrabbing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"UpdateKinematicLock", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGrabbing);
}
inline void Oculus::Interaction::Grabbable::ForceMove(::Oculus::Interaction::PointerEvent  releaseEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"ForceMove", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releaseEvent);
}
inline void Oculus::Interaction::Grabbable::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::InjectOptionalOneGrabTransformer(::Oculus::Interaction::ITransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalOneGrabTransformer", {}, {::i2c::type_of<::Oculus::Interaction::ITransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer);
}
inline void Oculus::Interaction::Grabbable::InjectOptionalTwoGrabTransformer(::Oculus::Interaction::ITransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalTwoGrabTransformer", {}, {::i2c::type_of<::Oculus::Interaction::ITransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer);
}
inline void Oculus::Interaction::Grabbable::InjectOptionalTargetTransform(::UnityEngine::Transform*  targetTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalTargetTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTransform);
}
inline void Oculus::Interaction::Grabbable::InjectOptionalRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::Grabbable::InjectOptionalThrowWhenUnselected(bool  throwWehenUnselected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalThrowWhenUnselected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, throwWehenUnselected);
}
inline void Oculus::Interaction::Grabbable::InjectOptionalKinematicWhileSelected(bool  kinematicWhileSelected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"InjectOptionalKinematicWhileSelected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kinematicWhileSelected);
}
inline void Oculus::Interaction::Grabbable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable::_Start_b__23_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable*>(),
                        {"<Start>b__23_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grabbable* Oculus::Interaction::Grabbable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grabbable*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IGrabbable"
constexpr  Oculus::Interaction::Grabbable::operator ::Oculus::Interaction::IGrabbable*() noexcept {
return static_cast<::Oculus::Interaction::IGrabbable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IGrabbable"
constexpr ::Oculus::Interaction::IGrabbable* Oculus::Interaction::Grabbable::i___Oculus__Interaction__IGrabbable() noexcept {
return static_cast<::Oculus::Interaction::IGrabbable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::Grabbable::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::Grabbable::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grabbable::Grabbable()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Grabbable___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable___c::*)()>(&::Oculus::Interaction::Grabbable___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4469c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable___c.__ctor_b__41_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grabbable___c::*)()>(&::Oculus::Interaction::Grabbable___c::__ctor_b__41_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4469c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable___c*>(),
                        {"<.ctor>b__41_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Grabbable___c::setStaticF___9(::Oculus::Interaction::Grabbable___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Grabbable___c*, "<>9", ::Oculus::Interaction::Grabbable___c*>(std::forward<::Oculus::Interaction::Grabbable___c*>(value));
}
inline ::Oculus::Interaction::Grabbable___c* Oculus::Interaction::Grabbable___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Grabbable___c*, "<>9", ::Oculus::Interaction::Grabbable___c*>();
}
inline void Oculus::Interaction::Grabbable___c::setStaticF___9__41_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__41_0", ::Oculus::Interaction::Grabbable___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Grabbable___c::getStaticF___9__41_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__41_0", ::Oculus::Interaction::Grabbable___c*>();
}
inline void Oculus::Interaction::Grabbable___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Grabbable___c::__ctor_b__41_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable___c*>(),
                        {"<.ctor>b__41_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grabbable___c* Oculus::Interaction::Grabbable___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grabbable___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grabbable___c::Grabbable___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa445e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)(::UnityEngine::Rigidbody*, ::Oculus::Interaction::IPointable*)>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xa445334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)()>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::Dispose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa445684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.AddSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)(int32_t)>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::AddSelection)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa445e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"AddSelection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.RemoveSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)(int32_t, bool)>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::RemoveSelection)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa44606c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"RemoveSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.HandlePointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::HandlePointerEventRaised)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa446438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)()>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::Initialize)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa445ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.Teardown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)()>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::Teardown)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa4462ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"Teardown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.MarkFrameConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)(int32_t)>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::MarkFrameConfidence)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa446528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"MarkFrameConfidence", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)(bool)>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::Process)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa44611c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"Process", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grabbable_ThrowWhenUnselected.LoadThrowVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grabbable_ThrowWhenUnselected::*)()>(&::Oculus::Interaction::Grabbable_ThrowWhenUnselected::LoadThrowVelocities)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa446238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"LoadThrowVelocities", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::Oculus::Interaction::IPointable*& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__pointable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointable;
}
constexpr ::Oculus::Interaction::IPointable* const& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__pointable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointable;
}
constexpr void Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_set__pointable(::Oculus::Interaction::IPointable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointable = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__selectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectors;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__selectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectors;
}
constexpr void Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_set__selectors(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectors = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::Oculus::Interaction::Throw::RANSACVelocity*& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__ransacVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ransacVelocity;
}
constexpr ::Oculus::Interaction::Throw::RANSACVelocity* const& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__ransacVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ransacVelocity;
}
constexpr void Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_set__ransacVelocity(::Oculus::Interaction::Throw::RANSACVelocity*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ransacVelocity = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__prevPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__prevPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevPose;
}
constexpr void Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_set__prevPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevPose = value;
}
constexpr float_t& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__prevTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevTime;
}
constexpr float_t const& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__prevTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevTime;
}
constexpr void Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_set__prevTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevTime = value;
}
constexpr bool& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__isHighConfidence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHighConfidence;
}
constexpr bool const& Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_get__isHighConfidence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHighConfidence;
}
constexpr void Oculus::Interaction::Grabbable_ThrowWhenUnselected::__cordl_internal_set__isHighConfidence(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHighConfidence = value;
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::setStaticF__ransacVelocityPool(::UnityEngine::Pool::IObjectPool_1<::Oculus::Interaction::Throw::RANSACVelocity*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::IObjectPool_1<::Oculus::Interaction::Throw::RANSACVelocity*>*, "_ransacVelocityPool", ::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(std::forward<::UnityEngine::Pool::IObjectPool_1<::Oculus::Interaction::Throw::RANSACVelocity*>*>(value));
}
inline ::UnityEngine::Pool::IObjectPool_1<::Oculus::Interaction::Throw::RANSACVelocity*>* Oculus::Interaction::Grabbable_ThrowWhenUnselected::getStaticF__ransacVelocityPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::IObjectPool_1<::Oculus::Interaction::Throw::RANSACVelocity*>*, "_ransacVelocityPool", ::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>();
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::setStaticF__selectorsPool(::UnityEngine::Pool::IObjectPool_1<::System::Collections::Generic::HashSet_1<int32_t>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::IObjectPool_1<::System::Collections::Generic::HashSet_1<int32_t>*>*, "_selectorsPool", ::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(std::forward<::UnityEngine::Pool::IObjectPool_1<::System::Collections::Generic::HashSet_1<int32_t>*>*>(value));
}
inline ::UnityEngine::Pool::IObjectPool_1<::System::Collections::Generic::HashSet_1<int32_t>*>* Oculus::Interaction::Grabbable_ThrowWhenUnselected::getStaticF__selectorsPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::IObjectPool_1<::System::Collections::Generic::HashSet_1<int32_t>*>*, "_selectorsPool", ::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>();
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::_ctor(::UnityEngine::Rigidbody*  rigidbody, ::Oculus::Interaction::IPointable*  pointable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody, pointable);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::AddSelection(int32_t  selectorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"AddSelection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectorId);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::RemoveSelection(int32_t  selectorId, bool  canThrow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"RemoveSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectorId, canThrow);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::Teardown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"Teardown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::MarkFrameConfidence(int32_t  emitterKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"MarkFrameConfidence", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitterKey);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::Process(bool  saveAsPreviousFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"Process", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saveAsPreviousFrame);
}
inline void Oculus::Interaction::Grabbable_ThrowWhenUnselected::LoadThrowVelocities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(),
                        {"LoadThrowVelocities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grabbable_ThrowWhenUnselected* Oculus::Interaction::Grabbable_ThrowWhenUnselected::New_ctor(::UnityEngine::Rigidbody*  rigidbody, ::Oculus::Interaction::IPointable*  pointable)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grabbable_ThrowWhenUnselected*>(rigidbody, pointable));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::Grabbable_ThrowWhenUnselected::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::Grabbable_ThrowWhenUnselected::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::Grabbable_ThrowWhenUnselected::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::Grabbable_ThrowWhenUnselected::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grabbable_ThrowWhenUnselected::Grabbable_ThrowWhenUnselected()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::*)()>(&::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa446834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c.__ctor_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::*)()>(&::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::__ctor_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44683c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {"<.ctor>b__11_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c.__cctor_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::RANSACVelocity* (::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::*)()>(&::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::__cctor_b__21_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa446844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {"<.cctor>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c.__cctor_b__21_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<int32_t>* (::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::*)()>(&::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::__cctor_b__21_1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4468a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {"<.cctor>b__21_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c.__cctor_b__21_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::*)(::System::Collections::Generic::HashSet_1<int32_t>*)>(&::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::__cctor_b__21_2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa446908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {"<.cctor>b__21_2", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::setStaticF___9(::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*, "<>9", ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(std::forward<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(value));
}
inline ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c* Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*, "<>9", ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>();
}
inline void Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::setStaticF___9__11_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__11_0", ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__11_0", ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>();
}
inline void Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::__ctor_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {"<.ctor>b__11_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::RANSACVelocity* Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::__cctor_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {"<.cctor>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::RANSACVelocity*>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::__cctor_b__21_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {"<.cctor>b__21_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<int32_t>*>(this, ___internal_method);
}
inline void Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::__cctor_b__21_2(::System::Collections::Generic::HashSet_1<int32_t>*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>(),
                        {"<.cctor>b__21_2", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c* Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c::ThrowWhenUnselected_Grabbable___c()   {
}
