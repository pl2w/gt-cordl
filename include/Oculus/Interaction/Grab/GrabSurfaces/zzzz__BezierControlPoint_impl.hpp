#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/BezierControlPoint.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__BezierControlPoint_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint.get_Disconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::get_Disconnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e8da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"get_Disconnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint.set_Disconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::*)(bool)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::set_Disconnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e8da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"set_Disconnected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint.GetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::GetPose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4e7170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"GetPose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint.SetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::SetPose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa4e8b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"SetPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint.GetTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::GetTangent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4e71c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"GetTangent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint.SetTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::*)(::by_ref<::UnityEngine::Vector3>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::SetTangent)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4e8db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"SetTangent", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::get_Disconnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"get_Disconnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::set_Disconnected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"set_Disconnected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::GetPose(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"GetPose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::SetPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldSpacePose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"SetPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, worldSpacePose, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::GetTangent(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"GetTangent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::SetTangent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  tangent, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>(),
                        {"SetTangent", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tangent, relativeTo);
}
// Ctor Parameters [CppParam { name: "_pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_tangentPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_disconnected", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::BezierControlPoint(::UnityEngine::Pose  _pose, ::UnityEngine::Vector3  _tangentPoint, bool  _disconnected) noexcept  {
this->_pose = _pose;
this->_tangentPoint = _tangentPoint;
this->_disconnected = _disconnected;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint::BezierControlPoint()   {
}
