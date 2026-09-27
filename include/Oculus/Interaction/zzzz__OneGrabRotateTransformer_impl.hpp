#pragma once
// IWYU pragma private; include "Oculus/Interaction/OneGrabRotateTransformer.hpp"
#include "Oculus/Interaction/zzzz__OneGrabRotateTransformer_Axis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__OneGrabRotateTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__FloatConstraint_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "Oculus/Interaction/zzzz__OneGrabRotateTransformer_Axis_def.hpp"
#include "Oculus/Interaction/zzzz__OneGrabRotateTransformer_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.get_Pivot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::OneGrabRotateTransformer::*)()>(&::Oculus::Interaction::OneGrabRotateTransformer::get_Pivot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa44a8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"get_Pivot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.get_RotationAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OneGrabRotateTransformer_Axis (::Oculus::Interaction::OneGrabRotateTransformer::*)()>(&::Oculus::Interaction::OneGrabRotateTransformer::get_RotationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"get_RotationAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.get_Constraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints* (::Oculus::Interaction::OneGrabRotateTransformer::*)()>(&::Oculus::Interaction::OneGrabRotateTransformer::get_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44a928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"get_Constraints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.set_Constraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer::*)(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*)>(&::Oculus::Interaction::OneGrabRotateTransformer::set_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44a930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"set_Constraints", {}, {::i2c::type_of<::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::OneGrabRotateTransformer::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44a938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.ComputeWorldPivotPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::OneGrabRotateTransformer::*)()>(&::Oculus::Interaction::OneGrabRotateTransformer::ComputeWorldPivotPose)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa44a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"ComputeWorldPivotPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer::*)()>(&::Oculus::Interaction::OneGrabRotateTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0xa44ab9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer::*)()>(&::Oculus::Interaction::OneGrabRotateTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0xa44b244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer::*)()>(&::Oculus::Interaction::OneGrabRotateTransformer::EndTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa44b8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.InjectOptionalPivotTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalPivotTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44b8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"InjectOptionalPivotTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.InjectOptionalRotationAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer::*)(::GlobalNamespace::OneGrabRotateTransformer_Axis)>(&::Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalRotationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44b904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"InjectOptionalRotationAxis", {}, {::i2c::type_of<::GlobalNamespace::OneGrabRotateTransformer_Axis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer.InjectOptionalConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer::*)(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*)>(&::Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44b90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer::*)()>(&::Oculus::Interaction::OneGrabRotateTransformer::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa44b914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__pivotTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__pivotTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotTransform;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__pivotTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pivotTransform = value;
}
constexpr ::GlobalNamespace::OneGrabRotateTransformer_Axis& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__rotationAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationAxis;
}
constexpr ::GlobalNamespace::OneGrabRotateTransformer_Axis const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__rotationAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationAxis;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__rotationAxis(::GlobalNamespace::OneGrabRotateTransformer_Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationAxis = value;
}
constexpr ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints* const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraints;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__constraints(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constraints = value;
}
constexpr float_t& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__relativeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeAngle;
}
constexpr float_t const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__relativeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeAngle;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__relativeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeAngle = value;
}
constexpr float_t& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__constrainedRelativeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedRelativeAngle;
}
constexpr float_t const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__constrainedRelativeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedRelativeAngle;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__constrainedRelativeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constrainedRelativeAngle = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__grabPositionInPivotSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabPositionInPivotSpace;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__grabPositionInPivotSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabPositionInPivotSpace;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__grabPositionInPivotSpace(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabPositionInPivotSpace = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__transformPoseInPivotSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformPoseInPivotSpace;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__transformPoseInPivotSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformPoseInPivotSpace;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__transformPoseInPivotSpace(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformPoseInPivotSpace = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__worldPivotPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldPivotPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__worldPivotPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldPivotPose;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__worldPivotPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldPivotPose = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__previousVectorInPivotSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousVectorInPivotSpace;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__previousVectorInPivotSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousVectorInPivotSpace;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__previousVectorInPivotSpace(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousVectorInPivotSpace = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__localRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRotation;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__localRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRotation;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__localRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localRotation = value;
}
constexpr float_t& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__startAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startAngle;
}
constexpr float_t const& Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_get__startAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startAngle;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer::__cordl_internal_set__startAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startAngle = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::OneGrabRotateTransformer::get_Pivot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"get_Pivot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::GlobalNamespace::OneGrabRotateTransformer_Axis Oculus::Interaction::OneGrabRotateTransformer::get_RotationAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"get_RotationAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OneGrabRotateTransformer_Axis>(this, ___internal_method);
}
inline ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints* Oculus::Interaction::OneGrabRotateTransformer::get_Constraints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"get_Constraints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabRotateTransformer::set_Constraints(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"set_Constraints", {}, {::i2c::type_of<::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::OneGrabRotateTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline ::UnityEngine::Pose Oculus::Interaction::OneGrabRotateTransformer::ComputeWorldPivotPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"ComputeWorldPivotPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabRotateTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabRotateTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabRotateTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalPivotTransform(::UnityEngine::Transform*  pivotTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"InjectOptionalPivotTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pivotTransform);
}
inline void Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalRotationAxis(::GlobalNamespace::OneGrabRotateTransformer_Axis  rotationAxis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"InjectOptionalRotationAxis", {}, {::i2c::type_of<::GlobalNamespace::OneGrabRotateTransformer_Axis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotationAxis);
}
inline void Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalConstraints(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*  constraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {"InjectOptionalConstraints", {}, {::i2c::type_of<::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline void Oculus::Interaction::OneGrabRotateTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OneGrabRotateTransformer* Oculus::Interaction::OneGrabRotateTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OneGrabRotateTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::OneGrabRotateTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::OneGrabRotateTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateTransformer()   {
}
//  Writing Method size for method: ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::*)()>(&::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44b9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::__cordl_internal_get_MinAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinAngle;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::__cordl_internal_get_MinAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinAngle;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::__cordl_internal_set_MinAngle(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinAngle = value;
}
constexpr ::Oculus::Interaction::FloatConstraint*& Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::__cordl_internal_get_MaxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngle;
}
constexpr ::Oculus::Interaction::FloatConstraint* const& Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::__cordl_internal_get_MaxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngle;
}
constexpr void Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::__cordl_internal_set_MaxAngle(::Oculus::Interaction::FloatConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxAngle = value;
}
inline void Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints* Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints::OneGrabRotateTransformer_OneGrabRotateConstraints()   {
}
