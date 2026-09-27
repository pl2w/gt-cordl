#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/PoseExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__PoseExtensions_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::PoseExtensions.ApplyOffsetTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::Unity::XR::CoreUtils::PoseExtensions::ApplyOffsetTo)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb3efe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::PoseExtensions*>(),
                        {"ApplyOffsetTo", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::PoseExtensions.ApplyOffsetTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::PoseExtensions::ApplyOffsetTo)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3eff1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::PoseExtensions*>(),
                        {"ApplyOffsetTo", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::PoseExtensions.ApplyInverseOffsetTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::PoseExtensions::ApplyInverseOffsetTo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3eff64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::PoseExtensions*>(),
                        {"ApplyInverseOffsetTo", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose Unity::XR::CoreUtils::PoseExtensions::ApplyOffsetTo(::UnityEngine::Pose  pose, ::UnityEngine::Pose  otherPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::PoseExtensions*>(),
                        {"ApplyOffsetTo", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose, otherPose);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::PoseExtensions::ApplyOffsetTo(::UnityEngine::Pose  pose, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::PoseExtensions*>(),
                        {"ApplyOffsetTo", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pose, position);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::PoseExtensions::ApplyInverseOffsetTo(::UnityEngine::Pose  pose, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::PoseExtensions*>(),
                        {"ApplyInverseOffsetTo", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pose, position);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::PoseExtensions::PoseExtensions()   {
}
