#pragma once
// IWYU pragma private; include "Oculus/Interaction/TwoGrabRotateTransformer.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabRotateTransformer_Axis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabRotateTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__FloatConstraint_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabRotateTransformer_Axis_def.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabRotateTransformer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.get_PivotTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::TwoGrabRotateTransformer::*)()>(&::Oculus::Interaction::TwoGrabRotateTransformer::get_PivotTransform)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa44f014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"get_PivotTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabRotateTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::TwoGrabRotateTransformer::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabRotateTransformer::*)()>(&::Oculus::Interaction::TwoGrabRotateTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa44f10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabRotateTransformer::*)()>(&::Oculus::Interaction::TwoGrabRotateTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa44f520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabRotateTransformer::*)()>(&::Oculus::Interaction::TwoGrabRotateTransformer::EndTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa44f6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.CalculateRotationAxisInWorldSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::TwoGrabRotateTransformer::*)()>(&::Oculus::Interaction::TwoGrabRotateTransformer::CalculateRotationAxisInWorldSpace)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa44f138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"CalculateRotationAxisInWorldSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.CalculateHandsVectorOnPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::TwoGrabRotateTransformer::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::TwoGrabRotateTransformer::CalculateHandsVectorOnPlane)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xa44f234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"CalculateHandsVectorOnPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.InjectOptionalPivotTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabRotateTransformer::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::TwoGrabRotateTransformer::InjectOptionalPivotTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"InjectOptionalPivotTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.InjectOptionalRotationAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabRotateTransformer::*)(::GlobalNamespace::TwoGrabRotateTransformer_Axis)>(&::Oculus::Interaction::TwoGrabRotateTransformer::InjectOptionalRotationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"InjectOptionalRotationAxis", {}, {::i2c::type_of<::GlobalNamespace::TwoGrabRotateTransformer_Axis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer.InjectOptionalConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabRotateTransformer::*)(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*)>(&::Oculus::Interaction::TwoGrabRotateTransformer::InjectOptionalConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabRotateTransformer::*)()>(&::Oculus::Interaction::TwoGrabRotateTransformer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa44f6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__pivotTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__pivotTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotTransform;
}
constexpr void Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_set__pivotTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pivotTransform = value;
}
constexpr ::GlobalNamespace::TwoGrabRotateTransformer_Axis& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__rotationAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationAxis;
}
constexpr ::GlobalNamespace::TwoGrabRotateTransformer_Axis const& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__rotationAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationAxis;
}
constexpr void Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_set__rotationAxis(::GlobalNamespace::TwoGrabRotateTransformer_Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationAxis = value;
}
constexpr ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints* const& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr void Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_set__constraints(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constraints = value;
}
constexpr float_t& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__relativeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeAngle;
}
constexpr float_t const& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__relativeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeAngle;
}
constexpr void Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_set__relativeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeAngle = value;
}
constexpr float_t& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__constrainedRelativeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedRelativeAngle;
}
constexpr float_t const& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__constrainedRelativeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedRelativeAngle;
}
constexpr void Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_set__constrainedRelativeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constrainedRelativeAngle = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__previousHandsVectorOnPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousHandsVectorOnPlane;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_get__previousHandsVectorOnPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousHandsVectorOnPlane;
}
constexpr void Oculus::Interaction::TwoGrabRotateTransformer::__cordl_internal_set__previousHandsVectorOnPlane(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousHandsVectorOnPlane = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::TwoGrabRotateTransformer::get_PivotTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"get_PivotTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabRotateTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline void Oculus::Interaction::TwoGrabRotateTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabRotateTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TwoGrabRotateTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::TwoGrabRotateTransformer::CalculateRotationAxisInWorldSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"CalculateRotationAxisInWorldSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::TwoGrabRotateTransformer::CalculateHandsVectorOnPlane(::UnityEngine::Vector3  planeNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"CalculateHandsVectorOnPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, planeNormal);
}
inline void Oculus::Interaction::TwoGrabRotateTransformer::InjectOptionalPivotTransform(::UnityEngine::Transform*  pivotTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"InjectOptionalPivotTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pivotTransform);
}
inline void Oculus::Interaction::TwoGrabRotateTransformer::InjectOptionalRotationAxis(::GlobalNamespace::TwoGrabRotateTransformer_Axis  rotationAxis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"InjectOptionalRotationAxis", {}, {::i2c::type_of<::GlobalNamespace::TwoGrabRotateTransformer_Axis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotationAxis);
}
inline void Oculus::Interaction::TwoGrabRotateTransformer::InjectOptionalConstraints(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*  constraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline void Oculus::Interaction::TwoGrabRotateTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TwoGrabRotateTransformer* Oculus::Interaction::TwoGrabRotateTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TwoGrabRotateTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::TwoGrabRotateTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::TwoGrabRotateTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TwoGrabRotateTransformer::TwoGrabRotateTransformer()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::*)()>(&::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::__cordl_internal_get_MinAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinAngle;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::__cordl_internal_get_MinAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinAngle;
}
constexpr void Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::__cordl_internal_set_MinAngle(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinAngle = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::__cordl_internal_get_MaxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngle;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::__cordl_internal_get_MaxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngle;
}
constexpr void Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::__cordl_internal_set_MaxAngle(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxAngle = value;
}
inline void Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints* Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints::TwoGrabRotateTransformer_TwoGrabRotateConstraints()   {
}
