#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/CameraExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__CameraExtensions_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::CameraExtensions.GetVerticalFieldOfView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Camera*, float_t)>(&::Unity::XR::CoreUtils::CameraExtensions::GetVerticalFieldOfView)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb3eed9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CameraExtensions*>(),
                        {"GetVerticalFieldOfView", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::CameraExtensions.GetHorizontalFieldOfView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Camera*)>(&::Unity::XR::CoreUtils::CameraExtensions::GetHorizontalFieldOfView)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb3eee0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CameraExtensions*>(),
                        {"GetHorizontalFieldOfView", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::CameraExtensions.GetVerticalOrthographicSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Camera*, float_t)>(&::Unity::XR::CoreUtils::CameraExtensions::GetVerticalOrthographicSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb3eee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CameraExtensions*>(),
                        {"GetVerticalOrthographicSize", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Unity::XR::CoreUtils::CameraExtensions::GetVerticalFieldOfView(::UnityEngine::Camera*  camera, float_t  aspectNeutralFieldOfView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CameraExtensions*>(),
                        {"GetVerticalFieldOfView", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, camera, aspectNeutralFieldOfView);
}
inline float_t Unity::XR::CoreUtils::CameraExtensions::GetHorizontalFieldOfView(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CameraExtensions*>(),
                        {"GetHorizontalFieldOfView", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, camera);
}
inline float_t Unity::XR::CoreUtils::CameraExtensions::GetVerticalOrthographicSize(::UnityEngine::Camera*  camera, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CameraExtensions*>(),
                        {"GetVerticalOrthographicSize", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, camera, size);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::CameraExtensions::CameraExtensions()   {
}
