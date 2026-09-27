#pragma once
// IWYU pragma private; include "Liv/Lck/LckPhotoCapture.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_ImageFileFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_AutoScope_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "Liv/Lck/zzzz__LckPhotoCapture_def.hpp"
#include "GlobalNamespace/zzzz__ILckVideoTextureProvider_def.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_ImageFileFormat_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckPhotoCapture_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_ActiveCameraTrackTextureChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckPhotoCapture_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__WaitForSecondsRealtime_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture::*)(::GlobalNamespace::ILckVideoTextureProvider*, ::Liv::Lck::ILckEventBus*, ::Liv::Lck::Telemetry::ILckTelemetryClient*)>(&::Liv::Lck::LckPhotoCapture::_ctor)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x9ce6074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ILckVideoTextureProvider*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture.OnCameraTrackTextureChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture::*)(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent)>(&::Liv::Lck::LckPhotoCapture::OnCameraTrackTextureChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9ce6324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"OnCameraTrackTextureChanged", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture.Capture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckPhotoCapture::*)()>(&::Liv::Lck::LckPhotoCapture::Capture)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x9ce6374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"Capture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture.ProcessQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture::*)()>(&::Liv::Lck::LckPhotoCapture::ProcessQueue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9ce66b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"ProcessQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture.OnCaptureComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckPhotoCapture::OnCaptureComplete)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9ce674c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"OnCaptureComplete", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture.CopyImageToGalleryWhenReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::LckPhotoCapture::*)()>(&::Liv::Lck::LckPhotoCapture::CopyImageToGalleryWhenReady)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9ce68a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"CopyImageToGalleryWhenReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture.SetRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::LckPhotoCapture::SetRenderTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce6938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"SetRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture.SaveRenderTextureToFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture::*)(::StringW, ::GlobalNamespace::LckSettings_ImageFileFormat, ::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckPhotoCapture::SaveRenderTextureToFile)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x9ce6940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"SaveRenderTextureToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LckSettings_ImageFileFormat>(), ::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture.FillAlphaChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint8_t>)>(&::Liv::Lck::LckPhotoCapture::FillAlphaChannel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9ce6b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"FillAlphaChannel", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture::*)()>(&::Liv::Lck::LckPhotoCapture::Dispose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9ce6ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture._Capture_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture::*)()>(&::Liv::Lck::LckPhotoCapture::_Capture_b__13_0)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x9ce6ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"<Capture>b__13_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture._CopyImageToGalleryWhenReady_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture::*)(bool, ::StringW)>(&::Liv::Lck::LckPhotoCapture::_CopyImageToGalleryWhenReady_b__17_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9ce7164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"<CopyImageToGalleryWhenReady>b__17_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ILckVideoTextureProvider*& Liv::Lck::LckPhotoCapture::__cordl_internal_get__videoTextureProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTextureProvider;
}
constexpr ::GlobalNamespace::ILckVideoTextureProvider* const& Liv::Lck::LckPhotoCapture::__cordl_internal_get__videoTextureProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTextureProvider;
}
constexpr void Liv::Lck::LckPhotoCapture::__cordl_internal_set__videoTextureProvider(::GlobalNamespace::ILckVideoTextureProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____videoTextureProvider = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckPhotoCapture::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckPhotoCapture::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckPhotoCapture::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& Liv::Lck::LckPhotoCapture::__cordl_internal_get__telemetryClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& Liv::Lck::LckPhotoCapture::__cordl_internal_get__telemetryClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr void Liv::Lck::LckPhotoCapture::__cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryClient = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Liv::Lck::LckPhotoCapture::__cordl_internal_get__renderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Liv::Lck::LckPhotoCapture::__cordl_internal_get__renderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderTexture;
}
constexpr void Liv::Lck::LckPhotoCapture::__cordl_internal_set__renderTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderTexture = value;
}
constexpr ::System::Text::StringBuilder*& Liv::Lck::LckPhotoCapture::__cordl_internal_get__imageFilePathBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageFilePathBuilder;
}
constexpr ::System::Text::StringBuilder* const& Liv::Lck::LckPhotoCapture::__cordl_internal_get__imageFilePathBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageFilePathBuilder;
}
constexpr void Liv::Lck::LckPhotoCapture::__cordl_internal_set__imageFilePathBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imageFilePathBuilder = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& Liv::Lck::LckPhotoCapture::__cordl_internal_get__captureQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& Liv::Lck::LckPhotoCapture::__cordl_internal_get__captureQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureQueue;
}
constexpr void Liv::Lck::LckPhotoCapture::__cordl_internal_set__captureQueue(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____captureQueue = value;
}
constexpr bool& Liv::Lck::LckPhotoCapture::__cordl_internal_get__isCapturing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCapturing;
}
constexpr bool const& Liv::Lck::LckPhotoCapture::__cordl_internal_get__isCapturing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCapturing;
}
constexpr void Liv::Lck::LckPhotoCapture::__cordl_internal_set__isCapturing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCapturing = value;
}
constexpr ::UnityEngine::WaitForSecondsRealtime*& Liv::Lck::LckPhotoCapture::__cordl_internal_get__copyPhotoSpinWait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyPhotoSpinWait;
}
constexpr ::UnityEngine::WaitForSecondsRealtime* const& Liv::Lck::LckPhotoCapture::__cordl_internal_get__copyPhotoSpinWait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyPhotoSpinWait;
}
constexpr void Liv::Lck::LckPhotoCapture::__cordl_internal_set__copyPhotoSpinWait(::UnityEngine::WaitForSecondsRealtime*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____copyPhotoSpinWait = value;
}
inline void Liv::Lck::LckPhotoCapture::setStaticF_ImageFileFormatStrings(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "ImageFileFormatStrings", ::Liv::Lck::LckPhotoCapture*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Liv::Lck::LckPhotoCapture::getStaticF_ImageFileFormatStrings()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "ImageFileFormatStrings", ::Liv::Lck::LckPhotoCapture*>();
}
inline void Liv::Lck::LckPhotoCapture::setStaticF__copyOutputFileToNativeGalleryProfileMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "_copyOutputFileToNativeGalleryProfileMarker", ::Liv::Lck::LckPhotoCapture*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Liv::Lck::LckPhotoCapture::getStaticF__copyOutputFileToNativeGalleryProfileMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "_copyOutputFileToNativeGalleryProfileMarker", ::Liv::Lck::LckPhotoCapture*>();
}
inline void Liv::Lck::LckPhotoCapture::setStaticF__captureProfileMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "_captureProfileMarker", ::Liv::Lck::LckPhotoCapture*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Liv::Lck::LckPhotoCapture::getStaticF__captureProfileMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "_captureProfileMarker", ::Liv::Lck::LckPhotoCapture*>();
}
inline void Liv::Lck::LckPhotoCapture::setStaticF__asyncCallbackProfileMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "_asyncCallbackProfileMarker", ::Liv::Lck::LckPhotoCapture*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Liv::Lck::LckPhotoCapture::getStaticF__asyncCallbackProfileMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "_asyncCallbackProfileMarker", ::Liv::Lck::LckPhotoCapture*>();
}
inline void Liv::Lck::LckPhotoCapture::_ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ILckVideoTextureProvider*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, videoTextureProvider, eventBus, telemetryClient);
}
inline void Liv::Lck::LckPhotoCapture::OnCameraTrackTextureChanged(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent  activeCameraTrackTextureChangedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"OnCameraTrackTextureChanged", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeCameraTrackTextureChangedEvent);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckPhotoCapture::Capture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"Capture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture::ProcessQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"ProcessQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture::OnCaptureComplete(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"OnCaptureComplete", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Collections::IEnumerator* Liv::Lck::LckPhotoCapture::CopyImageToGalleryWhenReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"CopyImageToGalleryWhenReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture::SetRenderTexture(::UnityEngine::RenderTexture*  renderTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"SetRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTexture);
}
inline void Liv::Lck::LckPhotoCapture::SaveRenderTextureToFile(::StringW  filePath, ::GlobalNamespace::LckSettings_ImageFileFormat  fileFormat, ::System::Action_1<::Liv::Lck::LckResult*>*  onCaptureComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"SaveRenderTextureToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LckSettings_ImageFileFormat>(), ::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filePath, fileFormat, onCaptureComplete);
}
inline void Liv::Lck::LckPhotoCapture::FillAlphaChannel(::Unity::Collections::NativeArray_1<uint8_t>  narray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"FillAlphaChannel", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, narray);
}
inline void Liv::Lck::LckPhotoCapture::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture::_Capture_b__13_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"<Capture>b__13_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture::_CopyImageToGalleryWhenReady_b__17_0(bool  success, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture*>(),
                        {"<CopyImageToGalleryWhenReady>b__17_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, path);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckPhotoCapture* Liv::Lck::LckPhotoCapture::New_ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckPhotoCapture*>(videoTextureProvider, eventBus, telemetryClient));
}
/// @brief Convert operator to "::Liv::Lck::ILckPhotoCapture"
constexpr  Liv::Lck::LckPhotoCapture::operator ::Liv::Lck::ILckPhotoCapture*() noexcept {
return static_cast<::Liv::Lck::ILckPhotoCapture*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckPhotoCapture"
constexpr ::Liv::Lck::ILckPhotoCapture* Liv::Lck::LckPhotoCapture::i___Liv__Lck__ILckPhotoCapture() noexcept {
return static_cast<::Liv::Lck::ILckPhotoCapture*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckPhotoCapture::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckPhotoCapture::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckPhotoCapture::LckPhotoCapture()   {
}
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::*)(int32_t)>(&::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ce6910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::*)()>(&::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ce7c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::*)()>(&::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x9ce7cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::*)()>(&::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__m__Finally1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ce8018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::*)()>(&::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce8038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::*)()>(&::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ce8040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::*)()>(&::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce8078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Liv::Lck::LckPhotoCapture*& Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::LckPhotoCapture* const& Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_set___4__this(::Liv::Lck::LckPhotoCapture*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProfilerMarker_AutoScope& Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::ProfilerMarker_AutoScope const& Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__cordl_internal_set___7__wrap1(::GlobalNamespace::ProfilerMarker_AutoScope  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17* Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17::LckPhotoCapture__CopyImageToGalleryWhenReady_d__17()   {
}
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::*)()>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce6b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0._SaveRenderTextureToFile_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__0)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9ce7534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__0", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0._SaveRenderTextureToFile_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::*)()>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__1)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x9ce779c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0._SaveRenderTextureToFile_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::*)()>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9ce7b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0._SaveRenderTextureToFile_b__4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::*)()>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ce7bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0._SaveRenderTextureToFile_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::*)()>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9ce7c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_narray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___narray;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_narray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___narray;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set_narray(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___narray = value;
}
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_fileFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileFormat;
}
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_fileFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileFormat;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set_fileFormat(::GlobalNamespace::LckSettings_ImageFileFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileFormat = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_renderTextureGraphicsFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderTextureGraphicsFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_renderTextureGraphicsFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderTextureGraphicsFormat;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set_renderTextureGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderTextureGraphicsFormat = value;
}
constexpr int32_t& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr ::StringW& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_filePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filePath;
}
constexpr ::StringW const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_filePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filePath;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set_filePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filePath = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_onCaptureComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCaptureComplete;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get_onCaptureComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCaptureComplete;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set_onCaptureComplete(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCaptureComplete = value;
}
constexpr ::System::Action*& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get___9__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr ::System::Action* const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get___9__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set___9__3(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__3 = value;
}
constexpr ::System::Action*& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get___9__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr ::System::Action* const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get___9__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set___9__4(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__4 = value;
}
constexpr ::System::Action*& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action* const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set___9__1(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
constexpr ::System::Action*& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr ::System::Action* const& Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::__cordl_internal_set___9__2(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__2 = value;
}
inline void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__0", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::_SaveRenderTextureToFile_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>(),
                        {"<SaveRenderTextureToFile>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0* Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckPhotoCapture___c__DisplayClass19_0::LckPhotoCapture___c__DisplayClass19_0()   {
}
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::*)()>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce727c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1._CopyImageToGalleryWhenReady_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::*)()>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::_CopyImageToGalleryWhenReady_b__2)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x9ce72a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1*>(),
                        {"<CopyImageToGalleryWhenReady>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::__cordl_internal_get_success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr bool const& Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::__cordl_internal_get_success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::__cordl_internal_set_success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___success = value;
}
constexpr ::StringW& Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::Liv::Lck::LckPhotoCapture*& Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::LckPhotoCapture* const& Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::__cordl_internal_set___4__this(::Liv::Lck::LckPhotoCapture*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::_CopyImageToGalleryWhenReady_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1*>(),
                        {"<CopyImageToGalleryWhenReady>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1* Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_1::LckPhotoCapture___c__DisplayClass17_1()   {
}
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::*)()>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce7284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0._CopyImageToGalleryWhenReady_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::*)()>(&::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::_CopyImageToGalleryWhenReady_b__1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ce728c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0*>(),
                        {"<CopyImageToGalleryWhenReady>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr ::System::Threading::Tasks::Task* const& Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::__cordl_internal_set_task(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___task = value;
}
constexpr ::Liv::Lck::LckPhotoCapture*& Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::LckPhotoCapture* const& Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::__cordl_internal_set___4__this(::Liv::Lck::LckPhotoCapture*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::_CopyImageToGalleryWhenReady_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0*>(),
                        {"<CopyImageToGalleryWhenReady>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0* Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckPhotoCapture___c__DisplayClass17_0::LckPhotoCapture___c__DisplayClass17_0()   {
}
