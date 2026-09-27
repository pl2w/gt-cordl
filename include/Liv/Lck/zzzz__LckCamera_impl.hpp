#pragma once
// IWYU pragma private; include "Liv/Lck/LckCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LckCamera_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckCamera.get_CameraId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::LckCamera::*)()>(&::Liv::Lck::LckCamera::get_CameraId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce02b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"get_CameraId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckCamera.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckCamera::*)()>(&::Liv::Lck::LckCamera::Awake)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9ce02b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckCamera.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckCamera::*)()>(&::Liv::Lck::LckCamera::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9ce0824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckCamera.ActivateCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckCamera::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::LckCamera::ActivateCamera)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9ce0c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"ActivateCamera", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckCamera.DeactivateCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckCamera::*)()>(&::Liv::Lck::LckCamera::DeactivateCamera)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ce0c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"DeactivateCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckCamera.GetCameraComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Liv::Lck::LckCamera::*)()>(&::Liv::Lck::LckCamera::GetCameraComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce0c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"GetCameraComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckCamera::*)()>(&::Liv::Lck::LckCamera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce0ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Liv::Lck::LckCamera::__cordl_internal_get__camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Liv::Lck::LckCamera::__cordl_internal_get__camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr void Liv::Lck::LckCamera::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____camera = value;
}
constexpr ::StringW& Liv::Lck::LckCamera::__cordl_internal_get__cameraId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraId;
}
constexpr ::StringW const& Liv::Lck::LckCamera::__cordl_internal_get__cameraId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraId;
}
constexpr void Liv::Lck::LckCamera::__cordl_internal_set__cameraId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraId = value;
}
inline ::StringW Liv::Lck::LckCamera::get_CameraId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"get_CameraId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::LckCamera::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckCamera::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckCamera::ActivateCamera(::UnityEngine::RenderTexture*  renderTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"ActivateCamera", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTexture);
}
inline void Liv::Lck::LckCamera::DeactivateCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"DeactivateCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> Liv::Lck::LckCamera::GetCameraComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {"GetCameraComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void Liv::Lck::LckCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckCamera* Liv::Lck::LckCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckCamera*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckCamera"
constexpr  Liv::Lck::LckCamera::operator ::Liv::Lck::ILckCamera*() noexcept {
return static_cast<::Liv::Lck::ILckCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckCamera"
constexpr ::Liv::Lck::ILckCamera* Liv::Lck::LckCamera::i___Liv__Lck__ILckCamera() noexcept {
return static_cast<::Liv::Lck::ILckCamera*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckCamera::LckCamera()   {
}
