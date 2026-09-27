#pragma once
// IWYU pragma private; include "Unity/Cinemachine/UnityQuaternionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__UnityQuaternionExtensions_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::UnityQuaternionExtensions.SlerpWithReferenceUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityQuaternionExtensions::SlerpWithReferenceUp)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xaec1078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityQuaternionExtensions*>(),
                        {"SlerpWithReferenceUp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityQuaternionExtensions.GetCameraRotationToTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityQuaternionExtensions::GetCameraRotationToTarget)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0xaec1544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityQuaternionExtensions*>(),
                        {"GetCameraRotationToTarget", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UnityQuaternionExtensions.ApplyCameraRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector2, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::UnityQuaternionExtensions::ApplyCameraRotation)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xaec1890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityQuaternionExtensions*>(),
                        {"ApplyCameraRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion Unity::Cinemachine::UnityQuaternionExtensions::SlerpWithReferenceUp(::UnityEngine::Quaternion  qA, ::UnityEngine::Quaternion  qB, float_t  t, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityQuaternionExtensions*>(),
                        {"SlerpWithReferenceUp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, qA, qB, t, up);
}
inline ::UnityEngine::Vector2 Unity::Cinemachine::UnityQuaternionExtensions::GetCameraRotationToTarget(::UnityEngine::Quaternion  orient, ::UnityEngine::Vector3  lookAtDir, ::UnityEngine::Vector3  worldUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityQuaternionExtensions*>(),
                        {"GetCameraRotationToTarget", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, orient, lookAtDir, worldUp);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::UnityQuaternionExtensions::ApplyCameraRotation(::UnityEngine::Quaternion  orient, ::UnityEngine::Vector2  rot, ::UnityEngine::Vector3  worldUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityQuaternionExtensions*>(),
                        {"ApplyCameraRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, orient, rot, worldUp);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::UnityQuaternionExtensions::UnityQuaternionExtensions()   {
}
