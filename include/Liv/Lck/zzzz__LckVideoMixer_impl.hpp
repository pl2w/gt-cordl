#pragma once
// IWYU pragma private; include "Liv/Lck/LckVideoMixer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckVideoMixer_def.hpp"
#include "GlobalNamespace/zzzz__ILckVideoTextureProvider_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_def.hpp"
#include "Liv/Lck/zzzz__ILckActiveCameraConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckVideoMixer_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_CameraResolutionChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.get_CameraTrackTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::Liv::Lck::LckVideoMixer::*)()>(&::Liv::Lck::LckVideoMixer::get_CameraTrackTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce9e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"get_CameraTrackTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.set_CameraTrackTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::LckVideoMixer::set_CameraTrackTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce9e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"set_CameraTrackTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)(::Liv::Lck::ILckOutputConfigurer*, ::Liv::Lck::ILckEventBus*, ::Liv::Lck::Telemetry::ILckTelemetryClient*)>(&::Liv::Lck::LckVideoMixer::_ctor)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9ce9e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.GetActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* (::Liv::Lck::LckVideoMixer::*)()>(&::Liv::Lck::LckVideoMixer::GetActiveCamera)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9cea60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"GetActiveCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.ActivateCameraById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckVideoMixer::*)(::StringW, ::StringW)>(&::Liv::Lck::LckVideoMixer::ActivateCameraById)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x9cea654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"ActivateCameraById", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.StopActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckVideoMixer::*)()>(&::Liv::Lck::LckVideoMixer::StopActiveCamera)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ceac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"StopActiveCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)()>(&::Liv::Lck::LckVideoMixer::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9ceacd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.TriggerActiveCameraChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)()>(&::Liv::Lck::LckVideoMixer::TriggerActiveCameraChangedEvent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9ceaa84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"TriggerActiveCameraChangedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.TriggerActiveCameraChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*)>(&::Liv::Lck::LckVideoMixer::TriggerActiveCameraChangedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9ceaed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"TriggerActiveCameraChangedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.ReleaseCameraTrackTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)()>(&::Liv::Lck::LckVideoMixer::ReleaseCameraTrackTextures)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9ceadb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"ReleaseCameraTrackTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.UpdateMonitorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckVideoMixer::*)(::StringW)>(&::Liv::Lck::LckVideoMixer::UpdateMonitorTexture)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9ceaad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"UpdateMonitorTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.InitializeTargetRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::LckVideoMixer::InitializeTargetRenderTexture)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9ceb1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"InitializeTargetRenderTexture", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.InitCameraTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)(::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::LckVideoMixer::InitCameraTexture)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x9ceb330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"InitCameraTexture", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.OnCameraRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)(::Liv::Lck::ILckCamera*)>(&::Liv::Lck::LckVideoMixer::OnCameraRegistered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ceb8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"OnCameraRegistered", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.OnCameraUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)(::Liv::Lck::ILckCamera*)>(&::Liv::Lck::LckVideoMixer::OnCameraUnregistered)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ceb8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"OnCameraUnregistered", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.OnResolutionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)(::GlobalNamespace::LckEvents_CameraResolutionChangedEvent)>(&::Liv::Lck::LckVideoMixer::OnResolutionChanged)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9ceb900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"OnResolutionChanged", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CameraResolutionChangedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoMixer.UpdateTextureResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoMixer::*)(::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::LckVideoMixer::UpdateTextureResolution)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x9cea0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"UpdateTextureResolution", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckCamera*& Liv::Lck::LckVideoMixer::__cordl_internal_get__activeCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCamera;
}
constexpr ::Liv::Lck::ILckCamera* const& Liv::Lck::LckVideoMixer::__cordl_internal_get__activeCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCamera;
}
constexpr void Liv::Lck::LckVideoMixer::__cordl_internal_set__activeCamera(::Liv::Lck::ILckCamera*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeCamera = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckVideoMixer::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckVideoMixer::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckVideoMixer::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& Liv::Lck::LckVideoMixer::__cordl_internal_get__telemetryClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& Liv::Lck::LckVideoMixer::__cordl_internal_get__telemetryClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr void Liv::Lck::LckVideoMixer::__cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryClient = value;
}
constexpr bool& Liv::Lck::LckVideoMixer::__cordl_internal_get__hasLoggedResolutionError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasLoggedResolutionError;
}
constexpr bool const& Liv::Lck::LckVideoMixer::__cordl_internal_get__hasLoggedResolutionError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasLoggedResolutionError;
}
constexpr void Liv::Lck::LckVideoMixer::__cordl_internal_set__hasLoggedResolutionError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasLoggedResolutionError = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Liv::Lck::LckVideoMixer::__cordl_internal_get__CameraTrackTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraTrackTexture_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Liv::Lck::LckVideoMixer::__cordl_internal_get__CameraTrackTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraTrackTexture_k__BackingField;
}
constexpr void Liv::Lck::LckVideoMixer::__cordl_internal_set__CameraTrackTexture_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraTrackTexture_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::RenderTexture> Liv::Lck::LckVideoMixer::get_CameraTrackTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"get_CameraTrackTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoMixer::set_CameraTrackTexture(::UnityEngine::RenderTexture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"set_CameraTrackTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckVideoMixer::_ctor(::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputConfigurer, eventBus, telemetryClient);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* Liv::Lck::LckVideoMixer::GetActiveCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"GetActiveCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckVideoMixer::ActivateCameraById(::StringW  cameraId, ::StringW  monitorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"ActivateCameraById", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, cameraId, monitorId);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckVideoMixer::StopActiveCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"StopActiveCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoMixer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoMixer::TriggerActiveCameraChangedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"TriggerActiveCameraChangedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoMixer::TriggerActiveCameraChangedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"TriggerActiveCameraChangedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::LckVideoMixer::ReleaseCameraTrackTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"ReleaseCameraTrackTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckVideoMixer::UpdateMonitorTexture(::StringW  monitorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"UpdateMonitorTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, monitorId);
}
inline ::UnityW<::UnityEngine::RenderTexture> Liv::Lck::LckVideoMixer::InitializeTargetRenderTexture(::Liv::Lck::CameraResolutionDescriptor  cameraResolutionDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"InitializeTargetRenderTexture", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, cameraResolutionDescriptor);
}
inline void Liv::Lck::LckVideoMixer::InitCameraTexture(::Liv::Lck::CameraResolutionDescriptor  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"InitCameraTexture", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolution);
}
inline void Liv::Lck::LckVideoMixer::OnCameraRegistered(::Liv::Lck::ILckCamera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"OnCameraRegistered", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void Liv::Lck::LckVideoMixer::OnCameraUnregistered(::Liv::Lck::ILckCamera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"OnCameraUnregistered", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void Liv::Lck::LckVideoMixer::OnResolutionChanged(::GlobalNamespace::LckEvents_CameraResolutionChangedEvent  cameraResolutionChangedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"OnResolutionChanged", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CameraResolutionChangedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraResolutionChangedEvent);
}
inline void Liv::Lck::LckVideoMixer::UpdateTextureResolution(::Liv::Lck::CameraResolutionDescriptor  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoMixer*>(),
                        {"UpdateTextureResolution", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolution);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckVideoMixer* Liv::Lck::LckVideoMixer::New_ctor(::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckVideoMixer*>(outputConfigurer, eventBus, telemetryClient));
}
/// @brief Convert operator to "::Liv::Lck::ILckVideoMixer"
constexpr  Liv::Lck::LckVideoMixer::operator ::Liv::Lck::ILckVideoMixer*() noexcept {
return static_cast<::Liv::Lck::ILckVideoMixer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckVideoMixer"
constexpr ::Liv::Lck::ILckVideoMixer* Liv::Lck::LckVideoMixer::i___Liv__Lck__ILckVideoMixer() noexcept {
return static_cast<::Liv::Lck::ILckVideoMixer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILckVideoTextureProvider"
constexpr  Liv::Lck::LckVideoMixer::operator ::GlobalNamespace::ILckVideoTextureProvider*() noexcept {
return static_cast<::GlobalNamespace::ILckVideoTextureProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILckVideoTextureProvider"
constexpr ::GlobalNamespace::ILckVideoTextureProvider* Liv::Lck::LckVideoMixer::i___GlobalNamespace__ILckVideoTextureProvider() noexcept {
return static_cast<::GlobalNamespace::ILckVideoTextureProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Liv::Lck::ILckActiveCameraConfigurer"
constexpr  Liv::Lck::LckVideoMixer::operator ::Liv::Lck::ILckActiveCameraConfigurer*() noexcept {
return static_cast<::Liv::Lck::ILckActiveCameraConfigurer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckActiveCameraConfigurer"
constexpr ::Liv::Lck::ILckActiveCameraConfigurer* Liv::Lck::LckVideoMixer::i___Liv__Lck__ILckActiveCameraConfigurer() noexcept {
return static_cast<::Liv::Lck::ILckActiveCameraConfigurer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckVideoMixer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckVideoMixer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckVideoMixer::LckVideoMixer()   {
}
