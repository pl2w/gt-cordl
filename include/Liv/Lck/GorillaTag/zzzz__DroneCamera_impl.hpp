#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneCamera.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneCamera_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneCamera::*)(::UnityEngine::Camera*)>(&::Liv::Lck::GorillaTag::DroneCamera::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d15cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneCamera*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneCamera.SetFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneCamera::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneCamera::SetFov)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d15ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneCamera*>(),
                        {"SetFov", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneCamera.SetSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneCamera::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneCamera::SetSmoothness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d15ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneCamera*>(),
                        {"SetSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneCamera.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneCamera::*)()>(&::Liv::Lck::GorillaTag::DroneCamera::Run)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9d15cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneCamera*>(),
                        {"Run", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Liv::Lck::GorillaTag::DroneCamera::__cordl_internal_get__camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Liv::Lck::GorillaTag::DroneCamera::__cordl_internal_get__camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr void Liv::Lck::GorillaTag::DroneCamera::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____camera = value;
}
constexpr float_t& Liv::Lck::GorillaTag::DroneCamera::__cordl_internal_get__targetFov()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetFov;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneCamera::__cordl_internal_get__targetFov() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetFov;
}
constexpr void Liv::Lck::GorillaTag::DroneCamera::__cordl_internal_set__targetFov(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetFov = value;
}
constexpr float_t& Liv::Lck::GorillaTag::DroneCamera::__cordl_internal_get__smoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothness;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneCamera::__cordl_internal_get__smoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothness;
}
constexpr void Liv::Lck::GorillaTag::DroneCamera::__cordl_internal_set__smoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothness = value;
}
inline void Liv::Lck::GorillaTag::DroneCamera::_ctor(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneCamera*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void Liv::Lck::GorillaTag::DroneCamera::SetFov(float_t  fov)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneCamera*>(),
                        {"SetFov", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fov);
}
inline void Liv::Lck::GorillaTag::DroneCamera::SetSmoothness(float_t  smoothness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneCamera*>(),
                        {"SetSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smoothness);
}
inline void Liv::Lck::GorillaTag::DroneCamera::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneCamera*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::DroneCamera* Liv::Lck::GorillaTag::DroneCamera::New_ctor(::UnityEngine::Camera*  camera)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::DroneCamera*>(camera));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::DroneCamera::DroneCamera()   {
}
