#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/QuaternionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__QuaternionExtensions_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::QuaternionExtensions.ConstrainYaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::Unity::XR::CoreUtils::QuaternionExtensions::ConstrainYaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3effbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::QuaternionExtensions*>(),
                        {"ConstrainYaw", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::QuaternionExtensions.ConstrainYawNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::Unity::XR::CoreUtils::QuaternionExtensions::ConstrainYawNormalized)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb3effc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::QuaternionExtensions*>(),
                        {"ConstrainYawNormalized", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::QuaternionExtensions.ConstrainYawPitchNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::Unity::XR::CoreUtils::QuaternionExtensions::ConstrainYawPitchNormalized)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3f0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::QuaternionExtensions*>(),
                        {"ConstrainYawPitchNormalized", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion Unity::XR::CoreUtils::QuaternionExtensions::ConstrainYaw(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::QuaternionExtensions*>(),
                        {"ConstrainYaw", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation);
}
inline ::UnityEngine::Quaternion Unity::XR::CoreUtils::QuaternionExtensions::ConstrainYawNormalized(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::QuaternionExtensions*>(),
                        {"ConstrainYawNormalized", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation);
}
inline ::UnityEngine::Quaternion Unity::XR::CoreUtils::QuaternionExtensions::ConstrainYawPitchNormalized(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::QuaternionExtensions*>(),
                        {"ConstrainYawPitchNormalized", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::QuaternionExtensions::QuaternionExtensions()   {
}
