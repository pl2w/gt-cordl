#pragma once
// IWYU pragma private; include "GlobalNamespace/MonitorOutputController.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonitorOutputController_def.hpp"
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_CameraState_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)()>(&::GlobalNamespace::MonitorOutputController::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56ceae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)()>(&::GlobalNamespace::MonitorOutputController::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56ceb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)()>(&::GlobalNamespace::MonitorOutputController::Update)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x56cebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController.CameraStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)(::GlobalNamespace::LckBodyCameraSpawner_CameraState)>(&::GlobalNamespace::MonitorOutputController::CameraStateChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56cef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"CameraStateChanged", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)()>(&::GlobalNamespace::MonitorOutputController::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x56cf0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController.OnCameraModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)(::Liv::Lck::GorillaTag::CameraMode, ::Liv::Lck::ILckCamera*)>(&::GlobalNamespace::MonitorOutputController::OnCameraModeChanged)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56cf1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>(), ::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController.TakeOverShoulderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)()>(&::GlobalNamespace::MonitorOutputController::TakeOverShoulderCamera)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56cf008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"TakeOverShoulderCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController.RestoreShoulderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)()>(&::GlobalNamespace::MonitorOutputController::RestoreShoulderCamera)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56cef24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"RestoreShoulderCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController.FindShoulderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)()>(&::GlobalNamespace::MonitorOutputController::FindShoulderCamera)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x56cedb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"FindShoulderCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonitorOutputController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonitorOutputController::*)()>(&::GlobalNamespace::MonitorOutputController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56cf2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& GlobalNamespace::MonitorOutputController::__cordl_internal_get__gtLckController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtLckController;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& GlobalNamespace::MonitorOutputController::__cordl_internal_get__gtLckController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtLckController;
}
constexpr void GlobalNamespace::MonitorOutputController::__cordl_internal_set__gtLckController(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gtLckController = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MonitorOutputController::__cordl_internal_get__lckCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MonitorOutputController::__cordl_internal_get__lckCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckCamera;
}
constexpr void GlobalNamespace::MonitorOutputController::__cordl_internal_set__lckCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckCamera = value;
}
constexpr ::Liv::Lck::GorillaTag::CameraMode& GlobalNamespace::MonitorOutputController::__cordl_internal_get__lckActiveCameraMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckActiveCameraMode;
}
constexpr ::Liv::Lck::GorillaTag::CameraMode const& GlobalNamespace::MonitorOutputController::__cordl_internal_get__lckActiveCameraMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckActiveCameraMode;
}
constexpr void GlobalNamespace::MonitorOutputController::__cordl_internal_set__lckActiveCameraMode(::Liv::Lck::GorillaTag::CameraMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckActiveCameraMode = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MonitorOutputController::__cordl_internal_get__shoulderCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shoulderCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MonitorOutputController::__cordl_internal_get__shoulderCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shoulderCamera;
}
constexpr void GlobalNamespace::MonitorOutputController::__cordl_internal_set__shoulderCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shoulderCamera = value;
}
constexpr float_t& GlobalNamespace::MonitorOutputController::__cordl_internal_get__shoulderCameraFov()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shoulderCameraFov;
}
constexpr float_t const& GlobalNamespace::MonitorOutputController::__cordl_internal_get__shoulderCameraFov() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shoulderCameraFov;
}
constexpr void GlobalNamespace::MonitorOutputController::__cordl_internal_set__shoulderCameraFov(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shoulderCameraFov = value;
}
inline void GlobalNamespace::MonitorOutputController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonitorOutputController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonitorOutputController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonitorOutputController::CameraStateChanged(::GlobalNamespace::LckBodyCameraSpawner_CameraState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"CameraStateChanged", {}, {::i2c::type_of<::GlobalNamespace::LckBodyCameraSpawner_CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::MonitorOutputController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonitorOutputController::OnCameraModeChanged(::Liv::Lck::GorillaTag::CameraMode  mode, ::Liv::Lck::ILckCamera*  lckCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>(), ::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, lckCamera);
}
inline void GlobalNamespace::MonitorOutputController::TakeOverShoulderCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"TakeOverShoulderCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonitorOutputController::RestoreShoulderCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"RestoreShoulderCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonitorOutputController::FindShoulderCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {"FindShoulderCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonitorOutputController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonitorOutputController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonitorOutputController* GlobalNamespace::MonitorOutputController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonitorOutputController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonitorOutputController::MonitorOutputController()   {
}
