#pragma once
// IWYU pragma private; include "Liv/Lck/ILckCamera.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckCamera.get_CameraId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::ILckCamera::*)()>(&::Liv::Lck::ILckCamera::get_CameraId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckCamera*>(),
                    {::i2c::class_of<::Liv::Lck::ILckCamera*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckCamera.ActivateCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckCamera::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::ILckCamera::ActivateCamera)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckCamera*>(),
                    {::i2c::class_of<::Liv::Lck::ILckCamera*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckCamera.DeactivateCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckCamera::*)()>(&::Liv::Lck::ILckCamera::DeactivateCamera)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckCamera*>(),
                    {::i2c::class_of<::Liv::Lck::ILckCamera*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckCamera.GetCameraComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Liv::Lck::ILckCamera::*)()>(&::Liv::Lck::ILckCamera::GetCameraComponent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckCamera*>(),
                    {::i2c::class_of<::Liv::Lck::ILckCamera*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW Liv::Lck::ILckCamera::get_CameraId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckCamera*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::ILckCamera::ActivateCamera(::UnityEngine::RenderTexture*  renderTexture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckCamera*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTexture);
}
inline void Liv::Lck::ILckCamera::DeactivateCamera()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckCamera*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> Liv::Lck::ILckCamera::GetCameraComponent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckCamera*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
