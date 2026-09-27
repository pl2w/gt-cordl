#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformerUtils.hpp"
#include "Oculus/Interaction/zzzz__TransformerUtils_ConstrainedAxis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__TransformerUtils_def.hpp"
#include "Oculus/Interaction/zzzz__FloatConstraint_def.hpp"
#include "Oculus/Interaction/zzzz__TransformerUtils_ConstrainedAxis_def.hpp"
#include "Oculus/Interaction/zzzz__TransformerUtils_FloatRange_def.hpp"
#include "Oculus/Interaction/zzzz__TransformerUtils_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.GenerateParentConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::TransformerUtils_PositionConstraints* (*)(::Oculus::Interaction::TransformerUtils_PositionConstraints*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TransformerUtils::GenerateParentConstraints)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa48d83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GenerateParentConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_PositionConstraints*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.GenerateParentConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::TransformerUtils_ScaleConstraints* (*)(::Oculus::Interaction::TransformerUtils_ScaleConstraints*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TransformerUtils::GenerateParentConstraints)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa48d944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GenerateParentConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.GetConstrainedTransformPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::Oculus::Interaction::TransformerUtils_PositionConstraints*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::TransformerUtils::GetConstrainedTransformPosition)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa48da40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GetConstrainedTransformPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::TransformerUtils_PositionConstraints*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.GetConstrainedTransformRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::Oculus::Interaction::TransformerUtils_RotationConstraints*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::TransformerUtils::GetConstrainedTransformRotation)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xa48dba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GetConstrainedTransformRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Oculus::Interaction::TransformerUtils_RotationConstraints*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.GetConstrainedTransformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::Oculus::Interaction::TransformerUtils_ScaleConstraints*)>(&::Oculus::Interaction::TransformerUtils::GetConstrainedTransformScale)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa48df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GetConstrainedTransformScale", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.WorldToLocalPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose, ::UnityEngine::Matrix4x4)>(&::Oculus::Interaction::TransformerUtils::WorldToLocalPose)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa48dfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"WorldToLocalPose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.AlignLocalToWorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Pose, ::UnityEngine::Pose)>(&::Oculus::Interaction::TransformerUtils::AlignLocalToWorldPose)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xa48e0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"AlignLocalToWorldPose", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.WorldToLocalMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Matrix4x4)>(&::Oculus::Interaction::TransformerUtils::WorldToLocalMagnitude)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa48e344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"WorldToLocalMagnitude", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.LocalToWorldMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Matrix4x4)>(&::Oculus::Interaction::TransformerUtils::LocalToWorldMagnitude)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa48e41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"LocalToWorldMagnitude", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils.ConstrainAlongDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Oculus::Interaction::FloatConstraint*, ::Oculus::Interaction::FloatConstraint*)>(&::Oculus::Interaction::TransformerUtils::ConstrainAlongDirection)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa48e4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"ConstrainAlongDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::FloatConstraint*>(), ::i2c::type_of<::Oculus::Interaction::FloatConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformerUtils::*)()>(&::Oculus::Interaction::TransformerUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils._GetConstrainedTransformRotation_g__ClampAngle_8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Oculus::Interaction::TransformerUtils::_GetConstrainedTransformRotation_g__ClampAngle_8_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa48dec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"<GetConstrainedTransformRotation>g__ClampAngle|8_0", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::TransformerUtils_PositionConstraints* Oculus::Interaction::TransformerUtils::GenerateParentConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  constraints, ::UnityEngine::Vector3  initialPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GenerateParentConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_PositionConstraints*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::TransformerUtils_PositionConstraints*>(nullptr, ___internal_method, constraints, initialPosition);
}
inline ::Oculus::Interaction::TransformerUtils_ScaleConstraints* Oculus::Interaction::TransformerUtils::GenerateParentConstraints(::Oculus::Interaction::TransformerUtils_ScaleConstraints*  constraints, ::UnityEngine::Vector3  initialScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GenerateParentConstraints", {}, {::i2c::type_of<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>(nullptr, ___internal_method, constraints, initialScale);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::TransformerUtils::GetConstrainedTransformPosition(::UnityEngine::Vector3  unconstrainedPosition, ::Oculus::Interaction::TransformerUtils_PositionConstraints*  positionConstraints, ::UnityEngine::Transform*  relativeTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GetConstrainedTransformPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::TransformerUtils_PositionConstraints*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, unconstrainedPosition, positionConstraints, relativeTransform);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::TransformerUtils::GetConstrainedTransformRotation(::UnityEngine::Quaternion  unconstrainedRotation, ::Oculus::Interaction::TransformerUtils_RotationConstraints*  rotationConstraints, ::UnityEngine::Transform*  relativeTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GetConstrainedTransformRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Oculus::Interaction::TransformerUtils_RotationConstraints*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, unconstrainedRotation, rotationConstraints, relativeTransform);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::TransformerUtils::GetConstrainedTransformScale(::UnityEngine::Vector3  unconstrainedScale, ::Oculus::Interaction::TransformerUtils_ScaleConstraints*  scaleConstraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"GetConstrainedTransformScale", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, unconstrainedScale, scaleConstraints);
}
inline ::UnityEngine::Pose Oculus::Interaction::TransformerUtils::WorldToLocalPose(::UnityEngine::Pose  worldPose, ::UnityEngine::Matrix4x4  worldToLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"WorldToLocalPose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, worldPose, worldToLocal);
}
inline ::UnityEngine::Pose Oculus::Interaction::TransformerUtils::AlignLocalToWorldPose(::UnityEngine::Matrix4x4  localToWorld, ::UnityEngine::Pose  local, ::UnityEngine::Pose  world)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"AlignLocalToWorldPose", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, localToWorld, local, world);
}
inline float_t Oculus::Interaction::TransformerUtils::WorldToLocalMagnitude(float_t  magnitude, ::UnityEngine::Matrix4x4  worldToLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"WorldToLocalMagnitude", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, magnitude, worldToLocal);
}
inline float_t Oculus::Interaction::TransformerUtils::LocalToWorldMagnitude(float_t  magnitude, ::UnityEngine::Matrix4x4  localToWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"LocalToWorldMagnitude", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, magnitude, localToWorld);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::TransformerUtils::ConstrainAlongDirection(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::Oculus::Interaction::FloatConstraint*  min, ::Oculus::Interaction::FloatConstraint*  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"ConstrainAlongDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::FloatConstraint*>(), ::i2c::type_of<::Oculus::Interaction::FloatConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, position, origin, direction, min, max);
}
inline void Oculus::Interaction::TransformerUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::TransformerUtils::_GetConstrainedTransformRotation_g__ClampAngle_8_0(float_t  angle, float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils*>(),
                        {"<GetConstrainedTransformRotation>g__ClampAngle|8_0", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angle, min, max);
}
inline ::Oculus::Interaction::TransformerUtils* Oculus::Interaction::TransformerUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TransformerUtils*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TransformerUtils::TransformerUtils()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils_ScaleConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformerUtils_ScaleConstraints::*)()>(&::Oculus::Interaction::TransformerUtils_ScaleConstraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48da38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_get_ConstraintsAreRelative()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstraintsAreRelative;
}
constexpr bool const& Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_get_ConstraintsAreRelative() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstraintsAreRelative;
}
constexpr void Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_set_ConstraintsAreRelative(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConstraintsAreRelative = value;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_get_XAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XAxis;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_get_XAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XAxis;
}
constexpr void Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_set_XAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XAxis = value;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_get_YAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAxis;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_get_YAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAxis;
}
constexpr void Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_set_YAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YAxis = value;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_get_ZAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZAxis;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_get_ZAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZAxis;
}
constexpr void Oculus::Interaction::TransformerUtils_ScaleConstraints::__cordl_internal_set_ZAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZAxis = value;
}
inline void Oculus::Interaction::TransformerUtils_ScaleConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TransformerUtils_ScaleConstraints* Oculus::Interaction::TransformerUtils_ScaleConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TransformerUtils_ScaleConstraints*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TransformerUtils_ScaleConstraints::TransformerUtils_ScaleConstraints()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils_RotationConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformerUtils_RotationConstraints::*)()>(&::Oculus::Interaction::TransformerUtils_RotationConstraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils_RotationConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& Oculus::Interaction::TransformerUtils_RotationConstraints::__cordl_internal_get_XAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XAxis;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& Oculus::Interaction::TransformerUtils_RotationConstraints::__cordl_internal_get_XAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XAxis;
}
constexpr void Oculus::Interaction::TransformerUtils_RotationConstraints::__cordl_internal_set_XAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XAxis = value;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& Oculus::Interaction::TransformerUtils_RotationConstraints::__cordl_internal_get_YAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAxis;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& Oculus::Interaction::TransformerUtils_RotationConstraints::__cordl_internal_get_YAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAxis;
}
constexpr void Oculus::Interaction::TransformerUtils_RotationConstraints::__cordl_internal_set_YAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YAxis = value;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& Oculus::Interaction::TransformerUtils_RotationConstraints::__cordl_internal_get_ZAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZAxis;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& Oculus::Interaction::TransformerUtils_RotationConstraints::__cordl_internal_get_ZAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZAxis;
}
constexpr void Oculus::Interaction::TransformerUtils_RotationConstraints::__cordl_internal_set_ZAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZAxis = value;
}
inline void Oculus::Interaction::TransformerUtils_RotationConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils_RotationConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TransformerUtils_RotationConstraints* Oculus::Interaction::TransformerUtils_RotationConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TransformerUtils_RotationConstraints*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TransformerUtils_RotationConstraints::TransformerUtils_RotationConstraints()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TransformerUtils_PositionConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformerUtils_PositionConstraints::*)()>(&::Oculus::Interaction::TransformerUtils_PositionConstraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48d93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils_PositionConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_get_ConstraintsAreRelative()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstraintsAreRelative;
}
constexpr bool const& Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_get_ConstraintsAreRelative() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstraintsAreRelative;
}
constexpr void Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_set_ConstraintsAreRelative(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConstraintsAreRelative = value;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_get_XAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XAxis;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_get_XAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XAxis;
}
constexpr void Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_set_XAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XAxis = value;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_get_YAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAxis;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_get_YAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAxis;
}
constexpr void Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_set_YAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YAxis = value;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_get_ZAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZAxis;
}
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_get_ZAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZAxis;
}
constexpr void Oculus::Interaction::TransformerUtils_PositionConstraints::__cordl_internal_set_ZAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZAxis = value;
}
inline void Oculus::Interaction::TransformerUtils_PositionConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformerUtils_PositionConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TransformerUtils_PositionConstraints* Oculus::Interaction::TransformerUtils_PositionConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TransformerUtils_PositionConstraints*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints::TransformerUtils_PositionConstraints()   {
}
