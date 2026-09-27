#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/TransformExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__TransformExtensions_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::TransformExtensions.GetLocalPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*)>(&::Unity::XR::CoreUtils::TransformExtensions::GetLocalPose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb3f04f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"GetLocalPose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TransformExtensions.GetWorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*)>(&::Unity::XR::CoreUtils::TransformExtensions::GetWorldPose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb3f055c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"GetWorldPose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TransformExtensions.SetLocalPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Pose)>(&::Unity::XR::CoreUtils::TransformExtensions::SetLocalPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb3f05c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"SetLocalPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TransformExtensions.SetWorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Pose)>(&::Unity::XR::CoreUtils::TransformExtensions::SetWorldPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb3f05e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"SetWorldPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TransformExtensions.TransformPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::UnityEngine::Pose)>(&::Unity::XR::CoreUtils::TransformExtensions::TransformPose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb3f0608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"TransformPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TransformExtensions.InverseTransformPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::UnityEngine::Pose)>(&::Unity::XR::CoreUtils::TransformExtensions::InverseTransformPose)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb3f0694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"InverseTransformPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TransformExtensions.InverseTransformRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::Transform*, ::UnityEngine::Ray)>(&::Unity::XR::CoreUtils::TransformExtensions::InverseTransformRay)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb3f081c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"InverseTransformRay", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose Unity::XR::CoreUtils::TransformExtensions::GetLocalPose(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"GetLocalPose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Pose Unity::XR::CoreUtils::TransformExtensions::GetWorldPose(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"GetWorldPose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, transform);
}
inline void Unity::XR::CoreUtils::TransformExtensions::SetLocalPose(::UnityEngine::Transform*  transform, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"SetLocalPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, pose);
}
inline void Unity::XR::CoreUtils::TransformExtensions::SetWorldPose(::UnityEngine::Transform*  transform, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"SetWorldPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, pose);
}
inline ::UnityEngine::Pose Unity::XR::CoreUtils::TransformExtensions::TransformPose(::UnityEngine::Transform*  transform, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"TransformPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, transform, pose);
}
inline ::UnityEngine::Pose Unity::XR::CoreUtils::TransformExtensions::InverseTransformPose(::UnityEngine::Transform*  transform, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"InverseTransformPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, transform, pose);
}
inline ::UnityEngine::Ray Unity::XR::CoreUtils::TransformExtensions::InverseTransformRay(::UnityEngine::Transform*  transform, ::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TransformExtensions*>(),
                        {"InverseTransformRay", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(nullptr, ___internal_method, transform, ray);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::TransformExtensions::TransformExtensions()   {
}
