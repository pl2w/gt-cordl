#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/SmoothingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Smoothing/zzzz__SmoothingUtils_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Smoothing::SmoothingUtils.SmoothDampQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Vector3>, float_t)>(&::Liv::Lck::Smoothing::SmoothingUtils::SmoothDampQuaternion)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d3dd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::SmoothingUtils*>(),
                        {"SmoothDampQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::SmoothingUtils.SmoothDampQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Vector3>, float_t, float_t)>(&::Liv::Lck::Smoothing::SmoothingUtils::SmoothDampQuaternion)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9d3e6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::SmoothingUtils*>(),
                        {"SmoothDampQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion Liv::Lck::Smoothing::SmoothingUtils::SmoothDampQuaternion(::UnityEngine::Quaternion  current, ::UnityEngine::Quaternion  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::SmoothingUtils*>(),
                        {"SmoothDampQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, current, target, currentVelocity, smoothTime);
}
inline ::UnityEngine::Quaternion Liv::Lck::Smoothing::SmoothingUtils::SmoothDampQuaternion(::UnityEngine::Quaternion  current, ::UnityEngine::Quaternion  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::SmoothingUtils*>(),
                        {"SmoothDampQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, current, target, currentVelocity, smoothTime, deltaTime);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Smoothing::SmoothingUtils::SmoothingUtils()   {
}
