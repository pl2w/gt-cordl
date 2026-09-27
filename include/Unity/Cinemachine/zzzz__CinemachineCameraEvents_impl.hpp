#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCameraEvents.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraEvents_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraEvents::*)()>(&::Unity::Cinemachine::CinemachineCameraEvents::OnEnable)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xaedeb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraEvents::*)()>(&::Unity::Cinemachine::CinemachineCameraEvents::OnDisable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xaedee14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraEvents.OnCameraActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraEvents::*)(::GlobalNamespace::ICinemachineCamera_ActivationEventParams)>(&::Unity::Cinemachine::CinemachineCameraEvents::OnCameraActivated)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaedf034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraEvents.OnBlendCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraEvents::*)(::GlobalNamespace::CinemachineCore_BlendEventParams)>(&::Unity::Cinemachine::CinemachineCameraEvents::OnBlendCreated)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaedf0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnBlendCreated", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_BlendEventParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraEvents.OnBlendFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraEvents::*)(::Unity::Cinemachine::ICinemachineMixer*, ::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineCameraEvents::OnBlendFinished)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaedf134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnBlendFinished", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraEvents.OnCameraDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraEvents::*)(::Unity::Cinemachine::ICinemachineMixer*, ::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineCameraEvents::OnCameraDeactivated)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaedf1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnCameraDeactivated", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraEvents::*)()>(&::Unity::Cinemachine::CinemachineCameraEvents::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xaedf23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_EventTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventTarget;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_EventTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventTarget;
}
constexpr void Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_set_EventTarget(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventTarget = value;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_CameraActivatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraActivatedEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_CameraActivatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraActivatedEvent;
}
constexpr void Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_set_CameraActivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraActivatedEvent = value;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_CameraDeactivatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDeactivatedEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_CameraDeactivatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDeactivatedEvent;
}
constexpr void Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_set_CameraDeactivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraDeactivatedEvent = value;
}
constexpr ::Unity::Cinemachine::CinemachineCore_BlendEvent*& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_BlendCreatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendCreatedEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_BlendEvent* const& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_BlendCreatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendCreatedEvent;
}
constexpr void Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_set_BlendCreatedEvent(::Unity::Cinemachine::CinemachineCore_BlendEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendCreatedEvent = value;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_BlendFinishedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendFinishedEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_get_BlendFinishedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendFinishedEvent;
}
constexpr void Unity::Cinemachine::CinemachineCameraEvents::__cordl_internal_set_BlendFinishedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendFinishedEvent = value;
}
inline void Unity::Cinemachine::CinemachineCameraEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraEvents::OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Unity::Cinemachine::CinemachineCameraEvents::OnBlendCreated(::GlobalNamespace::CinemachineCore_BlendEventParams  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnBlendCreated", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_BlendEventParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Unity::Cinemachine::CinemachineCameraEvents::OnBlendFinished(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::Unity::Cinemachine::ICinemachineCamera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnBlendFinished", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixer, cam);
}
inline void Unity::Cinemachine::CinemachineCameraEvents::OnCameraDeactivated(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::Unity::Cinemachine::ICinemachineCamera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {"OnCameraDeactivated", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixer, cam);
}
inline void Unity::Cinemachine::CinemachineCameraEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCameraEvents* Unity::Cinemachine::CinemachineCameraEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCameraEvents*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCameraEvents::CinemachineCameraEvents()   {
}
