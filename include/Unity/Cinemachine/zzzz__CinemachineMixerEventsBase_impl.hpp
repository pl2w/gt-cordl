#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineMixerEventsBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineMixerEventsBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixerEventsBase.GetMixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineMixer* (::Unity::Cinemachine::CinemachineMixerEventsBase::*)()>(&::Unity::Cinemachine::CinemachineMixerEventsBase::GetMixer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixerEventsBase.InstallHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixerEventsBase::*)(::Unity::Cinemachine::ICinemachineMixer*)>(&::Unity::Cinemachine::CinemachineMixerEventsBase::InstallHandlers)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xaede3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"InstallHandlers", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixerEventsBase.UninstallHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixerEventsBase::*)()>(&::Unity::Cinemachine::CinemachineMixerEventsBase::UninstallHandlers)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xaede710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"UninstallHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixerEventsBase.OnCameraActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixerEventsBase::*)(::GlobalNamespace::ICinemachineCamera_ActivationEventParams)>(&::Unity::Cinemachine::CinemachineMixerEventsBase::OnCameraActivated)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaee019c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixerEventsBase.OnCameraDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixerEventsBase::*)(::Unity::Cinemachine::ICinemachineMixer*, ::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineMixerEventsBase::OnCameraDeactivated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaee0250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"OnCameraDeactivated", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixerEventsBase.OnBlendCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixerEventsBase::*)(::GlobalNamespace::CinemachineCore_BlendEventParams)>(&::Unity::Cinemachine::CinemachineMixerEventsBase::OnBlendCreated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaee02e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"OnBlendCreated", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_BlendEventParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixerEventsBase.OnBlendFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixerEventsBase::*)(::Unity::Cinemachine::ICinemachineMixer*, ::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineMixerEventsBase::OnBlendFinished)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaee0370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"OnBlendFinished", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixerEventsBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixerEventsBase::*)()>(&::Unity::Cinemachine::CinemachineMixerEventsBase::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xaedea44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_CameraActivatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraActivatedEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_CameraActivatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraActivatedEvent;
}
constexpr void Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_set_CameraActivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraActivatedEvent = value;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_CameraDeactivatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDeactivatedEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_CameraDeactivatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDeactivatedEvent;
}
constexpr void Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_set_CameraDeactivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraDeactivatedEvent = value;
}
constexpr ::Unity::Cinemachine::CinemachineCore_BlendEvent*& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_BlendCreatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendCreatedEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_BlendEvent* const& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_BlendCreatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendCreatedEvent;
}
constexpr void Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_set_BlendCreatedEvent(::Unity::Cinemachine::CinemachineCore_BlendEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendCreatedEvent = value;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_BlendFinishedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendFinishedEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_BlendFinishedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendFinishedEvent;
}
constexpr void Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_set_BlendFinishedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendFinishedEvent = value;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_CameraCutEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraCutEvent;
}
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_get_CameraCutEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraCutEvent;
}
constexpr void Unity::Cinemachine::CinemachineMixerEventsBase::__cordl_internal_set_CameraCutEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraCutEvent = value;
}
inline ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::CinemachineMixerEventsBase::GetMixer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineMixer*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineMixerEventsBase::InstallHandlers(::Unity::Cinemachine::ICinemachineMixer*  mixer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"InstallHandlers", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixer);
}
inline void Unity::Cinemachine::CinemachineMixerEventsBase::UninstallHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"UninstallHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineMixerEventsBase::OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Unity::Cinemachine::CinemachineMixerEventsBase::OnCameraDeactivated(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::Unity::Cinemachine::ICinemachineCamera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"OnCameraDeactivated", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixer, cam);
}
inline void Unity::Cinemachine::CinemachineMixerEventsBase::OnBlendCreated(::GlobalNamespace::CinemachineCore_BlendEventParams  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"OnBlendCreated", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_BlendEventParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Unity::Cinemachine::CinemachineMixerEventsBase::OnBlendFinished(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::Unity::Cinemachine::ICinemachineCamera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {"OnBlendFinished", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixer, cam);
}
inline void Unity::Cinemachine::CinemachineMixerEventsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixerEventsBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineMixerEventsBase* Unity::Cinemachine::CinemachineMixerEventsBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineMixerEventsBase*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineMixerEventsBase::CinemachineMixerEventsBase()   {
}
