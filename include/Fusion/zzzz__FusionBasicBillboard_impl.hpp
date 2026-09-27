#pragma once
// IWYU pragma private; include "Fusion/FusionBasicBillboard.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__FusionBasicBillboard_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Fusion::FusionBasicBillboard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBasicBillboard::*)()>(&::Fusion::FusionBasicBillboard::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ea084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBasicBillboard.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBasicBillboard::*)()>(&::Fusion::FusionBasicBillboard::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60ea174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBasicBillboard.set_MainCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBasicBillboard::*)(::UnityEngine::Camera*)>(&::Fusion::FusionBasicBillboard::set_MainCamera)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60ea1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"set_MainCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBasicBillboard.get_MainCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Fusion::FusionBasicBillboard::*)()>(&::Fusion::FusionBasicBillboard::get_MainCamera)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60ea1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"get_MainCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBasicBillboard.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBasicBillboard::*)()>(&::Fusion::FusionBasicBillboard::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ea280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBasicBillboard.UpdateLookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBasicBillboard::*)()>(&::Fusion::FusionBasicBillboard::UpdateLookAt)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60ea088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"UpdateLookAt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBasicBillboard.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::FusionBasicBillboard::ResetStatics)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60ea284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBasicBillboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBasicBillboard::*)()>(&::Fusion::FusionBasicBillboard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ea2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Fusion::FusionBasicBillboard::__cordl_internal_get_Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Fusion::FusionBasicBillboard::__cordl_internal_get_Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Camera;
}
constexpr void Fusion::FusionBasicBillboard::__cordl_internal_set_Camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Camera = value;
}
inline void Fusion::FusionBasicBillboard::setStaticF__lastCameraFindTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_lastCameraFindTime", ::Fusion::FusionBasicBillboard*>(std::forward<float_t>(value));
}
inline float_t Fusion::FusionBasicBillboard::getStaticF__lastCameraFindTime()  {
return ::cordl_internals::getStaticField<float_t, "_lastCameraFindTime", ::Fusion::FusionBasicBillboard*>();
}
inline void Fusion::FusionBasicBillboard::setStaticF__currentCam(::UnityW<::UnityEngine::Camera>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Camera>, "_currentCam", ::Fusion::FusionBasicBillboard*>(std::forward<::UnityW<::UnityEngine::Camera>>(value));
}
inline ::UnityW<::UnityEngine::Camera> Fusion::FusionBasicBillboard::getStaticF__currentCam()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Camera>, "_currentCam", ::Fusion::FusionBasicBillboard*>();
}
inline void Fusion::FusionBasicBillboard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBasicBillboard::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBasicBillboard::set_MainCamera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"set_MainCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> Fusion::FusionBasicBillboard::get_MainCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"get_MainCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void Fusion::FusionBasicBillboard::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBasicBillboard::UpdateLookAt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"UpdateLookAt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBasicBillboard::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::FusionBasicBillboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBasicBillboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionBasicBillboard* Fusion::FusionBasicBillboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionBasicBillboard*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionBasicBillboard::FusionBasicBillboard()   {
}
