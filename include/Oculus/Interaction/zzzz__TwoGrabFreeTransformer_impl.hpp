#pragma once
// IWYU pragma private; include "Oculus/Interaction/TwoGrabFreeTransformer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabFreeTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__FloatConstraint_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabFreeTransformer_TwoGrabFreeState_def.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabFreeTransformer_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.get_Constraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints* (::Oculus::Interaction::TwoGrabFreeTransformer::*)()>(&::Oculus::Interaction::TwoGrabFreeTransformer::get_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44d060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"get_Constraints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.set_Constraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabFreeTransformer::*)(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*)>(&::Oculus::Interaction::TwoGrabFreeTransformer::set_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44d068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"set_Constraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabFreeTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::TwoGrabFreeTransformer::Initialize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa44d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabFreeTransformer::*)()>(&::Oculus::Interaction::TwoGrabFreeTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa44d144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabFreeTransformer::*)()>(&::Oculus::Interaction::TwoGrabFreeTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0xa44d630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.ConstrainScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::TwoGrabFreeTransformer::*)(float_t)>(&::Oculus::Interaction::TwoGrabFreeTransformer::ConstrainScale)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa44e198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"ConstrainScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.TwoGrabFreeInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TwoGrabFreeTransformer::TwoGrabFreeInit)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa44d43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"TwoGrabFreeInit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.TwoGrabFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState (*)(::UnityEngine::Quaternion, ::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose)>(&::Oculus::Interaction::TwoGrabFreeTransformer::TwoGrabFree)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0xa44da4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"TwoGrabFree", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.MarkAsBaseScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabFreeTransformer::*)()>(&::Oculus::Interaction::TwoGrabFreeTransformer::MarkAsBaseScale)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa44e35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"MarkAsBaseScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabFreeTransformer::*)()>(&::Oculus::Interaction::TwoGrabFreeTransformer::EndTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa44e418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer.InjectOptionalConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabFreeTransformer::*)(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*)>(&::Oculus::Interaction::TwoGrabFreeTransformer::InjectOptionalConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44e41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabFreeTransformer::*)()>(&::Oculus::Interaction::TwoGrabFreeTransformer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44e424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints* const& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_set__constraints(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constraints = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__baseScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__baseScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseScale;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_set__baseScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseScale = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__localToTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToTarget;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__localToTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localToTarget;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_set__localToTarget(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localToTarget = value;
}
constexpr float_t& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__localMagnitudeToTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localMagnitudeToTarget;
}
constexpr float_t const& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__localMagnitudeToTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localMagnitudeToTarget;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_set__localMagnitudeToTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localMagnitudeToTarget = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__prevGrabA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevGrabA;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__prevGrabA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevGrabA;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_set__prevGrabA(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevGrabA = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__prevGrabB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevGrabB;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__prevGrabB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevGrabB;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_set__prevGrabB(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevGrabB = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__prevGrabRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevGrabRotation;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_get__prevGrabRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevGrabRotation;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer::__cordl_internal_set__prevGrabRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevGrabRotation = value;
}
inline ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints* Oculus::Interaction::TwoGrabFreeTransformer::get_Constraints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"get_Constraints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabFreeTransformer::set_Constraints(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"set_Constraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::TwoGrabFreeTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline void Oculus::Interaction::TwoGrabFreeTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabFreeTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::TwoGrabFreeTransformer::ConstrainScale(float_t  targetScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"ConstrainScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, targetScale);
}
inline ::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState Oculus::Interaction::TwoGrabFreeTransformer::TwoGrabFreeInit(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"TwoGrabFreeInit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState Oculus::Interaction::TwoGrabFreeTransformer::TwoGrabFree(::UnityEngine::Quaternion  initialRotation, ::UnityEngine::Pose  prevA, ::UnityEngine::Pose  prevB, ::UnityEngine::Pose  newA, ::UnityEngine::Pose  newB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"TwoGrabFree", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState>(nullptr, ___internal_method, initialRotation, prevA, prevB, newA, newB);
}
inline void Oculus::Interaction::TwoGrabFreeTransformer::MarkAsBaseScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"MarkAsBaseScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabFreeTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabFreeTransformer::InjectOptionalConstraints(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*  constraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline void Oculus::Interaction::TwoGrabFreeTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TwoGrabFreeTransformer* Oculus::Interaction::TwoGrabFreeTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TwoGrabFreeTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::TwoGrabFreeTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::TwoGrabFreeTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TwoGrabFreeTransformer::TwoGrabFreeTransformer()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::*)()>(&::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa44e42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_ConstraintsAreRelative()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstraintsAreRelative;
}
constexpr bool const& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_ConstraintsAreRelative() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstraintsAreRelative;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_set_ConstraintsAreRelative(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConstraintsAreRelative = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_MinScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScale;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_MinScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScale;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_set_MinScale(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinScale = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_MaxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxScale;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_MaxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxScale;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_set_MaxScale(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxScale = value;
}
constexpr bool& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_ConstrainXScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstrainXScale;
}
constexpr bool const& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_ConstrainXScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstrainXScale;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_set_ConstrainXScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConstrainXScale = value;
}
constexpr bool& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_ConstrainYScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstrainYScale;
}
constexpr bool const& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_ConstrainYScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstrainYScale;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_set_ConstrainYScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConstrainYScale = value;
}
constexpr bool& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_ConstrainZScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstrainZScale;
}
constexpr bool const& Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_get_ConstrainZScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstrainZScale;
}
constexpr void Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::__cordl_internal_set_ConstrainZScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConstrainZScale = value;
}
inline void Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints* Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints::TwoGrabFreeTransformer_TwoGrabFreeConstraints()   {
}
